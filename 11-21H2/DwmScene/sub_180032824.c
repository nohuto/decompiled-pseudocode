/*
 * XREFs of sub_180032824 @ 0x180032824
 * Callers:
 *     unknown_libname_35 @ 0x1801012D2 (unknown_libname_35.c)
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 */

__int64 __fastcall sub_180032824(__int64 *a1)
{
  __int64 v1; // rbx
  unsigned __int64 v2; // rdx
  __int64 result; // rax

  v1 = *a1;
  if ( *a1 )
  {
    v2 = *(_QWORD *)(v1 + 24);
    if ( v2 >= 0x10 )
      result = sub_180010884(*(char **)v1, v2 + 1);
    *(_QWORD *)(v1 + 16) = 0LL;
    *(_QWORD *)(v1 + 24) = 15LL;
    *(_BYTE *)v1 = 0;
  }
  return result;
}
