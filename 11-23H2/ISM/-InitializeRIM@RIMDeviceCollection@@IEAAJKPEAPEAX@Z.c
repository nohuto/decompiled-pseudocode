/*
 * XREFs of ?InitializeRIM@RIMDeviceCollection@@IEAAJKPEAPEAX@Z @ 0x1800D52A0
 * Callers:
 *     ?Initialize@RIMDeviceCollection@@UEAAJKKPEAPEAX@Z @ 0x1800D5174 (-Initialize@RIMDeviceCollection@@UEAAJKKPEAPEAX@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C9C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReadInputReportFromRIM@RIMDeviceCollection@@AEAAJXZ @ 0x18004152C (-ReadInputReportFromRIM@RIMDeviceCollection@@AEAAJXZ.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18009509C (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     wil::details::lambda_call__lambda_d8f6151f101831cd765e686831b5f82a___::_lambda_call__lambda_d8f6151f101831cd765e686831b5f82a___ @ 0x1800D4C00 (wil--details--lambda_call__lambda_d8f6151f101831cd765e686831b5f82a___--_lambda_call__lambda_d8f6.c)
 *     ?CreateReadBuffer@RIMDeviceCollection@@AEAAJK@Z @ 0x1800D4F70 (-CreateReadBuffer@RIMDeviceCollection@@AEAAJK@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall RIMDeviceCollection::InitializeRIM(HANDLE *this, unsigned int a2, LPHANDLE lpTargetHandle)
{
  HANDLE CurrentProcess; // rax
  const char *v7; // r9
  unsigned int LastError; // ebx
  int Buffer; // eax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdx
  int v15; // [rsp+20h] [rbp-38h]
  HANDLE *v16; // [rsp+40h] [rbp-18h] BYREF
  char v17; // [rsp+48h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  CurrentProcess = GetCurrentProcess();
  v16 = this;
  v17 = 1;
  if ( !DuplicateHandle(CurrentProcess, this[5], CurrentProcess, lpTargetHandle, 0, 0, 2u) )
  {
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0x2E5,
                  (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\rimdevicecollection.cpp",
                  v7);
LABEL_8:
    wil::details::lambda_call__lambda_d8f6151f101831cd765e686831b5f82a___::_lambda_call__lambda_d8f6151f101831cd765e686831b5f82a___(&v16);
    return LastError;
  }
  Buffer = RIMDeviceCollection::CreateReadBuffer((RIMDeviceCollection *)this, a2);
  LastError = Buffer;
  if ( Buffer < 0 )
  {
    v13 = 747LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\rimdevicecollection.cpp",
      (const char *)(unsigned int)Buffer);
    goto LABEL_8;
  }
  Buffer = RIMDeviceCollection::ReadInputReportFromRIM((RIMDeviceCollection *)this, v10, v11, v12, v15);
  LastError = Buffer;
  if ( Buffer < 0 )
  {
    v13 = 749LL;
    goto LABEL_7;
  }
  return 0LL;
}
