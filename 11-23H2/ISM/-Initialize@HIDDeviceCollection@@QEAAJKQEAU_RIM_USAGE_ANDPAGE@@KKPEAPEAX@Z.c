/*
 * XREFs of ?Initialize@HIDDeviceCollection@@QEAAJKQEAU_RIM_USAGE_ANDPAGE@@KKPEAPEAX@Z @ 0x180041388
 * Callers:
 *     ?Create@PenDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z @ 0x18003AEC4 (-Create@PenDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z.c)
 *     ?Create@GazeDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z @ 0x18003AF90 (-Create@GazeDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z.c)
 *     ?Create@CallControlDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z @ 0x18003B05C (-Create@CallControlDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPE.c)
 *     ?Create@SystemControlDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z @ 0x18003B138 (-Create@SystemControlDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEA.c)
 *     ?Initialize@AugmentedInputDeviceCollection@@IEAAJPEAPEAX@Z @ 0x180041290 (-Initialize@AugmentedInputDeviceCollection@@IEAAJPEAPEAX@Z.c)
 *     ?Initialize@SpatialRimDeviceCollection@@IEAAJPEAPEAX@Z @ 0x180041988 (-Initialize@SpatialRimDeviceCollection@@IEAAJPEAPEAX@Z.c)
 *     ?Initialize@MobileButtonDeviceCollection@@IEAAJPEAPEAX@Z @ 0x1800DDA0C (-Initialize@MobileButtonDeviceCollection@@IEAAJPEAPEAX@Z.c)
 *     ?Initialize@ConsumerControlDeviceCollection@@IEAAJPEAPEAX@Z @ 0x1800DF3C8 (-Initialize@ConsumerControlDeviceCollection@@IEAAJPEAPEAX@Z.c)
 *     ?DeferredInitialize@HeatDeviceCollection@@UEAAJPEAPEAX@Z @ 0x1800E0EA0 (-DeferredInitialize@HeatDeviceCollection@@UEAAJPEAPEAX@Z.c)
 *     ?Initialize@DockDeviceCollection@@IEAAJPEAPEAX@Z @ 0x1800E21EC (-Initialize@DockDeviceCollection@@IEAAJPEAPEAX@Z.c)
 *     ?Initialize@DockableDeviceCollection@@IEAAJPEAPEAX@Z @ 0x1800E3614 (-Initialize@DockableDeviceCollection@@IEAAJPEAPEAX@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C9C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReadInputReportFromRIM@RIMDeviceCollection@@AEAAJXZ @ 0x18004152C (-ReadInputReportFromRIM@RIMDeviceCollection@@AEAAJXZ.c)
 *     ?InitializeSyncObjects@RIMDeviceCollection@@IEAAJXZ @ 0x180041598 (-InitializeSyncObjects@RIMDeviceCollection@@IEAAJXZ.c)
 *     ??_V@YAXPEAX@Z @ 0x180056D48 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x180057628 (--_U@YAPEAX_K@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18009509C (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1800CD748 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     wil::details::lambda_call__lambda_9f352de651b7cbfacdb74837e0c369ab___::_lambda_call__lambda_9f352de651b7cbfacdb74837e0c369ab___ @ 0x1800D4B88 (wil--details--lambda_call__lambda_9f352de651b7cbfacdb74837e0c369ab___--_lambda_call__lambda_9f35.c)
 *     wil::details::lambda_call__lambda_d8f6151f101831cd765e686831b5f82a___::_lambda_call__lambda_d8f6151f101831cd765e686831b5f82a___ @ 0x1800D4C00 (wil--details--lambda_call__lambda_d8f6151f101831cd765e686831b5f82a___--_lambda_call__lambda_d8f6.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall HIDDeviceCollection::Initialize(
        HANDLE *this,
        __int64 a2,
        struct _RIM_USAGE_ANDPAGE *const a3,
        __int64 a4,
        unsigned int a5,
        void **lpTargetHandle)
{
  _DWORD *v8; // rax
  int v9; // eax
  int LastError; // ebx
  int v11; // eax
  HANDLE CurrentProcess; // rax
  const char *v13; // r9
  HANDLE v14; // rcx
  int InputReportFromRIM; // eax
  unsigned __int64 v17; // r9
  __int64 v18; // rdx
  DWORD dwDesiredAccess[2]; // [rsp+20h] [rbp-58h]
  HIDDeviceCollection *v20; // [rsp+50h] [rbp-28h] BYREF
  char v21; // [rsp+58h] [rbp-20h]
  HIDDeviceCollection *v22; // [rsp+60h] [rbp-18h] BYREF
  char v23; // [rsp+68h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v22 = (HIDDeviceCollection *)this;
  v23 = 1;
  v8 = operator new[](4uLL);
  this[343] = v8;
  *v8 = 0;
  *((_DWORD *)this + 688) = 1;
  *(_DWORD *)this[343] = *(_DWORD *)a3;
  v9 = RIMDeviceCollection::InitializeSyncObjects((RIMDeviceCollection *)this);
  LastError = v9;
  if ( v9 < 0 )
  {
    v17 = (unsigned int)v9;
    v18 = 97LL;
LABEL_16:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v18,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\hiddevicecollection.cpp",
      (const char *)v17);
    goto LABEL_17;
  }
  *((_DWORD *)this + 8) = 32;
  *(_QWORD *)dwDesiredAccess = this[6];
  v11 = RIMRegisterForInputEx(32LL, 0LL, *((unsigned int *)this + 688), this[343]);
  if ( v11 >= 0 )
  {
    if ( !this[10] )
      this[10] = 0LL;
    CurrentProcess = GetCurrentProcess();
    v20 = (HIDDeviceCollection *)this;
    v21 = 1;
    if ( DuplicateHandle(CurrentProcess, this[5], CurrentProcess, lpTargetHandle, 0, 0, 2u) )
    {
      v14 = this[335];
      if ( v14 )
      {
        operator delete[](v14);
        this[335] = 0LL;
      }
      *((_DWORD *)this + 672) = 0;
      this[335] = operator new[](a5);
      *((_DWORD *)this + 672) = a5;
      InputReportFromRIM = RIMDeviceCollection::ReadInputReportFromRIM((RIMDeviceCollection *)this);
      LastError = InputReportFromRIM;
      if ( InputReportFromRIM >= 0 )
        return 0LL;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2ED,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\rimdevicecollection.cpp",
        (const char *)(unsigned int)InputReportFromRIM);
      wil::details::lambda_call__lambda_d8f6151f101831cd765e686831b5f82a___::_lambda_call__lambda_d8f6151f101831cd765e686831b5f82a___(&v20);
    }
    else
    {
      LastError = wil::details::in1diag3::Return_GetLastError(
                    retaddr,
                    (void *)0x2E5,
                    (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\rimdevicecollection.cpp",
                    v13);
      wil::details::lambda_call__lambda_d8f6151f101831cd765e686831b5f82a___::_lambda_call__lambda_d8f6151f101831cd765e686831b5f82a___(&v20);
      if ( LastError >= 0 )
        return 0LL;
    }
    v17 = (unsigned int)LastError;
    v18 = 128LL;
    goto LABEL_16;
  }
  LastError = wil::details::in1diag3::Return_NtStatus(
                retaddr,
                (void *)0x6F,
                (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\hiddevicecollection.cpp",
                (const char *)(unsigned int)v11,
                dwDesiredAccess[0]);
LABEL_17:
  wil::details::lambda_call__lambda_9f352de651b7cbfacdb74837e0c369ab___::_lambda_call__lambda_9f352de651b7cbfacdb74837e0c369ab___(&v22);
  return (unsigned int)LastError;
}
