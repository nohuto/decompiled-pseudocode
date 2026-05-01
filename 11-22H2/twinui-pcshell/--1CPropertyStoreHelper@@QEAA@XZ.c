/*
 * XREFs of ??1CPropertyStoreHelper@@QEAA@XZ @ 0x1803EC460
 * Callers:
 *     _FullScreenPositioner::ApplyPresentationChanges_::_1_::dtor$2 @ 0x1803ECA6C (_FullScreenPositioner--ApplyPresentationChanges_--_1_--dtor$2.c)
 *     _FullScreenPositioner::IsLightweightFullScreen_::_1_::dtor$2 @ 0x1803ED9C0 (_FullScreenPositioner--IsLightweightFullScreen_--_1_--dtor$2.c)
 *     _CLauncherTipContextMenu::CleanupObsoleteLinks_::_1_::dtor$6 @ 0x1806CCAF1 (_CLauncherTipContextMenu--CleanupObsoleteLinks_--_1_--dtor$6.c)
 *     _CLauncherTipContextMenu::CleanupObsoleteLinks_::_1_::dtor$7 @ 0x1806CCAFD (_CLauncherTipContextMenu--CleanupObsoleteLinks_--_1_--dtor$7.c)
 *     _CLauncherTipContextMenu::_AddLinkToCommands_::_1_::dtor$3 @ 0x1806DDD90 (_CLauncherTipContextMenu--_AddLinkToCommands_--_1_--dtor$3.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
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
