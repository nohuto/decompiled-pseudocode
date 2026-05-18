/*
 * XREFs of sub_18003BF94 @ 0x18003BF94
 * Callers:
 *     _initp_eh_hooks @ 0x1800037C0 (_initp_eh_hooks.c)
 *     _initp_eh_hooks_0 @ 0x180003820 (_initp_eh_hooks_0.c)
 *     sub_180032900 @ 0x180032900 (sub_180032900.c)
 *     sub_180064EF0 @ 0x180064EF0 (sub_180064EF0.c)
 *     sub_180065CC0 @ 0x180065CC0 (sub_180065CC0.c)
 *     sub_1800727D0 @ 0x1800727D0 (sub_1800727D0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18003BF94(_QWORD *a1)
{
  unsigned int v1; // edx
  unsigned int v2; // r8d

  if ( a1[3] >= 0x10uLL )
    a1 = (_QWORD *)*a1;
  v1 = 0;
  if ( a1 )
  {
    v2 = 5381;
    while ( *(_BYTE *)a1 )
    {
      v2 = *(char *)a1 + 33 * v2;
      a1 = (_QWORD *)((char *)a1 + 1);
    }
    return v2;
  }
  return v1;
}
