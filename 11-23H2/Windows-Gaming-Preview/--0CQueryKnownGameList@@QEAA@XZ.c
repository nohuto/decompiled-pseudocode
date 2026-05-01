/*
 * XREFs of ??0CQueryKnownGameList@@QEAA@XZ @ 0x180046080
 * Callers:
 *     ??$MakeAndInitialize@VCQueryKnownGameList@@V1@AEAPEBG@Details@WRL@Microsoft@@YAJPEAPEAVCQueryKnownGameList@@AEAPEBG@Z @ 0x180049E6C (--$MakeAndInitialize@VCQueryKnownGameList@@V1@AEAPEBG@Details@WRL@Microsoft@@YAJPEAPEAVCQueryKno.c)
 * Callees:
 *     memset_0 @ 0x18004C634 (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004CEC0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
CQueryKnownGameList *__fastcall CQueryKnownGameList::CQueryKnownGameList(CQueryKnownGameList *this)
{
  *(_QWORD *)this = &KnownGameList::IQueryKnownGameList::`vftable';
  *((_DWORD *)this + 3) = 1;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,KnownGameList::IQueryKnownGameList>::`vftable';
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &CQueryKnownGameList::`vftable';
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = -1LL;
  *((_QWORD *)this + 93) = 0LL;
  *((_QWORD *)this + 94) = 0LL;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)this + 19, 0, 0);
  *((_DWORD *)this + 200) = 0;
  memset_0((char *)this + 32, 0, 0x2C4uLL);
  return this;
}
