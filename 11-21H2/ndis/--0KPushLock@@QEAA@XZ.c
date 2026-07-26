/*
 * XREFs of ??0KPushLock@@QEAA@XZ @ 0x1C012DD8C
 * Callers:
 *     ??0_NDIS_MINIPORT_BLOCK@@QEAA@XZ @ 0x1C002D47C (--0_NDIS_MINIPORT_BLOCK@@QEAA@XZ.c)
 *     ?ndisBindInitialize@@YAJXZ @ 0x1C01530E0 (-ndisBindInitialize@@YAJXZ.c)
 * Callees:
 *     <none>
 */

KPushLock *__fastcall KPushLock::KPushLock(KPushLock *this)
{
  this->m_Lock.Value = 0LL;
  return this;
}
