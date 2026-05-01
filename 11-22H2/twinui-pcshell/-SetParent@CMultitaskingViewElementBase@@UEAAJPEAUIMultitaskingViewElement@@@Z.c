/*
 * XREFs of ?SetParent@CMultitaskingViewElementBase@@UEAAJPEAUIMultitaskingViewElement@@@Z @ 0x180575870
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18006BCD8 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??4?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@QEAAAEAV012@PEAUIMultitaskingViewElement@@@Z @ 0x180573C60 (--4-$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@QEAAAEAV012@PEAUIMultitaskingViewElement@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CMultitaskingViewElementBase::SetParent(
        CMultitaskingViewElementBase *this,
        struct IMultitaskingViewElement *a2)
{
  __int64 v3; // rbx
  __int64 v4; // rcx
  __int64 *v5; // rax
  int v6; // eax
  unsigned int v7; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v10; // [rsp+40h] [rbp+8h] BYREF
  __int64 v11; // [rsp+50h] [rbp+18h] BYREF
  __int64 v12; // [rsp+58h] [rbp+20h] BYREF

  Microsoft::WRL::ComPtr<IMultitaskingViewElement>::operator=((__int64 *)this + 10, (__int64)a2);
  if ( *((_QWORD *)this + 11) )
  {
    v3 = 0LL;
    v10 = 0LL;
    v4 = *((_QWORD *)this + 10);
    if ( v4 )
    {
      v5 = (__int64 *)(*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v4 + 40LL))(v4, &v12);
      if ( &v11 != v5 )
      {
        v3 = *v5;
        *v5 = 0LL;
      }
      v11 = 0LL;
      v10 = v3;
      Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v11);
      Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v12);
    }
    v6 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 11) + 192LL))(*((_QWORD *)this + 11), v3);
    v7 = v6;
    if ( v6 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1D,
        (int)"pcshell\\twinui\\multitaskingview\\lib\\baseelement.cpp",
        (const char *)(unsigned int)v6);
      Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v10);
      return v7;
    }
    Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v10);
  }
  return 0LL;
}
