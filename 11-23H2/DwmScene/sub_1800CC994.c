/*
 * XREFs of sub_1800CC994 @ 0x1800CC994
 * Callers:
 *     sub_1800CC268 @ 0x1800CC268 (sub_1800CC268.c)
 *     sub_1800CC384 @ 0x1800CC384 (sub_1800CC384.c)
 * Callees:
 *     sub_18001C190 @ 0x18001C190 (sub_18001C190.c)
 *     sub_180055408 @ 0x180055408 (sub_180055408.c)
 */

__int64 *__fastcall sub_1800CC994(__int64 *a1, int *a2, int *a3, int *a4, int *a5, int *a6)
{
  _DWORD *v10; // rcx
  __int64 v11; // rax

  v10 = (_DWORD *)sub_18001C190();
  v11 = 0LL;
  if ( v10 )
    v11 = sub_180055408(v10, *a2, *a3, *a4, *a5, *a6);
  *a1 = v11;
  return a1;
}
