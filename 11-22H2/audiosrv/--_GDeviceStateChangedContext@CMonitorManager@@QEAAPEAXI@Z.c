/*
 * XREFs of ??_GDeviceStateChangedContext@CMonitorManager@@QEAAPEAXI@Z @ 0x180084448
 * Callers:
 *     ?ProcessDeviceStateChanged@CMonitorManager@@AEAAXXZ @ 0x180006CA0 (-ProcessDeviceStateChanged@CMonitorManager@@AEAAXXZ.c)
 *     ?QueueDeviceStateChanged@CMonitorManager@@AEAAJKPEBG@Z @ 0x1800086E0 (-QueueDeviceStateChanged@CMonitorManager@@AEAAJKPEBG@Z.c)
 *     ??1?$CAutoPtr@UDeviceStateChangedContext@CMonitorManager@@@ATL@@QEAA@XZ @ 0x18012BAB8 (--1-$CAutoPtr@UDeviceStateChangedContext@CMonitorManager@@@ATL@@QEAA@XZ.c)
 *     ?FreeNode@?$CAtlList@V?$CAutoPtr@UDeviceStateChangedContext@CMonitorManager@@@ATL@@V?$CAutoPtrElementTraits@UDeviceStateChangedContext@CMonitorManager@@@2@@ATL@@AEAAXPEAVCNode@12@@Z @ 0x18012CFF4 (-FreeNode@-$CAtlList@V-$CAutoPtr@UDeviceStateChangedContext@CMonitorManager@@@ATL@@V-$CAutoPtrEl.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180067028 (--3@YAXPEAX_K@Z.c)
 *     ??1DeviceStateChangedContext@CMonitorManager@@QEAA@XZ @ 0x18012BFE8 (--1DeviceStateChangedContext@CMonitorManager@@QEAA@XZ.c)
 */

CMonitorManager::DeviceStateChangedContext *__fastcall CMonitorManager::DeviceStateChangedContext::`scalar deleting destructor'(
        CMonitorManager::DeviceStateChangedContext *this)
{
  CMonitorManager::DeviceStateChangedContext::~DeviceStateChangedContext(this);
  operator delete(this);
  return this;
}
