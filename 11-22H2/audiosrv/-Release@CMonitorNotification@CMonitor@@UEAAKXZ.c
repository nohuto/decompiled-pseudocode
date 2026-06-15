/*
 * XREFs of ?Release@CMonitorNotification@CMonitor@@UEAAKXZ @ 0x18012E8D0
 * Callers:
 *     ??1CMonitor@@IEAA@XZ @ 0x18012FD60 (--1CMonitor@@IEAA@XZ.c)
 *     ?Attach@?$CComPtrBase@VCMonitorNotification@CMonitor@@@ATL@@QEAAXPEAVCMonitorNotification@CMonitor@@@Z @ 0x18012FF28 (-Attach@-$CComPtrBase@VCMonitorNotification@CMonitor@@@ATL@@QEAAXPEAVCMonitorNotification@CMonit.c)
 *     ?Release@?$CComPtrBase@VCMonitorNotification@CMonitor@@@ATL@@QEAAXXZ @ 0x180131BCC (-Release@-$CComPtrBase@VCMonitorNotification@CMonitor@@@ATL@@QEAAXXZ.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180067028 (--3@YAXPEAX_K@Z.c)
 */

__int64 __fastcall CMonitor::CMonitorNotification::Release(CMonitor::CMonitorNotification *this)
{
  unsigned __int32 v1; // ebx

  v1 = _InterlockedDecrement((volatile signed __int32 *)this + 5);
  if ( !v1 && this )
  {
    *(_QWORD *)this = &CMonitor::CMonitorNotification::`vftable';
    operator delete(this);
  }
  return v1;
}
