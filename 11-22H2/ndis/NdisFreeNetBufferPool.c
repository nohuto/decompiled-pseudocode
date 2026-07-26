/*
 * XREFs of NdisFreeNetBufferPool @ 0x1C00B45D0
 * Callers:
 *     <none>
 * Callees:
 *     ??1KAcquireSpinLock@@QEAA@XZ @ 0x1C0001A30 (--1KAcquireSpinLock@@QEAA@XZ.c)
 *     WPP_RECORDER_SF_q @ 0x1C000C0A0 (WPP_RECORDER_SF_q.c)
 *     ?ndisPplDestroyPool@@YAXPEAUPPL_POOL_HANDLE__@@K@Z @ 0x1C0014E08 (-ndisPplDestroyPool@@YAXPEAUPPL_POOL_HANDLE__@@K@Z.c)
 */

void __stdcall NdisFreeNetBufferPool(NDIS_HANDLE PoolHandle)
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
      0xDu,
      (struct _GUID *)&WPP_cd3cd4c8e5733a8d9138b29e4c73b290_Traceguids,
      PoolHandle);
  if ( PoolHandle )
  {
    v5.m_lock = (KSpinLockBase *)&qword_1C00F7140;
    v2 = KeAcquireSpinLockRaiseToDpc(&qword_1C00F7140);
    v3 = (NDIS_HANDLE *)*((_QWORD *)PoolHandle + 8);
    if ( v3[1] != (char *)PoolHandle + 64
      || (v4 = (NDIS_HANDLE *)*((_QWORD *)PoolHandle + 9), *v4 != (char *)PoolHandle + 64) )
    {
      __fastfail(3u);
    }
    *v4 = v3;
    v3[1] = v4;
    KeReleaseSpinLock(&qword_1C00F7140, v2);
    v5.m_oldIrql = -1;
    ndisPplDestroyPool((char *)PoolHandle);
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0x15u,
        0xEu,
        (struct _GUID *)&WPP_cd3cd4c8e5733a8d9138b29e4c73b290_Traceguids,
        PoolHandle,
        *(_QWORD *)&v5.m_oldIrql,
        v5.m_lock);
    KAcquireSpinLock::~KAcquireSpinLock(&v5);
  }
}
