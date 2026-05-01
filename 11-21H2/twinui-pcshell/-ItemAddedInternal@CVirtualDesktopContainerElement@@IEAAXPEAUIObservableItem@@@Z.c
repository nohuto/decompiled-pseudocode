/*
 * XREFs of ?ItemAddedInternal@CVirtualDesktopContainerElement@@IEAAXPEAUIObservableItem@@@Z @ 0x1804DA13C
 * Callers:
 *     ?ItemAdded@CVirtualDesktopContainerElement@@UEAAXPEAUIObservableObjectArray@@PEAUIObservableItem@@@Z @ 0x1804D9F90 (-ItemAdded@CVirtualDesktopContainerElement@@UEAAXPEAUIObservableObjectArray@@PEAUIObservableItem.c)
 *     ?RuntimeClassInitialize@CVirtualDesktopContainerElement@@QEAAJAEBUVirtualDesktopMetrics@@AEBUCRect@Geometry@@PEAUIObservableObjectArray@@PEAUIVirtualDesktopElementFactory@@PEAUISwitchThumbnailFactory@@@Z @ 0x1804DAC24 (-RuntimeClassInitialize@CVirtualDesktopContainerElement@@QEAAJAEBUVirtualDesktopMetrics@@AEBUCRe.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetRootElement@ElementHelpers@@YA?AV?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@PEAUIMultitaskingViewElement@@@Z @ 0x180236386 (-GetRootElement@ElementHelpers@@YA-AV-$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@PEAUIMu.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@@@QEAAJ_K0@Z @ 0x18031A2A4 (-_EnsureCapacity@-$CTSimpleArray@V-$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V-$C.c)
 *     ?RemoveAt@?$CTSimpleArray@V?$ComPtr@UIWeakReference@WeakReference@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIWeakReference@WeakReference@@@WRL@Microsoft@@@@VComPtrCompareHelper@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIWeakReference@WeakReference@@@WRL@Microsoft@@@@@@QEAAJ_K@Z @ 0x18049FF9C (-RemoveAt@-$CTSimpleArray@V-$ComPtr@UIWeakReference@WeakReference@@@WRL@Microsoft@@$0PPPPPPPO@V-.c)
 *     ??0CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@AEBV?$ComPtr@UIDCompBatcher@@@WRL@Microsoft@@AEBU_GUID@@PEAUIDCompBatchAnimationCallback@@@Z @ 0x1804A2F5C (--0CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@AEBV-$ComPtr@UIDCompBatcher@@@WRL@Microsoft@.c)
 *     ??1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ @ 0x1804A3024 (--1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ.c)
 *     ??4?$ObservableProperty@_N@@QEAAAEB_N$$QEA_N@Z @ 0x1804A8F2C (--4-$ObservableProperty@_N@@QEAAAEB_N$$QEA_N@Z.c)
 *     ??$FindEx@VElementCompare@ElementHelpers@@@?$CTSimpleFixedArray@V?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@VElementCompare@ElementHelpers@@@@QEBAJAEBVElementCompare@ElementHelpers@@AEBV?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@PEA_K_K@Z @ 0x1804B8EAC (--$FindEx@VElementCompare@ElementHelpers@@@-$CTSimpleFixedArray@V-$ComPtr@UIMultitaskingViewElem.c)
 *     ?SetFocusToElement@ElementHelpers@@YAXPEAUIMultitaskingViewElement@@@Z @ 0x1804C5528 (-SetFocusToElement@ElementHelpers@@YAXPEAUIMultitaskingViewElement@@@Z.c)
 *     ??$As@UIVirtualDesktopItemElement@@@?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIVirtualDesktopItemElement@@@WRL@Microsoft@@@Details@12@@Z @ 0x1804D9374 (--$As@UIVirtualDesktopItemElement@@@-$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@QEBAJV-$.c)
 */

// Hidden C++ exception states: #wind=7
void __fastcall CVirtualDesktopContainerElement::ItemAddedInternal(
        CVirtualDesktopContainerElement *this,
        struct IObservableItem *a2)
{
  char v4; // r15
  __int64 v5; // rdi
  __int64 (__fastcall *v6)(__int64, struct IObservableItem *, _QWORD, GUID *, ElementHelpers **); // rbx
  int v7; // eax
  int v8; // eax
  ElementHelpers *v9; // rbx
  void *v10; // r8
  int v11; // edi
  __int64 v12; // rdx
  struct IUnknown **v13; // rax
  int v14; // eax
  __int64 v15; // rdx
  struct IMultitaskingViewElement *v16; // rdx
  __int64 *RootElement; // rax
  bool v18; // bl
  unsigned __int64 v19; // [rsp+30h] [rbp-20h] BYREF
  __int64 v20[3]; // [rsp+38h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  struct IUnknown *v22; // [rsp+80h] [rbp+30h] BYREF
  ElementHelpers *v23; // [rsp+90h] [rbp+40h] BYREF
  __int64 v24; // [rsp+98h] [rbp+48h] BYREF

  v4 = 0;
  LODWORD(v22) = 0;
  v22 = (struct IUnknown *)*((_QWORD *)this + 30);
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v22);
  DCompThumbnailHelpers::CDCompFactoryBatcher::CDCompFactoryBatcher(v20, (__int64 *)&v22, (__int64)&GUID_NULL, 0LL);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v22);
  v23 = 0LL;
  v5 = *((_QWORD *)this + 34);
  v6 = *(__int64 (__fastcall **)(__int64, struct IObservableItem *, _QWORD, GUID *, ElementHelpers **))(*(_QWORD *)v5 + 32LL);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v23);
  v7 = v6(v5, a2, *((_QWORD *)this + 30), &GUID_0bb549a1_eae6_47ed_b29e_ca24ee64ad8d, &v23);
  if ( v7 >= 0 )
  {
    v24 = 0LL;
    v8 = Microsoft::WRL::ComPtr<IMultitaskingViewElement>::As<IVirtualDesktopItemElement>(
           (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))&v23,
           &v24);
    if ( v8 >= 0 )
    {
      (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)v24 + 32LL))(v24, (char *)this + 248);
      v9 = v23;
      v22 = (struct IUnknown *)v23;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v22);
      v11 = 0;
      v12 = *((_QWORD *)this + 100);
      if ( v12 != *((_QWORD *)this + 102)
        || (v11 = CTSimpleArray<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>>::_EnsureCapacity(
                    (__int64)this + 792,
                    v12 + 1,
                    v10),
            v11 >= 0) )
      {
        v13 = (struct IUnknown **)(*((_QWORD *)this + 99) + 8 * (*((_QWORD *)this + 100))++);
        if ( v13 )
        {
          *v13 = 0LL;
          if ( v13 != &v22 )
          {
            *v13 = (struct IUnknown *)v9;
            v22 = 0LL;
          }
        }
      }
      if ( v11 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x55,
          (__int64)"pcshell\\twinui\\multitaskingview\\lib\\virtualdesktopcontainerelement.cpp",
          (const char *)(unsigned int)v11);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v22);
      if ( v11 >= 0 )
      {
        v14 = (*(__int64 (__fastcall **)(CVirtualDesktopContainerElement *, ElementHelpers *))(*(_QWORD *)this + 64LL))(
                this,
                v23);
        if ( v14 >= 0 )
        {
          LOBYTE(v22) = *((_QWORD *)this + 100) == 1LL;
          ObservableProperty<bool>::operator=((__int64)this + 832, &v22);
          v18 = 0;
          if ( *((_BYTE *)this + 825) )
          {
            RootElement = ElementHelpers::GetRootElement((__int64 *)&v19, (__int64)this);
            v4 = 1;
            LODWORD(v22) = 1;
            if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)*RootElement + 304LL))(*RootElement) )
              v18 = 1;
          }
          if ( (v4 & 1) != 0 )
            Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v19);
          if ( v18 )
            ElementHelpers::SetFocusToElement(v23, v16);
        }
        else
        {
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x57,
            (__int64)"pcshell\\twinui\\multitaskingview\\lib\\virtualdesktopcontainerelement.cpp",
            (const char *)(unsigned int)v14);
          v22 = (struct IUnknown *)v23;
          Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v22);
          if ( (int)CTSimpleFixedArray<Microsoft::WRL::ComPtr<IMultitaskingViewElement>,ElementHelpers::ElementCompare>::FindEx<ElementHelpers::ElementCompare>(
                      (_QWORD *)this + 99,
                      v15,
                      &v22,
                      &v19) >= 0 )
            CTSimpleArray<Microsoft::WRL::ComPtr<WeakReference::IWeakReference>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<WeakReference::IWeakReference>>,ComPtrCompareHelper,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<WeakReference::IWeakReference>>>::RemoveAt(
              (_QWORD *)this + 99,
              v19);
          Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v22);
        }
      }
    }
    else
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x52,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\virtualdesktopcontainerelement.cpp",
        (const char *)(unsigned int)v8);
    }
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v24);
  }
  else
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x4F,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\virtualdesktopcontainerelement.cpp",
      (const char *)(unsigned int)v7);
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v23);
  DCompThumbnailHelpers::CDCompFactoryBatcher::~CDCompFactoryBatcher((DCompThumbnailHelpers::CDCompFactoryBatcher *)v20);
}
