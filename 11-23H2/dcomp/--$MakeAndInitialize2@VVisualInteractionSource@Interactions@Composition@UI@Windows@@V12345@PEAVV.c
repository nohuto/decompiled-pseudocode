/*
 * XREFs of ??$MakeAndInitialize2@VVisualInteractionSource@Interactions@Composition@UI@Windows@@V12345@PEAVVisual@345@AEA_N@Details@WRL2@Microsoft@@YAJPEAPEAVVisualInteractionSource@Interactions@Composition@UI@Windows@@$$QEAPEAVVisual@567@AEA_N@Z @ 0x18011C59C
 * Callers:
 *     ??$CreateInteractionSource_NoLock@VVisualInteractionSource@Interactions@Composition@UI@Windows@@UIVisualInteractionSource@2345@@Interactions@Composition@UI@Windows@@YAJPEAUIVisual@123@_NPEAPEAUIVisualInteractionSource@0123@@Z @ 0x18011C29C (--$CreateInteractionSource_NoLock@VVisualInteractionSource@Interactions@Composition@UI@Windows@@.c)
 * Callees:
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18004400C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     memset_0 @ 0x18009698C (memset_0.c)
 *     ??1?$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800A1230 (--1-$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A203C (--1-$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@M.c)
 *     ??0VisualInteractionSource@Interactions@Composition@UI@Windows@@QEAA@XZ @ 0x18011C8F0 (--0VisualInteractionSource@Interactions@Composition@UI@Windows@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@VisualInteractionSource@Interactions@Composition@UI@Windows@@QEAAJPEAVVisual@345@_N@Z @ 0x18011DB7C (-RuntimeClassInitialize@VisualInteractionSource@Interactions@Composition@UI@Windows@@QEAAJPEAVVi.c)
 */

__int64 __fastcall Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::Interactions::VisualInteractionSource,Windows::UI::Composition::Interactions::VisualInteractionSource,Windows::UI::Composition::Visual *,bool &>(
        Microsoft::WRL2::NestableRuntimeClass **a1,
        struct Windows::UI::Composition::Visual **a2,
        char *a3)
{
  void *v6; // rax
  int v7; // edi
  Windows::UI::Composition::Interactions::VisualInteractionSource *v8; // rax
  Microsoft::WRL2::NestableRuntimeClass *v9; // rbx
  char v10; // r8
  struct Windows::UI::Composition::Visual *v11; // rdx
  void *v13; // [rsp+40h] [rbp+8h] BYREF
  Microsoft::WRL2::NestableRuntimeClass *v14; // [rsp+58h] [rbp+20h] BYREF

  *a1 = 0LL;
  v14 = 0LL;
  v6 = DefaultHeap::Alloc(0x120uLL);
  v13 = v6;
  if ( !v6 )
  {
    v7 = -2147024882;
LABEL_7:
    Microsoft::WRL::Details::MakeAllocator<Windows::UI::Composition::InjectionAnimation>::~MakeAllocator<Windows::UI::Composition::InjectionAnimation>(&v13);
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v14);
    return (unsigned int)v7;
  }
  v8 = (Windows::UI::Composition::Interactions::VisualInteractionSource *)memset_0(v6, 0, 0x120uLL);
  if ( v8 )
    v9 = (Microsoft::WRL2::NestableRuntimeClass *)Windows::UI::Composition::Interactions::VisualInteractionSource::VisualInteractionSource(v8);
  else
    v9 = 0LL;
  v13 = 0LL;
  *((_QWORD *)v9 + 1) = &Windows::UI::Composition::Interactions::VisualInteractionSource::s_InterfaceType;
  v10 = *a3;
  v11 = *a2;
  v14 = v9;
  v7 = Windows::UI::Composition::Interactions::VisualInteractionSource::RuntimeClassInitialize(v9, v11, v10);
  if ( v7 < 0 )
    goto LABEL_7;
  *a1 = v9;
  return 0LL;
}
