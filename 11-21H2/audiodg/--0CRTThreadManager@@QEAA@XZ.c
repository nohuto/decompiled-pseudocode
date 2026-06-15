/*
 * XREFs of ??0CRTThreadManager@@QEAA@XZ @ 0x140029164
 * Callers:
 *     ??$MakeAndInitialize@VCRTThreadManager@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCRTThreadManager@@@Z @ 0x140028F84 (--$MakeAndInitialize@VCRTThreadManager@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCRTThreadManager.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x14001CBBC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIUnknown@@@WRL@Microsoft@@QEAA@XZ @ 0x14001CF60 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIUnknown@@@WRL@Microsoft@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=3
CRTThreadManager *__fastcall CRTThreadManager::CRTThreadManager(CRTThreadManager *this)
{
  _QWORD *v2; // rax

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IUnknown>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IUnknown>((__int64)this);
  *(_QWORD *)this = &CRTThreadManager::`vftable';
  *((_DWORD *)this + 4) = 3;
  *((_DWORD *)this + 5) = 0;
  *((_DWORD *)this + 6) = 0;
  *((_QWORD *)this + 4) = 0LL;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)this + 1, 0, 0);
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  v2 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x18uLL);
  *v2 = v2;
  v2[1] = v2;
  *((_QWORD *)this + 10) = v2;
  *((_BYTE *)this + 96) = 0;
  return this;
}
