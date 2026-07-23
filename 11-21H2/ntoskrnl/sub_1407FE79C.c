/*
 * XREFs of sub_1407FE79C @ 0x1407FE79C
 * Callers:
 *     sub_14038B628 @ 0x14038B628 (sub_14038B628.c)
 *     sub_1407FF888 @ 0x1407FF888 (sub_1407FF888.c)
 *     sub_140A68674 @ 0x140A68674 (sub_140A68674.c)
 * Callees:
 *     sub_1407FE82C @ 0x1407FE82C (sub_1407FE82C.c)
 */

__int64 __fastcall sub_1407FE79C(__int64 a1)
{
  *(_DWORD *)(a1 + 16) = 1;
  return sub_1407FE82C(a1, 0LL);
}
