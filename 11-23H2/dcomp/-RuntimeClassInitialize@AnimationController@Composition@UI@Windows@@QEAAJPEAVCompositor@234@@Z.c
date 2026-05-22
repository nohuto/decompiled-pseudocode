/*
 * XREFs of ?RuntimeClassInitialize@AnimationController@Composition@UI@Windows@@QEAAJPEAVCompositor@234@@Z @ 0x1800815CC
 * Callers:
 *     ??$MakeAndInitialize2@VAnimationController@Composition@UI@Windows@@V1234@PEAVCompositor@234@@Details@WRL2@Microsoft@@YAJPEAPEAVAnimationController@Composition@UI@Windows@@$$QEAPEAVCompositor@456@@Z @ 0x1800814B8 (--$MakeAndInitialize2@VAnimationController@Composition@UI@Windows@@V1234@PEAVCompositor@234@@Det.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RuntimeClassInitialize@ProxyObject@Composition@UI@Windows@@QEAAJPEAVCompositor@234@I_N@Z @ 0x180058D30 (-RuntimeClassInitialize@ProxyObject@Composition@UI@Windows@@QEAAJPEAVCompositor@234@I_N@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::AnimationController::RuntimeClassInitialize(
        Windows::UI::Composition::AnimationController *this,
        struct Windows::UI::Composition::Compositor *a2)
{
  int v4; // eax
  unsigned int v5; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = Windows::UI::Composition::ProxyObject::RuntimeClassInitialize(this, a2, 3, 0);
  v5 = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3A,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtanimationcontroller.cpp",
      (const char *)(unsigned int)v4);
    return v5;
  }
  else
  {
    *((_DWORD *)this + 47) = 0;
    *((_DWORD *)this + 48) = 0;
    *((_DWORD *)this + 46) = 1065353216;
    *((_QWORD *)this + 20) = *((_QWORD *)a2 + 57);
    return 0LL;
  }
}
