/*
 * XREFs of ?RuntimeClassInitialize@GlobalCompositionTarget@Composition@UI@Windows@@QEAAJPEAVCompositor@234@PEAUICompositionTargetHostPartner@234@@Z @ 0x180158D5C
 * Callers:
 *     ??$MakeAndInitialize2@VGlobalCompositionTarget@Composition@UI@Windows@@VCompositionTarget@234@AEAPEAVCompositor@234@AEAPEAUICompositionTargetHostPartner@234@@Details@WRL2@Microsoft@@YAJPEAPEAVCompositionTarget@Composition@UI@Windows@@AEAPEAVCompositor@456@AEAPEAUICompositionTargetHostPartner@456@@Z @ 0x180158AD8 (--$MakeAndInitialize2@VGlobalCompositionTarget@Composition@UI@Windows@@VCompositionTarget@234@AE.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$make_unique@VSystemBackdropHelper@Composition@UI@Windows@@PEAVContainerVisual@234@PEAVCompositor@234@$0A@@std@@YA?AV?$unique_ptr@VSystemBackdropHelper@Composition@UI@Windows@@U?$default_delete@VSystemBackdropHelper@Composition@UI@Windows@@@std@@@0@$$QEAPEAVContainerVisual@Composition@UI@Windows@@$$QEAPEAVCompositor@345@@Z @ 0x18006D088 (--$make_unique@VSystemBackdropHelper@Composition@UI@Windows@@PEAVContainerVisual@234@PEAVComposi.c)
 *     ??$?4U?$default_delete@VSystemBackdropHelper@Composition@UI@Windows@@@std@@$0A@@?$unique_ptr@VSystemBackdropHelper@Composition@UI@Windows@@U?$default_delete@VSystemBackdropHelper@Composition@UI@Windows@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18006D0E8 (--$-4U-$default_delete@VSystemBackdropHelper@Composition@UI@Windows@@@std@@$0A@@-$unique_ptr@VSy.c)
 *     ??1SystemBackdropHelper@Composition@UI@Windows@@QEAA@XZ @ 0x18008A69C (--1SystemBackdropHelper@Composition@UI@Windows@@QEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180095B64 (--3@YAXPEAX_K@Z.c)
 *     ?RuntimeClassInitialize@CompositionTarget@Composition@UI@Windows@@IEAAJPEAVCompositor@234@PEAUICompositionTargetHostPartner@234@@Z @ 0x180196AD4 (-RuntimeClassInitialize@CompositionTarget@Composition@UI@Windows@@IEAAJPEAVCompositor@234@PEAUIC.c)
 */

__int64 __fastcall Windows::UI::Composition::GlobalCompositionTarget::RuntimeClassInitialize(
        Windows::UI::Composition::SystemBackdropHelper **this,
        struct Windows::UI::Composition::Compositor *a2,
        struct Windows::UI::Composition::ICompositionTargetHostPartner *a3)
{
  int v4; // eax
  unsigned int v5; // ebx
  Windows::UI::Composition::SystemBackdropHelper **v7; // rax
  Windows::UI::Composition::SystemBackdropHelper *v8; // rbx
  Windows::UI::Composition::SystemBackdropHelper *v9; // [rsp+20h] [rbp-18h] BYREF
  Windows::UI::Composition::SystemBackdropHelper *v10; // [rsp+28h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  Windows::UI::Composition::SystemBackdropHelper *v12; // [rsp+58h] [rbp+20h] BYREF

  v4 = Windows::UI::Composition::CompositionTarget::RuntimeClassInitialize(
         (Windows::UI::Composition::CompositionTarget *)this,
         a2,
         a3);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v12 = this[3];
    v9 = this[23];
    v7 = (Windows::UI::Composition::SystemBackdropHelper **)std::make_unique<Windows::UI::Composition::SystemBackdropHelper,Windows::UI::Composition::ContainerVisual *,Windows::UI::Composition::Compositor *,0>(
                                                              &v10,
                                                              (__int64 *)&v9,
                                                              (__int64 *)&v12);
    std::unique_ptr<Windows::UI::Composition::SystemBackdropHelper>::operator=<std::default_delete<Windows::UI::Composition::SystemBackdropHelper>,0>(
      this + 26,
      v7);
    v8 = v10;
    if ( v10 )
    {
      Windows::UI::Composition::SystemBackdropHelper::~SystemBackdropHelper(v10);
      operator delete(v8);
    }
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1E,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\global\\wrtcompositiontargetg.cpp",
      (const char *)(unsigned int)v4);
    return v5;
  }
}
