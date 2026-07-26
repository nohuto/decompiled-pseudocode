/*
 * XREFs of NdisFreeNetBufferListPool @ 0x1C0015BD0
 * Callers:
 *     ndisUnloadPeriodicReceives @ 0x1C0164330 (ndisUnloadPeriodicReceives.c)
 * Callees:
 *     ??1KAcquireSpinLock@@QEAA@XZ @ 0x1C0001A30 (--1KAcquireSpinLock@@QEAA@XZ.c)
 *     WPP_RECORDER_SF_q @ 0x1C000C230 (WPP_RECORDER_SF_q.c)
 *     ?ndisPplDestroyPool@@YAXPEAUPPL_POOL_HANDLE__@@K@Z @ 0x1C0014F98 (-ndisPplDestroyPool@@YAXPEAUPPL_POOL_HANDLE__@@K@Z.c)
 */

void __stdcall NdisFreeNetBufferListPool(NDIS_HANDLE PoolHandle)
{
  KIRQL v2; // al
  NDIS_HANDLE *v3; // r9
  NDIS_HANDLE *v4; // r8
  KAcquireSpinLock v5; // [rsp+30h] [rbp-18h] BYREF

  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x15u,
      0xFu,
      (struct _GUID *)&WPP_82356f6a26f43913dc7d269f99b45093_Traceguids,
      PoolHandle);
  if ( PoolHandle )
  {
    v5.m_lock = (KSpinLockBase *)&qword_1C00F5E50;
    v2 = KeAcquireSpinLockRaiseToDpc(&qword_1C00F5E50);
    v3 = (NDIS_HANDLE *)*((_QWORD *)PoolHandle + 9);
    if ( v3[1] != (char *)PoolHandle + 72
      || (v4 = (NDIS_HANDLE *)*((_QWORD *)PoolHandle + 10), *v4 != (char *)PoolHandle + 72) )
    {
      __fastfail(3u);
    }
    *v4 = v3;
    v3[1] = v4;
    KeReleaseSpinLock(&qword_1C00F5E50, v2);
    v5.m_oldIrql = -1;
    ndisPplDestroyPool((char *)PoolHandle);
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0x15u,
        0x10u,
        (struct _GUID *)&WPP_82356f6a26f43913dc7d269f99b45093_Traceguids,
        PoolHandle,
        *(_QWORD *)&v5.m_oldIrql,
        v5.m_lock);
    KAcquireSpinLock::~KAcquireSpinLock(&v5);
  }
}
