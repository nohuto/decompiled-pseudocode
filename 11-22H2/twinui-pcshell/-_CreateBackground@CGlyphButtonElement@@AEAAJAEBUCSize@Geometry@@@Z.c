/*
 * XREFs of ?_CreateBackground@CGlyphButtonElement@@AEAAJAEBUCSize@Geometry@@@Z @ 0x180583644
 * Callers:
 *     ?v_LayoutChildren@CGlyphButtonElement@@MEAAXXZ @ 0x180583920 (-v_LayoutChildren@CGlyphButtonElement@@MEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18006BCD8 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_RenderBackground@CGlyphButtonElement@@AEAAXXZ @ 0x180583718 (-_RenderBackground@CGlyphButtonElement@@AEAAXXZ.c)
 */

__int64 __fastcall CGlyphButtonElement::_CreateBackground(CGlyphButtonElement *this, const struct Geometry::CSize *a2)
{
  __int64 *v2; // rbx
  __int64 v5; // rsi
  __int64 (__fastcall *v6)(__int64, _QWORD, _QWORD, __int64, GUID *, __int64 *); // rdi
  int v7; // eax
  unsigned int v8; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v2 = (__int64 *)((char *)this + 392);
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)this + 49);
  v5 = *((_QWORD *)this + 47);
  v6 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64, GUID *, __int64 *))(*(_QWORD *)v5 + 80LL);
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(v2);
  v7 = v6(v5, *((_QWORD *)this + 11), *(_QWORD *)a2, 1LL, &GUID_47267895_a4f8_4012_9e98_087c619e7cfc, v2);
  v8 = v7;
  if ( v7 >= 0 )
  {
    CGlyphButtonElement::_RenderBackground(this);
    *((_QWORD *)this + 50) = *(_QWORD *)a2;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x89,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\glyphbuttonelement.cpp",
      (const char *)(unsigned int)v7);
    return v8;
  }
}
