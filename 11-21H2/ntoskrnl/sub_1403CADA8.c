/*
 * XREFs of sub_1403CADA8 @ 0x1403CADA8
 * Callers:
 *     sub_1403CAD78 @ 0x1403CAD78 (sub_1403CAD78.c)
 * Callees:
 *     sub_1403A96AC @ 0x1403A96AC (sub_1403A96AC.c)
 */

__int64 __fastcall sub_1403CADA8(__int64 a1, _DWORD *a2, _DWORD *a3)
{
  int v4; // r8d
  unsigned int v5; // ecx
  __int64 result; // rax

  *a2 = sub_1403A96AC(
          ((*(unsigned int *)(*(_QWORD *)(a1 + 8) + 96LL)
          * *(unsigned int *)(a1 + 16)
          * (__int64)(*(__int16 *)(*(_QWORD *)(a1 + 8) + 82LL) - *(__int16 *)(*(_QWORD *)(a1 + 8) + 84LL))) << 6)
        / (72LL
         * *(unsigned __int16 *)(*(_QWORD *)(a1 + 8) + 120LL)))
      + 2;
  v5 = (v4 >> 6) | 0xFC000000;
  if ( v4 >= 0 )
    v5 = v4 >> 6;
  result = v5 + 1;
  if ( (v4 & 0x20) == 0 )
    result = v5;
  *a3 = result;
  return result;
}
