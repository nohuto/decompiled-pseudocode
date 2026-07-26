/*
 * XREFs of ??0KPushLock@@QEAA@XZ @ 0x1C0139B9C
 * Callers:
 *     ??0_NDIS_MINIPORT_BLOCK@@QEAA@XZ @ 0x1C002EF44 (--0_NDIS_MINIPORT_BLOCK@@QEAA@XZ.c)
 *     ?ndisBindInitialize@@YAJXZ @ 0x1C01616A8 (-ndisBindInitialize@@YAJXZ.c)
 * Callees:
 *     <none>
 */

KPushLock *__fastcall KPushLock::KPushLock(KPushLock *this)
{
  this->m_Lock.Value = 0LL;
  return this;
}
