/*
 * XREFs of ?RenderTransparentCenteredGlyph@GDIHelpers@@YAXPEAUHDC__@@PEAUHFONT__@@GKAEBUCRect@Geometry@@@Z @ 0x18057C088
 * Callers:
 *     ?GetIconFromGlyphForSize@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHICON__@@P6AHPEAU1@@Z$1?DestroyIcon@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@UtagSIZE@@@Z @ 0x18057B628 (-GetIconFromGlyphForSize@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAA-AV-$un.c)
 * Callees:
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ?GetDrawTextRectForCenteredGlyph@GDIHelpers@@YA?AUCRect@Geometry@@PEAUHDC__@@GAEBU23@@Z @ 0x18052CD58 (-GetDrawTextRectForCenteredGlyph@GDIHelpers@@YA-AUCRect@Geometry@@PEAUHDC__@@GAEBU23@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall GDIHelpers::RenderTransparentCenteredGlyph(HDC hdc, HDC a2, HFONT a3, __int64 a4, __int64 a5)
{
  unsigned __int16 v5; // si
  HGDIOBJ v7; // rdi
  unsigned __int16 v8[4]; // [rsp+60h] [rbp-48h] BYREF
  HDC v9; // [rsp+68h] [rbp-40h]
  HGDIOBJ v10; // [rsp+70h] [rbp-38h]
  struct tagRECT v11; // [rsp+78h] [rbp-30h] BYREF

  v5 = (unsigned __int16)a3;
  v9 = hdc;
  v7 = SelectObject(hdc, a2);
  v10 = v7;
  GDIHelpers::GetDrawTextRectForCenteredGlyph(&v11, hdc, v5, a5);
  if ( v11.left < v11.right && v11.top < v11.bottom )
  {
    v8[0] = v5;
    v8[1] = 0;
    DrawTextWithGlow(hdc, v8, 1u, &v11, 0x21u, 0xFFFFFFu, 0, 0, 0, 1, 0LL, 0LL);
  }
  SelectObject(hdc, v7);
}
