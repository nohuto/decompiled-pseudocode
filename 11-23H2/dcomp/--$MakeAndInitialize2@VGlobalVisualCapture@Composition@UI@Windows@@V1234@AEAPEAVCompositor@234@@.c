/*
 * XREFs of ??$MakeAndInitialize2@VGlobalVisualCapture@Composition@UI@Windows@@V1234@AEAPEAVCompositor@234@@Details@WRL2@Microsoft@@YAJPEAPEAVGlobalVisualCapture@Composition@UI@Windows@@AEAPEAVCompositor@456@@Z @ 0x1801541EC
 * Callers:
 *     ?Create@VisualCapture@Composition@UI@Windows@@SAJPEAVCompositor@234@PEAPEAV1234@@Z @ 0x18015462C (-Create@VisualCapture@Composition@UI@Windows@@SAJPEAVCompositor@234@PEAPEAV1234@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18004400C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?RuntimeClassInitialize@ProxyObject@Composition@UI@Windows@@QEAAJPEAVCompositor@234@I_N@Z @ 0x180058D30 (-RuntimeClassInitialize@ProxyObject@Composition@UI@Windows@@QEAAJPEAVCompositor@234@I_N@Z.c)
 *     memset_0 @ 0x18009698C (memset_0.c)
 *     ??1?$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800A1230 (--1-$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A203C (--1-$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@M.c)
 *     ??0VisualCapture@Composition@UI@Windows@@QEAA@XZ @ 0x18015434C (--0VisualCapture@Composition@UI@Windows@@QEAA@XZ.c)
 */

__int64 __fastcall Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::GlobalVisualCapture,Windows::UI::Composition::GlobalVisualCapture,Windows::UI::Composition::Compositor * &>(
        Microsoft::WRL2::NestableRuntimeClass **a1,
        struct Windows::UI::Composition::Compositor **a2)
{
  void *v4; // rax
  Windows::UI::Composition::VisualCapture *v6; // rax
  Microsoft::WRL2::NestableRuntimeClass *v7; // rbx
  struct Windows::UI::Composition::Compositor *v8; // rdx
  int v9; // eax
  unsigned int v10; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  void *v12; // [rsp+30h] [rbp+8h] BYREF
  Microsoft::WRL2::NestableRuntimeClass *v13; // [rsp+40h] [rbp+18h] BYREF

  *a1 = 0LL;
  v13 = 0LL;
  v4 = DefaultHeap::Alloc(0x118uLL);
  v12 = v4;
  if ( v4 )
  {
    v6 = (Windows::UI::Composition::VisualCapture *)memset_0(v4, 0, 0x118uLL);
    v7 = v6;
    if ( v6 )
    {
      Windows::UI::Composition::VisualCapture::VisualCapture(v6);
      *(_QWORD *)v7 = &Windows::UI::Composition::GlobalVisualCapture::`vftable';
      *((_QWORD *)v7 + 33) = &Windows::UI::Composition::GlobalVisualCapture::BackCompat::`vftable';
    }
    else
    {
      v7 = 0LL;
    }
    v12 = 0LL;
    *((_QWORD *)v7 + 1) = &Windows::UI::Composition::GlobalVisualCapture::s_InterfaceType;
    v8 = *a2;
    v13 = v7;
    v9 = Windows::UI::Composition::ProxyObject::RuntimeClassInitialize(v7, v8, 198, 0);
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
        (void *)0x31,
        (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtvisualcapture.cpp",
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
