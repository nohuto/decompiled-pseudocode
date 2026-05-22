/*
 * XREFs of ?RuntimeClassInitialize@VisualReferenceController@Private@Composition@UI@Windows@@QEAAJPEAVCompositor@345@_N@Z @ 0x18016F474
 * Callers:
 *     ??$MakeAndInitialize2@VVisualReferenceController@Private@Composition@UI@Windows@@V12345@PEAVCompositor@345@@Details@WRL2@Microsoft@@YAJPEAPEAVVisualReferenceController@Private@Composition@UI@Windows@@$$QEAPEAVCompositor@567@@Z @ 0x1801220A4 (--$MakeAndInitialize2@VVisualReferenceController@Private@Composition@UI@Windows@@V12345@PEAVComp.c)
 *     ??$MakeAndInitialize2@VVisualReferenceController@Private@Composition@UI@Windows@@V12345@PEAVCompositor@345@_N@Details@WRL2@Microsoft@@YAJPEAPEAVVisualReferenceController@Private@Composition@UI@Windows@@$$QEAPEAVCompositor@567@$$QEA_N@Z @ 0x180122168 (--$MakeAndInitialize2@VVisualReferenceController@Private@Composition@UI@Windows@@V1_ea_180122168.c)
 *     ?RuntimeClassInitialize@InteropVisualReferenceController@Composition@UI@Windows@@QEAAJPEAVCompositor@234@_N@Z @ 0x18019A7F0 (-RuntimeClassInitialize@InteropVisualReferenceController@Composition@UI@Windows@@QEAAJPEAVCompos.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RuntimeClassInitialize@VisualReference@Internal@Composition@UI@Windows@@QEAAJPEAVCompositor@345@I_NPEAX@Z @ 0x18015787C (-RuntimeClassInitialize@VisualReference@Internal@Composition@UI@Windows@@QEAAJPEAVCompositor@345.c)
 */

__int64 __fastcall Windows::UI::Composition::Private::VisualReferenceController::RuntimeClassInitialize(
        Windows::UI::Composition::Private::VisualReferenceController *this,
        DirectComposition::CDevice **a2,
        unsigned __int8 a3)
{
  int v3; // eax
  unsigned int v4; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v3 = Windows::UI::Composition::Internal::VisualReference::RuntimeClassInitialize(this, a2, 201, a3, 0LL);
  v4 = v3;
  if ( v3 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1F,
    (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtvisualreferencecontroller.cpp",
    (const char *)(unsigned int)v3);
  return v4;
}
