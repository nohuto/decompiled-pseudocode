/*
 * XREFs of sub_180032160 @ 0x180032160
 * Callers:
 *     sub_18002F280 @ 0x18002F280 (sub_18002F280.c)
 *     unknown_libname_4 @ 0x18002F6CC (unknown_libname_4.c)
 *     sub_180035C88 @ 0x180035C88 (sub_180035C88.c)
 *     sub_18004C480 @ 0x18004C480 (sub_18004C480.c)
 *     sub_1800A2214 @ 0x1800A2214 (sub_1800A2214.c)
 * Callees:
 *     sub_180010574 @ 0x180010574 (sub_180010574.c)
 */

_QWORD *__fastcall sub_180032160(_QWORD *a1, __int64 *a2)
{
  __int64 v2; // rax
  __int64 v4; // r8
  volatile signed __int32 *v5; // rcx

  v2 = *a2;
  *a2 = 0LL;
  v4 = a2[1];
  a2[1] = 0LL;
  *a1 = v2;
  v5 = (volatile signed __int32 *)a1[1];
  a1[1] = v4;
  if ( v5 )
    sub_180010574(v5);
  return a1;
}
