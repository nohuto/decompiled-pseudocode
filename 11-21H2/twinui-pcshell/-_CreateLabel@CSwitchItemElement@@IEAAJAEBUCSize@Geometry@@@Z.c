/*
 * XREFs of ?_CreateLabel@CSwitchItemElement@@IEAAJAEBUCSize@Geometry@@@Z @ 0x180234E5C
 * Callers:
 *     ?v_LayoutChildren@CSwitchItemElement@@MEAAXW4DCompThumbnailAnimation@@PEAUIUIAnimationStoryboardEventHandler2@@@Z @ 0x180235200 (-v_LayoutChildren@CSwitchItemElement@@MEAAXW4DCompThumbnailAnimation@@PEAUIUIAnimationStoryboard.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x180040860 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_RenderLabel@CSwitchItemElement@@IEAAXXZ @ 0x1804B8BF4 (-_RenderLabel@CSwitchItemElement@@IEAAXXZ.c)
 */

__int64 __fastcall CSwitchItemElement::_CreateLabel(CSwitchItemElement *this, const struct Geometry::CSize *a2)
{
  __int64 *v2; // rbx
  __int64 v5; // rsi
  __int64 (__fastcall *v6)(__int64, _QWORD, _QWORD, __int64, GUID *, __int64 *); // rdi
  int v7; // eax
  unsigned int v8; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v2 = (__int64 *)((char *)this + 616);
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)this + 77);
  v5 = *((_QWORD *)this + 71);
  v6 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64, GUID *, __int64 *))(*(_QWORD *)v5 + 80LL);
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(v2);
  v7 = v6(v5, *((_QWORD *)this + 11), *(_QWORD *)a2, 1LL, &GUID_47267895_a4f8_4012_9e98_087c619e7cfc, v2);
  v8 = v7;
  if ( v7 >= 0 )
  {
    CSwitchItemElement::_RenderLabel(this);
    *((_QWORD *)this + 79) = *(_QWORD *)a2;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1CA,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\switchitemelement.cpp",
      (const char *)(unsigned int)v7);
    return v8;
  }
}
