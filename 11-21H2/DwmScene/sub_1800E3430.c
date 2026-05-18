/*
 * XREFs of sub_1800E3430 @ 0x1800E3430
 * Callers:
 *     sub_1800E2DF0 @ 0x1800E2DF0 (sub_1800E2DF0.c)
 *     sub_1800E2F14 @ 0x1800E2F14 (sub_1800E2F14.c)
 * Callees:
 *     sub_18001D684 @ 0x18001D684 (sub_18001D684.c)
 *     sub_18005CA08 @ 0x18005CA08 (sub_18005CA08.c)
 */

__int64 *__fastcall sub_1800E3430(__int64 *a1, int *a2, int *a3, int *a4, int *a5, int *a6)
{
  _DWORD *v10; // rcx
  __int64 v11; // rax

  v10 = (_DWORD *)sub_18001D684();
  v11 = 0LL;
  if ( v10 )
    v11 = sub_18005CA08(v10, *a2, *a3, *a4, *a5, *a6);
  *a1 = v11;
  return a1;
}
