/*
 * XREFs of sub_180055070 @ 0x180055070
 * Callers:
 *     sub_180055EA0 @ 0x180055EA0 (sub_180055EA0.c)
 *     sub_1800CD8AC @ 0x1800CD8AC (sub_1800CD8AC.c)
 * Callees:
 *     sub_18001C190 @ 0x18001C190 (sub_18001C190.c)
 *     sub_1800553CC @ 0x1800553CC (sub_1800553CC.c)
 */

__int64 *__fastcall sub_180055070(__int64 *a1, _DWORD *a2, _DWORD *a3, _DWORD *a4, _DWORD *a5, _DWORD *a6, _DWORD *a7)
{
  __int64 v11; // rcx
  __int64 v12; // rax

  v11 = sub_18001C190();
  v12 = 0LL;
  if ( v11 )
    v12 = sub_1800553CC(v11, *a2, *a3, *a4, *a5, *a6, *a7);
  *a1 = v12;
  return a1;
}
