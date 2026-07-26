/*
 * XREFs of ??0KPushLock@@QEAA@XZ @ 0x1C0139B7C
 * Callers:
 *     ??0_NDIS_MINIPORT_BLOCK@@QEAA@XZ @ 0x1C002F0D4 (--0_NDIS_MINIPORT_BLOCK@@QEAA@XZ.c)
 *     ?ndisBindInitialize@@YAJXZ @ 0x1C01616A8 (-ndisBindInitialize@@YAJXZ.c)
 * Callees:
 *     <none>
 */

KPushLock *__fastcall KPushLock::KPushLock(KPushLock *this)
{
  this->m_Lock.Value = 0LL;
  return this;
}
