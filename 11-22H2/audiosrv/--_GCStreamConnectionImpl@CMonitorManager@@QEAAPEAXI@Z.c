/*
 * XREFs of ??_GCStreamConnectionImpl@CMonitorManager@@QEAAPEAXI@Z @ 0x18012C1C4
 * Callers:
 *     ?_Destroy@?$_Ref_count@VCStreamConnectionImpl@CMonitorManager@@@std@@EEAAXXZ @ 0x18012F8D0 (-_Destroy@-$_Ref_count@VCStreamConnectionImpl@CMonitorManager@@@std@@EEAAXXZ.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180067028 (--3@YAXPEAX_K@Z.c)
 *     ??1CStreamConnectionImpl@CMonitorManager@@QEAA@XZ @ 0x18012BCCC (--1CStreamConnectionImpl@CMonitorManager@@QEAA@XZ.c)
 */

CMonitorManager::CStreamConnectionImpl *__fastcall CMonitorManager::CStreamConnectionImpl::`scalar deleting destructor'(
        CMonitorManager::CStreamConnectionImpl *this)
{
  CMonitorManager::CStreamConnectionImpl::~CStreamConnectionImpl(this);
  operator delete(this);
  return this;
}
