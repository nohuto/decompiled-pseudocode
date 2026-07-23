/*
 * XREFs of sub_1409B2A10 @ 0x1409B2A10
 * Callers:
 *     <none>
 * Callees:
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     sub_1407D7E94 @ 0x1407D7E94 (sub_1407D7E94.c)
 */

__int64 __fastcall sub_1409B2A10(__int64 a1, unsigned int a2)
{
  struct _KTHREAD *CurrentThread; // rdi
  unsigned int v3; // ebx

  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  v3 = sub_1407D7E94(a1, (__int64)CurrentThread, a2, 8);
  sub_1402F9540((__int64)CurrentThread);
  return v3;
}
