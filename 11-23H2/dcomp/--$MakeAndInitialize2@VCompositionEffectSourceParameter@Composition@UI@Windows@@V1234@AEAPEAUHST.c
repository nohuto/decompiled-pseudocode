/*
 * XREFs of ??$MakeAndInitialize2@VCompositionEffectSourceParameter@Composition@UI@Windows@@V1234@AEAPEAUHSTRING__@@@Details@WRL2@Microsoft@@YAJPEAPEAVCompositionEffectSourceParameter@Composition@UI@Windows@@AEAPEAUHSTRING__@@@Z @ 0x18007ECDC
 * Callers:
 *     ?Create@CompositionEffectSourceParameterFactory@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@PEAPEAUICompositionEffectSourceParameter@234@@Z @ 0x18007EC80 (-Create@CompositionEffectSourceParameterFactory@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@PEAP.c)
 * Callees:
 *     ??0CompositionEffectSourceParameter@Composition@UI@Windows@@QEAA@XZ @ 0x18007EDC0 (--0CompositionEffectSourceParameter@Composition@UI@Windows@@QEAA@XZ.c)
 *     ??1?$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800A1230 (--1-$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A203C (--1-$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@M.c)
 */

__int64 __fastcall Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::CompositionEffectSourceParameter,Windows::UI::Composition::CompositionEffectSourceParameter,HSTRING__ * &>(
        __int64 *a1,
        HSTRING *a2)
{
  HANDLE ProcessHeap; // rax
  _OWORD *v5; // rax
  __int64 v6; // rbx
  HSTRING *v7; // rdi
  HSTRING v8; // rsi
  HRESULT v9; // edi
  _OWORD *v11; // [rsp+40h] [rbp+8h] BYREF
  __int64 v12; // [rsp+50h] [rbp+18h] BYREF

  *a1 = 0LL;
  v12 = 0LL;
  ProcessHeap = GetProcessHeap();
  v5 = HeapAlloc(ProcessHeap, 0, 0x38uLL);
  v11 = v5;
  if ( v5 )
  {
    *v5 = 0LL;
    v5[1] = 0LL;
    v5[2] = 0LL;
    *((_QWORD *)v5 + 6) = 0LL;
    v6 = Windows::UI::Composition::CompositionEffectSourceParameter::CompositionEffectSourceParameter((Windows::UI::Composition::CompositionEffectSourceParameter *)v5);
    v11 = 0LL;
    *(_QWORD *)(v6 + 8) = &Windows::UI::Composition::CompositionEffectSourceParameter::s_InterfaceType;
    v7 = (HSTRING *)(v6 + 48);
    v8 = *a2;
    v12 = v6;
    if ( v8 && v8 == *v7
      || (WindowsDeleteString(*v7), *v7 = 0LL, v9 = WindowsDuplicateString(v8, (HSTRING *)(v6 + 48)), v9 >= 0) )
    {
      *a1 = v6;
      return 0LL;
    }
  }
  else
  {
    v9 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<Windows::UI::Composition::InjectionAnimation>::~MakeAllocator<Windows::UI::Composition::InjectionAnimation>(&v11);
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v12);
  return (unsigned int)v9;
}
