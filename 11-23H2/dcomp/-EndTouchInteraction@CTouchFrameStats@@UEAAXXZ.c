/*
 * XREFs of ?EndTouchInteraction@CTouchFrameStats@@UEAAXXZ @ 0x1801A85D0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetCurrentBatchId@CTouchFrameStats@@IEAAKXZ @ 0x180008E38 (-GetCurrentBatchId@CTouchFrameStats@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CTouchFrameStats::EndTouchInteraction(CTouchFrameStats *this)
{
  int v2; // esi

  (*(void (__fastcall **)(CTouchFrameStats *))(*(_QWORD *)this + 232LL))(this);
  v2 = CTouchFrameStats::GetCurrentBatchId((CTouchFrameStats *)((char *)this - 160)) - 1;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this - 88));
  if ( *((_BYTE *)this - 148) && !*((_BYTE *)this - 147) )
    *((_DWORD *)this + 5) = v2;
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this - 88));
  (*(void (__fastcall **)(char *, _QWORD))(*((_QWORD *)this - 20) + 40LL))((char *)this - 160, 0LL);
}
