/*
 * XREFs of ndisDmaTelemetryBucketizeTimeInUs @ 0x1C00CFCD0
 * Callers:
 *     ??1NdisAllocateSharedMemoryTelemetry@@QEAA@XZ @ 0x1C00CF7C4 (--1NdisAllocateSharedMemoryTelemetry@@QEAA@XZ.c)
 *     ??1NdisFreeSharedMemoryTelemetry@@QEAA@XZ @ 0x1C00CF8D4 (--1NdisFreeSharedMemoryTelemetry@@QEAA@XZ.c)
 * Callees:
 *     ?AcquireShared@KLockHolder@@QEAAXXZ @ 0x1C011207C (-AcquireShared@KLockHolder@@QEAAXXZ.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C0117B90 (--1KLockHolder@@QEAA@XZ.c)
 */

unsigned __int8 __fastcall ndisDmaTelemetryBucketizeTimeInUs(unsigned __int64 a1)
{
  unsigned __int8 v2; // bl
  KLockHolder v4; // [rsp+20h] [rbp-28h] BYREF

  v2 = 0;
  v4.m_Lock = (KPushLockBase *)&unk_1C00F7210;
  v4.m_State = Unlocked;
  v4.m_Region.m_Entered = 0;
  KLockHolder::AcquireShared(&v4);
  if ( byte_1C00F7578 )
  {
    while ( qword_1C00F7378[v2] <= a1 )
    {
      if ( ++v2 >= (unsigned __int8)byte_1C00F7578 )
        goto LABEL_4;
    }
  }
  else
  {
LABEL_4:
    v2 = byte_1C00F7578;
  }
  KLockHolder::~KLockHolder(&v4);
  return v2;
}
