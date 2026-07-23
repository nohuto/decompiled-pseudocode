/*
 * XREFs of sub_140300B00 @ 0x140300B00
 * Callers:
 *     sub_1403009E0 @ 0x1403009E0 (sub_1403009E0.c)
 *     sub_140637438 @ 0x140637438 (sub_140637438.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_140300B00(__int16 a1, __int64 a2)
{
  __int64 v2; // r8
  __int64 v3; // rax

  v2 = (unsigned __int16)(*(_WORD *)(a2 + 2) & __ROR2__(a1, *(_BYTE *)(a2 + 1)));
  if ( a1 == *(_WORD *)(a2 + 4 * v2 + 8) )
    return 1;
  while ( 1 )
  {
    v3 = *(unsigned __int8 *)(a2 + 4 * v2 + 6);
    if ( (_BYTE)v3 == 0xFF )
      break;
    v2 = *(unsigned __int8 *)(a2 + 4 * v2 + 6);
    if ( a1 == *(_WORD *)(a2 + 4 * v3 + 8) )
      return 1;
  }
  return 0;
}
