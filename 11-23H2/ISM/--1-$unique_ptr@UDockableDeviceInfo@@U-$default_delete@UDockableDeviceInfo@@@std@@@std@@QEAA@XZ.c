/*
 * XREFs of ??1?$unique_ptr@UDockableDeviceInfo@@U?$default_delete@UDockableDeviceInfo@@@std@@@std@@QEAA@XZ @ 0x1800E306C
 * Callers:
 *     ?OnDeviceAttach@DockableDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x1800E3770 (-OnDeviceAttach@DockableDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     _DockableDeviceCollection::OnDeviceAttach_::_1_::dtor$0 @ 0x1800E3884 (_DockableDeviceCollection--OnDeviceAttach_--_1_--dtor$0.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1800569E0 (--3@YAXPEAX_K@Z.c)
 */

void __fastcall std::unique_ptr<DockableDeviceInfo>::~unique_ptr<DockableDeviceInfo>(void **a1)
{
  void *v1; // rcx

  v1 = *a1;
  if ( v1 )
    operator delete(v1);
}
