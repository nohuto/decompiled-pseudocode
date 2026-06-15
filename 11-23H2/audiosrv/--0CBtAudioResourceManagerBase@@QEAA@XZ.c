/*
 * XREFs of ??0CBtAudioResourceManagerBase@@QEAA@XZ @ 0x1800F5128
 * Callers:
 *     ??0CBtAudioResourceManager@@QEAA@XZ @ 0x1800F509C (--0CBtAudioResourceManager@@QEAA@XZ.c)
 *     ??0CBtLeAudioResourceManager@@QEAA@XZ @ 0x1800F5294 (--0CBtLeAudioResourceManager@@QEAA@XZ.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800282D8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=8
CBtAudioResourceManagerBase *__fastcall CBtAudioResourceManagerBase::CBtAudioResourceManagerBase(
        CBtAudioResourceManagerBase *this)
{
  _QWORD *v2; // rax

  *(_QWORD *)this = &CBtAudioResourceManagerBase::`vftable';
  *((_QWORD *)this + 1) = &CBtAudioResourceManagerBase::`vftable'{for `IBtAudioResourceManager'};
  *((_QWORD *)this + 2) = &CBtAudioResourceManagerBase::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IEndpointCustomFormatHandler>'};
  *((GUID *)this + 2) = GUID_00000000_0000_0000_0000_000000000000;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_DWORD *)this + 20) = 0;
  *((_QWORD *)this + 11) = 0LL;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)((char *)this + 96), 0, 0);
  *((_QWORD *)this + 17) = 0LL;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)((char *)this + 144), 0, 0);
  *((_QWORD *)this + 23) = 0LL;
  *((_DWORD *)this + 48) = 0;
  *((_QWORD *)this + 25) = 0LL;
  *((_QWORD *)this + 26) = 0LL;
  v2 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x68uLL);
  *v2 = v2;
  v2[1] = v2;
  v2[2] = v2;
  *((_WORD *)v2 + 12) = 257;
  *((_QWORD *)this + 25) = v2;
  return this;
}
