/*
 * XREFs of sub_180030980 @ 0x180030980
 * Callers:
 *     sub_180031048 @ 0x180031048 (sub_180031048.c)
 * Callees:
 *     sub_18001C190 @ 0x18001C190 (sub_18001C190.c)
 *     sub_18007C63C @ 0x18007C63C (sub_18007C63C.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall sub_180030980(__int64 *a1)
{
  __int64 v2; // rbx
  __int64 v3; // rax

  v2 = 0LL;
  v3 = sub_18001C190();
  if ( v3 )
    v2 = sub_18007C63C(v3);
  *a1 = v2;
  return a1;
}
