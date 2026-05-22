/*
 * XREFs of ?Initialize@RIMDeviceCollection@@UEAAJKKPEAPEAX@Z @ 0x1800E4064
 * Callers:
 *     ?Initialize@HIDDeviceCollection@@UEAAJKKPEAPEAX@Z @ 0x1800F4070 (-Initialize@HIDDeviceCollection@@UEAAJKKPEAPEAX@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800334B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InitializeSyncObjects@RIMDeviceCollection@@IEAAJXZ @ 0x180041FE0 (-InitializeSyncObjects@RIMDeviceCollection@@IEAAJXZ.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1800DCA78 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     wil::details::lambda_call__lambda_9f352de651b7cbfacdb74837e0c369ab___::_lambda_call__lambda_9f352de651b7cbfacdb74837e0c369ab___ @ 0x1800E3A78 (wil--details--lambda_call__lambda_9f352de651b7cbfacdb74837e0c369ab___--_lambda_call__lambda_9f35.c)
 *     ?InitializeRIM@RIMDeviceCollection@@IEAAJKPEAPEAX@Z @ 0x1800E4190 (-InitializeRIM@RIMDeviceCollection@@IEAAJKPEAPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall RIMDeviceCollection::Initialize(
        RIMDeviceCollection *this,
        unsigned int a2,
        unsigned int a3,
        void **a4)
{
  int v8; // eax
  unsigned int v9; // edi
  __int64 v10; // rdx
  int v11; // eax
  RIMDeviceCollection *v13; // [rsp+50h] [rbp-28h] BYREF
  char v14; // [rsp+58h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v13 = this;
  v14 = 1;
  v8 = RIMDeviceCollection::InitializeSyncObjects(this);
  v9 = v8;
  if ( v8 < 0 )
  {
    v10 = 155LL;
LABEL_9:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\rimdevicecollection.cpp",
      (const char *)(unsigned int)v8);
    goto LABEL_10;
  }
  *((_DWORD *)this + 8) = a2;
  v11 = RIMRegisterForInputEx(a2, 0LL, 0LL, 0LL);
  if ( v11 < 0 )
  {
    v9 = wil::details::in1diag3::Return_NtStatus(
           retaddr,
           (void *)0xA9,
           (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\rimdevicecollection.cpp",
           (const char *)(unsigned int)v11);
LABEL_10:
    wil::details::lambda_call__lambda_9f352de651b7cbfacdb74837e0c369ab___::_lambda_call__lambda_9f352de651b7cbfacdb74837e0c369ab___((__int64)&v13);
    return v9;
  }
  if ( !*((_QWORD *)this + 10) )
    *((_QWORD *)this + 10) = 0LL;
  v8 = RIMDeviceCollection::InitializeRIM(this, a3, a4);
  v9 = v8;
  if ( v8 < 0 )
  {
    v10 = 186LL;
    goto LABEL_9;
  }
  return 0LL;
}
