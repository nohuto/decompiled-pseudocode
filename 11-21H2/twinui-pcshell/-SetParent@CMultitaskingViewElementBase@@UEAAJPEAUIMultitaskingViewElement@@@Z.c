/*
 * XREFs of ?SetParent@CMultitaskingViewElementBase@@UEAAJPEAUIMultitaskingViewElement@@@Z @ 0x1804BAD30
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x180040860 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??4?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@QEAAAEAV012@PEAUIMultitaskingViewElement@@@Z @ 0x1804B9120 (--4-$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@QEAAAEAV012@PEAUIMultitaskingViewElement@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CMultitaskingViewElementBase::SetParent(
        CMultitaskingViewElementBase *this,
        struct IMultitaskingViewElement *a2)
{
  __int64 v3; // rcx
  __int64 v4; // rbx
  __int64 v5; // r8
  __int64 *v6; // rax
  int v7; // eax
  unsigned int v8; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v11; // [rsp+40h] [rbp+8h] BYREF
  __int64 v12; // [rsp+50h] [rbp+18h] BYREF
  __int64 v13; // [rsp+58h] [rbp+20h] BYREF

  Microsoft::WRL::ComPtr<IMultitaskingViewElement>::operator=((__int64 *)this + 10, (__int64)a2);
  v3 = *((_QWORD *)this + 11);
  if ( v3 )
  {
    v4 = 0LL;
    v11 = 0LL;
    v5 = *((_QWORD *)this + 10);
    if ( v5 )
    {
      v6 = (__int64 *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)v5 + 40LL))(
                        *((_QWORD *)this + 10),
                        &v13);
      if ( &v12 != v6 )
      {
        v4 = *v6;
        *v6 = 0LL;
      }
      v12 = 0LL;
      v11 = v4;
      Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v12);
      Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v13);
      v3 = *((_QWORD *)this + 11);
    }
    v7 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 192LL))(v3, v4);
    v8 = v7;
    if ( v7 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1D,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\baseelement.cpp",
        (const char *)(unsigned int)v7);
      Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v11);
      return v8;
    }
    Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v11);
  }
  return 0LL;
}
