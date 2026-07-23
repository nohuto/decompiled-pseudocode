/*
 * XREFs of sub_140A4F990 @ 0x140A4F990
 * Callers:
 *     sub_14038D4F0 @ 0x14038D4F0 (sub_14038D4F0.c)
 *     sub_14038DDD4 @ 0x14038DDD4 (sub_14038DDD4.c)
 * Callees:
 *     RtlSetBits @ 0x1402E4C80 (RtlSetBits.c)
 */

void __fastcall sub_140A4F990(__int64 a1, ULONG a2, ULONG a3)
{
  unsigned int v3; // r9d
  unsigned __int64 v4; // r10

  v3 = a2;
  if ( a2 < a3 + a2 )
  {
    v4 = a2;
    do
    {
      if ( !_bittest64(*(const signed __int64 **)(a1 + 40), v4) )
        _bittestandreset(*(signed __int32 **)(a1 + 56), v3);
      ++v3;
      ++v4;
    }
    while ( v3 < a3 + a2 );
  }
  RtlSetBits((PRTL_BITMAP)(a1 + 32), a2, a3);
}
