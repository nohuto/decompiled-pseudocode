/*
 * XREFs of sub_140419F18 @ 0x140419F18
 * Callers:
 *     sub_1406595AC @ 0x1406595AC (sub_1406595AC.c)
 *     sub_140659708 @ 0x140659708 (sub_140659708.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 */

void __fastcall sub_140419F18(__int64 a1)
{
  ULONG_PTR v1; // rbx

  v1 = a1 + 64;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 64), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(a1 + 64);
  sub_1402AFC00(v1);
  KeLeaveCriticalRegion();
}
