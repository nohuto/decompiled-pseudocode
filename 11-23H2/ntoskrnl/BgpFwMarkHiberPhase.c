/*
 * XREFs of BgpFwMarkHiberPhase @ 0x140AF1DF4
 * Callers:
 *     BgMarkHiberPhase @ 0x140AF1354 (BgMarkHiberPhase.c)
 * Callees:
 *     PoSetHiberRange @ 0x14058ED90 (PoSetHiberRange.c)
 */

__int64 BgpFwMarkHiberPhase()
{
  __int64 i; // rbx

  for ( i = qword_140C0E580; (__int64 *)i != &qword_140C0E580; i = *(_QWORD *)i )
    PoSetHiberRange(0LL, 0x10000u, (PVOID)(i - 8), *(_QWORD *)(i + 24), 0x4B424742u);
  return 0LL;
}
