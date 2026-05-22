/*
 * XREFs of ?CreatePropertySet@CompositorCommon@Composition@UI@Windows@@QEAAJPEAPEAVCompositionPropertySet@234@@Z @ 0x180081378
 * Callers:
 *     ?CreatePropertySet@Api@Compositor@Composition@UI@Windows@@UEAAJPEAPEAUICompositionPropertySet@345@@Z @ 0x1800812F0 (-CreatePropertySet@Api@Compositor@Composition@UI@Windows@@UEAAJPEAPEAUICompositionPropertySet@34.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalUnlock@?$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x18000BCF4 (-InternalUnlock@-$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXX.c)
 *     ??$MakeAndInitialize2@VCompositionPropertySet@Composition@UI@Windows@@V1234@PEAVCompositor@234@@Details@WRL2@Microsoft@@YAJPEAPEAVCompositionPropertySet@Composition@UI@Windows@@$$QEAPEAVCompositor@456@@Z @ 0x1800550C0 (--$MakeAndInitialize2@VCompositionPropertySet@Composition@UI@Windows@@V1234@PEAVCompositor@234@@.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositorCommon::CreatePropertySet(
        Windows::UI::Composition::CompositorCommon *this,
        struct Windows::UI::Composition::CompositionPropertySet **a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  Microsoft::WRL2::NestableRuntimeClass *v7; // [rsp+30h] [rbp+8h] BYREF
  volatile signed __int32 *v8; // [rsp+38h] [rbp+10h] BYREF

  *a2 = 0LL;
  v7 = 0LL;
  v8 = (volatile signed __int32 *)this;
  v3 = Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::CompositionPropertySet,Windows::UI::Composition::CompositionPropertySet,Windows::UI::Composition::Compositor *>(
         (volatile signed __int32 **)&v7,
         &v8);
  v4 = v3;
  if ( v3 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x8AF,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositor.cpp",
      (const char *)(unsigned int)v3);
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(&v7);
    return v4;
  }
  else
  {
    *a2 = v7;
    return 0LL;
  }
}
