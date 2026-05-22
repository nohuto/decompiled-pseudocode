/*
 * XREFs of ?RuntimeClassInitialize@InteractionTracker@Interactions@Composition@UI@Windows@@QEAAJPEAVCompositor@345@PEAUIInteractionTrackerOwner@2345@@Z @ 0x18013A984
 * Callers:
 *     ??$MakeAndInitialize2@VInteractionTracker@Interactions@Composition@UI@Windows@@V12345@PEAVCompositor@345@$$T@Details@WRL2@Microsoft@@YAJPEAPEAVInteractionTracker@Interactions@Composition@UI@Windows@@$$QEAPEAVCompositor@567@$$QEA$$T@Z @ 0x180134AF8 (--$MakeAndInitialize2@VInteractionTracker@Interactions@Composition@UI@Windows@@V12345@PEAVCompos.c)
 *     ??$MakeAndInitialize2@VInteractionTracker@Interactions@Composition@UI@Windows@@V12345@PEAVCompositor@345@AEAPEAUIInteractionTrackerOwner@2345@@Details@WRL2@Microsoft@@YAJPEAPEAVInteractionTracker@Interactions@Composition@UI@Windows@@$$QEAPEAVCompositor@567@AEAPEAUIInteractionTrackerOwner@4567@@Z @ 0x180134BB8 (--$MakeAndInitialize2@VInteractionTracker@Interactions@Composition@UI@Windows@@V123_ea_180134BB8.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RuntimeClassInitialize@ProxyObject@Composition@UI@Windows@@QEAAJPEAVCompositor@234@I_N@Z @ 0x180058D30 (-RuntimeClassInitialize@ProxyObject@Composition@UI@Windows@@QEAAJPEAVCompositor@234@I_N@Z.c)
 *     ?SetOwner@InteractionTracker@Interactions@Composition@UI@Windows@@QEAAXPEAUIInteractionTrackerOwner@2345@@Z @ 0x18013B148 (-SetOwner@InteractionTracker@Interactions@Composition@UI@Windows@@QEAAXPEAUIInteractionTrackerOw.c)
 */

__int64 __fastcall Windows::UI::Composition::Interactions::InteractionTracker::RuntimeClassInitialize(
        Windows::UI::Composition::Interactions::InteractionTracker *this,
        struct Windows::UI::Composition::Compositor *a2,
        struct Windows::UI::Composition::Interactions::IInteractionTrackerOwner *a3)
{
  int v5; // eax
  unsigned int v6; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v5 = Windows::UI::Composition::ProxyObject::RuntimeClassInitialize(this, a2, 90, 0);
  v6 = v5;
  if ( v5 >= 0 )
  {
    *((_DWORD *)this + 102) = 4;
    *((_DWORD *)this + 73) = 1065353216;
    *((_DWORD *)this + 74) = 1065353216;
    *((_DWORD *)this + 75) = 1065353216;
    Windows::UI::Composition::Interactions::InteractionTracker::SetOwner(this, a3);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x49,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtinteractiontracker.cpp",
      (const char *)(unsigned int)v5);
    return v6;
  }
}
