/*
 * XREFs of ?RuntimeClassInitialize@CursorVisual@Composition@UI@Windows@@QEAAJPEAVCompositor@234@_K@Z @ 0x180175A64
 * Callers:
 *     ??$MakeAndInitialize2@VCursorVisual@Composition@UI@Windows@@V1234@PEAVCompositor@234@AEA_K@Details@WRL2@Microsoft@@YAJPEAPEAVCursorVisual@Composition@UI@Windows@@$$QEAPEAVCompositor@456@AEA_K@Z @ 0x180120B5C (--$MakeAndInitialize2@VCursorVisual@Composition@UI@Windows@@V1234@PEAVCompositor@234@AEA_K@Detai.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ResourceSetBufferProperty@CDevice@DirectComposition@@QEAAXIIPEBX_K@Z @ 0x18004CEB0 (-ResourceSetBufferProperty@CDevice@DirectComposition@@QEAAXIIPEBX_K@Z.c)
 *     ?RuntimeClassInitialize@ContainerVisual@Composition@UI@Windows@@QEAAJPEAVCompositor@234@I@Z @ 0x18006D024 (-RuntimeClassInitialize@ContainerVisual@Composition@UI@Windows@@QEAAJPEAVCompositor@234@I@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::CursorVisual::RuntimeClassInitialize(
        Windows::UI::Composition::CursorVisual *this,
        struct Windows::UI::Composition::Compositor *a2,
        __int64 a3)
{
  int v4; // eax
  unsigned int v5; // edi
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v8; // [rsp+50h] [rbp+18h] BYREF

  v8 = a3;
  *((_QWORD *)this + 41) = a3;
  v4 = Windows::UI::Composition::ContainerVisual::RuntimeClassInitialize(this, a2, 0x32u);
  v5 = v4;
  if ( v4 >= 0 )
  {
    DirectComposition::CDevice::ResourceSetBufferProperty(
      *(DirectComposition::CDevice **)(*((_QWORD *)this + 3) + 456LL),
      *((_DWORD *)this + 32),
      0,
      &v8,
      8uLL);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x31,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcursorvisual.cpp",
      (const char *)(unsigned int)v4);
    return v5;
  }
}
