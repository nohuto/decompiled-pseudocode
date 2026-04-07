/*
 * XREFs of ??_GCTrackingTooltip@@QEAAPEAXI@Z @ 0x1800AF540
 * Callers:
 *     ?HandleFlickFeedbackMessage@CContactManager@@QEAAJ_NI@Z @ 0x1800AFDEC (-HandleFlickFeedbackMessage@CContactManager@@QEAAJ_NI@Z.c)
 *     ?HandleKeystateFeedbackMessage@CContactManager@@QEAAJ_NI@Z @ 0x1800B0034 (-HandleKeystateFeedbackMessage@CContactManager@@QEAAJ_NI@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 */

CTrackingTooltip *__fastcall CTrackingTooltip::`scalar deleting destructor'(CTrackingTooltip *this)
{
  HWND v2; // rcx

  v2 = (HWND)*((_QWORD *)this + 1);
  if ( v2 )
    DestroyWindow(v2);
  (*(void (__fastcall **)(WPF::HeapBase *, CTrackingTooltip *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
    WPF::g_pProcessHeap,
    this);
  return this;
}
