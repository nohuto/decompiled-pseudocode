/*
 * XREFs of ?ClearQueueServerEvent@@YAXG@Z @ 0x1C006A2D4
 * Callers:
 *     ?xxxPollAndWaitForSingleObject@@YAKPEAU_KEVENT@@PEAXK@Z @ 0x1C00517F0 (-xxxPollAndWaitForSingleObject@@YAKPEAU_KEVENT@@PEAXK@Z.c)
 *     xxxDesktopThreadWaiter @ 0x1C006A140 (xxxDesktopThreadWaiter.c)
 * Callees:
 *     <none>
 */

void __fastcall ClearQueueServerEvent(unsigned __int16 a1)
{
  _InterlockedExchange((volatile __int32 *)(*(_QWORD *)(gptiCurrent + 448LL) + 16LL), a1);
  KeClearEvent(*(PRKEVENT *)(gptiCurrent + 736LL));
}
