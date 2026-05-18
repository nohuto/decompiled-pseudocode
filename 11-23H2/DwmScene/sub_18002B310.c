/*
 * XREFs of sub_18002B310 @ 0x18002B310
 * Callers:
 *     sub_18002B4A4 @ 0x18002B4A4 (sub_18002B4A4.c)
 * Callees:
 *     sub_18001C190 @ 0x18001C190 (sub_18001C190.c)
 *     sub_180073E98 @ 0x180073E98 (sub_180073E98.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall sub_18002B310(__int64 *a1)
{
  __int64 v2; // rbx
  __int64 v3; // rax

  v2 = 0LL;
  v3 = sub_18001C190();
  if ( v3 )
    v2 = sub_180073E98(v3);
  *a1 = v2;
  return a1;
}
