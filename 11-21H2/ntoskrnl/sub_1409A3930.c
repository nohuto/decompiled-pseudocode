/*
 * XREFs of sub_1409A3930 @ 0x1409A3930
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     PsGetProcessId @ 0x140361530 (PsGetProcessId.c)
 *     sub_1409A3BE0 @ 0x1409A3BE0 (sub_1409A3BE0.c)
 *     sub_1409AA7A8 @ 0x1409AA7A8 (sub_1409AA7A8.c)
 */

__int64 __fastcall sub_1409A3930(PEPROCESS Process, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v5; // r14d
  unsigned int v8; // ebp
  struct _KTHREAD *CurrentThread; // rax
  HANDLE ProcessId; // rax

  v5 = *(_DWORD *)(a2 + 28);
  v8 = **(_DWORD **)(a2 + 16);
  if ( a4 == 1 )
  {
    CurrentThread = KeGetCurrentThread();
    --*((_WORD *)CurrentThread + 242);
    ExAcquireResourceExclusiveLite(&stru_140C1C020, 1u);
    sub_1409A3BE0(*(_QWORD *)(a2 + 16), a2);
    ExReleaseResourceLite(&stru_140C1C020);
    KeLeaveCriticalRegion();
  }
  ProcessId = PsGetProcessId(Process);
  return sub_1409AA7A8(v8, v5, ProcessId, a4);
}
