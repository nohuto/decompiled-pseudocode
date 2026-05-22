/*
 * XREFs of ??1?$unique_ptr@UDockDeviceInfo@@U?$default_delete@UDockDeviceInfo@@@std@@@std@@QEAA@XZ @ 0x1800E1D5C
 * Callers:
 *     ?OnDeviceAttach@DockDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x1800E2340 (-OnDeviceAttach@DockDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     _DockDeviceCollection::OnDeviceAttach_::_1_::dtor$0 @ 0x1800E24E3 (_DockDeviceCollection--OnDeviceAttach_--_1_--dtor$0.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1800569E0 (--3@YAXPEAX_K@Z.c)
 */

void __fastcall std::unique_ptr<DockDeviceInfo>::~unique_ptr<DockDeviceInfo>(void **a1)
{
  void *v1; // rcx

  v1 = *a1;
  if ( v1 )
    operator delete(v1);
}
