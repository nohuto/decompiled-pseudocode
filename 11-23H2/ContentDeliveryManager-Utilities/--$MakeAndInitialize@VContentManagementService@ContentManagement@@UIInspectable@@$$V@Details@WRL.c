/*
 * XREFs of ??$MakeAndInitialize@VContentManagementService@ContentManagement@@UIInspectable@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIInspectable@@@Z @ 0x180047804
 * Callers:
 *     ?ActivateInstance@?$SimpleActivationFactory@VContentManagementService@ContentManagement@@$0A@@WRL@Microsoft@@UEAAJPEAPEAUIInspectable@@@Z @ 0x1800489D0 (-ActivateInstance@-$SimpleActivationFactory@VContentManagementService@ContentManagement@@$0A@@WR.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800227B4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??1?$MakeAllocator@V?$CTaskWrapper@V_lambda_c2fd7731c5ae0d37e65ea73be67c0f1b_@@@ComTaskPool@Internal@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18002BC2C (--1-$MakeAllocator@V-$CTaskWrapper@V_lambda_c2fd7731c5ae0d37e65ea73be67c0f1b_@@@ComTaskPool@Inte.c)
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UIProcessCreativeEvent@ContentManagement@@UIProcessLockScreenEvent@6@UIProcessStartMenuEvent@6@UIProcessContextualSuggestionsEvent@6@UILayoutResolver@6@UILockScreenRegistrySettingProvider@6@UITaskBarAppProperties@6@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$02@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UIProcessCreativeEvent@ContentManagement@@UIProcessLockScreenEvent@6@UIProcessStartMenuEvent@6@UIProcessContextualSuggestionsEvent@6@UILayoutResolver@6@UILockScreenRegistrySettingProvider@6@UITaskBarAppProperties@6@@123@AEBU_GUID@@PEAPEAX@Z @ 0x18004681C (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UIPro.c)
 *     ??0ContentManagementService@ContentManagement@@QEAA@XZ @ 0x180047E80 (--0ContentManagementService@ContentManagement@@QEAA@XZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UIProcessCreativeEvent@ContentManagement@@UIProcessLockScreenEvent@6@UIProcessStartMenuEvent@6@UIProcessContextualSuggestionsEvent@6@UILayoutResolver@6@UILockScreenRegistrySettingProvider@6@UITaskBarAppProperties@6@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18004B3A0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UIProc.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<ContentManagement::ContentManagementService,IInspectable,>(
        _QWORD *a1)
{
  void *v2; // rax
  unsigned int v3; // edi
  __int64 v4; // rax
  __int64 v5; // rbx
  void *v7; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  v2 = operator new(0xA8uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = v2;
  if ( v2 )
  {
    v4 = ContentManagement::ContentManagementService::ContentManagementService((ContentManagement::ContentManagementService *)v2);
    v7 = 0LL;
    v5 = v4;
    *(_QWORD *)(v4 + 136) = 0LL;
    v3 = Microsoft::WRL::Details::RuntimeClassBaseT<3>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,ContentManagement::IProcessCreativeEvent,ContentManagement::IProcessLockScreenEvent,ContentManagement::IProcessStartMenuEvent,ContentManagement::IProcessContextualSuggestionsEvent,ContentManagement::ILayoutResolver,ContentManagement::ILockScreenRegistrySettingProvider,ContentManagement::ITaskBarAppProperties>>(
           v4,
           &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90,
           a1);
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,ContentManagement::IProcessCreativeEvent,ContentManagement::IProcessLockScreenEvent,ContentManagement::IProcessStartMenuEvent,ContentManagement::IProcessContextualSuggestionsEvent,ContentManagement::ILayoutResolver,ContentManagement::ILockScreenRegistrySettingProvider,ContentManagement::ITaskBarAppProperties>::Release(v5);
  }
  else
  {
    v3 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_c2fd7731c5ae0d37e65ea73be67c0f1b_>>::~MakeAllocator<Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_c2fd7731c5ae0d37e65ea73be67c0f1b_>>(&v7);
  return v3;
}
