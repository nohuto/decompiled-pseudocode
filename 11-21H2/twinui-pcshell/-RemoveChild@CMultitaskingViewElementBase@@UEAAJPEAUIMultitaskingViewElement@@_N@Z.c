/*
 * XREFs of ?RemoveChild@CMultitaskingViewElementBase@@UEAAJPEAUIMultitaskingViewElement@@_N@Z @ 0x1802356A0
 * Callers:
 *     ?RemoveChild@CMultitaskingViewFrameElement@@UEAAJPEAUIMultitaskingViewElement@@_N@Z @ 0x1802361B0 (-RemoveChild@CMultitaskingViewFrameElement@@UEAAJPEAUIMultitaskingViewElement@@_N@Z.c)
 *     ?RemoveChild@CSwitchItemGrid@@UEAAJPEAUIMultitaskingViewElement@@_N@Z @ 0x1804BF3B0 (-RemoveChild@CSwitchItemGrid@@UEAAJPEAUIMultitaskingViewElement@@_N@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x180040860 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?RemoveAt@?$CTSimpleArray@V?$ComPtr@UIWeakReference@WeakReference@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIWeakReference@WeakReference@@@WRL@Microsoft@@@@VComPtrCompareHelper@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIWeakReference@WeakReference@@@WRL@Microsoft@@@@@@QEAAJ_K@Z @ 0x18049FF9C (-RemoveAt@-$CTSimpleArray@V-$ComPtr@UIWeakReference@WeakReference@@@WRL@Microsoft@@$0PPPPPPPO@V-.c)
 *     ?IsSameElement@ElementHelpers@@YA_NPEAUIMultitaskingViewElement@@0@Z @ 0x1804B16F4 (-IsSameElement@ElementHelpers@@YA_NPEAUIMultitaskingViewElement@@0@Z.c)
 *     ??$FindEx@VElementCompare@ElementHelpers@@@?$CTSimpleFixedArray@V?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@VElementCompare@ElementHelpers@@@@QEBAJAEBVElementCompare@ElementHelpers@@AEBV?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@PEA_K_K@Z @ 0x1804B8EAC (--$FindEx@VElementCompare@ElementHelpers@@@-$CTSimpleFixedArray@V-$ComPtr@UIMultitaskingViewElem.c)
 *     ?_GetFocusForRemovedChild@CMultitaskingViewElementBase@@IEAA?AV?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@PEAUIMultitaskingViewElement@@@Z @ 0x1804BB430 (-_GetFocusForRemovedChild@CMultitaskingViewElementBase@@IEAA-AV-$ComPtr@UIMultitaskingViewElemen.c)
 *     ?_LayoutChildren@CMultitaskingViewElementBase@@IEAAXW4DCompThumbnailAnimation@@PEAUIUIAnimationStoryboardEventHandler2@@@Z @ 0x1804BB610 (-_LayoutChildren@CMultitaskingViewElementBase@@IEAAXW4DCompThumbnailAnimation@@PEAUIUIAnimationS.c)
 *     ?_PointerMove@CMultitaskingViewElementBase@@IEAAXAEBVMultitaskingViewPointerInputArgs@@@Z @ 0x1804BB728 (-_PointerMove@CMultitaskingViewElementBase@@IEAAXAEBVMultitaskingViewPointerInputArgs@@@Z.c)
 *     ?_ResetCapture@CMultitaskingViewElementBase@@IEAAXXZ @ 0x1804BBC18 (-_ResetCapture@CMultitaskingViewElementBase@@IEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CMultitaskingViewElementBase::RemoveChild(
        struct IMultitaskingViewElement **this,
        struct IMultitaskingViewElement *a2,
        char a3)
{
  struct IMultitaskingViewElement *v6; // r8
  __int64 v7; // rdx
  unsigned int v8; // esi
  int v9; // ebx
  struct IMultitaskingViewElement *v10; // r8
  __int64 (__fastcall *v11)(struct IMultitaskingViewElement **, GUID *, IRawElementProviderSimple **); // rbx
  int v12; // eax
  wil::details::in1diag3 *v13; // rcx
  __int64 v14; // rdx
  __int64 (__fastcall *v15)(struct IMultitaskingViewElement *, GUID *, __int64 *); // rbx
  HRESULT v16; // eax
  wil::details::in1diag3 *v17; // rcx
  __int64 v18; // rdx
  UINT Dim; // eax
  struct IMultitaskingViewElement *v21; // [rsp+30h] [rbp-10h] BYREF
  void *ppvData; // [rsp+38h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+38h]
  __int64 v24; // [rsp+80h] [rbp+40h] BYREF
  IRawElementProviderSimple *pProvider; // [rsp+88h] [rbp+48h] BYREF
  SAFEARRAY *psa; // [rsp+98h] [rbp+58h] BYREF

  v21 = a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v21);
  v8 = 0;
  if ( ElementHelpers::IsSameElement(a2, this[21], v6) )
  {
    CMultitaskingViewElementBase::_GetFocusForRemovedChild(this, &v24, a2);
    (*((void (__fastcall **)(struct IMultitaskingViewElement **, __int64))*this + 36))(this, v24);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v24);
  }
  v9 = CTSimpleFixedArray<Microsoft::WRL::ComPtr<IMultitaskingViewElement>,ElementHelpers::ElementCompare>::FindEx<ElementHelpers::ElementCompare>(
         this + 2,
         v7,
         &v21,
         &v24);
  if ( v9 < 0
    || (v9 = CTSimpleArray<Microsoft::WRL::ComPtr<WeakReference::IWeakReference>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<WeakReference::IWeakReference>>,ComPtrCompareHelper,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<WeakReference::IWeakReference>>>::RemoveAt(
               this + 2,
               v24),
        v9 < 0) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5A,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\baseelement.cpp",
      (const char *)(unsigned int)v9);
    v8 = v9;
    goto LABEL_31;
  }
  if ( ElementHelpers::IsSameElement(a2, this[16], v10) )
    CMultitaskingViewElementBase::_ResetCapture((CMultitaskingViewElementBase *)this);
  if ( UiaClientsAreListening()
    && (*((unsigned __int8 (__fastcall **)(struct IMultitaskingViewElement **))*this + 21))(this)
    && (*(unsigned __int8 (__fastcall **)(struct IMultitaskingViewElement *))(*(_QWORD *)a2 + 168LL))(a2)
    && (*((__int64 (__fastcall **)(struct IMultitaskingViewElement **))*this + 41))(this) )
  {
    pProvider = 0LL;
    v24 = 0LL;
    v11 = (__int64 (__fastcall *)(struct IMultitaskingViewElement **, GUID *, IRawElementProviderSimple **))*((_QWORD *)*this + 47);
    Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)&pProvider);
    v12 = v11(this, &GUID_d6dd68d1_86fd_4332_8666_9abedea2d24c, &pProvider);
    v13 = retaddr;
    if ( v12 < 0 )
    {
      v14 = 111LL;
LABEL_13:
      wil::details::in1diag3::_Log_Hr(
        v13,
        (void *)v14,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\baseelement.cpp",
        (const char *)(unsigned int)v12);
LABEL_24:
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v24);
      Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)&pProvider);
      goto LABEL_25;
    }
    v15 = *(__int64 (__fastcall **)(struct IMultitaskingViewElement *, GUID *, __int64 *))(*(_QWORD *)a2 + 376LL);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v24);
    v12 = v15(a2, &GUID_f7063da8_8359_439c_9297_bbc5299a7d87, &v24);
    v13 = retaddr;
    if ( v12 < 0 )
    {
      v14 = 112LL;
      goto LABEL_13;
    }
    v12 = (*(__int64 (__fastcall **)(__int64, SAFEARRAY **))(*(_QWORD *)v24 + 32LL))(v24, &psa);
    v13 = retaddr;
    if ( v12 < 0 )
    {
      v14 = 113LL;
      goto LABEL_13;
    }
    v16 = SafeArrayAccessData(psa, &ppvData);
    v17 = retaddr;
    if ( v16 >= 0 )
    {
      Dim = SafeArrayGetDim(psa);
      v16 = UiaRaiseStructureChangedEvent(pProvider, StructureChangeType_ChildRemoved, (int *)ppvData, Dim);
      v17 = retaddr;
      if ( v16 >= 0 )
      {
LABEL_23:
        SafeArrayDestroy(psa);
        goto LABEL_24;
      }
      v18 = 122LL;
    }
    else
    {
      v18 = 116LL;
    }
    wil::details::in1diag3::_Log_Hr(
      v17,
      (void *)v18,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\baseelement.cpp",
      (const char *)(unsigned int)v16);
    goto LABEL_23;
  }
LABEL_25:
  (*(void (__fastcall **)(struct IMultitaskingViewElement *, _QWORD))(*(_QWORD *)a2 + 32LL))(a2, 0LL);
  if ( a3 )
    CMultitaskingViewElementBase::_LayoutChildren(this, 0LL, 0LL);
  if ( *((_DWORD *)this + 24) == 1 )
    CMultitaskingViewElementBase::_PointerMove(
      (CMultitaskingViewElementBase *)this,
      (const struct MultitaskingViewPointerInputArgs *)(this + 18));
  (*((void (__fastcall **)(struct IMultitaskingViewElement **))*this + 52))(this);
LABEL_31:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v21);
  return v8;
}
