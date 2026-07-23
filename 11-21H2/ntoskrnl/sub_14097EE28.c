/*
 * XREFs of sub_14097EE28 @ 0x14097EE28
 * Callers:
 *     sub_1402ECEB0 @ 0x1402ECEB0 (sub_1402ECEB0.c)
 *     sub_1402ED194 @ 0x1402ED194 (sub_1402ED194.c)
 *     sub_14058C330 @ 0x14058C330 (sub_14058C330.c)
 *     sub_1405B204C @ 0x1405B204C (sub_1405B204C.c)
 * Callees:
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 */

__int64 __fastcall sub_14097EE28(__int64 a1)
{
  ULONG_PTR v1; // rbx

  v1 = a1 + 40;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 40), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(a1 + 40);
  return sub_1402AFC00(v1);
}
