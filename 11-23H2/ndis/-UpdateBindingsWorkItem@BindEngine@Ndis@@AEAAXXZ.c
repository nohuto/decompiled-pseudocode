/*
 * XREFs of ?UpdateBindingsWorkItem@BindEngine@Ndis@@AEAAXXZ @ 0x1C01176E0
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateBindings@BindEngine@Ndis@@AEAAXAEAVKLockThisExclusive@@@Z @ 0x1C01135AC (-UpdateBindings@BindEngine@Ndis@@AEAAXAEAVKLockThisExclusive@@@Z.c)
 *     ?ReleaseExclusive@KLockHolder@@QEAAXXZ @ 0x1C01171BC (-ReleaseExclusive@KLockHolder@@QEAAXXZ.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C0117B50 (--1KLockHolder@@QEAA@XZ.c)
 *     ?AcquireExclusive@KLockHolder@@QEAAXXZ @ 0x1C0117BAC (-AcquireExclusive@KLockHolder@@QEAAXXZ.c)
 */

void __fastcall Ndis::BindEngine::UpdateBindingsWorkItem(Ndis::BindEngine *this)
{
  KWaitEvent *m_removeReadyEvent; // rbx
  KLockHolder v3; // [rsp+20h] [rbp-28h] BYREF

  v3.m_State = Unlocked;
  this->m_bindThread = KeGetCurrentThread();
  v3.m_Lock = &this->m_lock;
  v3.m_Region.m_Entered = 0;
  KLockHolder::AcquireExclusive(&v3);
  Ndis::BindEngine::UpdateBindings(this, (struct KLockThisExclusive *)&v3);
  m_removeReadyEvent = this->m_removeReadyEvent;
  KLockHolder::ReleaseExclusive(&v3);
  if ( m_removeReadyEvent )
    KeSetEvent(&this->m_removeReadyEvent->m_event, 0, 0);
  KLockHolder::~KLockHolder(&v3);
}
