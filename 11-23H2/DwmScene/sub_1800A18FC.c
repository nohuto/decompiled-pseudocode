/*
 * XREFs of sub_1800A18FC @ 0x1800A18FC
 * Callers:
 *     sub_1800A06AC @ 0x1800A06AC (sub_1800A06AC.c)
 * Callees:
 *     sub_18001DDFC @ 0x18001DDFC (sub_18001DDFC.c)
 */

__int64 __fastcall sub_1800A18FC(__int64 a1)
{
  __int64 result; // rax

  result = 0x666666666666666LL;
  if ( *(_QWORD *)(a1 + 8) == 0x666666666666666LL )
    sub_18001DDFC();
  return result;
}
