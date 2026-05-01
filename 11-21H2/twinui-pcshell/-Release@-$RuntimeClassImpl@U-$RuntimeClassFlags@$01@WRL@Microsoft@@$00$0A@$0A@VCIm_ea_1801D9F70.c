/*
 * XREFs of ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithSite@@UILauncherTipContextMenu@@UILauncherTipContextMenuSettingChangeListener@@UILauncherTipContextMenuMigration@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801D9F70
 * Callers:
 *     ??$MakeAndInitialize@VCLauncherTipContextMenu@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x18005EF2C (--$MakeAndInitialize@VCLauncherTipContextMenu@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUI.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithSite@@UILauncherTipContextMenu@@UILauncherTipContextMenuSettingChangeListener@@UILauncherTipContextMenuMigration@@@Details@WRL@Microsoft@@WBI@EAAKXZ @ 0x1802101B0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCIm_ea_1802101B0.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithSite@@UILauncherTipContextMenu@@UILauncherTipContextMenuSettingChangeListener@@UILauncherTipContextMenuMigration@@@Details@WRL@Microsoft@@WCA@EAAKXZ @ 0x1802101D0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCIm_ea_1802101D0.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithSite@@UILauncherTipContextMenu@@UILauncherTipContextMenuSettingChangeListener@@UILauncherTipContextMenuMigration@@@Details@WRL@Microsoft@@WFI@EAAKXZ @ 0x1802101F0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCIm_ea_1802101F0.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithSite@@UILauncherTipContextMenu@@UILauncherTipContextMenuSettingChangeListener@@UILauncherTipContextMenuMigration@@@Details@WRL@Microsoft@@WGA@EAAKXZ @ 0x180210210 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCIm_ea_180210210.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithSite@@UILauncherTipContextMenu@@UILauncherTipContextMenuSettingChangeListener@@UILauncherTipContextMenuMigration@@@Details@WRL@Microsoft@@WGI@EAAKXZ @ 0x180210230 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCIm_ea_180210230.c)
 *     ?s_WndProcBase@?$CWRLImpWndProc@VCLauncherTipContextMenu@@@@KA_JPEAUHWND__@@I_K_J@Z @ 0x180239DF0 (-s_WndProcBase@-$CWRLImpWndProc@VCLauncherTipContextMenu@@@@KA_JPEAUHWND__@@I_K_J@Z.c)
 *     _lambda_9bfc867a9c7100a4740d0e4b48179e18_::__lambda_9bfc867a9c7100a4740d0e4b48179e18_ @ 0x1805D8368 (_lambda_9bfc867a9c7100a4740d0e4b48179e18_--__lambda_9bfc867a9c7100a4740d0e4b48179e18_.c)
 *     ??1?$ComPtr@VCLauncherTipContextMenu@@@WRL@Microsoft@@QEAA@XZ @ 0x1805D838C (--1-$ComPtr@VCLauncherTipContextMenu@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@VCLauncherTipContextMenu@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1805D83B0 (--1-$com_ptr_t@VCLauncherTipContextMenu@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     shell::TaskScheduler::CSimpleRunnableTask__lambda_9bfc867a9c7100a4740d0e4b48179e18___::_scalar_deleting_destructor_ @ 0x1805D8630 (shell--TaskScheduler--CSimpleRunnableTask__lambda_9bfc867a9c7100a4740d0e4b48179e18___--_scalar_d.c)
 *     ?_EnsureMenu@CLauncherTipContextMenu@@AEAAJPEAUtagPOINT@@@Z @ 0x1805DAE2C (-_EnsureMenu@CLauncherTipContextMenu@@AEAAJPEAUtagPOINT@@@Z.c)
 * Callees:
 *     ?SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x1800EEF40 (-SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CImmersiveShellComponentWithSite,ILauncherTipContextMenu,ILauncherTipContextMenuSettingChangeListener,ILauncherTipContextMenuMigration>::Release(
        __int64 a1,
        volatile int *a2)
{
  unsigned int v2; // ebx
  __int64 v3; // r10

  v2 = Microsoft::WRL::Details::SafeUnknownDecrementReference((Microsoft::WRL::Details *)(a1 + 116), a2);
  if ( !v2 )
  {
    if ( v3 )
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(v3 + 24) + 64LL))(v3 + 24, v2 + 1);
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
  }
  return v2;
}
