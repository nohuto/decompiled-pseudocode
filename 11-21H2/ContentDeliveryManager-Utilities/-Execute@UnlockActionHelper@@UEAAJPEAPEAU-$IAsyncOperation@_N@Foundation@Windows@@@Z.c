/*
 * XREFs of ?Execute@UnlockActionHelper@@UEAAJPEAPEAU?$IAsyncOperation@_N@Foundation@Windows@@@Z @ 0x1800B4890
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180021FA4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??_L@YAXPEAX_K1P6AX0@Z2@Z @ 0x180022218 (--_L@YAXPEAX_K1P6AX0@Z2@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044570 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$AsyncOperation@U?$IAsyncOperation@_N@Foundation@Windows@@U?$IAsyncOperationCompletedHandler@_N@23@V?$CBasicResult@E$0A@@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@QEAA@$$QEAVComTaskPoolHandler@12@QEB_WW4TrustLevel@@@Z @ 0x1800B3844 (--0-$AsyncOperation@U-$IAsyncOperation@_N@Foundation@Windows@@U-$IAsyncOperationCompletedHandler.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=12
__int64 __fastcall UnlockActionHelper::Execute(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rsi
  __int64 v4; // rdi
  __int64 v5; // rbx
  __int64 v6; // r15
  __int64 v7; // r12
  _QWORD *v8; // rax
  _QWORD *v9; // r14
  int v10; // r14d
  void *v11; // rax
  int v13; // [rsp+30h] [rbp-20h] BYREF
  __int64 v14; // [rsp+34h] [rbp-1Ch]
  __int64 v15; // [rsp+40h] [rbp-10h]
  __int64 v16; // [rsp+48h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+38h]

  v3 = 0LL;
  *a2 = 0LL;
  v4 = *(_QWORD *)(a1 + 40);
  *(_QWORD *)(a1 + 40) = 0LL;
  v5 = *(_QWORD *)(a1 + 32);
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
  v6 = v5;
  v15 = v5;
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
  v7 = v4;
  v16 = v4;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  v13 = 3;
  v14 = 128LL;
  v8 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  v9 = v8;
  if ( v8 )
  {
    v6 = 0LL;
    v15 = 0LL;
    v8[1] = v5;
    v7 = 0LL;
    v16 = 0LL;
    v8[2] = v4;
    *v8 = off_180107010;
    *((_DWORD *)v8 + 6) = 0;
    `eh vector constructor iterator'(
      v8 + 4,
      8uLL,
      1,
      (void (*)(void *))Microsoft::WRL::AgileRef::AgileRef,
      (void (*)(void *))Microsoft::WRL::ComPtr<Windows::System::ILauncherOptions2>::~ComPtr<Windows::System::ILauncherOptions2>);
    *((_DWORD *)v9 + 6) = 0;
  }
  else
  {
    v9 = 0LL;
  }
  *a2 = 0LL;
  if ( !v9 )
    goto LABEL_11;
  v11 = operator new(0x148uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v11 )
    v3 = Windows::Internal::AsyncOperation<Windows::Foundation::IAsyncOperation<bool>,Windows::Foundation::IAsyncOperationCompletedHandler<bool>,Windows::Internal::CBasicResult<unsigned char,0>,Windows::Internal::ComTaskPoolHandler,Windows::Internal::INilDelegate,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::AsyncOperation<Windows::Foundation::IAsyncOperation<bool>,Windows::Foundation::IAsyncOperationCompletedHandler<bool>,Windows::Internal::CBasicResult<unsigned char,0>,Windows::Internal::ComTaskPoolHandler,Windows::Internal::INilDelegate,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>(
           (__int64)v11,
           (__int64)&v13,
           (__int64)L"Windows.Foundation.IAsyncOperation`1<Boolean>",
           1);
  if ( !v3 )
  {
    (*(void (__fastcall **)(_QWORD *, __int64))*v9)(v9, 1LL);
LABEL_11:
    v10 = -2147024882;
    goto LABEL_20;
  }
  *(_QWORD *)(v3 + 256) = v9;
  v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v3 + 8) + 104LL))(v3 + 8);
  if ( v10 >= 0 )
  {
    *a2 = v3 + 176;
    v3 = 0LL;
  }
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)(v3 + 8) + 16LL))(v3 + 8);
LABEL_20:
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  if ( v10 >= 0 )
  {
    if ( v5 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    if ( v4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x55,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\unlockactionhelper.cpp",
      (const char *)(unsigned int)v10);
    if ( v5 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    if ( v4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
    return (unsigned int)v10;
  }
}
