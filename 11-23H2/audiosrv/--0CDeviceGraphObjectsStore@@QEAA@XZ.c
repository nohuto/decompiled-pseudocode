/*
 * XREFs of ??0CDeviceGraphObjectsStore@@QEAA@XZ @ 0x18002D4B4
 * Callers:
 *     ??$MakeAndInitialize@VCDeviceGraphObjectsStore@@UIDeviceGraphObjectsStore@@AEAPEBG@Details@WRL@Microsoft@@YAJPEAPEAUIDeviceGraphObjectsStore@@AEAPEBG@Z @ 0x18002E680 (--$MakeAndInitialize@VCDeviceGraphObjectsStore@@UIDeviceGraphObjectsStore@@AEAPEBG@Details@WRL@M.c)
 * Callees:
 *     ??_L@YAXPEAX_K1P6AX0@Z2@Z @ 0x1800670AC (--_L@YAXPEAX_K1P6AX0@Z2@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
CDeviceGraphObjectsStore *__fastcall CDeviceGraphObjectsStore::CDeviceGraphObjectsStore(CDeviceGraphObjectsStore *this)
{
  *((_DWORD *)this + 3) = 1;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IDeviceGraphObjectsStore>::`vftable';
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(Microsoft::WRL::Details *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &CDeviceGraphObjectsStore::`vftable';
  *((_QWORD *)this + 2) = 0LL;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)((char *)this + 24), 0, 0);
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  `eh vector constructor iterator'(
    (char *)this + 88,
    0x18uLL,
    4uLL,
    std::vector<Microsoft::WRL::WeakRef>::vector<Microsoft::WRL::WeakRef>,
    std::vector<Microsoft::WRL::WeakRef>::~vector<Microsoft::WRL::WeakRef>);
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)((char *)this + 184), 0, 0);
  return this;
}
