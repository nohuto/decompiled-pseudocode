/*
 * XREFs of ??0CApplication@@QEAA@XZ @ 0x18001E68C
 * Callers:
 *     ??$MakeAndInitialize@VCApplication@@V1@AEAPEBGAEA_KAEAK@Details@WRL@Microsoft@@YAJPEAPEAVCApplication@@AEAPEBGAEA_KAEAK@Z @ 0x18001E1C8 (--$MakeAndInitialize@VCApplication@@V1@AEAPEBGAEA_KAEAK@Details@WRL@Microsoft@@YAJPEAPEAVCApplic.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180044490 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=14
CApplication *__fastcall CApplication::CApplication(CApplication *this)
{
  HANDLE ProcessHeap; // rax
  _QWORD *v3; // rax

  *((_DWORD *)this + 3) = 1;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IUnknown>::`vftable';
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &CApplication::`vftable';
  *((_DWORD *)this + 4) = 0;
  *((_QWORD *)this + 3) = 0LL;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)((char *)this + 32), 0, 0);
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_DWORD *)this + 28) = 10;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  *((_DWORD *)this + 40) = 10;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)((char *)this + 168), 0, 0);
  *((_DWORD *)this + 52) = 0;
  *((_DWORD *)this + 54) = 0;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)((char *)this + 224), 0, 0);
  *((_QWORD *)this + 33) = 0LL;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)this + 7, 0, 0);
  *((_QWORD *)this + 40) = 0LL;
  *((_DWORD *)this + 82) = 0;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)((char *)this + 336), 0, 0);
  *((_QWORD *)this + 47) = 0LL;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)((char *)this + 384), 0, 0);
  *((_QWORD *)this + 53) = 0LL;
  *((_DWORD *)this + 108) = 0;
  *((_DWORD *)this + 109) = 1;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)this + 11, 0, 0);
  *((_QWORD *)this + 60) = 0LL;
  *((_DWORD *)this + 122) = 0;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)((char *)this + 496), 0, 0);
  *((_QWORD *)this + 67) = 0LL;
  *((_QWORD *)this + 75) = 0LL;
  *((_QWORD *)this + 76) = 0LL;
  *((_QWORD *)this + 77) = 4LL;
  *((_QWORD *)this + 78) = 0LL;
  *((_QWORD *)this + 79) = 0LL;
  *((_DWORD *)this + 160) = 0;
  *(_QWORD *)((char *)this + 644) = 1LL;
  *(_QWORD *)((char *)this + 652) = 0LL;
  *((_QWORD *)this + 83) = 0LL;
  *((_QWORD *)this + 84) = 0LL;
  *((_QWORD *)this + 85) = 0LL;
  *((_QWORD *)this + 86) = 0LL;
  *((_QWORD *)this + 88) = 0LL;
  *((_QWORD *)this + 89) = 0LL;
  ProcessHeap = GetProcessHeap();
  v3 = HeapAlloc(ProcessHeap, 0, 0x48uLL);
  *v3 = v3;
  v3[1] = v3;
  v3[2] = v3;
  *((_WORD *)v3 + 12) = 257;
  *((_QWORD *)this + 88) = v3;
  *((_BYTE *)this + 720) = 0;
  return this;
}
