/*
 * XREFs of ?AddChild@CMultitaskingViewElementBase@@UEAAJPEAUIMultitaskingViewElement@@@Z @ 0x180235400
 * Callers:
 *     ?AddChild@CSwitchItemGrid@@UEAAJPEAUIMultitaskingViewElement@@@Z @ 0x1804BE1A0 (-AddChild@CSwitchItemGrid@@UEAAJPEAUIMultitaskingViewElement@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x180040860 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_LayoutChildren@CMultitaskingViewElementBase@@IEAAXW4DCompThumbnailAnimation@@PEAUIUIAnimationStoryboardEventHandler2@@@Z @ 0x1804BB610 (-_LayoutChildren@CMultitaskingViewElementBase@@IEAAXW4DCompThumbnailAnimation@@PEAUIUIAnimationS.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CMultitaskingViewElementBase::AddChild(
        CMultitaskingViewElementBase *this,
        struct IMultitaskingViewElement *a2)
{
  bool v4; // r15
  __int64 v5; // rax
  __int64 v6; // rdi
  __int64 (__fastcall *v7)(__int64, _QWORD, struct IMultitaskingViewElement *, char *); // rbx
  unsigned int v8; // eax
  int v9; // eax
  int v10; // ebx
  __int64 v11; // rdx
  __int64 (__fastcall *v13)(struct IMultitaskingViewElement *, GUID *, IRawElementProviderSimple **); // rbx
  HRESULT v14; // eax
  wil::details::in1diag3 *v15; // rcx
  __int64 v16; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+28h]
  char v18; // [rsp+60h] [rbp+30h] BYREF
  IRawElementProviderSimple *pProvider; // [rsp+68h] [rbp+38h] BYREF
  __int64 v20; // [rsp+70h] [rbp+40h] BYREF

  LODWORD(pProvider) = 0;
  v4 = 1;
  v18 = 1;
  v5 = (*(__int64 (__fastcall **)(CMultitaskingViewElementBase *, __int64 *))(*(_QWORD *)this + 384LL))(this, &v20);
  LODWORD(pProvider) = 1;
  v6 = *(_QWORD *)v5;
  v7 = *(__int64 (__fastcall **)(__int64, _QWORD, struct IMultitaskingViewElement *, char *))(**(_QWORD **)v5 + 24LL);
  v8 = (*(__int64 (__fastcall **)(struct IMultitaskingViewElement *))(*(_QWORD *)a2 + 400LL))(a2);
  v9 = v7(v6, v8, a2, &v18);
  if ( v9 >= 0 )
    v4 = v18 != 0;
  else
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x3D,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\baseelement.cpp",
      (const char *)(unsigned int)v9);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v20);
  if ( !v4 )
    return 0LL;
  v10 = (*(__int64 (__fastcall **)(struct IMultitaskingViewElement *, CMultitaskingViewElementBase *))(*(_QWORD *)a2 + 32LL))(
          a2,
          this);
  if ( v10 < 0 )
  {
    v11 = 63LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\baseelement.cpp",
      (const char *)(unsigned int)v10);
    return (unsigned int)v10;
  }
  v10 = (*(__int64 (__fastcall **)(CMultitaskingViewElementBase *, struct IMultitaskingViewElement *))(*(_QWORD *)this + 576LL))(
          this,
          a2);
  if ( v10 < 0 )
  {
    v11 = 64LL;
    goto LABEL_7;
  }
  if ( UiaClientsAreListening()
    && (*(unsigned __int8 (__fastcall **)(CMultitaskingViewElementBase *))(*(_QWORD *)this + 168LL))(this)
    && (*(__int64 (__fastcall **)(CMultitaskingViewElementBase *))(*(_QWORD *)this + 328LL))(this) )
  {
    pProvider = 0LL;
    if ( (*(unsigned __int8 (__fastcall **)(struct IMultitaskingViewElement *))(*(_QWORD *)a2 + 168LL))(a2) )
    {
      v13 = *(__int64 (__fastcall **)(struct IMultitaskingViewElement *, GUID *, IRawElementProviderSimple **))(*(_QWORD *)a2 + 376LL);
      Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)&pProvider);
      v14 = v13(a2, &GUID_d6dd68d1_86fd_4332_8666_9abedea2d24c, &pProvider);
      v15 = retaddr;
      if ( v14 < 0 )
      {
        v16 = 68LL;
LABEL_18:
        wil::details::in1diag3::_Log_Hr(
          v15,
          (void *)v16,
          (__int64)"pcshell\\twinui\\multitaskingview\\lib\\baseelement.cpp",
          (const char *)(unsigned int)v14);
        goto LABEL_19;
      }
      v14 = UiaRaiseStructureChangedEvent(pProvider, StructureChangeType_ChildAdded, 0LL, 0);
      v15 = retaddr;
      if ( v14 < 0 )
      {
        v16 = 70LL;
        goto LABEL_18;
      }
    }
LABEL_19:
    Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)&pProvider);
  }
  CMultitaskingViewElementBase::_LayoutChildren(this, 0LL, 0LL);
  return 0LL;
}
