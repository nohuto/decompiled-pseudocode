/*
 * XREFs of ?Initialize@RIMDeviceCollection@@UEAAJKKPEAPEAX@Z @ 0x1800BC0A4
 * Callers:
 *     ?Initialize@HIDDeviceCollection@@UEAAJKKPEAPEAX@Z @ 0x1800CBB00 (-Initialize@HIDDeviceCollection@@UEAAJKKPEAPEAX@Z.c)
 * Callees:
 *     ?InitializeSyncObjects@RIMDeviceCollection@@IEAAJXZ @ 0x18002B240 (-InitializeSyncObjects@RIMDeviceCollection@@IEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1800B4708 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?Close@RIMDeviceCollection@@IEAAXXZ @ 0x1800BBD50 (-Close@RIMDeviceCollection@@IEAAXXZ.c)
 *     ?InitializeRIM@RIMDeviceCollection@@IEAAJKPEAPEAX@Z @ 0x1800BC1E4 (-InitializeRIM@RIMDeviceCollection@@IEAAJKPEAPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall RIMDeviceCollection::Initialize(
        RIMDeviceCollection *this,
        unsigned int a2,
        unsigned int a3,
        void **a4)
{
  char v8; // si
  int v9; // eax
  unsigned int v10; // ebx
  __int64 v11; // rdx
  int v12; // eax
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v8 = 1;
  v9 = RIMDeviceCollection::InitializeSyncObjects(this);
  v10 = v9;
  if ( v9 < 0 )
  {
    v11 = 155LL;
LABEL_9:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\rimdevicecollection.cpp",
      (const char *)(unsigned int)v9);
    goto LABEL_11;
  }
  *((_DWORD *)this + 8) = a2;
  v12 = RIMRegisterForInputEx(a2, 0LL, 0LL, 0LL);
  if ( v12 < 0 )
  {
    v10 = wil::details::in1diag3::Return_NtStatus(
            retaddr,
            (void *)0xA9,
            (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\rimdevicecollection.cpp",
            (const char *)(unsigned int)v12);
    goto LABEL_11;
  }
  if ( !*((_QWORD *)this + 10) )
    *((_QWORD *)this + 10) = 0LL;
  v9 = RIMDeviceCollection::InitializeRIM(this, a3, a4);
  v10 = v9;
  if ( v9 < 0 )
  {
    v11 = 186LL;
    goto LABEL_9;
  }
  v8 = 0;
  v10 = 0;
LABEL_11:
  if ( v8 )
    RIMDeviceCollection::Close((HANDLE *)this);
  return v10;
}
