/*
 * XREFs of ?RuntimeClassInitialize@CompositionDebugSettings@Diagnostics@Composition@UI@Windows@@QEAAJPEAVCompositor@345@@Z @ 0x18012DB08
 * Callers:
 *     ??$MakeAndInitialize2@VCompositionDebugSettings@Diagnostics@Composition@UI@Windows@@V12345@PEAVCompositor@345@@Details@WRL2@Microsoft@@YAJPEAPEAVCompositionDebugSettings@Diagnostics@Composition@UI@Windows@@$$QEAPEAVCompositor@567@@Z @ 0x18012D710 (--$MakeAndInitialize2@VCompositionDebugSettings@Diagnostics@Composition@UI@Windows@@V12345@PEAVC.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RuntimeClassInitialize@ContextRuntimeClass@WRL2@Microsoft@@QEAAJPEAVContextSession@23@@Z @ 0x180058910 (-RuntimeClassInitialize@ContextRuntimeClass@WRL2@Microsoft@@QEAAJPEAVContextSession@23@@Z.c)
 *     ??$MakeAndInitialize2@VCompositionDebugHeatMaps@Diagnostics@Composition@UI@Windows@@V12345@AEAPEAVCompositor@345@@Details@WRL2@Microsoft@@YAJPEAPEAVCompositionDebugHeatMaps@Diagnostics@Composition@UI@Windows@@AEAPEAVCompositor@567@@Z @ 0x18012D63C (--$MakeAndInitialize2@VCompositionDebugHeatMaps@Diagnostics@Composition@UI@Windows@@V12345@AEAPE.c)
 */

__int64 __fastcall Windows::UI::Composition::Diagnostics::CompositionDebugSettings::RuntimeClassInitialize(
        Microsoft::WRL2::NestableRuntimeClass **this,
        struct Windows::UI::Composition::Compositor *a2)
{
  int v3; // ebx
  __int64 v4; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct Windows::UI::Composition::Compositor *v7; // [rsp+38h] [rbp+10h] BYREF

  v7 = a2;
  v3 = Microsoft::WRL2::ContextRuntimeClass::RuntimeClassInitialize((Microsoft::WRL2::ContextRuntimeClass *)this, a2);
  if ( v3 < 0 )
  {
    v4 = 49LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v4,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositiondebugsettings.cpp",
      (const char *)(unsigned int)v3);
    return (unsigned int)v3;
  }
  v3 = Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::Diagnostics::CompositionDebugHeatMaps,Windows::UI::Composition::Diagnostics::CompositionDebugHeatMaps,Windows::UI::Composition::Compositor * &>(
         this + 7,
         &v7);
  if ( v3 < 0 )
  {
    v4 = 53LL;
    goto LABEL_3;
  }
  return 0LL;
}
