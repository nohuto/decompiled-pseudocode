/*
 * XREFs of sub_1407FE774 @ 0x1407FE774
 * Callers:
 *     sub_14038B628 @ 0x14038B628 (sub_14038B628.c)
 *     sub_1407FF888 @ 0x1407FF888 (sub_1407FF888.c)
 *     sub_140A6927C @ 0x140A6927C (sub_140A6927C.c)
 * Callees:
 *     sub_1407FE82C @ 0x1407FE82C (sub_1407FE82C.c)
 */

__int64 __fastcall sub_1407FE774(__int64 a1, int a2)
{
  int v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = a2;
  *(_DWORD *)(a1 + 16) = 7;
  return sub_1407FE82C(a1, &v3);
}
