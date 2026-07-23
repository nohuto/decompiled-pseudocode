/*
 * XREFs of sub_140842D54 @ 0x140842D54
 * Callers:
 *     sub_140841858 @ 0x140841858 (sub_140841858.c)
 *     sub_1408436C0 @ 0x1408436C0 (sub_1408436C0.c)
 *     sub_140A11F60 @ 0x140A11F60 (sub_140A11F60.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall sub_140842D54(unsigned __int64 a1, unsigned __int64 a2)
{
  _BOOL8 result; // rax
  int v4; // ecx
  unsigned __int64 v5; // r8

  result = 1LL;
  v4 = 48;
  while ( 1 )
  {
    v5 = a1 >> v4;
    if ( (unsigned __int16)(a1 >> v4) != (unsigned __int16)(a2 >> v4) && (_WORD)v5 != 0xFFFF )
      break;
    v4 -= 16;
    if ( v4 < 0 )
      return result;
  }
  return (unsigned __int16)v5 > (unsigned __int16)(a2 >> v4);
}
