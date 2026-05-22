/*
 * XREFs of ?RuntimeClassInitialize@DropShadow@Composition@UI@Windows@@QEAAJPEAVCompositor@234@@Z @ 0x1800881E0
 * Callers:
 *     ??$MakeAndInitialize2@VDropShadow@Composition@UI@Windows@@V1234@PEAVCompositor@234@@Details@WRL2@Microsoft@@YAJPEAPEAVDropShadow@Composition@UI@Windows@@$$QEAPEAVCompositor@456@@Z @ 0x1800880E0 (--$MakeAndInitialize2@VDropShadow@Composition@UI@Windows@@V1234@PEAVCompositor@234@@Details@WRL2.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RuntimeClassInitialize@ProxyObject@Composition@UI@Windows@@QEAAJPEAVCompositor@234@I_N@Z @ 0x180058D30 (-RuntimeClassInitialize@ProxyObject@Composition@UI@Windows@@QEAAJPEAVCompositor@234@I_N@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::DropShadow::RuntimeClassInitialize(
        Windows::UI::Composition::DropShadow *this,
        struct Windows::UI::Composition::Compositor *a2)
{
  int v3; // eax
  unsigned int v4; // edi
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = Windows::UI::Composition::ProxyObject::RuntimeClassInitialize(this, a2, 55, 0);
  v4 = v3;
  if ( v3 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x44,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtdropshadow.cpp",
      (const char *)(unsigned int)v3);
    return v4;
  }
  else
  {
    *((_DWORD *)this + 55) = 0;
    *((_DWORD *)this + 47) = 1065353216;
    *((_DWORD *)this + 49) = 1065353216;
    result = 0LL;
    *((_DWORD *)this + 48) = 1091567616;
  }
  return result;
}
