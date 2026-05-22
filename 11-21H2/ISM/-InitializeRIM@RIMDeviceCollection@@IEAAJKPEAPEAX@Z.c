/*
 * XREFs of ?InitializeRIM@RIMDeviceCollection@@IEAAJKPEAPEAX@Z @ 0x1800BC1E4
 * Callers:
 *     ?Initialize@RIMDeviceCollection@@UEAAJKKPEAPEAX@Z @ 0x1800BC0A4 (-Initialize@RIMDeviceCollection@@UEAAJKKPEAPEAX@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18007DEDC (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?CreateReadBuffer@RIMDeviceCollection@@AEAAJK@Z @ 0x1800BBEA4 (-CreateReadBuffer@RIMDeviceCollection@@AEAAJK@Z.c)
 *     ?ReadInputReportFromRIM@RIMDeviceCollection@@AEAAJXZ @ 0x1800BC97C (-ReadInputReportFromRIM@RIMDeviceCollection@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall RIMDeviceCollection::InitializeRIM(HANDLE *this, unsigned int a2, LPHANDLE lpTargetHandle)
{
  HANDLE CurrentProcess; // rax
  char v7; // si
  const char *v8; // r9
  unsigned int LastError; // ebx
  int Buffer; // eax
  __int64 v11; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  CurrentProcess = GetCurrentProcess();
  v7 = 1;
  if ( DuplicateHandle(CurrentProcess, this[5], CurrentProcess, lpTargetHandle, 0, 0, 2u) )
  {
    Buffer = RIMDeviceCollection::CreateReadBuffer((RIMDeviceCollection *)this, a2);
    LastError = Buffer;
    if ( Buffer >= 0 )
    {
      Buffer = RIMDeviceCollection::ReadInputReportFromRIM((RIMDeviceCollection *)this);
      LastError = Buffer;
      if ( Buffer >= 0 )
      {
        LastError = 0;
        v7 = 0;
        goto LABEL_9;
      }
      v11 = 755LL;
    }
    else
    {
      v11 = 753LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\rimdevicecollection.cpp",
      (const char *)(unsigned int)Buffer);
  }
  else
  {
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0x2EB,
                  (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\rimdevicecollection.cpp",
                  v8);
  }
LABEL_9:
  if ( v7 && this[10] )
  {
    RIMUnregisterForInput();
    CloseHandle(this[10]);
    this[10] = 0LL;
  }
  return LastError;
}
