/*
 * XREFs of sub_180088784 @ 0x180088784
 * Callers:
 *     sub_180088A70 @ 0x180088A70 (sub_180088A70.c)
 * Callees:
 *     sub_18001C190 @ 0x18001C190 (sub_18001C190.c)
 *     sub_18008B3D4 @ 0x18008B3D4 (sub_18008B3D4.c)
 */

__int64 *__fastcall sub_180088784(__int64 *a1, _DWORD *a2, _DWORD *a3, _DWORD *a4, _DWORD *a5, _DWORD *a6)
{
  __int64 v10; // rcx
  __int64 v11; // rax

  v10 = sub_18001C190();
  v11 = 0LL;
  if ( v10 )
    v11 = sub_18008B3D4(v10, *a2, *a3, *a4, *a5, *a6);
  *a1 = v11;
  return a1;
}
