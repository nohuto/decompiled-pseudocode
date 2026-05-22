/*
 * XREFs of ?RuntimeClassInitialize@CompositionDebugHeatMaps@Diagnostics@Composition@UI@Windows@@QEAAJPEAVCompositor@345@@Z @ 0x18018AEA4
 * Callers:
 *     ??$MakeAndInitialize2@VCompositionDebugHeatMaps@Diagnostics@Composition@UI@Windows@@V12345@AEAPEAVCompositor@345@@Details@WRL2@Microsoft@@YAJPEAPEAVCompositionDebugHeatMaps@Diagnostics@Composition@UI@Windows@@AEAPEAVCompositor@567@@Z @ 0x18012D63C (--$MakeAndInitialize2@VCompositionDebugHeatMaps@Diagnostics@Composition@UI@Windows@@V12345@AEAPE.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RuntimeClassInitialize@ContextRuntimeClass@WRL2@Microsoft@@QEAAJPEAVContextSession@23@@Z @ 0x180058910 (-RuntimeClassInitialize@ContextRuntimeClass@WRL2@Microsoft@@QEAAJPEAVContextSession@23@@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::Diagnostics::CompositionDebugHeatMaps::RuntimeClassInitialize(
        Windows::UI::Composition::Diagnostics::CompositionDebugHeatMaps *this,
        struct Windows::UI::Composition::Compositor *a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = Microsoft::WRL2::ContextRuntimeClass::RuntimeClassInitialize(this, a2);
  v4 = v3;
  if ( v3 >= 0 )
  {
    result = 0LL;
    *(_OWORD *)((char *)this + 56) = _xmm;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2D,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositiondebugheatmaps.cpp",
      (const char *)(unsigned int)v3);
    return v4;
  }
  return result;
}
