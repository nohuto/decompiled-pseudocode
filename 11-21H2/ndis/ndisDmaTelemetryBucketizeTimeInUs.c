/*
 * XREFs of ndisDmaTelemetryBucketizeTimeInUs @ 0x1C00CB01C
 * Callers:
 *     ??1NdisAllocateSharedMemoryTelemetry@@QEAA@XZ @ 0x1C00CAB10 (--1NdisAllocateSharedMemoryTelemetry@@QEAA@XZ.c)
 *     ??1NdisFreeSharedMemoryTelemetry@@QEAA@XZ @ 0x1C00CAC20 (--1NdisFreeSharedMemoryTelemetry@@QEAA@XZ.c)
 * Callees:
 *     ?AcquireShared@KLockHolder@@QEAAXXZ @ 0x1C010B2CC (-AcquireShared@KLockHolder@@QEAAXXZ.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C010C60C (--1KLockHolder@@QEAA@XZ.c)
 */

unsigned __int8 __fastcall ndisDmaTelemetryBucketizeTimeInUs(unsigned __int64 a1)
{
  unsigned __int8 v2; // bl
  KLockHolder v4; // [rsp+20h] [rbp-28h] BYREF

  v2 = 0;
  v4.m_Lock = (KPushLockBase *)&unk_1C00ECDF8;
  v4.m_State = Unlocked;
  v4.m_Region.m_Entered = 0;
  KLockHolder::AcquireShared(&v4);
  if ( byte_1C00EE528 )
  {
    while ( qword_1C00EE328[v2] <= a1 )
    {
      if ( ++v2 >= (unsigned __int8)byte_1C00EE528 )
        goto LABEL_4;
    }
  }
  else
  {
LABEL_4:
    v2 = byte_1C00EE528;
  }
  KLockHolder::~KLockHolder(&v4);
  return v2;
}
