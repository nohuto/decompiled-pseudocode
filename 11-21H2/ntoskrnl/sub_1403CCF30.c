/*
 * XREFs of sub_1403CCF30 @ 0x1403CCF30
 * Callers:
 *     <none>
 * Callees:
 *     sub_1403A3038 @ 0x1403A3038 (sub_1403A3038.c)
 *     sub_1403A30B4 @ 0x1403A30B4 (sub_1403A30B4.c)
 *     sub_1403A340C @ 0x1403A340C (sub_1403A340C.c)
 *     sub_1403A346C @ 0x1403A346C (sub_1403A346C.c)
 */

__int64 __fastcall sub_1403CCF30(__int64 a1)
{
  unsigned __int16 *v2; // rbx
  int v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = 0;
  sub_1403A346C(a1);
  v2 = (unsigned __int16 *)sub_1403A30B4(a1, &v4);
  *(_DWORD *)(a1 + 108) = sub_1403A340C(a1) & 0x1F;
  sub_1403A3038(a1, v2);
  *(_DWORD *)(a1 + 124) += v4;
  return 1LL;
}
