/*
 * XREFs of sub_140601948 @ 0x140601948
 * Callers:
 *     sub_140A7F132 @ 0x140A7F132 (sub_140A7F132.c)
 *     sub_140A9EFF8 @ 0x140A9EFF8 (sub_140A9EFF8.c)
 *     sub_140AA144C @ 0x140AA144C (sub_140AA144C.c)
 * Callees:
 *     <none>
 */

__int64 sub_140601948()
{
  struct _KTHREAD *CurrentThread; // rcx
  struct _KTHREAD **v1; // rax

  CurrentThread = KeGetCurrentThread();
  v1 = (struct _KTHREAD **)&unk_140CE1DE8;
  while ( CurrentThread != *v1 )
  {
    v1 += 8;
    if ( (__int64)v1 >= (__int64)&unk_140CE1E68 )
      return 0LL;
  }
  return 1LL;
}
