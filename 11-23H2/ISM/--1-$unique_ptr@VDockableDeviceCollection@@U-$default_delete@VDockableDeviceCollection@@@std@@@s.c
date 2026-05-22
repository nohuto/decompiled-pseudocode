/*
 * XREFs of ??1?$unique_ptr@VDockableDeviceCollection@@U?$default_delete@VDockableDeviceCollection@@@std@@@std@@QEAA@XZ @ 0x1800E3090
 * Callers:
 *     ?Create@DockableDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z @ 0x1800E3324 (-Create@DockableDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1.c)
 *     _DockableDeviceCollection::Create_::_1_::dtor$0 @ 0x1800E3423 (_DockableDeviceCollection--Create_--_1_--dtor$0.c)
 * Callees:
 *     ??R?$default_delete@VDockableDeviceCollection@@@std@@QEBAXPEAVDockableDeviceCollection@@@Z @ 0x1800E3268 (--R-$default_delete@VDockableDeviceCollection@@@std@@QEBAXPEAVDockableDeviceCollection@@@Z.c)
 */

__int64 __fastcall std::unique_ptr<DockableDeviceCollection>::~unique_ptr<DockableDeviceCollection>(_QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return std::default_delete<DockableDeviceCollection>::operator()();
  return result;
}
