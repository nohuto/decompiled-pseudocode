/*
 * XREFs of sub_180055100 @ 0x180055100
 * Callers:
 *     sub_180055EA0 @ 0x180055EA0 (sub_180055EA0.c)
 * Callees:
 *     sub_18001C190 @ 0x18001C190 (sub_18001C190.c)
 *     sub_180055408 @ 0x180055408 (sub_180055408.c)
 */

__int64 *__fastcall sub_180055100(__int64 *a1, _DWORD *a2, _DWORD *a3, _DWORD *a4, _DWORD *a5, _DWORD *a6)
{
  __int64 v10; // rcx
  __int64 v11; // rax

  v10 = sub_18001C190();
  v11 = 0LL;
  if ( v10 )
    v11 = sub_180055408(v10, *a2, *a3, *a4, *a5, *a6);
  *a1 = v11;
  return a1;
}
