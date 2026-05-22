/*
 * XREFs of ??1?$unique_ptr@UDockableDeviceInfo@@U?$default_delete@UDockableDeviceInfo@@@std@@@std@@QEAA@XZ @ 0x1800C99DC
 * Callers:
 *     _DockableDeviceCollection::OnDeviceAttach_::_1_::dtor$0 @ 0x1800CA209 (_DockableDeviceCollection--OnDeviceAttach_--_1_--dtor$0.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18004ABE0 (--3@YAXPEAX_K@Z.c)
 */

void __fastcall std::unique_ptr<DockableDeviceInfo>::~unique_ptr<DockableDeviceInfo>(void **a1)
{
  void *v1; // rcx

  v1 = *a1;
  if ( v1 )
    operator delete(v1);
}
