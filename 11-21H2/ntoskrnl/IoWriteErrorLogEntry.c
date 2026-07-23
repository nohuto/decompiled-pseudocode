/*
 * XREFs of IoWriteErrorLogEntry @ 0x1403A7210
 * Callers:
 *     sub_1405566C0 @ 0x1405566C0 (sub_1405566C0.c)
 *     sub_140611860 @ 0x140611860 (sub_140611860.c)
 *     FsRtlLogCcFlushError @ 0x14092D830 (FsRtlLogCcFlushError.c)
 *     sub_140934AB4 @ 0x140934AB4 (sub_140934AB4.c)
 *     sub_140947068 @ 0x140947068 (sub_140947068.c)
 *     sub_14096C4AC @ 0x14096C4AC (sub_14096C4AC.c)
 *     sub_14097E5C0 @ 0x14097E5C0 (sub_14097E5C0.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExQueueWorkItem @ 0x140345FC0 (ExQueueWorkItem.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __stdcall IoWriteErrorLogEntry(PVOID ElEntry)
{
  char *v1; // rbx
  unsigned __int64 v2; // rdi
  _QWORD *v3; // rax
  _QWORD *v4; // rbx
  bool v5; // zf
  void *v6; // rcx
  void *v7; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v10; // r9
  int v11; // eax

  v1 = (char *)ElEntry - 48;
  if ( byte_140C46C38 )
  {
    v6 = (void *)*((_QWORD *)v1 + 3);
    if ( v6 )
      ObfDereferenceObject(v6);
    v7 = (void *)*((_QWORD *)v1 + 4);
    if ( v7 )
      ObfDereferenceObject(v7);
    _InterlockedExchangeAdd(&dword_140C46D00, -*((unsigned __int16 *)v1 + 1));
    ExFreePoolWithTag(v1, 0);
  }
  else
  {
    *((_QWORD *)v1 + 5) = MEMORY[0xFFFFF78000000014];
    v2 = KeAcquireSpinLockRaiseToDpc(&qword_140D31180);
    v3 = (_QWORD *)qword_140C46FF8;
    v4 = v1 + 8;
    if ( *(__int64 **)qword_140C46FF8 != &qword_140C46FF0 )
      __fastfail(3u);
    v5 = byte_140C46C39 == 0;
    *v4 = &qword_140C46FF0;
    v4[1] = v3;
    *v3 = v4;
    qword_140C46FF8 = (__int64)v4;
    if ( v5 )
    {
      stru_140C46C40.Parameter = 0LL;
      stru_140C46C40.List.Flink = 0LL;
      stru_140C46C40.WorkerRoutine = (PWORKER_THREAD_ROUTINE)sub_14080FDC0;
      byte_140C46C39 = 1;
      ExQueueWorkItem(&stru_140C46C40, DelayedWorkQueue);
    }
    KeReleaseSpinLockFromDpcLevel(&qword_140D31180);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v2 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v10 = *((_QWORD *)CurrentPrcb + 4375);
          v11 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v2 + 1));
          v5 = (v11 & *(_DWORD *)(v10 + 20)) == 0;
          *(_DWORD *)(v10 + 20) &= v11;
          if ( v5 )
            sub_140418E4C(CurrentPrcb);
        }
      }
    }
    __writecr8(v2);
  }
}
