/*
 * XREFs of sub_140419ED8 @ 0x140419ED8
 * Callers:
 *     sub_1406596A0 @ 0x1406596A0 (sub_1406596A0.c)
 *     sub_14065994C @ 0x14065994C (sub_14065994C.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 */

void sub_140419ED8()
{
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140D3CB70, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&qword_140D3CB70);
  sub_1402AFC00((ULONG_PTR)&qword_140D3CB70);
  KeLeaveCriticalRegion();
}
