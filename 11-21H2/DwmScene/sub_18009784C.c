/*
 * XREFs of sub_18009784C @ 0x18009784C
 * Callers:
 *     sub_180097C48 @ 0x180097C48 (sub_180097C48.c)
 * Callees:
 *     sub_18001D684 @ 0x18001D684 (sub_18001D684.c)
 *     sub_180097B04 @ 0x180097B04 (sub_180097B04.c)
 */

__int64 *__fastcall sub_18009784C(__int64 *a1, _DWORD *a2, _DWORD *a3, _DWORD *a4, _DWORD *a5, _DWORD *a6, _DWORD *a7)
{
  __int64 v11; // rcx
  __int64 v12; // rax

  v11 = sub_18001D684();
  v12 = 0LL;
  if ( v11 )
    v12 = sub_180097B04(v11, *a2, *a3, *a4, *a5, *a6, *a7);
  *a1 = v12;
  return a1;
}
