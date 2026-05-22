/*
 * XREFs of ?Initialize@HIDDeviceCollection@@QEAAJKQEAU_RIM_USAGE_ANDPAGE@@KKPEAPEAX@Z @ 0x18002B01C
 * Callers:
 *     ?Initialize@AugmentedInputDeviceCollection@@IEAAJPEAPEAX@Z @ 0x18002A924 (-Initialize@AugmentedInputDeviceCollection@@IEAAJPEAPEAX@Z.c)
 *     ?Initialize@SystemControlDeviceCollection@@IEAAJPEAPEAX@Z @ 0x18002ACE4 (-Initialize@SystemControlDeviceCollection@@IEAAJPEAPEAX@Z.c)
 *     ?Create@GazeDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z @ 0x18002AD20 (-Create@GazeDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z.c)
 *     ?Create@PenDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z @ 0x18002AEA0 (-Create@PenDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z.c)
 *     ?Initialize@SpatialRimDeviceCollection@@IEAAJPEAPEAX@Z @ 0x18002B630 (-Initialize@SpatialRimDeviceCollection@@IEAAJPEAPEAX@Z.c)
 *     ?Initialize@MobileButtonDeviceCollection@@IEAAJPEAPEAX@Z @ 0x1800C4924 (-Initialize@MobileButtonDeviceCollection@@IEAAJPEAPEAX@Z.c)
 *     ?Initialize@ConsumerControlDeviceCollection@@IEAAJPEAPEAX@Z @ 0x1800C6160 (-Initialize@ConsumerControlDeviceCollection@@IEAAJPEAPEAX@Z.c)
 *     ?DeferredInitialize@HeatDeviceCollection@@UEAAJPEAPEAX@Z @ 0x1800C7500 (-DeferredInitialize@HeatDeviceCollection@@UEAAJPEAPEAX@Z.c)
 *     ?Initialize@DockDeviceCollection@@IEAAJPEAPEAX@Z @ 0x1800C883C (-Initialize@DockDeviceCollection@@IEAAJPEAPEAX@Z.c)
 *     ?Initialize@DockableDeviceCollection@@IEAAJPEAPEAX@Z @ 0x1800C9F7C (-Initialize@DockableDeviceCollection@@IEAAJPEAPEAX@Z.c)
 * Callees:
 *     ?InitializeSyncObjects@RIMDeviceCollection@@IEAAJXZ @ 0x18002B240 (-InitializeSyncObjects@RIMDeviceCollection@@IEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x18004AF4C (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x18004B75C (--_U@YAPEAX_K@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18007DEDC (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1800B4708 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     wil::details::lambda_call__lambda_d8f6151f101831cd765e686831b5f82a___::_lambda_call__lambda_d8f6151f101831cd765e686831b5f82a___ @ 0x1800BBB20 (wil--details--lambda_call__lambda_d8f6151f101831cd765e686831b5f82a___--_lambda_call__lambda_d8f6.c)
 *     ?Close@RIMDeviceCollection@@IEAAXXZ @ 0x1800BBD50 (-Close@RIMDeviceCollection@@IEAAXXZ.c)
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
  char v8; // si
  _DWORD *v9; // rax
  int v10; // eax
  int LastError; // ebx
  int v12; // eax
  HANDLE CurrentProcess; // rax
  const char *v14; // r9
  HANDLE v15; // rcx
  void *v16; // rax
  int v17; // eax
  int v19; // eax
  unsigned __int64 v20; // r9
  __int64 v21; // rdx
  int dwDesiredAccess; // [rsp+20h] [rbp-58h]
  DWORD dwDesiredAccessa[2]; // [rsp+20h] [rbp-58h]
  int dwDesiredAccessb; // [rsp+20h] [rbp-58h]
  HIDDeviceCollection *v25; // [rsp+50h] [rbp-28h] BYREF
  char v26; // [rsp+58h] [rbp-20h]
  HIDDeviceCollection *v27; // [rsp+60h] [rbp-18h]
  char v28; // [rsp+68h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v27 = (HIDDeviceCollection *)this;
  v8 = 1;
  v28 = 1;
  v9 = operator new[](4uLL);
  this[343] = v9;
  *v9 = 0;
  *((_DWORD *)this + 688) = 1;
  *(_DWORD *)this[343] = *(_DWORD *)a3;
  v10 = RIMDeviceCollection::InitializeSyncObjects((RIMDeviceCollection *)this);
  LastError = v10;
  if ( v10 >= 0 )
  {
    *((_DWORD *)this + 8) = 32;
    *(_QWORD *)dwDesiredAccessa = this[6];
    v12 = RIMRegisterForInputEx(32LL, 0LL, *((unsigned int *)this + 688), this[343]);
    if ( v12 < 0 )
    {
      LastError = wil::details::in1diag3::Return_NtStatus(
                    retaddr,
                    (void *)0x6F,
                    (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\hiddevicecollection.cpp",
                    (const char *)(unsigned int)v12,
                    dwDesiredAccessa[0]);
      goto LABEL_10;
    }
    if ( !this[10] )
      this[10] = 0LL;
    CurrentProcess = GetCurrentProcess();
    v25 = (HIDDeviceCollection *)this;
    v26 = 1;
    if ( DuplicateHandle(CurrentProcess, this[5], CurrentProcess, lpTargetHandle, 0, 0, 2u) )
    {
      v15 = this[335];
      if ( v15 )
      {
        operator delete[](v15);
        this[335] = 0LL;
      }
      *((_DWORD *)this + 672) = 0;
      v16 = operator new[](a5);
      this[335] = v16;
      *((_DWORD *)this + 672) = a5;
      this[337] = v16;
      v17 = RIMReadInput(this[10], this + 337, a5, this[5]);
      if ( v17 < 0 )
      {
        v19 = wil::details::in1diag3::Return_NtStatus(
                retaddr,
                (void *)0x110,
                (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\rimdevicecollection.cpp",
                (const char *)(unsigned int)v17,
                (_DWORD)this + 2704);
        LastError = v19;
        if ( v19 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x2F3,
            (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\rimdevicecollection.cpp",
            (const char *)(unsigned int)v19,
            dwDesiredAccessb);
          wil::details::lambda_call__lambda_d8f6151f101831cd765e686831b5f82a___::_lambda_call__lambda_d8f6151f101831cd765e686831b5f82a___(&v25);
LABEL_19:
          v20 = (unsigned int)LastError;
          v21 = 128LL;
          goto LABEL_20;
        }
      }
    }
    else
    {
      LastError = wil::details::in1diag3::Return_GetLastError(
                    retaddr,
                    (void *)0x2EB,
                    (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\rimdevicecollection.cpp",
                    v14);
      wil::details::lambda_call__lambda_d8f6151f101831cd765e686831b5f82a___::_lambda_call__lambda_d8f6151f101831cd765e686831b5f82a___(&v25);
      if ( LastError < 0 )
        goto LABEL_19;
    }
    v8 = 0;
    LastError = 0;
    goto LABEL_10;
  }
  v20 = (unsigned int)v10;
  v21 = 97LL;
LABEL_20:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v21,
    (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\hiddevicecollection.cpp",
    (const char *)v20,
    dwDesiredAccess);
LABEL_10:
  if ( v8 )
    RIMDeviceCollection::Close((RIMDeviceCollection *)this);
  return (unsigned int)LastError;
}
