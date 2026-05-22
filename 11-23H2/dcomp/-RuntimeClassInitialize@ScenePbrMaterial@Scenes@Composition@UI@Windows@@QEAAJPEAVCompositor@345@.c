/*
 * XREFs of ?RuntimeClassInitialize@ScenePbrMaterial@Scenes@Composition@UI@Windows@@QEAAJPEAVCompositor@345@I_N@Z @ 0x180191800
 * Callers:
 *     ?RuntimeClassInitialize@SceneMetallicRoughnessMaterial@Scenes@Composition@UI@Windows@@QEAAJPEAVCompositor@345@@Z @ 0x18013F4E0 (-RuntimeClassInitialize@SceneMetallicRoughnessMaterial@Scenes@Composition@UI@Windows@@QEAAJPEAVC.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RuntimeClassInitialize@ProxyObject@Composition@UI@Windows@@QEAAJPEAVCompositor@234@I_N@Z @ 0x180058D30 (-RuntimeClassInitialize@ProxyObject@Composition@UI@Windows@@QEAAJPEAVCompositor@234@I_N@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::Scenes::ScenePbrMaterial::RuntimeClassInitialize(
        Windows::UI::Composition::Scenes::ScenePbrMaterial *this,
        struct Windows::UI::Composition::Compositor *a2)
{
  int v2; // eax
  unsigned int v3; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = Windows::UI::Composition::ProxyObject::RuntimeClassInitialize(this, a2, 159, 0);
  v3 = v2;
  if ( v2 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x3B,
    (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtspatialpbrmaterial.cpp",
    (const char *)(unsigned int)v2);
  return v3;
}
