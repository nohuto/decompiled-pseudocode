/*
 * XREFs of sub_14084DD40 @ 0x14084DD40
 * Callers:
 *     <none>
 * Callees:
 *     sub_14084DDD8 @ 0x14084DDD8 (sub_14084DDD8.c)
 */

__int64 __fastcall sub_14084DD40(__int64 a1, __int64 a2)
{
  char v4; // di

  *(_OWORD *)a1 = *(_OWORD *)a2;
  *(_OWORD *)(a1 + 16) = *(_OWORD *)(a2 + 16);
  v4 = *(_BYTE *)(a2 + 1);
  if ( ((v4 - 1) & 0xF9) == 0 && v4 != 5 )
  {
    if ( (int)sub_14084DDD8(*(PHYSICAL_ADDRESS *)(a2 + 16)) < 0
      || (int)sub_14084DDD8(*(PHYSICAL_ADDRESS *)(a2 + 24)) < 0 )
    {
      *(_BYTE *)(a1 + 1) = 0;
    }
    else
    {
      *(_BYTE *)(a1 + 1) = 0;
    }
  }
  return 0LL;
}
