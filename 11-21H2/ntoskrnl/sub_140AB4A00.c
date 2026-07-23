/*
 * XREFs of sub_140AB4A00 @ 0x140AB4A00
 * Callers:
 *     sub_14090C1BC @ 0x14090C1BC (sub_14090C1BC.c)
 *     sub_140AB48B4 @ 0x140AB48B4 (sub_140AB48B4.c)
 * Callees:
 *     sub_140AB43C0 @ 0x140AB43C0 (sub_140AB43C0.c)
 */

__int64 __fastcall sub_140AB4A00(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  if ( *(_QWORD *)(a2 + 32) == qword_140D3CA28 )
    return 3221225506LL;
  result = sub_140AB43C0(a1, 0LL);
  if ( (int)result >= 0 )
    return (*(_DWORD *)(a2 + 184) & 0x40000) == 0 ? 0xC000000D : 0;
  return result;
}
