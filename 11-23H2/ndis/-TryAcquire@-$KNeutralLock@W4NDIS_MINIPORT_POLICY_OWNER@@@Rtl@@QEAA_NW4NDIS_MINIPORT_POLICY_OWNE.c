/*
 * XREFs of ?TryAcquire@?$KNeutralLock@W4NDIS_MINIPORT_POLICY_OWNER@@@Rtl@@QEAA_NW4NDIS_MINIPORT_POLICY_OWNER@@@Z @ 0x1C01163A4
 * Callers:
 *     ?Acquire@?$KNeutralLock@W4NDIS_MINIPORT_POLICY_OWNER@@@Rtl@@QEAAXW4NDIS_MINIPORT_POLICY_OWNER@@@Z @ 0x1C0110340 (-Acquire@-$KNeutralLock@W4NDIS_MINIPORT_POLICY_OWNER@@@Rtl@@QEAAXW4NDIS_MINIPORT_POLICY_OWNER@@@.c)
 *     ?UpdateBindings@BindEngine@Ndis@@AEAAXAEAVKLockThisExclusive@@@Z @ 0x1C01135AC (-UpdateBindings@BindEngine@Ndis@@AEAAXAEAVKLockThisExclusive@@@Z.c)
 * Callees:
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C0117B50 (--1KLockHolder@@QEAA@XZ.c)
 *     ?AcquireExclusive@KLockHolder@@QEAAXXZ @ 0x1C0117BAC (-AcquireExclusive@KLockHolder@@QEAAXXZ.c)
 */

char __fastcall Rtl::KNeutralLock<enum NDIS_MINIPORT_POLICY_OWNER>::TryAcquire(__int64 a1, int a2)
{
  char v2; // bl
  KLockHolder v6; // [rsp+20h] [rbp-28h] BYREF

  v2 = 0;
  v6.m_State = Unlocked;
  v6.m_Lock = (KPushLockBase *)(a1 + 8);
  v6.m_Region.m_Entered = 0;
  KLockHolder::AcquireExclusive(&v6);
  if ( KeReadStateEvent((PRKEVENT)(a1 + 16)) )
  {
    KeClearEvent((PRKEVENT)(a1 + 16));
    *(_DWORD *)a1 = a2;
    v2 = 1;
  }
  KLockHolder::~KLockHolder(&v6);
  return v2;
}
