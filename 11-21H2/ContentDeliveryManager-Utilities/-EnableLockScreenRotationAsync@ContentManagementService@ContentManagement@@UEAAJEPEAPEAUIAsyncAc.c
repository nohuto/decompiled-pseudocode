/*
 * XREFs of ?EnableLockScreenRotationAsync@ContentManagementService@ContentManagement@@UEAAJEPEAPEAUIAsyncAction@Foundation@Windows@@@Z @ 0x18005AC40
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180021FA4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??_L@YAXPEAX_K1P6AX0@Z2@Z @ 0x180022218 (--_L@YAXPEAX_K1P6AX0@Z2@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044570 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UIProcessCreativeEvent@ContentManagement@@UIProcessLockScreenEvent@6@UIProcessStartMenuEvent@6@UIProcessContextualSuggestionsEvent@6@UILayoutResolver@6@UILockScreenRegistrySettingProvider@6@UITaskBarAppProperties@6@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180050B40 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UIProc.c)
 *     ??0?$AsyncOperation@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler@23@VCNoResult@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncCausalityOptions@$1?EnableLockScreenRotationOperationName@?A0xb8965cb7@@3QBGB$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@QEAA@$$QEAVComTaskPoolHandler@12@QEBGW4TrustLevel@@@Z @ 0x180055644 (--0-$AsyncOperation@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler_ea_180055644.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall ContentManagement::ContentManagementService::EnableLockScreenRotationAsync(
        ContentManagement::ContentManagementService *this,
        char a2,
        struct Windows::Foundation::IAsyncAction **a3)
{
  volatile signed __int64 *v5; // rbx
  signed __int64 v6; // rcx
  bool v7; // zf
  signed __int64 v8; // rax
  signed __int32 v9; // eax
  volatile signed __int64 *v10; // r14
  signed __int64 v11; // rcx
  signed __int64 v12; // rax
  signed __int32 v13; // eax
  _QWORD *v14; // rax
  _QWORD *v15; // rdi
  volatile signed __int64 **v16; // rax
  void *v17; // rax
  __int64 v18; // rsi
  int v19; // edi
  _DWORD v21[4]; // [rsp+30h] [rbp-20h] BYREF
  volatile signed __int64 *v22; // [rsp+40h] [rbp-10h] BYREF
  char v23; // [rsp+48h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  volatile signed __int64 *v25; // [rsp+80h] [rbp+30h]

  v5 = (volatile signed __int64 *)((char *)this - 56);
  v25 = (volatile signed __int64 *)((char *)this - 56);
  if ( this != (ContentManagement::ContentManagementService *)56 )
  {
    v6 = *((_QWORD *)v5 + 14);
    while ( v6 >= 0 )
    {
      if ( (_DWORD)v6 != 0x7FFFFFFF )
      {
        v8 = _InterlockedCompareExchange64(v5 + 14, v6 + 1, v6);
        v7 = v6 == v8;
        v6 = v8;
        if ( !v7 )
          continue;
      }
      goto LABEL_9;
    }
    do
      v9 = *(_DWORD *)(2 * v6 + 0x10);
    while ( v9 != 0x7FFFFFFF && v9 != _InterlockedCompareExchange((volatile signed __int32 *)(2 * v6 + 16), v9 + 1, v9) );
LABEL_9:
    v5 = v25;
  }
  v10 = v5;
  v22 = v5;
  if ( v5 )
  {
    v11 = *((_QWORD *)v5 + 14);
    while ( v11 >= 0 )
    {
      if ( (_DWORD)v11 != 0x7FFFFFFF )
      {
        v12 = _InterlockedCompareExchange64(v5 + 14, v11 + 1, v11);
        v7 = v11 == v12;
        v11 = v12;
        if ( !v7 )
          continue;
      }
      goto LABEL_18;
    }
    do
      v13 = *(_DWORD *)(2 * v11 + 0x10);
    while ( v13 != 0x7FFFFFFF
         && v13 != _InterlockedCompareExchange((volatile signed __int32 *)(2 * v11 + 16), v13 + 1, v13) );
LABEL_18:
    v5 = v25;
    v10 = v22;
  }
  v23 = a2;
  v21[0] = 3;
  v21[1] = 128;
  v21[2] = 0;
  v14 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  v15 = v14;
  if ( v14 )
  {
    *v14 = &Windows::Internal::AsyncCallbackBase<Windows::Internal::CMarshaledInterfaceResult<Windows::Foundation::Collections::IVectorView<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *>>>::`vftable';
    v16 = (volatile signed __int64 **)(v14 + 1);
    v15[1] = 0LL;
    if ( v15 + 1 != &v22 )
    {
      *v16 = v5;
      v10 = 0LL;
      v22 = 0LL;
    }
    *((_BYTE *)v15 + 16) = a2;
    *v15 = off_1800FE8C0;
    *((_DWORD *)v15 + 6) = 0;
    `eh vector constructor iterator'(
      v15 + 4,
      8uLL,
      1,
      (void (*)(void *))Microsoft::WRL::AgileRef::AgileRef,
      (void (*)(void *))Microsoft::WRL::ComPtr<Windows::System::ILauncherOptions2>::~ComPtr<Windows::System::ILauncherOptions2>);
    *((_DWORD *)v15 + 6) = 0;
  }
  else
  {
    v15 = 0LL;
  }
  *a3 = 0LL;
  if ( !v15 )
    goto LABEL_35;
  v17 = operator new(0x140uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v17 )
    v18 = Windows::Internal::AsyncOperation<Windows::Foundation::IAsyncAction,Windows::Foundation::IAsyncActionCompletedHandler,Windows::Internal::CNoResult,Windows::Internal::ComTaskPoolHandler,Windows::Internal::INilDelegate,Microsoft::WRL::AsyncCausalityOptions<&unsigned short const near * const `anonymous namespace'::EnableLockScreenRotationOperationName,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::AsyncOperation<Windows::Foundation::IAsyncAction,Windows::Foundation::IAsyncActionCompletedHandler,Windows::Internal::CNoResult,Windows::Internal::ComTaskPoolHandler,Windows::Internal::INilDelegate,Microsoft::WRL::AsyncCausalityOptions<&unsigned short const near * const `anonymous namespace'::EnableLockScreenRotationOperationName,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>(
            (__int64)v17,
            (__int64)v21,
            (__int64)L"Windows.Foundation.IAsyncAction",
            0);
  else
    v18 = 0LL;
  if ( !v18 )
  {
    (*(void (__fastcall **)(_QWORD *, __int64))*v15)(v15, 1LL);
LABEL_35:
    v19 = -2147024882;
    goto LABEL_36;
  }
  *(_QWORD *)(v18 + 256) = v15;
  v19 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v18 + 8) + 104LL))(v18 + 8);
  if ( v19 >= 0 )
  {
    *a3 = (struct Windows::Foundation::IAsyncAction *)(v18 + 176);
    v18 = 0LL;
  }
  if ( v18 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)(v18 + 8) + 16LL))(v18 + 8);
LABEL_36:
  if ( v10 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,ContentManagement::IProcessCreativeEvent,ContentManagement::IProcessLockScreenEvent,ContentManagement::IProcessStartMenuEvent,ContentManagement::IProcessContextualSuggestionsEvent,ContentManagement::ILayoutResolver,ContentManagement::ILockScreenRegistrySettingProvider,ContentManagement::ITaskBarAppProperties>::Release(v10);
  if ( v19 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x222,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
      (const char *)(unsigned int)v19);
  if ( v5 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,ContentManagement::IProcessCreativeEvent,ContentManagement::IProcessLockScreenEvent,ContentManagement::IProcessStartMenuEvent,ContentManagement::IProcessContextualSuggestionsEvent,ContentManagement::ILayoutResolver,ContentManagement::ILockScreenRegistrySettingProvider,ContentManagement::ITaskBarAppProperties>::Release(v5);
  return (unsigned int)v19;
}
