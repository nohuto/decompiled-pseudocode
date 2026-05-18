/*
 * XREFs of sub_1800E0D80 @ 0x1800E0D80
 * Callers:
 *     sub_1800E0DB0 @ 0x1800E0DB0 (sub_1800E0DB0.c)
 * Callees:
 *     sub_18000B988 @ 0x18000B988 (sub_18000B988.c)
 *     sub_1800E0DBC @ 0x1800E0DBC (sub_1800E0DBC.c)
 */

__int64 __fastcall sub_1800E0D80(_QWORD *a1)
{
  void *v1; // rbx
  __int64 result; // rax

  v1 = (void *)*a1;
  if ( *a1 )
  {
    sub_1800E0DBC(*a1);
    return sub_18000B988(v1);
  }
  return result;
}
