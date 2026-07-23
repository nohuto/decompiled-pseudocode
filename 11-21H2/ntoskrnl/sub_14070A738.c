/*
 * XREFs of sub_14070A738 @ 0x14070A738
 * Callers:
 *     sub_14070A4FC @ 0x14070A4FC (sub_14070A4FC.c)
 * Callees:
 *     sub_140363220 @ 0x140363220 (sub_140363220.c)
 */

_QWORD *__fastcall sub_14070A738(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rsi
  unsigned __int64 v4; // rbx
  unsigned __int64 v5; // rdi
  _QWORD *result; // rax

  v2 = *(_QWORD *)(a1 + 1496);
  if ( v2 > 0x100000000LL )
    v2 = 0LL;
  v4 = v2;
  v5 = (-(__int64)(a2 != 0) & 0xFFFFFFF600010000uLL) + 0x7FFFFFFF0000LL;
  if ( (*(_DWORD *)(a1 + 2512) & 0x40) == 0 )
  {
    if ( v2 )
      v4 = v2 - ((unsigned __int8)sub_140363220(1) << 16);
    v5 -= (unsigned int)sub_140363220(1) << 16;
  }
  result = *(_QWORD **)(a1 + 1680);
  if ( v4 )
    result[30] = v5;
  else
    v4 = v5;
  result[12] = v4;
  result[21] = v4;
  return result;
}
