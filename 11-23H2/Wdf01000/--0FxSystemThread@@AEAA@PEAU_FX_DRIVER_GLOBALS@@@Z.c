/*
 * XREFs of ??0FxSystemThread@@AEAA@PEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0089184
 * Callers:
 *     ?_CreateAndInit@FxSystemThread@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE__@@PEAU_DEVICE_OBJECT@@@Z @ 0x1C00896E8 (-_CreateAndInit@FxSystemThread@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE__@@PEAU_DEVICE.c)
 * Callees:
 *     ??0FxNonPagedObject@@QEAA@GGPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C001AA5C (--0FxNonPagedObject@@QEAA@GGPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

void __fastcall FxSystemThread::FxSystemThread(FxSystemThread *this, _FX_DRIVER_GLOBALS *FxDriverGlobals)
{
  FxNonPagedObject::FxNonPagedObject(this, 0x1013u, 0, FxDriverGlobals);
  this->__vftable = (FxSystemThread_vtbl *)FxSystemThread::`vftable';
  this->m_InitEvent.m_DbgFlagIsInitialized = 0;
  this->m_WorkEvent.m_DbgFlagIsInitialized = 0;
  *(_WORD *)&this->m_Exit = 0;
  this->m_ThreadPtr = 0LL;
  this->m_PEThread = 0LL;
  this->m_Reaper.WorkerRoutine = 0LL;
  this->m_WorkList.Blink = &this->m_WorkList;
  this->m_WorkList.Flink = &this->m_WorkList;
  KeInitializeEvent(&this->m_InitEvent.m_Event, NotificationEvent, 0);
  this->m_InitEvent.m_DbgFlagIsInitialized = 1;
  KeInitializeEvent(&this->m_WorkEvent.m_Event, NotificationEvent, 0);
  this->m_WorkEvent.m_DbgFlagIsInitialized = 1;
}
