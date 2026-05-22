/*
 * XREFs of ??0CompositionIslandEnvironment@Composition@UI@Windows@@QEAA@XZ @ 0x18006C334
 * Callers:
 *     ??$MakeAndInitialize2@VCompositionIslandEnvironment@Composition@UI@Windows@@V1234@@Details@WRL2@Microsoft@@YAJPEAPEAVCompositionIslandEnvironment@Composition@UI@Windows@@@Z @ 0x18006C290 (--$MakeAndInitialize2@VCompositionIslandEnvironment@Composition@UI@Windows@@V1234@@Details@WRL2@.c)
 * Callees:
 *     ??0NestableRuntimeClass@WRL2@Microsoft@@QEAA@XZ @ 0x180040E8C (--0NestableRuntimeClass@WRL2@Microsoft@@QEAA@XZ.c)
 */

Windows::UI::Composition::CompositionIslandEnvironment *__fastcall Windows::UI::Composition::CompositionIslandEnvironment::CompositionIslandEnvironment(
        Windows::UI::Composition::CompositionIslandEnvironment *this)
{
  Microsoft::WRL2::NestableRuntimeClass::NestableRuntimeClass(this);
  *(_QWORD *)this = &Windows::UI::Composition::CompositionIslandEnvironment::`vftable';
  *((_QWORD *)this + 3) = &Windows::UI::Composition::CompositionIslandEnvironment::Api::`vftable'{for `Windows::UI::Composition::ICompositionIslandEnvironment'};
  *((_QWORD *)this + 4) = &Windows::UI::Composition::CompositionIslandEnvironment::Api::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::UI::Composition::ICompositionIslandEnvironmentPartner>'};
  *((_QWORD *)this + 6) = 0LL;
  *((_DWORD *)this + 14) = 0;
  *((_QWORD *)this + 11) = 0LL;
  *((_DWORD *)this + 24) = 0;
  *((_QWORD *)this + 14) = (char *)this + 104;
  *((_QWORD *)this + 13) = (char *)this + 104;
  return this;
}
