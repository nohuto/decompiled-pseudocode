/*
 * XREFs of ??1?$unique_ptr@VDockableDeviceCollection@@U?$default_delete@VDockableDeviceCollection@@@std@@@std@@QEAA@XZ @ 0x1800C9A00
 * Callers:
 *     _DockableDeviceCollection::Create_::_1_::dtor$0 @ 0x1800C9D8C (_DockableDeviceCollection--Create_--_1_--dtor$0.c)
 * Callees:
 *     ??R?$default_delete@VDockableDeviceCollection@@@std@@QEBAXPEAVDockableDeviceCollection@@@Z @ 0x1800C9BD4 (--R-$default_delete@VDockableDeviceCollection@@@std@@QEBAXPEAVDockableDeviceCollection@@@Z.c)
 */

__int64 __fastcall std::unique_ptr<DockableDeviceCollection>::~unique_ptr<DockableDeviceCollection>(_QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return std::default_delete<DockableDeviceCollection>::operator()();
  return result;
}
