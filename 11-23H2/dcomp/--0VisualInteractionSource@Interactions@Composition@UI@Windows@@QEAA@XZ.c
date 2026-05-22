/*
 * XREFs of ??0VisualInteractionSource@Interactions@Composition@UI@Windows@@QEAA@XZ @ 0x18011C8F0
 * Callers:
 *     ??$MakeAndInitialize2@VVisualInteractionSource@Interactions@Composition@UI@Windows@@V12345@PEAVVisual@345@AEA_N@Details@WRL2@Microsoft@@YAJPEAPEAVVisualInteractionSource@Interactions@Composition@UI@Windows@@$$QEAPEAVVisual@567@AEA_N@Z @ 0x18011C59C (--$MakeAndInitialize2@VVisualInteractionSource@Interactions@Composition@UI@Windows@@V12345@PEAVV.c)
 *     ??0EdgyExperienceSource@Internal@Interactions@Composition@UI@Windows@@QEAA@XZ @ 0x180130DE4 (--0EdgyExperienceSource@Internal@Interactions@Composition@UI@Windows@@QEAA@XZ.c)
 * Callees:
 *     ??0CompositionObject@Composition@UI@Windows@@QEAA@XZ @ 0x180053828 (--0CompositionObject@Composition@UI@Windows@@QEAA@XZ.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1800E3E84 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 */

Windows::UI::Composition::Interactions::VisualInteractionSource *__fastcall Windows::UI::Composition::Interactions::VisualInteractionSource::VisualInteractionSource(
        Windows::UI::Composition::Interactions::VisualInteractionSource *this)
{
  BOOL v2; // eax
  unsigned __int64 v3; // rcx
  unsigned __int64 v4; // r8
  LARGE_INTEGER Frequency; // [rsp+30h] [rbp+8h] BYREF

  Windows::UI::Composition::CompositionObject::CompositionObject(this);
  *(_QWORD *)this = &Windows::UI::Composition::Interactions::VisualInteractionSource::`vftable';
  *((_QWORD *)this + 16) = &Windows::UI::Composition::Interactions::VisualInteractionSource::Api::`vftable'{for `Windows::UI::Composition::Interactions::IVisualInteractionSource'};
  *((_QWORD *)this + 17) = &Windows::UI::Composition::Interactions::VisualInteractionSource::Api::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::UI::Composition::Interactions::IVisualInteractionSource2,Windows::UI::Composition::Interactions::IVisualInteractionSource3,Windows::UI::Composition::Interactions::ICompositionInteractionSource>'};
  *((_QWORD *)this + 18) = &Windows::UI::Composition::Interactions::VisualInteractionSource::Api::`vftable'{for `Windows::UI::Composition::Interactions::IVisualInteractionSource3'};
  *((_QWORD *)this + 19) = &Windows::UI::Composition::Interactions::VisualInteractionSource::Api::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::UI::Composition::Interactions::ICompositionInteractionSource>'};
  *((_QWORD *)this + 21) = &Windows::UI::Composition::Interactions::VisualInteractionSource::Interop::`vftable';
  *((_QWORD *)this + 23) = &Windows::UI::Composition::Interactions::VisualInteractionSource::Test::`vftable';
  `vector constructor iterator'(
    (char *)this + 200,
    8LL,
    3LL,
    (void (__fastcall *)(char *))Windows::UI::Composition::Interactions::VisualInteractionSource::AxisConfiguration::AxisConfiguration);
  *((_QWORD *)this + 29) = 0LL;
  *((_QWORD *)this + 30) = 0LL;
  *((_QWORD *)this + 31) = 0LL;
  *((_QWORD *)this + 32) = 0LL;
  *((_QWORD *)this + 35) = 1000000LL;
  v2 = QueryPerformanceFrequency(&Frequency);
  v3 = Frequency.QuadPart & -(__int64)v2;
  for ( *((_QWORD *)this + 34) = v3; v3 > 0x10C6F7A0B5EDLL; *((_QWORD *)this + 35) = v4 / 0xA )
  {
    v4 = *((_QWORD *)this + 35);
    if ( v4 < 0xA )
      break;
    v3 /= 0xAuLL;
    *((_QWORD *)this + 34) = v3;
  }
  return this;
}
