/*
 * XREFs of ??$MakeAndInitialize2@VEdgyExperienceSource@Internal@Interactions@Composition@UI@Windows@@V123456@AEAPEAUHSTRING__@@PEAVVisual@456@@Details@WRL2@Microsoft@@YAJPEAPEAVEdgyExperienceSource@Internal@Interactions@Composition@UI@Windows@@AEAPEAUHSTRING__@@$$QEAPEAVVisual@678@@Z @ 0x180130ACC
 * Callers:
 *     ?Create@EdgyExperienceSourceFactory@Internal@Interactions@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@PEAUIVisual@456@PEAPEAUIEdgyExperienceSource@23456@@Z @ 0x180131000 (-Create@EdgyExperienceSourceFactory@Internal@Interactions@Composition@UI@Windows@@UEAAJPEAUHSTRI.c)
 * Callees:
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18004400C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     memset_0 @ 0x18009698C (memset_0.c)
 *     ??1?$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800A1230 (--1-$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A203C (--1-$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@M.c)
 *     ??0EdgyExperienceSource@Internal@Interactions@Composition@UI@Windows@@QEAA@XZ @ 0x180130DE4 (--0EdgyExperienceSource@Internal@Interactions@Composition@UI@Windows@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@EdgyExperienceSource@Internal@Interactions@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@PEAVVisual@456@@Z @ 0x18013150C (-RuntimeClassInitialize@EdgyExperienceSource@Internal@Interactions@Composition@UI@Windows@@QEAAJ.c)
 */

__int64 __fastcall Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::Interactions::Internal::EdgyExperienceSource,Windows::UI::Composition::Interactions::Internal::EdgyExperienceSource,HSTRING__ * &,Windows::UI::Composition::Visual *>(
        Microsoft::WRL2::NestableRuntimeClass **a1,
        HSTRING *a2,
        struct Windows::UI::Composition::Visual **a3)
{
  void *v6; // rax
  int v7; // edi
  Windows::UI::Composition::Interactions::Internal::EdgyExperienceSource *v8; // rax
  Microsoft::WRL2::NestableRuntimeClass *v9; // rbx
  struct Windows::UI::Composition::Visual *v10; // r8
  HSTRING v11; // rdx
  void *v13; // [rsp+40h] [rbp+8h] BYREF
  Microsoft::WRL2::NestableRuntimeClass *v14; // [rsp+58h] [rbp+20h] BYREF

  *a1 = 0LL;
  v14 = 0LL;
  v6 = DefaultHeap::Alloc(0x158uLL);
  v13 = v6;
  if ( !v6 )
  {
    v7 = -2147024882;
LABEL_7:
    Microsoft::WRL::Details::MakeAllocator<Windows::UI::Composition::InjectionAnimation>::~MakeAllocator<Windows::UI::Composition::InjectionAnimation>(&v13);
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v14);
    return (unsigned int)v7;
  }
  v8 = (Windows::UI::Composition::Interactions::Internal::EdgyExperienceSource *)memset_0(v6, 0, 0x158uLL);
  if ( v8 )
    v9 = (Microsoft::WRL2::NestableRuntimeClass *)Windows::UI::Composition::Interactions::Internal::EdgyExperienceSource::EdgyExperienceSource(v8);
  else
    v9 = 0LL;
  v13 = 0LL;
  *((_QWORD *)v9 + 1) = &Windows::UI::Composition::Interactions::Internal::EdgyExperienceSource::s_InterfaceType;
  v10 = *a3;
  v11 = *a2;
  v14 = v9;
  v7 = Windows::UI::Composition::Interactions::Internal::EdgyExperienceSource::RuntimeClassInitialize(v9, v11, v10);
  if ( v7 < 0 )
    goto LABEL_7;
  *a1 = v9;
  return 0LL;
}
