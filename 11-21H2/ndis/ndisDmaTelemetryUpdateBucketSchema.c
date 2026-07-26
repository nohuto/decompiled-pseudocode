/*
 * XREFs of ndisDmaTelemetryUpdateBucketSchema @ 0x1C0031F28
 * Callers:
 *     ndisDmaTelemetryKnobsUpdateRoutine @ 0x1C00CB090 (ndisDmaTelemetryKnobsUpdateRoutine.c)
 *     DriverEntry @ 0x1C0153778 (DriverEntry.c)
 * Callees:
 *     ?UpdateBucketSchema@Bucketizer@@QEAAX_K@Z @ 0x1C0031FC0 (-UpdateBucketSchema@Bucketizer@@QEAAX_K@Z.c)
 *     ?TlgAggregateInternalFlushTimerCallbackKernelMode@@YAXPEAU_EX_TIMER@@PEAX@Z @ 0x1C00CD960 (-TlgAggregateInternalFlushTimerCallbackKernelMode@@YAXPEAU_EX_TIMER@@PEAX@Z.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C010C60C (--1KLockHolder@@QEAA@XZ.c)
 *     ?AcquireExclusive@KLockHolder@@QEAAXXZ @ 0x1C010C668 (-AcquireExclusive@KLockHolder@@QEAAXXZ.c)
 *     LookUpTableFlushComplete @ 0x1C01147D0 (LookUpTableFlushComplete.c)
 */

void __fastcall ndisDmaTelemetryUpdateBucketSchema(unsigned __int64 a1)
{
  Bucketizer *v2; // rcx
  __int64 v3; // rbx
  void *v4; // rdx
  struct _EX_TIMER *v5; // rcx
  KLockHolder v6; // [rsp+20h] [rbp-28h] BYREF

  v6.m_State = Unlocked;
  v6.m_Lock = (KPushLockBase *)&unk_1C00ECDF8;
  v6.m_Region.m_Entered = 0;
  KLockHolder::AcquireExclusive(&v6);
  if ( (void (__fastcall *)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *))qword_1C00EB5F0 == TlgAggregateInternalRegisteredProviderEtwCallback )
  {
    v3 = qword_1C00EB5F8;
    if ( KeGetCurrentIrql() >= 2u || (unsigned int)KeIsExecutingDpc() )
    {
      v4 = *(void **)(v3 + 264);
      v5 = *(struct _EX_TIMER **)(v3 + 360);
      *(_BYTE *)(v3 + 372) = 1;
      TlgAggregateInternalFlushTimerCallbackKernelMode(v5, v4);
    }
    else
    {
      LookUpTableFlushComplete(v3);
    }
  }
  Bucketizer::UpdateBucketSchema(v2, a1);
  KLockHolder::~KLockHolder(&v6);
}
