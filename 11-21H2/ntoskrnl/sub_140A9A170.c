/*
 * XREFs of sub_140A9A170 @ 0x140A9A170
 * Callers:
 *     sub_140A97900 @ 0x140A97900 (sub_140A97900.c)
 *     sub_140A985B4 @ 0x140A985B4 (sub_140A985B4.c)
 * Callees:
 *     sub_140601864 @ 0x140601864 (sub_140601864.c)
 *     sub_1406018DC @ 0x1406018DC (sub_1406018DC.c)
 *     sub_140A994C4 @ 0x140A994C4 (sub_140A994C4.c)
 *     sub_140A994FC @ 0x140A994FC (sub_140A994FC.c)
 *     sub_140A9A000 @ 0x140A9A000 (sub_140A9A000.c)
 */

_BOOL8 sub_140A9A170()
{
  struct _KTHREAD *CurrentThread; // rbx
  BOOL v1; // edi
  unsigned __int8 v2; // si
  _QWORD *v3; // rax

  CurrentThread = KeGetCurrentThread();
  v1 = 0;
  v2 = sub_1406018DC();
  sub_140A994C4(0);
  v3 = sub_140A9A000((unsigned __int64)CurrentThread);
  if ( v3 )
    v1 = *((_DWORD *)v3 + 11) != 0;
  sub_140A994FC(0);
  sub_140601864(v2);
  return v1;
}
