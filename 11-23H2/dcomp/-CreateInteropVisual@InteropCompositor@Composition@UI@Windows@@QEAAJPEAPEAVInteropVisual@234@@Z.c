/*
 * XREFs of ?CreateInteropVisual@InteropCompositor@Composition@UI@Windows@@QEAAJPEAPEAVInteropVisual@234@@Z @ 0x18000CFF4
 * Callers:
 *     ?CreateVisual@Api@InteropCompositor@Composition@UI@Windows@@UEAAJPEAPEAUIDCompositionVisual@@@Z @ 0x18000CF50 (-CreateVisual@Api@InteropCompositor@Composition@UI@Windows@@UEAAJPEAPEAUIDCompositionVisual@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize2@VInteropVisual@Composition@UI@Windows@@V1234@PEAVInteropCompositor@234@@Details@WRL2@Microsoft@@YAJPEAPEAVInteropVisual@Composition@UI@Windows@@$$QEAPEAVInteropCompositor@456@@Z @ 0x18000D058 (--$MakeAndInitialize2@VInteropVisual@Composition@UI@Windows@@V1234@PEAVInteropCompositor@234@@De.c)
 *     ?InternalUnlock@?$RefPtr@VCompositionObject@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x18008286C (-InternalUnlock@-$RefPtr@VCompositionObject@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ.c)
 */

__int64 __fastcall Windows::UI::Composition::InteropCompositor::CreateInteropVisual(
        Windows::UI::Composition::InteropCompositor *this,
        struct Windows::UI::Composition::InteropVisual **a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  struct Windows::UI::Composition::InteropVisual *v5; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct Windows::UI::Composition::InteropVisual *v8; // [rsp+30h] [rbp+8h] BYREF
  Windows::UI::Composition::InteropCompositor *v9; // [rsp+38h] [rbp+10h] BYREF

  *a2 = 0LL;
  v8 = 0LL;
  v9 = this;
  v3 = Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::InteropVisual,Windows::UI::Composition::InteropVisual,Windows::UI::Composition::InteropCompositor *>(
         &v8,
         &v9);
  v4 = v3;
  if ( v3 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xB3,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtinteropcompositor.cpp",
      (const char *)(unsigned int)v3);
  }
  else
  {
    v5 = v8;
    v8 = 0LL;
    v4 = 0;
    *a2 = v5;
  }
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionObject>::InternalUnlock(&v8);
  return v4;
}
