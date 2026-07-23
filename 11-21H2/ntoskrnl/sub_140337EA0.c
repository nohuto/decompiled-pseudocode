/*
 * XREFs of sub_140337EA0 @ 0x140337EA0
 * Callers:
 *     sub_140274508 @ 0x140274508 (sub_140274508.c)
 *     sub_1402DB710 @ 0x1402DB710 (sub_1402DB710.c)
 *     sub_140328690 @ 0x140328690 (sub_140328690.c)
 *     sub_140334C40 @ 0x140334C40 (sub_140334C40.c)
 *     sub_140336B30 @ 0x140336B30 (sub_140336B30.c)
 *     sub_140337B00 @ 0x140337B00 (sub_140337B00.c)
 *     sub_140339240 @ 0x140339240 (sub_140339240.c)
 *     sub_14033DC30 @ 0x14033DC30 (sub_14033DC30.c)
 *     sub_140595E34 @ 0x140595E34 (sub_140595E34.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140337EA0(__int64 a1)
{
  __int64 v1; // rax
  __int16 v2; // dx
  __int64 v3; // r8
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 40);
  if ( (v1 & 0x10000000000LL) != 0 || (v1 & 0x20000000000000LL) != 0 )
    return 0LL;
  v2 = *(_WORD *)(a1 + 32);
  v3 = *(_QWORD *)(a1 + 24) & 0x3FFFFFFFFFFFFFFFLL;
  result = 0LL;
  if ( !v2 )
    return 1LL;
  if ( v2 == 1 )
  {
    if ( v3 || (*(_BYTE *)(a1 + 34) & 8) != 0 )
      return 1LL;
  }
  else if ( v2 == 2 && v3 && (*(_BYTE *)(a1 + 34) & 8) != 0 )
  {
    return 1LL;
  }
  return result;
}
