/*
 * XREFs of ??$MakeAndInitialize2@VExpressionAnimation@Composition@UI@Windows@@V1234@PEAVCompositor@234@AEAPEAUHSTRING__@@@Details@WRL2@Microsoft@@YAJPEAPEAVExpressionAnimation@Composition@UI@Windows@@$$QEAPEAVCompositor@456@AEAPEAUHSTRING__@@@Z @ 0x18005EA68
 * Callers:
 *     ?CreateExpressionAnimation@CompositorCommon@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@PEAPEAVExpressionAnimation@234@@Z @ 0x18005EA10 (-CreateExpressionAnimation@CompositorCommon@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@PEAPEAVE.c)
 * Callees:
 *     ??0ExpressionAnimation@Composition@UI@Windows@@QEAA@XZ @ 0x18005FC0C (--0ExpressionAnimation@Composition@UI@Windows@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@ExpressionAnimation@Composition@UI@Windows@@QEAAJPEAVCompositor@234@PEAUHSTRING__@@@Z @ 0x18006019C (-RuntimeClassInitialize@ExpressionAnimation@Composition@UI@Windows@@QEAAJPEAVCompositor@234@PEAU.c)
 *     memset_0 @ 0x18009698C (memset_0.c)
 *     ??1?$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800A1230 (--1-$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A203C (--1-$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@M.c)
 */

__int64 __fastcall Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::ExpressionAnimation,Windows::UI::Composition::ExpressionAnimation,Windows::UI::Composition::Compositor *,HSTRING__ * &>(
        Windows::UI::Composition::ExpressionAnimation **a1,
        struct Windows::UI::Composition::Compositor **a2,
        HSTRING *a3)
{
  HANDLE ProcessHeap; // rax
  void *v7; // rax
  Windows::UI::Composition::ExpressionAnimation *v8; // rax
  Windows::UI::Composition::ExpressionAnimation *v9; // rbx
  HSTRING v10; // r8
  struct Windows::UI::Composition::Compositor *v11; // rdx
  int v12; // edi
  void *v14; // [rsp+40h] [rbp+8h] BYREF
  Windows::UI::Composition::ExpressionAnimation *v15; // [rsp+58h] [rbp+20h] BYREF

  *a1 = 0LL;
  v15 = 0LL;
  ProcessHeap = GetProcessHeap();
  v7 = HeapAlloc(ProcessHeap, 0, 0x400uLL);
  v14 = v7;
  if ( v7 )
  {
    v8 = (Windows::UI::Composition::ExpressionAnimation *)memset_0(v7, 0, 0x400uLL);
    if ( v8 )
      v9 = (Windows::UI::Composition::ExpressionAnimation *)Windows::UI::Composition::ExpressionAnimation::ExpressionAnimation(v8);
    else
      v9 = 0LL;
    v14 = 0LL;
    *((_QWORD *)v9 + 1) = &Windows::UI::Composition::ExpressionAnimation::s_InterfaceType;
    v10 = *a3;
    v11 = *a2;
    v15 = v9;
    v12 = Windows::UI::Composition::ExpressionAnimation::RuntimeClassInitialize(v9, v11, v10);
    if ( v12 >= 0 )
    {
      *a1 = v9;
      return 0LL;
    }
  }
  else
  {
    v12 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<Windows::UI::Composition::InjectionAnimation>::~MakeAllocator<Windows::UI::Composition::InjectionAnimation>(&v14);
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v15);
  return (unsigned int)v12;
}
