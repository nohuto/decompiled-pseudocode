/*
 * XREFs of ??_GCreateMonitorContext@@QEAAPEAXI@Z @ 0x18012C1A0
 * Callers:
 *     ?CreateMonitorForCaptureDeviceIfAppropriate@CMonitorManager@@AEAAJPEAUIMMDevice@@@Z @ 0x18000680C (-CreateMonitorForCaptureDeviceIfAppropriate@CMonitorManager@@AEAAJPEAUIMMDevice@@@Z.c)
 *     ?CreateMonitorIfAppropriateWorker@CMonitorManager@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18012C7A0 (-CreateMonitorIfAppropriateWorker@CMonitorManager@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WOR.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180067038 (--3@YAXPEAX_K@Z.c)
 *     ??1CreateMonitorContext@@QEAA@XZ @ 0x18012BF1C (--1CreateMonitorContext@@QEAA@XZ.c)
 */

CreateMonitorContext *__fastcall CreateMonitorContext::`scalar deleting destructor'(CreateMonitorContext *this)
{
  CreateMonitorContext::~CreateMonitorContext(this);
  operator delete(this);
  return this;
}
