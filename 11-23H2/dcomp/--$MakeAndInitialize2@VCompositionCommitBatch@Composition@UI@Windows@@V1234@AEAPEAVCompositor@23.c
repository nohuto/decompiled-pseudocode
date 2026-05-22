/*
 * XREFs of ??$MakeAndInitialize2@VCompositionCommitBatch@Composition@UI@Windows@@V1234@AEAPEAVCompositor@234@PEAVBatchController@234@@Details@WRL2@Microsoft@@YAJPEAPEAVCompositionCommitBatch@Composition@UI@Windows@@AEAPEAVCompositor@456@$$QEAPEAVBatchController@456@@Z @ 0x180002DCC
 * Callers:
 *     ?GetCurrentCycleBatch@BatchController@Composition@UI@Windows@@QEAAXPEAPEAVCompositionCommitBatch@234@@Z @ 0x180002D74 (-GetCurrentCycleBatch@BatchController@Composition@UI@Windows@@QEAAXPEAPEAVCompositionCommitBatch.c)
 * Callees:
 *     ??0CompositionBatch@Composition@UI@Windows@@QEAA@XZ @ 0x180002E8C (--0CompositionBatch@Composition@UI@Windows@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@CompositionBatch@Composition@UI@Windows@@QEAAJPEAVCompositor@234@PEAVBatchController@234@_N@Z @ 0x180002EF4 (-RuntimeClassInitialize@CompositionBatch@Composition@UI@Windows@@QEAAJPEAVCompositor@234@PEAVBat.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18004400C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     memset_0 @ 0x18009698C (memset_0.c)
 *     ??1?$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800A1230 (--1-$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A203C (--1-$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@M.c)
 */

__int64 __fastcall Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::CompositionCommitBatch,Windows::UI::Composition::CompositionCommitBatch,Windows::UI::Composition::Compositor * &,Windows::UI::Composition::BatchController *>(
        Windows::UI::Composition::CompositionBatch **a1,
        struct Windows::UI::Composition::Compositor **a2,
        struct Windows::UI::Composition::BatchController **a3)
{
  void *v6; // rax
  Windows::UI::Composition::CompositionBatch *v7; // rax
  Windows::UI::Composition::CompositionBatch *v8; // rbx
  struct Windows::UI::Composition::BatchController *v9; // r8
  struct Windows::UI::Composition::Compositor *v10; // rdx
  int v11; // eax
  unsigned int v12; // edi
  int v14; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  void *v16; // [rsp+40h] [rbp+8h] BYREF
  Windows::UI::Composition::CompositionBatch *v17; // [rsp+58h] [rbp+20h] BYREF

  *a1 = 0LL;
  v17 = 0LL;
  v6 = DefaultHeap::Alloc(0xD8uLL);
  v16 = v6;
  if ( v6 )
  {
    v7 = (Windows::UI::Composition::CompositionBatch *)memset_0(v6, 0, 0xD8uLL);
    v8 = v7;
    if ( v7 )
    {
      Windows::UI::Composition::CompositionBatch::CompositionBatch(v7);
      *(_QWORD *)v8 = &Windows::UI::Composition::CompositionCommitBatch::`vftable';
      *((_QWORD *)v8 + 25) = &Windows::UI::Composition::CompositionCommitBatch::Api::`vftable';
    }
    else
    {
      v8 = 0LL;
    }
    v16 = 0LL;
    *((_QWORD *)v8 + 1) = &Windows::UI::Composition::CompositionCommitBatch::s_InterfaceType;
    v9 = *a3;
    v10 = *a2;
    v17 = v8;
    v11 = Windows::UI::Composition::CompositionBatch::RuntimeClassInitialize(v8, v10, v9, 0);
    v12 = v11;
    if ( v11 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x36,
        (unsigned int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositioncommitbatch.cpp",
        (const char *)(unsigned int)v11,
        v14);
      Microsoft::WRL::Details::MakeAllocator<Windows::UI::Composition::InjectionAnimation>::~MakeAllocator<Windows::UI::Composition::InjectionAnimation>(&v16);
      Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v17);
      return v12;
    }
    else
    {
      *a1 = v8;
      return 0LL;
    }
  }
  else
  {
    Microsoft::WRL::Details::MakeAllocator<Windows::UI::Composition::InjectionAnimation>::~MakeAllocator<Windows::UI::Composition::InjectionAnimation>(&v16);
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v17);
    return 2147942414LL;
  }
}
