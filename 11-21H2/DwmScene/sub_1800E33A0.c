/*
 * XREFs of sub_1800E33A0 @ 0x1800E33A0
 * Callers:
 *     sub_1800E2F14 @ 0x1800E2F14 (sub_1800E2F14.c)
 * Callees:
 *     sub_18001D684 @ 0x18001D684 (sub_18001D684.c)
 *     sub_18005C9CC @ 0x18005C9CC (sub_18005C9CC.c)
 */

__int64 *__fastcall sub_1800E33A0(__int64 *a1, int *a2, int *a3, int *a4, int *a5, int *a6, int *a7)
{
  _DWORD *v11; // rcx
  __int64 v12; // rax

  v11 = (_DWORD *)sub_18001D684();
  v12 = 0LL;
  if ( v11 )
    v12 = sub_18005C9CC(v11, *a2, *a3, *a4, *a5, *a6, *a7);
  *a1 = v12;
  return a1;
}
