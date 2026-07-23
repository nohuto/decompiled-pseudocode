/*
 * XREFs of sub_14092AC20 @ 0x14092AC20
 * Callers:
 *     sub_1405E1764 @ 0x1405E1764 (sub_1405E1764.c)
 *     sub_14092A070 @ 0x14092A070 (sub_14092A070.c)
 *     sub_14092A168 @ 0x14092A168 (sub_14092A168.c)
 *     sub_14092A29C @ 0x14092A29C (sub_14092A29C.c)
 * Callees:
 *     sub_1402AC800 @ 0x1402AC800 (sub_1402AC800.c)
 *     sub_1406C03F0 @ 0x1406C03F0 (sub_1406C03F0.c)
 */

char __fastcall sub_14092AC20(ULONG_PTR a1)
{
  struct _KTHREAD *CurrentThread; // rbx

  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  if ( sub_1406C03F0(a1, 0) )
    return 1;
  sub_1402AC800((__int64)CurrentThread);
  return 0;
}
