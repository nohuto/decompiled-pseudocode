/*
 * XREFs of ??1CPropertyStoreHelper@@QEAA@XZ @ 0x18031E41C
 * Callers:
 *     ?CleanupObsoleteLinks@CLauncherTipContextMenu@@AEAAJXZ @ 0x1801D8694 (-CleanupObsoleteLinks@CLauncherTipContextMenu@@AEAAJXZ.c)
 *     _CLauncherTipContextMenu::CleanupObsoleteLinks_::_1_::dtor$6 @ 0x1801D8925 (_CLauncherTipContextMenu--CleanupObsoleteLinks_--_1_--dtor$6.c)
 *     ?_AddLinkToCommands@CLauncherTipContextMenu@@AEAAXPEAUIShellItem2@@_NI@Z @ 0x1801DA63C (-_AddLinkToCommands@CLauncherTipContextMenu@@AEAAXPEAUIShellItem2@@_NI@Z.c)
 *     _CLauncherTipContextMenu::_AddLinkToCommands_::_1_::dtor$3 @ 0x1801E7D0F (_CLauncherTipContextMenu--_AddLinkToCommands_--_1_--dtor$3.c)
 *     _CDesktopPositioner::_IsViewManaged_::_1_::dtor$3 @ 0x180219B64 (_CDesktopPositioner--_IsViewManaged_--_1_--dtor$3.c)
 *     _FullScreenPositioner::ApplyPresentationChanges_::_1_::dtor$2 @ 0x18031EC5C (_FullScreenPositioner--ApplyPresentationChanges_--_1_--dtor$2.c)
 *     _FullScreenPositioner::IsLightweightFullScreen_::_1_::dtor$2 @ 0x18031FFD5 (_FullScreenPositioner--IsLightweightFullScreen_--_1_--dtor$2.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CPropertyStoreHelper::~CPropertyStoreHelper(CPropertyStoreHelper *this)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)this;
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
    *(_QWORD *)this = 0LL;
  }
}
