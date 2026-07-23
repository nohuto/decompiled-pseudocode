/*
 * XREFs of sub_140966240 @ 0x140966240
 * Callers:
 *     <none>
 * Callees:
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     sub_140965C1C @ 0x140965C1C (sub_140965C1C.c)
 */

__int64 __fastcall sub_140966240(void *a1, unsigned __int64 a2, unsigned int a3, char *a4, SIZE_T a5, __int64 *a6)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v7; // ebx

  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  v7 = sub_140965C1C(1, a1, a2, a3, a4, a5, a6);
  sub_1402F9540((__int64)KeGetCurrentThread());
  return v7;
}
