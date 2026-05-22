/*
 * XREFs of ?RuntimeClassInitialize@InsetClip@Composition@UI@Windows@@QEAAJPEAVCompositor@234@MMMM@Z @ 0x18006FC90
 * Callers:
 *     ??$MakeAndInitialize2@VInsetClip@Composition@UI@Windows@@V1234@PEAVCompositor@234@AEAMAEAMAEAMAEAM@Details@WRL2@Microsoft@@YAJPEAPEAVInsetClip@Composition@UI@Windows@@$$QEAPEAVCompositor@456@AEAM222@Z @ 0x18006FB34 (--$MakeAndInitialize2@VInsetClip@Composition@UI@Windows@@V1234@PEAVCompositor@234@AEAMAEAMAEAMAE.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ResourceSetBufferProperty@CDevice@DirectComposition@@QEAAXIIPEBX_K@Z @ 0x18004CEB0 (-ResourceSetBufferProperty@CDevice@DirectComposition@@QEAAXIIPEBX_K@Z.c)
 *     ?RuntimeClassInitialize@ProxyObject@Composition@UI@Windows@@QEAAJPEAVCompositor@234@I_N@Z @ 0x180058D30 (-RuntimeClassInitialize@ProxyObject@Composition@UI@Windows@@QEAAJPEAVCompositor@234@I_N@Z.c)
 *     ?ResourceSetIntegerProperty@CDevice@DirectComposition@@QEAAXII_J@Z @ 0x1800707B0 (-ResourceSetIntegerProperty@CDevice@DirectComposition@@QEAAXII_J@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::InsetClip::RuntimeClassInitialize(
        Windows::UI::Composition::InsetClip *this,
        struct Windows::UI::Composition::Compositor *a2,
        float a3,
        float a4,
        float a5,
        float a6)
{
  int v7; // eax
  unsigned int v8; // ebx
  __int64 result; // rax
  float v10[12]; // [rsp+30h] [rbp-58h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  v10[0] = a3;
  v10[1] = a4;
  v10[2] = a5;
  v10[3] = a6;
  v7 = Windows::UI::Composition::ProxyObject::RuntimeClassInitialize(this, a2, 138, 0);
  v8 = v7;
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4F,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtinsetclip.cpp",
      (const char *)(unsigned int)v7);
    return v8;
  }
  else
  {
    DirectComposition::CDevice::ResourceSetIntegerProperty(
      *(DirectComposition::CDevice **)(*((_QWORD *)this + 3) + 456LL),
      *((_DWORD *)this + 32),
      0x14u,
      1LL);
    DirectComposition::CDevice::ResourceSetBufferProperty(
      *(DirectComposition::CDevice **)(*((_QWORD *)this + 3) + 456LL),
      *((_DWORD *)this + 32),
      16,
      v10,
      0x10uLL);
    result = 0LL;
    *((float *)this + 50) = a3;
    *((float *)this + 51) = a4;
    *((float *)this + 52) = a5;
    *((float *)this + 53) = a6;
  }
  return result;
}
