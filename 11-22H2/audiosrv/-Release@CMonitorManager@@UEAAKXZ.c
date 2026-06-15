/*
 * XREFs of ?Release@CMonitorManager@@UEAAKXZ @ 0x1800040A0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180067028 (--3@YAXPEAX_K@Z.c)
 *     ??1CMonitorManager@@QEAA@XZ @ 0x18012BB80 (--1CMonitorManager@@QEAA@XZ.c)
 */

__int64 __fastcall CMonitorManager::Release(CMonitorManager *this)
{
  unsigned __int32 v2; // edi

  v2 = _InterlockedDecrement((volatile signed __int32 *)this + 2);
  if ( !v2 && this )
  {
    CMonitorManager::~CMonitorManager(this);
    operator delete(this, 0x178uLL);
  }
  return v2;
}
