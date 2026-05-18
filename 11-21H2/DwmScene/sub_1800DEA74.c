/*
 * XREFs of sub_1800DEA74 @ 0x1800DEA74
 * Callers:
 *     sub_1800DEA94 @ 0x1800DEA94 (sub_1800DEA94.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800DEA74(__int64 a1)
{
  __int64 result; // rax

  *(_DWORD *)(a1 + 8) = -1;
  *(_DWORD *)(a1 + 12) = -1;
  result = a1;
  *(_QWORD *)a1 = 0LL;
  *(_DWORD *)(a1 + 16) = 0;
  *(_BYTE *)(a1 + 48) = 0;
  return result;
}
