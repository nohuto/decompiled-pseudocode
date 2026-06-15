/*
 * XREFs of ??1DeviceStateChangedContext@CMonitorManager@@QEAA@XZ @ 0x18012BF98
 * Callers:
 *     ??_GDeviceStateChangedContext@CMonitorManager@@QEAAPEAXI@Z @ 0x180084418 (--_GDeviceStateChangedContext@CMonitorManager@@QEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CMonitorManager::DeviceStateChangedContext::~DeviceStateChangedContext(
        CMonitorManager::DeviceStateChangedContext *this)
{
  struct _TP_WORK *v2; // rcx

  v2 = (struct _TP_WORK *)*((_QWORD *)this + 2);
  if ( v2 )
    CloseThreadpoolWork(v2);
  ATL::CStringData::Release((ATL::CStringData *)(*(_QWORD *)this - 24LL));
}
