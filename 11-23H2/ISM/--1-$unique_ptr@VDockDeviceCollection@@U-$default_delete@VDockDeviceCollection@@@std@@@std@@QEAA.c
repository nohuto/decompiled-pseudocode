/*
 * XREFs of ??1?$unique_ptr@VDockDeviceCollection@@U?$default_delete@VDockDeviceCollection@@@std@@@std@@QEAA@XZ @ 0x1800E1D80
 * Callers:
 *     ?Create@DockDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z @ 0x1800E1EC0 (-Create@DockDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z.c)
 *     _DockDeviceCollection::Create_::_1_::dtor$0 @ 0x1800E1FBF (_DockDeviceCollection--Create_--_1_--dtor$0.c)
 * Callees:
 *     ??R?$default_delete@VDockDeviceCollection@@@std@@QEBAXPEAVDockDeviceCollection@@@Z @ 0x1800E1E28 (--R-$default_delete@VDockDeviceCollection@@@std@@QEBAXPEAVDockDeviceCollection@@@Z.c)
 */

__int64 __fastcall std::unique_ptr<DockDeviceCollection>::~unique_ptr<DockDeviceCollection>(_QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return std::default_delete<DockDeviceCollection>::operator()();
  return result;
}
