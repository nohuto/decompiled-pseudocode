/*
 * XREFs of ?Attach@?$CComPtrBase@VCMonitorNotification@CMonitor@@@ATL@@QEAAXPEAVCMonitorNotification@CMonitor@@@Z @ 0x18012FED8
 * Callers:
 *     ?Initialize@CMonitor@@QEAAJPEAUIMMDevice@@0AEA_N@Z @ 0x1801302BC (-Initialize@CMonitor@@QEAAJPEAUIMMDevice@@0AEA_N@Z.c)
 * Callees:
 *     ?Release@CMonitorNotification@CMonitor@@UEAAKXZ @ 0x18012E880 (-Release@CMonitorNotification@CMonitor@@UEAAKXZ.c)
 */

__int64 __fastcall ATL::CComPtrBase<CMonitor::CMonitorNotification>::Attach(
        CMonitor::CMonitorNotification **a1,
        CMonitor::CMonitorNotification *a2)
{
  CMonitor::CMonitorNotification *v4; // rcx
  __int64 result; // rax

  v4 = *a1;
  if ( v4 )
    result = CMonitor::CMonitorNotification::Release(v4);
  *a1 = a2;
  return result;
}
