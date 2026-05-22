/*
 * XREFs of ??$MakeAndInitialize2@VCompositionConditionalValue@Interactions@Composition@UI@Windows@@V12345@PEAVCompositor@345@@Details@WRL2@Microsoft@@YAJPEAPEAVCompositionConditionalValue@Interactions@Composition@UI@Windows@@$$QEAPEAVCompositor@567@@Z @ 0x18012CF8C
 * Callers:
 *     ?Create@CompositionConditionalValueStatics@Interactions@Composition@UI@Windows@@UEAAJPEAUICompositor@345@PEAPEAUICompositionConditionalValue@2345@@Z @ 0x18012D130 (-Create@CompositionConditionalValueStatics@Interactions@Composition@UI@Windows@@UEAAJPEAUICompos.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18004400C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??0CompositionObject@Composition@UI@Windows@@QEAA@XZ @ 0x180053828 (--0CompositionObject@Composition@UI@Windows@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@CompositionObject@Composition@UI@Windows@@QEAAJPEAVCompositor@234@@Z @ 0x180055F60 (-RuntimeClassInitialize@CompositionObject@Composition@UI@Windows@@QEAAJPEAVCompositor@234@@Z.c)
 *     memset_0 @ 0x18009698C (memset_0.c)
 *     ??1?$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800A1230 (--1-$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A203C (--1-$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@M.c)
 */

__int64 __fastcall Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::Interactions::CompositionConditionalValue,Windows::UI::Composition::Interactions::CompositionConditionalValue,Windows::UI::Composition::Compositor *>(
        Windows::UI::Composition::CompositionObject **a1,
        struct Windows::UI::Composition::Compositor **a2)
{
  void *v4; // rax
  Windows::UI::Composition::CompositionObject *v6; // rax
  Windows::UI::Composition::CompositionObject *v7; // rbx
  struct Windows::UI::Composition::Compositor *v8; // rdx
  int v9; // eax
  unsigned int v10; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  void *v12; // [rsp+30h] [rbp+8h] BYREF
  Microsoft::WRL2::NestableRuntimeClass *v13; // [rsp+40h] [rbp+18h] BYREF

  *a1 = 0LL;
  v13 = 0LL;
  v4 = DefaultHeap::Alloc(0xA8uLL);
  v12 = v4;
  if ( v4 )
  {
    v6 = (Windows::UI::Composition::CompositionObject *)memset_0(v4, 0, 0xA8uLL);
    v7 = v6;
    if ( v6 )
    {
      Windows::UI::Composition::CompositionObject::CompositionObject(v6);
      *(_QWORD *)v7 = &Windows::UI::Composition::Interactions::CompositionConditionalValue::`vftable';
      *((_QWORD *)v7 + 18) = 0LL;
      *((_QWORD *)v7 + 19) = 0LL;
      *((_QWORD *)v7 + 16) = &Windows::UI::Composition::Interactions::CompositionConditionalValue::Api::`vftable';
    }
    else
    {
      v7 = 0LL;
    }
    v12 = 0LL;
    *((_QWORD *)v7 + 1) = &Windows::UI::Composition::Interactions::CompositionConditionalValue::s_InterfaceType;
    v8 = *a2;
    v13 = v7;
    v9 = Windows::UI::Composition::CompositionObject::RuntimeClassInitialize(v7, v8);
    v10 = v9;
    if ( v9 >= 0 )
    {
      *a1 = v7;
      return 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x32,
        (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositionconditionalvalue.cpp",
        (const char *)(unsigned int)v9);
      Microsoft::WRL::Details::MakeAllocator<Windows::UI::Composition::InjectionAnimation>::~MakeAllocator<Windows::UI::Composition::InjectionAnimation>(&v12);
      Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v13);
      return v10;
    }
  }
  else
  {
    Microsoft::WRL::Details::MakeAllocator<Windows::UI::Composition::InjectionAnimation>::~MakeAllocator<Windows::UI::Composition::InjectionAnimation>(&v12);
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v13);
    return 2147942414LL;
  }
}
