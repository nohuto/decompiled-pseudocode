/*
 * XREFs of ??_GDefaultChangedContext@@QEAAPEAXI@Z @ 0x18008441C
 * Callers:
 *     ?OnDefaultDeviceChanged@CMonitorManager@@EEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0002@@PEBG@Z @ 0x180002EE0 (-OnDefaultDeviceChanged@CMonitorManager@@EEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4.c)
 *     sub_1800851F8 @ 0x1800851F8 (sub_1800851F8.c)
 *     ??1?$CAutoPtr@UDefaultChangedContext@@@ATL@@QEAA@XZ @ 0x18012BA90 (--1-$CAutoPtr@UDefaultChangedContext@@@ATL@@QEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180067028 (--3@YAXPEAX_K@Z.c)
 *     ??1DefaultChangedContext@@QEAA@XZ @ 0x18012BFA8 (--1DefaultChangedContext@@QEAA@XZ.c)
 */

DefaultChangedContext *__fastcall DefaultChangedContext::`scalar deleting destructor'(DefaultChangedContext *this)
{
  DefaultChangedContext::~DefaultChangedContext(this);
  operator delete(this);
  return this;
}
