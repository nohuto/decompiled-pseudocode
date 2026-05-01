/*
 * XREFs of ?RemoveChild@CMultitaskingViewElementBase@@UEAAJPEAUIMultitaskingViewElement@@_N@Z @ 0x1802E3D60
 * Callers:
 *     ?RemoveChild@CMultitaskingViewFrameElement@@UEAAJPEAUIMultitaskingViewElement@@_N@Z @ 0x1802E4910 (-RemoveChild@CMultitaskingViewFrameElement@@UEAAJPEAUIMultitaskingViewElement@@_N@Z.c)
 *     ?RemoveChild@CSwitchItemGrid@@UEAAJPEAUIMultitaskingViewElement@@_N@Z @ 0x180579DC0 (-RemoveChild@CSwitchItemGrid@@UEAAJPEAUIMultitaskingViewElement@@_N@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18006BCD8 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?RemoveAt@?$CTSimpleArray@V?$ComPtr@UIWeakReference@WeakReference@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIWeakReference@WeakReference@@@WRL@Microsoft@@@@VComPtrCompareHelper@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIWeakReference@WeakReference@@@WRL@Microsoft@@@@@@QEAAJ_K@Z @ 0x1803B0DE0 (-RemoveAt@-$CTSimpleArray@V-$ComPtr@UIWeakReference@WeakReference@@@WRL@Microsoft@@$0PPPPPPPO@V-.c)
 *     ?IsSameElement@ElementHelpers@@YA_NPEAUIMultitaskingViewElement@@0@Z @ 0x18056E0A4 (-IsSameElement@ElementHelpers@@YA_NPEAUIMultitaskingViewElement@@0@Z.c)
 *     ??$FindEx@VElementCompare@ElementHelpers@@@?$CTSimpleFixedArray@V?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@VElementCompare@ElementHelpers@@@@QEBAJAEBVElementCompare@ElementHelpers@@AEBV?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@PEA_K_K@Z @ 0x1805739EC (--$FindEx@VElementCompare@ElementHelpers@@@-$CTSimpleFixedArray@V-$ComPtr@UIMultitaskingViewElem.c)
 *     ?_GetFocusForRemovedChild@CMultitaskingViewElementBase@@IEAA?AV?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@PEAUIMultitaskingViewElement@@@Z @ 0x180575F70 (-_GetFocusForRemovedChild@CMultitaskingViewElementBase@@IEAA-AV-$ComPtr@UIMultitaskingViewElemen.c)
 *     ?_LayoutChildren@CMultitaskingViewElementBase@@IEAAXW4DCompThumbnailAnimation@@PEAUIUIAnimationStoryboardEventHandler2@@@Z @ 0x180576150 (-_LayoutChildren@CMultitaskingViewElementBase@@IEAAXW4DCompThumbnailAnimation@@PEAUIUIAnimationS.c)
 *     ?_PointerMove@CMultitaskingViewElementBase@@IEAAXAEBVMultitaskingViewPointerInputArgs@@@Z @ 0x180576268 (-_PointerMove@CMultitaskingViewElementBase@@IEAAXAEBVMultitaskingViewPointerInputArgs@@@Z.c)
 *     ?_ResetCapture@CMultitaskingViewElementBase@@IEAAXXZ @ 0x180576758 (-_ResetCapture@CMultitaskingViewElementBase@@IEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CMultitaskingViewElementBase::RemoveChild(
        struct IMultitaskingViewElement **this,
        struct IMultitaskingViewElement *a2,
        char a3)
{
  struct IMultitaskingViewElement *v6; // r8
  __int64 v7; // rdx
  int v8; // ebx
  struct IMultitaskingViewElement *v9; // r8
  __int64 (__fastcall *v10)(struct IMultitaskingViewElement **, GUID *, IRawElementProviderSimple **); // rbx
  int v11; // eax
  wil::details::in1diag3 *v12; // rcx
  __int64 v13; // rdx
  __int64 (__fastcall *v14)(struct IMultitaskingViewElement *, GUID *, __int64 *); // rbx
  HRESULT v15; // eax
  wil::details::in1diag3 *v16; // rcx
  __int64 v17; // rdx
  UINT Dim; // eax
  struct IMultitaskingViewElement *v20; // [rsp+30h] [rbp-10h] BYREF
  void *ppvData; // [rsp+38h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  __int64 v23; // [rsp+70h] [rbp+30h] BYREF
  IRawElementProviderSimple *pProvider; // [rsp+78h] [rbp+38h] BYREF
  SAFEARRAY *psa; // [rsp+88h] [rbp+48h] BYREF

  v20 = a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v20);
  if ( ElementHelpers::IsSameElement(a2, this[21], v6) )
  {
    CMultitaskingViewElementBase::_GetFocusForRemovedChild(this, &v23, a2);
    (*((void (__fastcall **)(struct IMultitaskingViewElement **, __int64))*this + 36))(this, v23);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v23);
  }
  v8 = CTSimpleFixedArray<Microsoft::WRL::ComPtr<IMultitaskingViewElement>,ElementHelpers::ElementCompare>::FindEx<ElementHelpers::ElementCompare>(
         this + 2,
         v7,
         &v20,
         &v23);
  if ( v8 >= 0 )
    v8 = CTSimpleArray<Microsoft::WRL::ComPtr<WeakReference::IWeakReference>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<WeakReference::IWeakReference>>,ComPtrCompareHelper,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<WeakReference::IWeakReference>>>::RemoveAt(
           this + 2,
           v23);
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5A,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\baseelement.cpp",
      (const char *)(unsigned int)v8);
    goto LABEL_32;
  }
  if ( ElementHelpers::IsSameElement(a2, this[16], v9) )
    CMultitaskingViewElementBase::_ResetCapture((CMultitaskingViewElementBase *)this);
  if ( UiaClientsAreListening()
    && (*((unsigned __int8 (__fastcall **)(struct IMultitaskingViewElement **))*this + 21))(this)
    && (*(unsigned __int8 (__fastcall **)(struct IMultitaskingViewElement *))(*(_QWORD *)a2 + 168LL))(a2)
    && (*((__int64 (__fastcall **)(struct IMultitaskingViewElement **))*this + 41))(this) )
  {
    pProvider = 0LL;
    v23 = 0LL;
    v10 = (__int64 (__fastcall *)(struct IMultitaskingViewElement **, GUID *, IRawElementProviderSimple **))*((_QWORD *)*this + 47);
    Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)&pProvider);
    v11 = v10(this, &GUID_d6dd68d1_86fd_4332_8666_9abedea2d24c, &pProvider);
    v12 = retaddr;
    if ( v11 < 0 )
    {
      v13 = 111LL;
LABEL_15:
      wil::details::in1diag3::_Log_Hr(
        v12,
        (void *)v13,
        (int)"pcshell\\twinui\\multitaskingview\\lib\\baseelement.cpp",
        (const char *)(unsigned int)v11);
LABEL_26:
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v23);
      Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)&pProvider);
      goto LABEL_27;
    }
    v14 = *(__int64 (__fastcall **)(struct IMultitaskingViewElement *, GUID *, __int64 *))(*(_QWORD *)a2 + 376LL);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v23);
    v11 = v14(a2, &GUID_f7063da8_8359_439c_9297_bbc5299a7d87, &v23);
    v12 = retaddr;
    if ( v11 < 0 )
    {
      v13 = 112LL;
      goto LABEL_15;
    }
    v11 = (*(__int64 (__fastcall **)(__int64, SAFEARRAY **))(*(_QWORD *)v23 + 32LL))(v23, &psa);
    v12 = retaddr;
    if ( v11 < 0 )
    {
      v13 = 113LL;
      goto LABEL_15;
    }
    v15 = SafeArrayAccessData(psa, &ppvData);
    v16 = retaddr;
    if ( v15 >= 0 )
    {
      Dim = SafeArrayGetDim(psa);
      v15 = UiaRaiseStructureChangedEvent(pProvider, StructureChangeType_ChildRemoved, (int *)ppvData, Dim);
      v16 = retaddr;
      if ( v15 >= 0 )
      {
LABEL_25:
        SafeArrayDestroy(psa);
        goto LABEL_26;
      }
      v17 = 122LL;
    }
    else
    {
      v17 = 116LL;
    }
    wil::details::in1diag3::_Log_Hr(
      v16,
      (void *)v17,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\baseelement.cpp",
      (const char *)(unsigned int)v15);
    goto LABEL_25;
  }
LABEL_27:
  (*(void (__fastcall **)(struct IMultitaskingViewElement *, _QWORD))(*(_QWORD *)a2 + 32LL))(a2, 0LL);
  if ( a3 )
    CMultitaskingViewElementBase::_LayoutChildren(this, 0LL, 0LL);
  if ( *((_DWORD *)this + 24) == 1 )
    CMultitaskingViewElementBase::_PointerMove(
      (CMultitaskingViewElementBase *)this,
      (const struct MultitaskingViewPointerInputArgs *)(this + 18));
  (*((void (__fastcall **)(struct IMultitaskingViewElement **))*this + 52))(this);
  v8 = 0;
LABEL_32:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v20);
  return (unsigned int)v8;
}
