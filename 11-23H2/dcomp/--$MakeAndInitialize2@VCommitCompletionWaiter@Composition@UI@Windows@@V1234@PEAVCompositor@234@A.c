/*
 * XREFs of ??$MakeAndInitialize2@VCommitCompletionWaiter@Composition@UI@Windows@@V1234@PEAVCompositor@234@AEAK@Details@WRL2@Microsoft@@YAJPEAPEAVCommitCompletionWaiter@Composition@UI@Windows@@$$QEAPEAVCompositor@456@AEAK@Z @ 0x180083ABC
 * Callers:
 *     ?CreateCommitCompletionWaiter@CompositorCommon@Composition@UI@Windows@@QEAAJ_NPEAPEAVCommitCompletionWaiter@234@@Z @ 0x1800838E8 (-CreateCommitCompletionWaiter@CompositorCommon@Composition@UI@Windows@@QEAAJ_NPEAPEAVCommitCompl.c)
 * Callees:
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18004400C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?RuntimeClassInitialize@CompositionObject@Composition@UI@Windows@@QEAAJPEAVCompositor@234@@Z @ 0x180055F60 (-RuntimeClassInitialize@CompositionObject@Composition@UI@Windows@@QEAAJPEAVCompositor@234@@Z.c)
 *     ??0CommitCompletionWaiter@Composition@UI@Windows@@QEAA@XZ @ 0x180083B64 (--0CommitCompletionWaiter@Composition@UI@Windows@@QEAA@XZ.c)
 *     memset_0 @ 0x18009698C (memset_0.c)
 *     ??1?$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800A1230 (--1-$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A203C (--1-$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@M.c)
 */

__int64 __fastcall Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::CommitCompletionWaiter,Windows::UI::Composition::CommitCompletionWaiter,Windows::UI::Composition::Compositor *,unsigned long &>(
        __int64 *a1,
        struct Windows::UI::Composition::Compositor **a2,
        _DWORD *a3)
{
  void *v6; // rax
  Windows::UI::Composition::CommitCompletionWaiter *v7; // rax
  __int64 v8; // rbx
  struct Windows::UI::Composition::Compositor *v9; // rdx
  int v10; // edi
  void *v12; // [rsp+40h] [rbp+8h] BYREF
  __int64 v13; // [rsp+58h] [rbp+20h] BYREF

  *a1 = 0LL;
  v13 = 0LL;
  v6 = DefaultHeap::Alloc(0xE0uLL);
  v12 = v6;
  if ( v6 )
  {
    v7 = (Windows::UI::Composition::CommitCompletionWaiter *)memset_0(v6, 0, 0xE0uLL);
    if ( v7 )
      v8 = Windows::UI::Composition::CommitCompletionWaiter::CommitCompletionWaiter(v7);
    else
      v8 = 0LL;
    v12 = 0LL;
    *(_QWORD *)(v8 + 8) = &Windows::UI::Composition::CommitCompletionWaiter::s_InterfaceType;
    v9 = *a2;
    *(_DWORD *)(v8 + 176) = *a3;
    v13 = v8;
    v10 = Windows::UI::Composition::CompositionObject::RuntimeClassInitialize(
            (Windows::UI::Composition::CompositionObject *)v8,
            v9);
    if ( v10 >= 0 )
    {
      *a1 = v8;
      return 0LL;
    }
  }
  else
  {
    v10 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<Windows::UI::Composition::InjectionAnimation>::~MakeAllocator<Windows::UI::Composition::InjectionAnimation>(&v12);
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v13);
  return (unsigned int)v10;
}
