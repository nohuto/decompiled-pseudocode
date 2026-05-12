/*
 * XREFs of RaUnitSendInstanceCounters @ 0x1C005E484
 * Callers:
 *     RaUnitQueueCounterSetCallback @ 0x1C005E270 (RaUnitQueueCounterSetCallback.c)
 *     RaUnitReadIoCounterSetCallback @ 0x1C005E2B0 (RaUnitReadIoCounterSetCallback.c)
 *     RaUnitTransferIoCounterSetCallback @ 0x1C0060510 (RaUnitTransferIoCounterSetCallback.c)
 *     RaUnitWriteIoCounterSetCallback @ 0x1C0060680 (RaUnitWriteIoCounterSetCallback.c)
 * Callees:
 *     RaUnitReleaseRemoveLock @ 0x1C00070DC (RaUnitReleaseRemoveLock.c)
 *     RaidAllocatePool @ 0x1C0007B34 (RaidAllocatePool.c)
 *     _guard_dispatch_icall_nop @ 0x1C00235E0 (_guard_dispatch_icall_nop.c)
 *     RaGetUnitPerfCounterIdString @ 0x1C00571FC (RaGetUnitPerfCounterIdString.c)
 *     RaUnitGetInstances @ 0x1C005DD38 (RaUnitGetInstances.c)
 */

__int64 RaUnitSendInstanceCounters(
        int a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        void (__fastcall *a5)(__int64, __int64, _QWORD, char *),
        void (__fastcall *a6)(_QWORD, struct _UNICODE_STRING *, _QWORD, __int64),
        ...)
{
  int Instances; // ebx
  __int64 Pool; // rax
  __int64 *v10; // rdi
  __int64 *v11; // r14
  __int64 v12; // r15
  __int64 v13; // rsi
  __int64 v14; // r9
  int v16; // [rsp+30h] [rbp-28h] BYREF
  __int64 *v17; // [rsp+38h] [rbp-20h]
  struct _UNICODE_STRING P; // [rsp+40h] [rbp-18h] BYREF
  va_list va; // [rsp+D0h] [rbp+78h] BYREF

  va_start(va, a6);
  v17 = 0LL;
  v16 = 0;
  Instances = 0;
  P = 0LL;
  if ( (unsigned int)(a1 - 2) <= 1 )
  {
    Instances = RaUnitGetInstances(0LL, (unsigned int *)&v16);
    if ( Instances >= 0 )
    {
      if ( v16 )
      {
        Pool = RaidAllocatePool(64LL, 8LL * (unsigned int)v16, 1700028754LL, 0LL);
        v17 = (__int64 *)Pool;
        v10 = (__int64 *)Pool;
        if ( Pool )
        {
          Instances = RaUnitGetInstances(Pool, (unsigned int *)&v16);
          if ( Instances >= 0 && v16 )
          {
            v11 = v10;
            v12 = (unsigned int)v16;
            v16 = 0;
            do
            {
              v13 = *v11;
              if ( (int)RaGetUnitPerfCounterIdString(*v11, &P) >= 0 )
              {
                if ( a1 == 2 )
                {
                  v14 = 0LL;
                }
                else
                {
                  a5(v13, a3, a4, va);
                  v14 = a3;
                }
                a6(*(_QWORD *)(a2 + 24), &P, *(unsigned int *)(v13 + 3488), v14);
              }
              if ( P.Buffer )
              {
                ExFreePoolWithTag(P.Buffer, 0x49446152u);
                P = 0LL;
              }
              RaUnitReleaseRemoveLock(v13);
              ++v11;
              --v12;
            }
            while ( v12 );
            Instances = v16;
            v10 = v17;
          }
          ExFreePoolWithTag(v10, 0x65546152u);
        }
        else
        {
          return (unsigned int)-1073741801;
        }
      }
    }
  }
  return (unsigned int)Instances;
}
