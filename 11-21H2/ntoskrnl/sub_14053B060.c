/*
 * XREFs of sub_14053B060 @ 0x14053B060
 * Callers:
 *     sub_14032AD00 @ 0x14032AD00 (sub_14032AD00.c)
 * Callees:
 *     sub_140247800 @ 0x140247800 (sub_140247800.c)
 *     sub_140247840 @ 0x140247840 (sub_140247840.c)
 *     sub_140285740 @ 0x140285740 (sub_140285740.c)
 */

void __fastcall sub_14053B060(__int64 a1, __int64 a2)
{
  if ( *(__int64 *)(a1 + 32) > 0x2000000 )
  {
    sub_140247840(1, (struct _FAST_MUTEX *)a1);
    sub_140285740(a1, a2, 0xFFFFFFFFFFFFFFFEuLL, 0LL);
    sub_140247800(1, (struct _FAST_MUTEX *)a1);
  }
}
