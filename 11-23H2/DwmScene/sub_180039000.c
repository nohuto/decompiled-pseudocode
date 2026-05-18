/*
 * XREFs of sub_180039000 @ 0x180039000
 * Callers:
 *     sub_180039260 @ 0x180039260 (sub_180039260.c)
 * Callees:
 *     sub_18001C190 @ 0x18001C190 (sub_18001C190.c)
 *     sub_18009F624 @ 0x18009F624 (sub_18009F624.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall sub_180039000(__int64 *a1, _QWORD *a2, __int64 a3)
{
  __int64 v6; // rdi
  __int64 v7; // rax

  v6 = 0LL;
  v7 = sub_18001C190();
  if ( v7 )
    v6 = sub_18009F624(v7, *a2, a3);
  *a1 = v6;
  return a1;
}
