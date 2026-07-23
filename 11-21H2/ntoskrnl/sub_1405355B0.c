/*
 * XREFs of sub_1405355B0 @ 0x1405355B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1403A30B4 @ 0x1403A30B4 (sub_1403A30B4.c)
 */

__int64 __fastcall sub_1405355B0(__int64 a1)
{
  int v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0;
  *(_DWORD *)(a1 + 120) = 0;
  *(_QWORD *)(a1 + 88) = sub_1403A30B4(a1, &v3);
  *(_DWORD *)(a1 + 108) = *(_DWORD *)(a1 + 112) & 0xF;
  return 1LL;
}
