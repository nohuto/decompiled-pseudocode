/*
 * XREFs of sub_140662090 @ 0x140662090
 * Callers:
 *     <none>
 * Callees:
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     sub_140663D08 @ 0x140663D08 (sub_140663D08.c)
 */

__int64 __fastcall sub_140662090(int a1, int a2, __int64 a3, int a4)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v5; // ebx

  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  v5 = sub_140663D08(a1, a2, 0, a4, 1, 1);
  sub_1402F9540((__int64)KeGetCurrentThread());
  return v5;
}
