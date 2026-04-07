/*
 * XREFs of ??_GCSWRListener@@UEAAPEAXI@Z @ 0x180015880
 * Callers:
 *     ??_ECSWRListener@@W7EAAPEAXI@Z @ 0x180066700 (--_ECSWRListener@@W7EAAPEAXI@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 */

CSWRListener *__fastcall CSWRListener::`scalar deleting destructor'(CSWRListener *this, char a2)
{
  *((_QWORD *)this + 1) = &CGlassColorizationResources::`vftable';
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::HeapBase *, CSWRListener *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
