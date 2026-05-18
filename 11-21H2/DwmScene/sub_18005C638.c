/*
 * XREFs of sub_18005C638 @ 0x18005C638
 * Callers:
 *     sub_18005D70C @ 0x18005D70C (sub_18005D70C.c)
 *     sub_1800E4630 @ 0x1800E4630 (sub_1800E4630.c)
 * Callees:
 *     sub_18001D684 @ 0x18001D684 (sub_18001D684.c)
 *     sub_18005C9CC @ 0x18005C9CC (sub_18005C9CC.c)
 */

__int64 *__fastcall sub_18005C638(__int64 *a1, _DWORD *a2, _DWORD *a3, _DWORD *a4, _DWORD *a5, _DWORD *a6, _DWORD *a7)
{
  __int64 v11; // rcx
  __int64 v12; // rax

  v11 = sub_18001D684();
  v12 = 0LL;
  if ( v11 )
    v12 = sub_18005C9CC(v11, *a2, *a3, *a4, *a5, *a6, *a7);
  *a1 = v12;
  return a1;
}
