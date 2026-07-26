/*
 * XREFs of NdisFreeNetBufferListPool @ 0x1C0017450
 * Callers:
 *     ndisUnloadPeriodicReceives @ 0x1C0157260 (ndisUnloadPeriodicReceives.c)
 * Callees:
 *     ??1KAcquireSpinLock@@QEAA@XZ @ 0x1C0004980 (--1KAcquireSpinLock@@QEAA@XZ.c)
 *     WPP_RECORDER_SF_q @ 0x1C000C990 (WPP_RECORDER_SF_q.c)
 *     ?ndisPplDestroyPool@@YAXPEAUPPL_POOL_HANDLE__@@K@Z @ 0x1C0017560 (-ndisPplDestroyPool@@YAXPEAUPPL_POOL_HANDLE__@@K@Z.c)
 */

void __stdcall NdisFreeNetBufferListPool(NDIS_HANDLE PoolHandle)
{
  KIRQL v2; // al
  NDIS_HANDLE *v3; // r9
  NDIS_HANDLE *v4; // r8
  unsigned int v5; // edx
  KAcquireSpinLock v6; // [rsp+30h] [rbp-18h] BYREF

  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x15u,
      0xFu,
      (struct _GUID *)&WPP_efbf28d9260935c89d2bbaa18add4d77_Traceguids,
      PoolHandle);
  if ( PoolHandle )
  {
    v6.m_lock = (KSpinLockBase *)&qword_1C00ECE48;
    v2 = KeAcquireSpinLockRaiseToDpc(&qword_1C00ECE48);
    v3 = (NDIS_HANDLE *)*((_QWORD *)PoolHandle + 9);
    if ( v3[1] != (char *)PoolHandle + 72
      || (v4 = (NDIS_HANDLE *)*((_QWORD *)PoolHandle + 10), *v4 != (char *)PoolHandle + 72) )
    {
      __fastfail(3u);
    }
    *v4 = v3;
    v3[1] = v4;
    KeReleaseSpinLock(&qword_1C00ECE48, v2);
    v6.m_oldIrql = -1;
    ndisPplDestroyPool(PoolHandle, v5);
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0x15u,
        0x10u,
        (struct _GUID *)&WPP_efbf28d9260935c89d2bbaa18add4d77_Traceguids,
        PoolHandle,
        *(_QWORD *)&v6.m_oldIrql,
        v6.m_lock);
    KAcquireSpinLock::~KAcquireSpinLock(&v6);
  }
}
