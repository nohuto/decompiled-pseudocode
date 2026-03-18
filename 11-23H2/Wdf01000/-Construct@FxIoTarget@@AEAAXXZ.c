/*
 * XREFs of ?Construct@FxIoTarget@@AEAAXXZ @ 0x1C0052960
 * Callers:
 *     ??0FxIoTarget@@QEAA@PEAU_FX_DRIVER_GLOBALS@@G@Z @ 0x1C00525C4 (--0FxIoTarget@@QEAA@PEAU_FX_DRIVER_GLOBALS@@G@Z.c)
 *     ??0FxIoTarget@@QEAA@PEAU_FX_DRIVER_GLOBALS@@GG@Z @ 0x1C0052648 (--0FxIoTarget@@QEAA@PEAU_FX_DRIVER_GLOBALS@@GG@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall FxIoTarget::Construct(FxIoTarget *this)
{
  this->m_TransactionedEntry.m_TransactionedObject = this;
  this->m_SentIoListHead.Blink = &this->m_SentIoListHead;
  this->m_SentIoListHead.Flink = &this->m_SentIoListHead;
  this->m_IgnoredIoListHead.Blink = &this->m_IgnoredIoListHead;
  this->m_IgnoredIoListHead.Flink = &this->m_IgnoredIoListHead;
  this->m_Driver = 0LL;
  this->m_InStackDevice = 0LL;
  this->m_TargetDevice = 0LL;
  this->m_TargetPdo = 0LL;
  this->m_TargetFileObject = 0LL;
  this->m_DisposeEvent = 0LL;
  *(_WORD *)&this->m_InStack = 1;
  this->m_State = WdfIoTargetStarted;
  *(_QWORD *)&this->m_IoCount = 1LL;
  this->m_PendedQueue.m_CancelCallback = FxIoTarget::_RequestCancelled;
  this->m_PendedQueue.m_LockObject = this;
  this->m_ObjectFlags |= 0x810u;
}
