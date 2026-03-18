/*
 * XREFs of ?UnLockExclusive@CInpPushLock@@QEAAXXZ @ 0x1C0044EA0
 * Callers:
 *     RIMDirectStartStopDeviceRead @ 0x1C0047820 (RIMDirectStartStopDeviceRead.c)
 *     _lambda_5c36fc9d148e2df7cc7307bbce248cb9_::operator() @ 0x1C00DBEA8 (_lambda_5c36fc9d148e2df7cc7307bbce248cb9_--operator().c)
 *     ?DequeueMouseEvents@CMouseProcessor@@AEAA_KPEAURawMouseEvent@1@@Z @ 0x1C00DCE50 (-DequeueMouseEvents@CMouseProcessor@@AEAA_KPEAURawMouseEvent@1@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CInpPushLock::UnLockExclusive(CInpPushLock *this)
{
  *((_QWORD *)this + 1) = 0LL;
  ExReleasePushLockExclusiveEx(this, 0LL);
  KeLeaveCriticalRegion();
}
