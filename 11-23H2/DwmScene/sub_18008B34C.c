/*
 * XREFs of sub_18008B34C @ 0x18008B34C
 * Callers:
 *     sub_18008B500 @ 0x18008B500 (sub_18008B500.c)
 * Callees:
 *     sub_18001C190 @ 0x18001C190 (sub_18001C190.c)
 *     sub_18008B3D4 @ 0x18008B3D4 (sub_18008B3D4.c)
 */

__int64 *__fastcall sub_18008B34C(__int64 *a1, _DWORD *a2, _DWORD *a3, _DWORD *a4, _DWORD *a5, _DWORD *a6)
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
