/*
 * XREFs of sub_1402DB710 @ 0x1402DB710
 * Callers:
 *     sub_1402DAC64 @ 0x1402DAC64 (sub_1402DAC64.c)
 *     sub_140581D58 @ 0x140581D58 (sub_140581D58.c)
 * Callees:
 *     sub_140337EA0 @ 0x140337EA0 (sub_140337EA0.c)
 */

__int64 __fastcall sub_1402DB710(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v4; // r9

  result = sub_140337EA0(a1, a2, a3, a1);
  if ( (_DWORD)result )
    *(_BYTE *)(v4 + 35) |= 0x20u;
  ++*(_WORD *)(v4 + 32);
  return result;
}
