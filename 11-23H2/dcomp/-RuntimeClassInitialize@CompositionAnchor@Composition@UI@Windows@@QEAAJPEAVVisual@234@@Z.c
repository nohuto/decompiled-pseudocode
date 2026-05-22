/*
 * XREFs of ?RuntimeClassInitialize@CompositionAnchor@Composition@UI@Windows@@QEAAJPEAVVisual@234@@Z @ 0x18006C680
 * Callers:
 *     ??$MakeAndInitialize2@VCompositionAnchor@Composition@UI@Windows@@V1234@PEAVVisual@234@@Details@WRL2@Microsoft@@YAJPEAPEAVCompositionAnchor@Composition@UI@Windows@@$$QEAPEAVVisual@456@@Z @ 0x18006C734 (--$MakeAndInitialize2@VCompositionAnchor@Composition@UI@Windows@@V1234@PEAVVisual@234@@Details@W.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RuntimeClassInitialize@CompositionObject@Composition@UI@Windows@@QEAAJPEAVCompositor@234@@Z @ 0x180055F60 (-RuntimeClassInitialize@CompositionObject@Composition@UI@Windows@@QEAAJPEAVCompositor@234@@Z.c)
 *     ??4?$RefPtr@VVisual@Composition@UI@Windows@@@WRL2@Microsoft@@QEAAAEAV012@PEAVVisual@Composition@UI@Windows@@@Z @ 0x1800632FC (--4-$RefPtr@VVisual@Composition@UI@Windows@@@WRL2@Microsoft@@QEAAAEAV012@PEAVVisual@Composition@.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionAnchor::RuntimeClassInitialize(
        Windows::UI::Composition::CompositionAnchor *this,
        struct Windows::UI::Composition::Compositor **a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v4 = Windows::UI::Composition::CompositionObject::RuntimeClassInitialize(this, a2[3]);
  v5 = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2B,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\global\\wrtcompositionanchor.cpp",
      (const char *)(unsigned int)v4);
    return v5;
  }
  else
  {
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::Visual>::operator=(
      (Microsoft::WRL2::NestableRuntimeClass **)this + 18,
      (volatile signed __int32 *)a2);
    *((_DWORD *)this + 39) = 0;
    *((_DWORD *)this + 40) = 0;
    *(_QWORD *)((char *)this + 164) = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
    *((_DWORD *)this + 43) = 0;
    *((_QWORD *)this + 22) = _mm_unpacklo_ps((__m128)0LL, (__m128)LODWORD(FLOAT_1_0)).m128_u64[0];
    *((_DWORD *)this + 46) = 0;
    result = 0LL;
    *((_DWORD *)this + 38) = 1065353216;
    *((_BYTE *)this + 188) = 0;
  }
  return result;
}
