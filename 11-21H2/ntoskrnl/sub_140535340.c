/*
 * XREFs of sub_140535340 @ 0x140535340
 * Callers:
 *     <none>
 * Callees:
 *     sub_1403A3038 @ 0x1403A3038 (sub_1403A3038.c)
 *     sub_1403A3060 @ 0x1403A3060 (sub_1403A3060.c)
 *     sub_1403A30B4 @ 0x1403A30B4 (sub_1403A30B4.c)
 */

__int64 __fastcall sub_140535340(__int64 a1)
{
  unsigned __int16 *v2; // rbx
  __int64 result; // rax
  unsigned int v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = 0;
  *(_DWORD *)(a1 + 120) = *(_BYTE *)(a1 + 138) != 0 ? 3 : 1;
  v2 = (unsigned __int16 *)sub_1403A30B4(a1, (int *)&v4);
  *(_DWORD *)(a1 + 108) = sub_1403A3060(a1, *(_DWORD *)(a1 + 112) & 2);
  sub_1403A3038(a1, v2);
  result = 1LL;
  *(_QWORD *)(a1 + 88) = a1 + 4 * (v4 + 6LL);
  return result;
}
