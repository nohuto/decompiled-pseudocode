/*
 * XREFs of ?Release@?$CComPtrBase@VCMonitorNotification@CMonitor@@@ATL@@QEAAXXZ @ 0x180131BCC
 * Callers:
 *     ?Terminate@CMonitor@@AEAAX_NPEAU_TP_CALLBACK_INSTANCE@@@Z @ 0x1801322E4 (-Terminate@CMonitor@@AEAAX_NPEAU_TP_CALLBACK_INSTANCE@@@Z.c)
 * Callees:
 *     ?Release@CMonitorNotification@CMonitor@@UEAAKXZ @ 0x18012E8D0 (-Release@CMonitorNotification@CMonitor@@UEAAKXZ.c)
 */

CMonitor::CMonitorNotification *__fastcall ATL::CComPtrBase<CMonitor::CMonitorNotification>::Release(
        CMonitor::CMonitorNotification **a1)
{
  CMonitor::CMonitorNotification *result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return (CMonitor::CMonitorNotification *)CMonitor::CMonitorNotification::Release(result);
  }
  return result;
}
