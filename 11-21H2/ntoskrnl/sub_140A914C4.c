/*
 * XREFs of sub_140A914C4 @ 0x140A914C4
 * Callers:
 *     sub_140A91368 @ 0x140A91368 (sub_140A91368.c)
 * Callees:
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     KeSetPriorityThread @ 0x140344340 (KeSetPriorityThread.c)
 *     KeQueryPriorityThread @ 0x14035D5C0 (KeQueryPriorityThread.c)
 *     sub_1405FF994 @ 0x1405FF994 (sub_1405FF994.c)
 */

__int64 __fastcall sub_140A914C4(signed __int64 a1)
{
  KPRIORITY PriorityThread; // eax
  struct _KTHREAD *CurrentThread; // rdx
  KPRIORITY v4; // edi
  unsigned int v5; // eax
  __int64 v7; // rbx

  if ( !dword_140C1ADD8 )
    return 0LL;
  PriorityThread = KeQueryPriorityThread(KeGetCurrentThread());
  CurrentThread = KeGetCurrentThread();
  v4 = PriorityThread;
  --*((_WORD *)CurrentThread + 242);
  v5 = sub_1405FF994(a1);
  if ( v5 == -1 )
  {
    sub_1402F9540((__int64)KeGetCurrentThread());
    return 0LL;
  }
  v7 = 48LL * v5;
  KeSetPriorityThread(*(PKTHREAD *)((char *)&unk_140C1AE20 + v7), v4);
  KeSetEvent((PRKEVENT)((char *)&unk_140C1AE20 + v7 + 16), 0, 0);
  sub_1402F9540((__int64)KeGetCurrentThread());
  return 1LL;
}
