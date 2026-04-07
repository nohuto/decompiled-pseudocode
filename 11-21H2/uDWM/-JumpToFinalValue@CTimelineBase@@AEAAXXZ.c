/*
 * XREFs of ?JumpToFinalValue@CTimelineBase@@AEAAXXZ @ 0x18005F908
 * Callers:
 *     ?AdvanceTimelines@CDesktopManager@@AEAAXN@Z @ 0x18000B9A0 (-AdvanceTimelines@CDesktopManager@@AEAAXN@Z.c)
 *     ?UpdateBeforeTickWorker@CTimelineBase@@AEAAJPEAUWindowsAnimation@@@Z @ 0x18000BD34 (-UpdateBeforeTickWorker@CTimelineBase@@AEAAJPEAUWindowsAnimation@@@Z.c)
 *     ?DeActivate@CLivePreview@@QEAAJ_N@Z @ 0x18005CAA0 (-DeActivate@CLivePreview@@QEAAJ_N@Z.c)
 *     ?AbandonActiveAnimations@CDesktopManager@@AEAAXXZ @ 0x1800AFC88 (-AbandonActiveAnimations@CDesktopManager@@AEAAXXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CTimelineBase::JumpToFinalValue(CTimelineBase *this)
{
  __int64 v2; // rcx
  __int64 v3; // xmm0_8

  v2 = *((_QWORD *)this + 8);
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
    *((_QWORD *)this + 8) = 0LL;
  }
  if ( *((double *)this + 3) >= 0.0 )
    v3 = *((_QWORD *)this + 5);
  else
    v3 = *((_QWORD *)this + 4);
  *((_QWORD *)this + 6) = v3;
  *((_BYTE *)this + 72) = 1;
}
