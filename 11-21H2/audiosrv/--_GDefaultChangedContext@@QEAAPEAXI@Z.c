/*
 * XREFs of ??_GDefaultChangedContext@@QEAAPEAXI@Z @ 0x180119A8C
 * Callers:
 *     ??1?$CAutoPtr@UDefaultChangedContext@@@ATL@@QEAA@XZ @ 0x180119444 (--1-$CAutoPtr@UDefaultChangedContext@@@ATL@@QEAA@XZ.c)
 *     ?HandleDefaultDeviceChanged@CMonitorManager@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18011B900 (-HandleDefaultDeviceChanged@CMonitorManager@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     ?OnDefaultDeviceChanged@CMonitorManager@@EEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0002@@PEBG@Z @ 0x18011D0A0 (-OnDefaultDeviceChanged@CMonitorManager@@EEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18005EFB8 (--3@YAXPEAX_K@Z.c)
 *     ??1DefaultChangedContext@@QEAA@XZ @ 0x180119838 (--1DefaultChangedContext@@QEAA@XZ.c)
 */

DefaultChangedContext *__fastcall DefaultChangedContext::`scalar deleting destructor'(DefaultChangedContext *this)
{
  DefaultChangedContext::~DefaultChangedContext(this);
  operator delete(this);
  return this;
}
