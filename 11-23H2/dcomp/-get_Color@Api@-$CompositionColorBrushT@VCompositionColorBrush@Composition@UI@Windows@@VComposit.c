/*
 * XREFs of ?get_Color@Api@?$CompositionColorBrushT@VCompositionColorBrush@Composition@UI@Windows@@VCompositionBrush@234@@Composition@UI@Windows@@UEAAJPEAUColor@45@@Z @ 0x18012A960
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionColorBrushT<Windows::UI::Composition::CompositionColorBrush,Windows::UI::Composition::CompositionBrush>::Api::get_Color(
        const __m128i *a1,
        _DWORD *a2)
{
  unsigned int v3; // edi
  struct _RTL_CRITICAL_SECTION *v5; // rbx
  __m128 v6; // xmm0
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v9; // [rsp+30h] [rbp+8h]

  v3 = 0;
  *a2 = 0;
  v5 = (struct _RTL_CRITICAL_SECTION *)a1[-8].m128i_i64[0];
  Microsoft::WRL2::ContextSession::BeginApiEntry(v5);
  if ( (a1[-8].m128i_i8[8] & 2) != 0 )
  {
    v6 = (__m128)_mm_loadu_si128(a1 + 1);
    LOBYTE(v9) = (int)(float)((float)(_mm_shuffle_ps(v6, v6, 255).m128_f32[0] * 255.0) + 0.5);
    BYTE1(v9) = (int)(float)((float)(v6.m128_f32[0] * 255.0) + 0.5);
    HIBYTE(v9) = (int)(float)((float)(_mm_shuffle_ps(v6, v6, 170).m128_f32[0] * 255.0) + 0.5);
    BYTE2(v9) = (int)(float)((float)(_mm_shuffle_ps(v6, v6, 85).m128_f32[0] * 255.0) + 0.5);
    *a2 = v9;
  }
  else
  {
    v3 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xBED,
      (int)"onecoreuap\\private\\Windows\\inc\\private\\compgen\\DCompABIAutoGen_Windows.UI.Composition.g.h",
      (const char *)0x80000013LL);
  }
  Microsoft::WRL2::ContextSession::EndApiEntry(v5);
  return v3;
}
