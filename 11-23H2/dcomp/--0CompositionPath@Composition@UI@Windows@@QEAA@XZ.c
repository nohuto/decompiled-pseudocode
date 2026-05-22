/*
 * XREFs of ??0CompositionPath@Composition@UI@Windows@@QEAA@XZ @ 0x180040E20
 * Callers:
 *     ??$MakeAndInitialize2@VCompositionPath@Composition@UI@Windows@@V1234@PEAUID2D1Geometry@@@Details@WRL2@Microsoft@@YAJPEAPEAVCompositionPath@Composition@UI@Windows@@$$QEAPEAUID2D1Geometry@@@Z @ 0x180040D74 (--$MakeAndInitialize2@VCompositionPath@Composition@UI@Windows@@V1234@PEAUID2D1Geometry@@@Details.c)
 *     ??$MakeAndInitialize2@VCompositionPath@Composition@UI@Windows@@V1234@AEAV?$span@$$CBE$0?0@gsl@@@Details@WRL2@Microsoft@@YAJPEAPEAVCompositionPath@Composition@UI@Windows@@AEAV?$span@$$CBE$0?0@gsl@@@Z @ 0x18012F9F4 (--$MakeAndInitialize2@VCompositionPath@Composition@UI@Windows@@V1234@AEAV-$span@$$CBE$0-0@gsl@@@.c)
 * Callees:
 *     ??0NestableRuntimeClass@WRL2@Microsoft@@QEAA@XZ @ 0x180040E8C (--0NestableRuntimeClass@WRL2@Microsoft@@QEAA@XZ.c)
 */

Windows::UI::Composition::CompositionPath *__fastcall Windows::UI::Composition::CompositionPath::CompositionPath(
        Windows::UI::Composition::CompositionPath *this)
{
  Microsoft::WRL2::NestableRuntimeClass::NestableRuntimeClass(this);
  *(_QWORD *)this = &Windows::UI::Composition::CompositionPath::`vftable';
  *((_QWORD *)this + 3) = &Windows::UI::Composition::CompositionPath::Api::`vftable'{for `Windows::UI::Composition::ICompositionPath'};
  *((_QWORD *)this + 4) = &Windows::UI::Composition::CompositionPath::Api::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::Graphics::IGeometrySource2D>'};
  *((_QWORD *)this + 6) = &Windows::UI::Composition::CompositionPath::Interop::`vftable';
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  InitializeCriticalSection((LPCRITICAL_SECTION)((char *)this + 96));
  return this;
}
