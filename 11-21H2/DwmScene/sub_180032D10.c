/*
 * XREFs of sub_180032D10 @ 0x180032D10
 * Callers:
 *     unknown_libname_41 @ 0x180101740 (unknown_libname_41.c)
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 */

__int64 __fastcall sub_180032D10(__int64 a1)
{
  unsigned __int64 v1; // rdx
  __int64 result; // rax
  unsigned __int64 v4; // rdx

  v1 = *(_QWORD *)(a1 + 56);
  if ( v1 >= 0x10 )
    result = sub_180010884(*(char **)(a1 + 32), v1 + 1);
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_QWORD *)(a1 + 56) = 15LL;
  *(_BYTE *)(a1 + 32) = 0;
  v4 = *(_QWORD *)(a1 + 24);
  if ( v4 >= 0x10 )
    result = sub_180010884(*(char **)a1, v4 + 1);
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 15LL;
  *(_BYTE *)a1 = 0;
  return result;
}
