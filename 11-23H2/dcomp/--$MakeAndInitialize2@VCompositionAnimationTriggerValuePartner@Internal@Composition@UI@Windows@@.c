/*
 * XREFs of ??$MakeAndInitialize2@VCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@@V12345@PEAVCompositor@345@AEAPEAUHSTRING__@@AEAPEAUIAnimationObject@345@AEAPEAUICompositionAnimationBase@345@@Details@WRL2@Microsoft@@YAJPEAPEAVCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@@$$QEAPEAVCompositor@567@AEAPEAUHSTRING__@@AEAPEAUIAnimationObject@567@AEAPEAUICompositionAnimationBase@567@@Z @ 0x180120130
 * Callers:
 *     ?CreateAnimationTriggerValuePartner@Internal@Compositor@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@PEAUIAnimationObject@345@PEAUICompositionAnimationBase@345@PEAPEAUICompositionAnimationTriggerValuePartner@1345@@Z @ 0x18010E9C0 (-CreateAnimationTriggerValuePartner@Internal@Compositor@Composition@UI@Windows@@UEAAJPEAUHSTRING.c)
 * Callees:
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18004400C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??0CompositionObject@Composition@UI@Windows@@QEAA@XZ @ 0x180053828 (--0CompositionObject@Composition@UI@Windows@@QEAA@XZ.c)
 *     memset_0 @ 0x18009698C (memset_0.c)
 *     ??1?$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800A1230 (--1-$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A203C (--1-$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@M.c)
 *     ?RuntimeClassInitialize@CompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@@QEAAJPEAVCompositor@345@PEAUHSTRING__@@PEAUIAnimationObject@345@PEAUICompositionAnimationBase@345@@Z @ 0x180186120 (-RuntimeClassInitialize@CompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@.c)
 */

__int64 __fastcall Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::Internal::CompositionAnimationTriggerValuePartner,Windows::UI::Composition::Internal::CompositionAnimationTriggerValuePartner,Windows::UI::Composition::Compositor *,HSTRING__ * &,Windows::UI::Composition::IAnimationObject * &,Windows::UI::Composition::ICompositionAnimationBase * &>(
        Windows::UI::Composition::CompositionObject **a1,
        struct Windows::UI::Composition::Compositor **a2,
        HSTRING *a3,
        struct Windows::UI::Composition::IAnimationObject **a4,
        struct Windows::UI::Composition::ICompositionAnimationBase **a5)
{
  void *v9; // rax
  int v10; // edi
  Windows::UI::Composition::CompositionObject *v11; // rax
  Windows::UI::Composition::CompositionObject *v12; // rbx
  struct Windows::UI::Composition::IAnimationObject *v13; // r9
  HSTRING v14; // r8
  struct Windows::UI::Composition::Compositor *v15; // rdx
  struct Windows::UI::Composition::ICompositionAnimationBase *v17; // [rsp+20h] [rbp-38h]
  Microsoft::WRL2::NestableRuntimeClass *v18; // [rsp+30h] [rbp-28h] BYREF
  void *v19; // [rsp+60h] [rbp+8h] BYREF

  *a1 = 0LL;
  v18 = 0LL;
  v9 = DefaultHeap::Alloc(0xA8uLL);
  v19 = v9;
  if ( !v9 )
  {
    v10 = -2147024882;
LABEL_7:
    Microsoft::WRL::Details::MakeAllocator<Windows::UI::Composition::InjectionAnimation>::~MakeAllocator<Windows::UI::Composition::InjectionAnimation>(&v19);
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v18);
    return (unsigned int)v10;
  }
  v11 = (Windows::UI::Composition::CompositionObject *)memset_0(v9, 0, 0xA8uLL);
  v12 = v11;
  if ( v11 )
  {
    Windows::UI::Composition::CompositionObject::CompositionObject(v11);
    *(_QWORD *)v12 = &Windows::UI::Composition::Internal::CompositionAnimationTriggerValuePartner::`vftable';
    *((_QWORD *)v12 + 18) = 0LL;
    *((_QWORD *)v12 + 19) = 0LL;
    *((_QWORD *)v12 + 20) = 0LL;
    *((_QWORD *)v12 + 16) = &Windows::UI::Composition::Internal::CompositionAnimationTriggerValuePartner::Partner::`vftable';
  }
  else
  {
    v12 = 0LL;
  }
  v19 = 0LL;
  *((_QWORD *)v12 + 1) = &Windows::UI::Composition::Internal::CompositionAnimationTriggerValuePartner::s_InterfaceType;
  v13 = *a4;
  v14 = *a3;
  v15 = *a2;
  v17 = *a5;
  v18 = v12;
  v10 = Windows::UI::Composition::Internal::CompositionAnimationTriggerValuePartner::RuntimeClassInitialize(
          v12,
          v15,
          v14,
          v13,
          v17);
  if ( v10 < 0 )
    goto LABEL_7;
  *a1 = v12;
  return 0LL;
}
