/*
 * XREFs of sub_1800CC904 @ 0x1800CC904
 * Callers:
 *     sub_1800CC384 @ 0x1800CC384 (sub_1800CC384.c)
 * Callees:
 *     sub_18001C190 @ 0x18001C190 (sub_18001C190.c)
 *     sub_1800553CC @ 0x1800553CC (sub_1800553CC.c)
 */

__int64 *__fastcall sub_1800CC904(__int64 *a1, int *a2, int *a3, int *a4, int *a5, int *a6, int *a7)
{
  _DWORD *v11; // rcx
  __int64 v12; // rax

  v11 = (_DWORD *)sub_18001C190();
  v12 = 0LL;
  if ( v11 )
    v12 = sub_1800553CC(v11, *a2, *a3, *a4, *a5, *a6, *a7);
  *a1 = v12;
  return a1;
}
