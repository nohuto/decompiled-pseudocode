/*
 * XREFs of sub_140663CC0 @ 0x140663CC0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     sub_140663D08 @ 0x140663D08 (sub_140663D08.c)
 */

__int64 __fastcall sub_140663CC0(int a1, int a2, int a3)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v4; // ebx

  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  v4 = sub_140663D08(a1, a2, a3, 0, 0, 0);
  sub_1402F9540((__int64)KeGetCurrentThread());
  return v4;
}
