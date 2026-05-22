/*
 * XREFs of ?CreateColorGradientStop@CompositorCommon@Composition@UI@Windows@@QEAAJMAEBU_D3DCOLORVALUE@@PEAPEAVCompositionColorGradientStop@234@@Z @ 0x180044FD4
 * Callers:
 *     ?CreateColorGradientStopWithOffsetAndColor@Api@CompositorCommon@Composition@UI@Windows@@UEAAJMUColor@45@PEAPEAUICompositionColorGradientStop@345@@Z @ 0x180044F10 (-CreateColorGradientStopWithOffsetAndColor@Api@CompositorCommon@Composition@UI@Windows@@UEAAJMUC.c)
 *     ?CreateColorGradientStop@Api@CompositorCommon@Composition@UI@Windows@@UEAAJPEAPEAUICompositionColorGradientStop@345@@Z @ 0x1801254C0 (-CreateColorGradientStop@Api@CompositorCommon@Composition@UI@Windows@@UEAAJPEAPEAUICompositionCo.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalUnlock@?$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x18000BCF4 (-InternalUnlock@-$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXX.c)
 *     ??$MakeAndInitialize2@VCompositionColorGradientStop@Composition@UI@Windows@@V1234@PEAVCompositor@234@AEAMAEBU_D3DCOLORVALUE@@@Details@WRL2@Microsoft@@YAJPEAPEAVCompositionColorGradientStop@Composition@UI@Windows@@$$QEAPEAVCompositor@456@AEAMAEBU_D3DCOLORVALUE@@@Z @ 0x18004514C (--$MakeAndInitialize2@VCompositionColorGradientStop@Composition@UI@Windows@@V1234@PEAVCompositor.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositorCommon::CreateColorGradientStop(
        Windows::UI::Composition::CompositorCommon *this,
        float a2,
        const struct _D3DCOLORVALUE *a3,
        struct Windows::UI::Composition::CompositionColorGradientStop **a4)
{
  int v5; // eax
  unsigned int v6; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  Microsoft::WRL2::NestableRuntimeClass *v9; // [rsp+30h] [rbp+8h] BYREF
  float v10; // [rsp+38h] [rbp+10h] BYREF
  Windows::UI::Composition::CompositorCommon *v11; // [rsp+48h] [rbp+20h] BYREF

  v10 = a2;
  *a4 = 0LL;
  v9 = 0LL;
  v11 = this;
  v5 = Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::CompositionColorGradientStop,Windows::UI::Composition::CompositionColorGradientStop,Windows::UI::Composition::Compositor *,float &,_D3DCOLORVALUE const &>(
         &v9,
         &v11,
         &v10,
         a3);
  v6 = v5;
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x71E,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositor.cpp",
      (const char *)(unsigned int)v5);
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(&v9);
    return v6;
  }
  else
  {
    *a4 = v9;
    return 0LL;
  }
}
