/*
 * XREFs of sub_18002B908 @ 0x18002B908
 * Callers:
 *     sub_18002B9A8 @ 0x18002B9A8 (sub_18002B9A8.c)
 * Callees:
 *     sub_18000B988 @ 0x18000B988 (sub_18000B988.c)
 *     sub_18002B944 @ 0x18002B944 (sub_18002B944.c)
 */

__int64 __fastcall sub_18002B908(_QWORD *a1)
{
  void *v1; // rbx
  __int64 result; // rax

  v1 = (void *)*a1;
  if ( *a1 )
  {
    sub_18002B944(*a1);
    return sub_18000B988(v1);
  }
  return result;
}
