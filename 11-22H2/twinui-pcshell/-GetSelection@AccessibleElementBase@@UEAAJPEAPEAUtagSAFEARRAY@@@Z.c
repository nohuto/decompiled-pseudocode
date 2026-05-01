/*
 * XREFs of ?GetSelection@AccessibleElementBase@@UEAAJPEAPEAUtagSAFEARRAY@@@Z @ 0x180584700
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18006BCD8 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_GetElement@AccessibleElementBase@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1805850F0 (-_GetElement@AccessibleElementBase@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall AccessibleElementBase::GetSelection(AccessibleElementBase *this, struct tagSAFEARRAY **a2)
{
  AccessibleElementBase *v3; // rbx
  int Element; // ebx
  __int64 v5; // rbx
  __int64 (__fastcall *v6)(__int64, GUID *, void **); // rdi
  HRESULT v7; // eax
  __int64 v8; // rdx
  SAFEARRAY *v9; // rax
  __int64 v10; // r9
  SAFEARRAY *Vector; // rax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+20h]
  LONG rgIndices; // [rsp+50h] [rbp+28h] BYREF
  void *pv; // [rsp+58h] [rbp+30h] BYREF
  __int64 v16; // [rsp+60h] [rbp+38h] BYREF
  void *v17; // [rsp+68h] [rbp+40h] BYREF

  *a2 = 0LL;
  v17 = 0LL;
  v3 = (AccessibleElementBase *)((char *)this - 32);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v17);
  Element = AccessibleElementBase::_GetElement(v3, &GUID_0bb549a1_eae6_47ed_b29e_ca24ee64ad8d, &v17);
  if ( Element >= 0 )
  {
    (*(void (__fastcall **)(void *, __int64 *))(*(_QWORD *)v17 + 336LL))(v17, &v16);
    if ( !v16
      || !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v16 + 152LL))(v16)
      || !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v16 + 168LL))(v16) )
    {
      Vector = SafeArrayCreateVector(0xDu, 0, 0);
      *a2 = Vector;
      if ( Vector )
      {
        Element = 0;
      }
      else
      {
        Element = -2147024882;
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x170,
          (int)"pcshell\\twinui\\multitaskingview\\lib\\elementaccessibility.cpp",
          (const char *)0x8007000ELL);
      }
      goto LABEL_18;
    }
    pv = 0LL;
    v5 = v16;
    v6 = *(__int64 (__fastcall **)(__int64, GUID *, void **))(*(_QWORD *)v16 + 376LL);
    Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)&pv);
    v7 = v6(v5, &GUID_d6dd68d1_86fd_4332_8666_9abedea2d24c, &pv);
    Element = v7;
    if ( v7 >= 0 )
    {
      v9 = SafeArrayCreateVector(0xDu, 0, 1u);
      *a2 = v9;
      if ( !v9 )
      {
        Element = -2147024882;
        v10 = 2147942414LL;
        v8 = 376LL;
LABEL_12:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v8,
          (int)"pcshell\\twinui\\multitaskingview\\lib\\elementaccessibility.cpp",
          (const char *)v10);
LABEL_14:
        Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)&pv);
LABEL_18:
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v16);
        goto LABEL_19;
      }
      rgIndices = 0;
      v7 = SafeArrayPutElement(v9, &rgIndices, pv);
      Element = v7;
      if ( v7 >= 0 )
      {
        pv = 0LL;
        Element = 0;
        goto LABEL_14;
      }
      v8 = 379LL;
    }
    else
    {
      v8 = 373LL;
    }
    v10 = (unsigned int)v7;
    goto LABEL_12;
  }
LABEL_19:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v17);
  return (unsigned int)Element;
}
