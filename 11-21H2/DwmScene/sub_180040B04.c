/*
 * XREFs of sub_180040B04 @ 0x180040B04
 * Callers:
 *     _initp_eh_hooks @ 0x180002930 (_initp_eh_hooks.c)
 *     _initp_eh_hooks_0 @ 0x1800029A0 (_initp_eh_hooks_0.c)
 *     sub_1800347F0 @ 0x1800347F0 (sub_1800347F0.c)
 *     sub_18006D170 @ 0x18006D170 (sub_18006D170.c)
 *     sub_18006E9E4 @ 0x18006E9E4 (sub_18006E9E4.c)
 *     sub_18007DB98 @ 0x18007DB98 (sub_18007DB98.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180040B04(_QWORD *a1)
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
