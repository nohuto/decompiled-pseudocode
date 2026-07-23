/*
 * XREFs of sub_1403E52DC @ 0x1403E52DC
 * Callers:
 *     sub_1403E53A0 @ 0x1403E53A0 (sub_1403E53A0.c)
 *     sub_1403E54DC @ 0x1403E54DC (sub_1403E54DC.c)
 * Callees:
 *     sub_1403E5C9C @ 0x1403E5C9C (sub_1403E5C9C.c)
 */

_BOOL8 __fastcall sub_1403E52DC(char a1, __int16 a2)
{
  int v3; // ebx

  v3 = a1 & 0x1F;
  if ( (a1 & 8) != 0 && (a2 & 0x80u) != 0 )
  {
    sub_1403E5C9C(1LL);
    v3 &= ~8u;
  }
  else if ( (a1 & 4) != 0 && (a2 & 0x200) != 0 )
  {
    sub_1403E5C9C(4LL);
    v3 &= ~4u;
  }
  else if ( (a1 & 1) != 0 && (a2 & 0x400) != 0 )
  {
    sub_1403E5C9C(8LL);
    v3 &= ~1u;
  }
  else if ( (a1 & 2) != 0 && (a2 & 0x800) != 0 )
  {
    if ( (a1 & 0x10) != 0 )
      sub_1403E5C9C(16LL);
    v3 &= ~2u;
  }
  if ( (a1 & 0x10) != 0 && (a2 & 0x1000) != 0 )
  {
    sub_1403E5C9C(32LL);
    v3 &= ~0x10u;
  }
  return v3 == 0;
}
