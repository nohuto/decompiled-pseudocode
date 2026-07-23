/*
 * XREFs of sub_1405765B0 @ 0x1405765B0
 * Callers:
 *     KeSynchronizeExecution @ 0x140420B90 (KeSynchronizeExecution.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

char __fastcall sub_1405765B0(__int64 a1, __int64 a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v6; // rdx

  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  KeWaitForSingleObject(*(PVOID *)(a1 + 128), Executive, 0, 0, 0LL);
  LOBYTE(a3) = sub_14042A5E0(a3, v6);
  KeSetEvent(*(PRKEVENT *)(a1 + 128), 0, 0);
  sub_1402F9540((__int64)KeGetCurrentThread());
  return a3;
}
