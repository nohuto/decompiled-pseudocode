/*
 * XREFs of ??0CDelegatedInkTrailImpl@DirectComposition@@AEAA@XZ @ 0x1800E64B0
 * Callers:
 *     ?Create@CDelegatedInkTrailImpl@DirectComposition@@SAJPEAVCDevice@2@PEAVCCompositionSurfaceProxy@2@PEAPEAV12@@Z @ 0x1800E6968 (-Create@CDelegatedInkTrailImpl@DirectComposition@@SAJPEAVCDevice@2@PEAVCCompositionSurfaceProxy@.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180046CF8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 */

DirectComposition::CDelegatedInkTrailImpl *__fastcall DirectComposition::CDelegatedInkTrailImpl::CDelegatedInkTrailImpl(
        DirectComposition::CDelegatedInkTrailImpl *this)
{
  __int64 v2; // rax
  DirectComposition::CDelegatedInkTrailImpl *result; // rax

  *((_DWORD *)this + 2) = 0;
  *(_QWORD *)this = &DirectComposition::CDelegatedInkTrailImpl::`vftable'{for `CMILRefCountBaseT<IMILRefCount>'};
  *((_QWORD *)this + 2) = &DirectComposition::CDelegatedInkTrailImpl::`vftable'{for `IDCompositionDelegatedInkTrail'};
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  v2 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x60uLL);
  *(_QWORD *)v2 = v2;
  *(_QWORD *)(v2 + 8) = v2;
  *(_QWORD *)(v2 + 16) = v2;
  *(_WORD *)(v2 + 24) = 257;
  *((_QWORD *)this + 6) = v2;
  *((_DWORD *)this + 28) = -1;
  *((_DWORD *)this + 29) = -1;
  result = this;
  *((_QWORD *)this + 8) = 1065353216LL;
  *((_DWORD *)this + 18) = 0;
  *(_QWORD *)((char *)this + 76) = 1065353216LL;
  *(_QWORD *)((char *)this + 84) = 0LL;
  *(_QWORD *)((char *)this + 92) = 0LL;
  *(_QWORD *)((char *)this + 100) = 1065353216LL;
  *((_DWORD *)this + 27) = 0;
  *((_DWORD *)this + 30) = 1065353216;
  *((_BYTE *)this + 124) = 0;
  *((_BYTE *)this + 128) = 1;
  return result;
}
