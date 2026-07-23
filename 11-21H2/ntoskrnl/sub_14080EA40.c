/*
 * XREFs of sub_14080EA40 @ 0x14080EA40
 * Callers:
 *     sub_1402D5CA8 @ 0x1402D5CA8 (sub_1402D5CA8.c)
 *     sub_1403A55B8 @ 0x1403A55B8 (sub_1403A55B8.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     ExQueueWorkItem @ 0x140345FC0 (ExQueueWorkItem.c)
 *     sub_14080EB6C @ 0x14080EB6C (sub_14080EB6C.c)
 *     sub_14080EBD0 @ 0x14080EBD0 (sub_14080EBD0.c)
 */

void __fastcall sub_14080EA40(__int64 a1, int a2)
{
  struct _KTHREAD *CurrentThread; // rax
  PVOID *i; // rbx
  int *v6; // rcx
  _QWORD *v7; // rax
  int v8; // edx
  int v9; // r8d
  __int64 v10; // rcx
  bool v11; // zf

  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  ExAcquireResourceExclusiveLite(&stru_140C46040, 1u);
  for ( i = (PVOID *)qword_140C46130; ; i = (PVOID *)*i )
  {
    if ( i == &qword_140C46130 )
      goto LABEL_14;
    if ( !*((_BYTE *)i + 104) && (int)sub_14080EB6C(i[8], a1) >= 0 )
    {
      v6 = *(int **)i[8];
      v7 = i[7];
      v8 = v6[2];
      v9 = *v6;
      v10 = v7 ? *(_QWORD *)(v7[39] + 40LL) : 0LL;
      if ( v8 == v9 && *(_DWORD *)(v10 + 300) != 784 )
        break;
    }
  }
  v11 = byte_140C548D9 == 0;
  *((_BYTE *)i + 104) = 1;
  if ( !v11 )
  {
LABEL_14:
    ExReleaseResourceLite(&stru_140C46040);
    KeLeaveCriticalRegion();
    return;
  }
  byte_140C548D9 = 1;
  ExReleaseResourceLite(&stru_140C46040);
  KeLeaveCriticalRegion();
  if ( a2 && *((PEPROCESS *)KeGetCurrentThread() + 23) == PsInitialSystemProcess )
  {
    sub_14080EBD0(0LL);
  }
  else
  {
    stru_140C467A0.Parameter = 0LL;
    stru_140C467A0.List.Flink = 0LL;
    stru_140C467A0.WorkerRoutine = (PWORKER_THREAD_ROUTINE)sub_14080EBD0;
    ExQueueWorkItem(&stru_140C467A0, DelayedWorkQueue);
  }
}
