/*
 * XREFs of sub_140983EC0 @ 0x140983EC0
 * Callers:
 *     sub_140983EF0 @ 0x140983EF0 (sub_140983EF0.c)
 *     sub_1409ABED8 @ 0x1409ABED8 (sub_1409ABED8.c)
 *     sub_1409ABFB0 @ 0x1409ABFB0 (sub_1409ABFB0.c)
 * Callees:
 *     sub_14069C9C0 @ 0x14069C9C0 (sub_14069C9C0.c)
 */

void __fastcall sub_140983EC0(volatile __int64 *a1)
{
  __int64 v1; // rcx

  v1 = _InterlockedExchange64(a1, 0LL);
  if ( v1 )
    sub_14069C9C0((volatile signed __int64 *)(v1 & 0xFFFFFFFFFFFFFFF0uLL), (v1 & 0xF) + 1);
}
