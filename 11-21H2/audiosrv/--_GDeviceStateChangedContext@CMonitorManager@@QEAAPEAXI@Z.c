/*
 * XREFs of ??_GDeviceStateChangedContext@CMonitorManager@@QEAAPEAXI@Z @ 0x180119AB8
 * Callers:
 *     ??1?$CAutoPtr@UDeviceStateChangedContext@CMonitorManager@@@ATL@@QEAA@XZ @ 0x18011946C (--1-$CAutoPtr@UDeviceStateChangedContext@CMonitorManager@@@ATL@@QEAA@XZ.c)
 *     ?FreeNode@?$CAtlList@V?$CAutoPtr@UDeviceStateChangedContext@CMonitorManager@@@ATL@@V?$CAutoPtrElementTraits@UDeviceStateChangedContext@CMonitorManager@@@2@@ATL@@AEAAXPEAVCNode@12@@Z @ 0x18011B728 (-FreeNode@-$CAtlList@V-$CAutoPtr@UDeviceStateChangedContext@CMonitorManager@@@ATL@@V-$CAutoPtrEl.c)
 *     ?ProcessDeviceStateChanged@CMonitorManager@@AEAAXXZ @ 0x18011DF40 (-ProcessDeviceStateChanged@CMonitorManager@@AEAAXXZ.c)
 *     ?QueueDeviceStateChanged@CMonitorManager@@AEAAJKPEBG@Z @ 0x18011E2C8 (-QueueDeviceStateChanged@CMonitorManager@@AEAAJKPEBG@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18005EFB8 (--3@YAXPEAX_K@Z.c)
 *     ??1DeviceStateChangedContext@CMonitorManager@@QEAA@XZ @ 0x180119878 (--1DeviceStateChangedContext@CMonitorManager@@QEAA@XZ.c)
 */

CMonitorManager::DeviceStateChangedContext *__fastcall CMonitorManager::DeviceStateChangedContext::`scalar deleting destructor'(
        CMonitorManager::DeviceStateChangedContext *this)
{
  CMonitorManager::DeviceStateChangedContext::~DeviceStateChangedContext(this);
  operator delete(this);
  return this;
}
