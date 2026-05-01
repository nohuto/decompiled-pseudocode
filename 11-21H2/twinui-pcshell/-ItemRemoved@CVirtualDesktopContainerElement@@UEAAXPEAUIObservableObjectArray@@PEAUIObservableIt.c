/*
 * XREFs of ?ItemRemoved@CVirtualDesktopContainerElement@@UEAAXPEAUIObservableObjectArray@@PEAUIObservableItem@@@Z @ 0x1804DA4A0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x180075C24 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?RemoveAt@?$CTSimpleArray@V?$ComPtr@UIWeakReference@WeakReference@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIWeakReference@WeakReference@@@WRL@Microsoft@@@@VComPtrCompareHelper@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIWeakReference@WeakReference@@@WRL@Microsoft@@@@@@QEAAJ_K@Z @ 0x18049FF9C (-RemoveAt@-$CTSimpleArray@V-$ComPtr@UIWeakReference@WeakReference@@@WRL@Microsoft@@$0PPPPPPPO@V-.c)
 *     ??0CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@AEBV?$ComPtr@UIDCompBatcher@@@WRL@Microsoft@@AEBU_GUID@@PEAUIDCompBatchAnimationCallback@@@Z @ 0x1804A2F5C (--0CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@AEBV-$ComPtr@UIDCompBatcher@@@WRL@Microsoft@.c)
 *     ??1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ @ 0x1804A3024 (--1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ.c)
 *     ??4?$ObservableProperty@_N@@QEAAAEB_N$$QEA_N@Z @ 0x1804A8F2C (--4-$ObservableProperty@_N@@QEAAAEB_N$$QEA_N@Z.c)
 *     ?IsSameElement@ElementHelpers@@YA_NPEAUIMultitaskingViewElement@@0@Z @ 0x1804B16F4 (-IsSameElement@ElementHelpers@@YA_NPEAUIMultitaskingViewElement@@0@Z.c)
 *     ?GetAncestorElementOfType@ElementHelpers@@YA?AV?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@PEAUIMultitaskingViewElement@@W4AnimationCoordinatorItemType@@@Z @ 0x1804C5080 (-GetAncestorElementOfType@ElementHelpers@@YA-AV-$ComPtr@UIMultitaskingViewElement@@@WRL@Microsof.c)
 *     ??$As@UIVirtualDesktopItemElement@@@?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIVirtualDesktopItemElement@@@WRL@Microsoft@@@Details@12@@Z @ 0x1804D9374 (--$As@UIVirtualDesktopItemElement@@@-$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@QEBAJV-$.c)
 *     ?VirtualDesktopRemoveAnimationCoordinator_CreateInstance@@YAJPEAUISwitchThumbnailFactory@@AEBUVirtualDesktopMetrics@@HAEBU_GUID@@PEAPEAX@Z @ 0x1804DF200 (-VirtualDesktopRemoveAnimationCoordinator_CreateInstance@@YAJPEAUISwitchThumbnailFactory@@AEBUVi.c)
 */

// Hidden C++ exception states: #wind=15
void __fastcall CVirtualDesktopContainerElement::ItemRemoved(
        CVirtualDesktopContainerElement *this,
        struct IObservableObjectArray *a2,
        struct IObservableItem *a3)
{
  struct IUnknown *v3; // r12
  int v5; // r14d
  char *v6; // r15
  const struct _GUID *v7; // r9
  int v8; // eax
  unsigned int v9; // edi
  __int64 v10; // rax
  __int64 (__fastcall ***v11)(_QWORD, GUID *, __int64 *); // rbx
  struct IUnknown **v12; // rax
  bool v13; // r12
  struct IMultitaskingViewElement *v14; // r8
  void (__fastcall *v15)(char *, _QWORD); // rdi
  _QWORD *v16; // rax
  __int64 v17; // rax
  int v18; // r14d
  __int64 v19; // rsi
  __int64 (__fastcall *v20)(__int64, _QWORD, __int64 (__fastcall ***)(_QWORD, GUID *, __int64 *), __int64 *); // rdi
  unsigned int v21; // eax
  int v22; // eax
  __int64 v23; // r8
  char v24; // di
  __int64 v25; // [rsp+30h] [rbp-49h] BYREF
  void *v26; // [rsp+38h] [rbp-41h] BYREF
  __int64 v27; // [rsp+40h] [rbp-39h] BYREF
  __int64 (__fastcall ***v28)(_QWORD, GUID *, __int64 *); // [rsp+48h] [rbp-31h] BYREF
  __int128 v29; // [rsp+50h] [rbp-29h] BYREF
  __int64 v30[2]; // [rsp+60h] [rbp-19h] BYREF
  __int64 v31[2]; // [rsp+70h] [rbp-9h] BYREF
  __int128 v32; // [rsp+80h] [rbp+7h]
  char v33; // [rsp+90h] [rbp+17h]
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]
  __int64 v35; // [rsp+E0h] [rbp+67h] BYREF
  struct IObservableItem *v36; // [rsp+F0h] [rbp+77h]
  __int64 v37; // [rsp+F8h] [rbp+7Fh] BYREF

  v36 = a3;
  v3 = (struct IUnknown *)a3;
  v5 = 0;
  LODWORD(v37) = 0;
  v35 = *((_QWORD *)this + 4);
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v35);
  DCompThumbnailHelpers::CDCompFactoryBatcher::CDCompFactoryBatcher(v31, &v35, (__int64)&GUID_NULL, 0LL);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v35);
  v26 = 0LL;
  v6 = (char *)this - 208;
  ElementHelpers::GetAncestorElementOfType(&v25, (__int64)this - 208);
  if ( v25 )
  {
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v26);
    v8 = VirtualDesktopRemoveAnimationCoordinator_CreateInstance(
           *((struct ISwitchThumbnailFactory **)this + 4),
           (CVirtualDesktopContainerElement *)((char *)this + 88),
           *((_DWORD *)this - 35) - *((_DWORD *)this - 37),
           v7,
           &v26);
    if ( v8 >= 0 )
      (*(void (__fastcall **)(__int64, void *))(*(_QWORD *)v25 + 392LL))(v25, v26);
    else
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x8D,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\virtualdesktopcontainerelement.cpp",
        (const char *)(unsigned int)v8);
  }
  *(_QWORD *)&v29 = &v25;
  *((_QWORD *)&v29 + 1) = &v26;
  v32 = v29;
  v33 = 1;
  v9 = 0;
  if ( *((_QWORD *)this + 74) )
  {
    v10 = 0LL;
    while ( 1 )
    {
      v11 = *(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(*((_QWORD *)this + 73) + 8 * v10);
      v28 = v11;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v28);
      v27 = 0LL;
      v13 = 0;
      if ( (int)Microsoft::WRL::ComPtr<IMultitaskingViewElement>::As<IVirtualDesktopItemElement>(&v28, &v27) >= 0 )
      {
        v12 = (struct IUnknown **)(*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v27 + 24LL))(v27, &v35);
        v5 |= 1u;
        LODWORD(v37) = v5;
        if ( (unsigned int)SHIsSameObject(*v12, v3) )
          v13 = 1;
      }
      if ( (v5 & 1) != 0 )
      {
        v5 &= ~1u;
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v35);
      }
      if ( v13 )
        break;
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v27);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v28);
      v10 = ++v9;
      v3 = (struct IUnknown *)v36;
      if ( (unsigned __int64)v9 >= *((_QWORD *)this + 74) )
        goto LABEL_28;
    }
    v37 = *((_QWORD *)this + 4);
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v37);
    DCompThumbnailHelpers::CDCompFactoryBatcher::CDCompFactoryBatcher(v30, &v37, (__int64)&GUID_NULL, 0LL);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v37);
    CTSimpleArray<Microsoft::WRL::ComPtr<WeakReference::IWeakReference>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<WeakReference::IWeakReference>>,ComPtrCompareHelper,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<WeakReference::IWeakReference>>>::RemoveAt(
      (_QWORD *)this + 73,
      v9);
    if ( *((_QWORD *)this + 74) == 1LL )
    {
      *((_BYTE *)this + 616) = 0;
      LOBYTE(v37) = 1;
      ObservableProperty<bool>::operator=((__int64)this + 624, &v37);
    }
    if ( ElementHelpers::IsSameElement((struct IUnknown *)v11, *((struct IUnknown **)this - 5), v14) )
    {
      v15 = *(void (__fastcall **)(char *, _QWORD))(*(_QWORD *)v6 + 288LL);
      v16 = (_QWORD *)(*(__int64 (__fastcall **)(char *, __int64 *, _QWORD, __int64, _DWORD))(*(_QWORD *)v6 + 272LL))(
                        (char *)this - 208,
                        &v37,
                        *((_QWORD *)this - 5),
                        5LL,
                        0);
      v15((char *)this - 208, *v16);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v37);
    }
    LOBYTE(v35) = 1;
    v17 = (*(__int64 (__fastcall **)(char *, __int128 *))(*(_QWORD *)v6 + 384LL))((char *)this - 208, &v29);
    v18 = v5 | 2;
    LODWORD(v37) = v18;
    v19 = *(_QWORD *)v17;
    v20 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64 (__fastcall ***)(_QWORD, GUID *, __int64 *), __int64 *))(**(_QWORD **)v17 + 32LL);
    v21 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v11)[50])(v11);
    v22 = v20(v19, v21, v11, &v35);
    if ( v22 >= 0 )
    {
      if ( !(_BYTE)v35 )
      {
        v24 = 0;
        goto LABEL_23;
      }
    }
    else
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xB2,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\virtualdesktopcontainerelement.cpp",
        (const char *)(unsigned int)v22);
    }
    v24 = 1;
LABEL_23:
    if ( (v18 & 2) != 0 )
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v29);
    if ( v24 )
    {
      LOBYTE(v23) = 1;
      (*(void (__fastcall **)(char *, __int64 (__fastcall ***)(_QWORD, GUID *, __int64 *), __int64))(*(_QWORD *)v6 + 72LL))(
        v6,
        v11,
        v23);
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v11)[10])(v11);
    }
    DCompThumbnailHelpers::CDCompFactoryBatcher::~CDCompFactoryBatcher((DCompThumbnailHelpers::CDCompFactoryBatcher *)v30);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v27);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v28);
  }
LABEL_28:
  if ( v25 && v26 )
  {
    (*(void (__fastcall **)(void *))(*(_QWORD *)v26 + 72LL))(v26);
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v25 + 392LL))(v25, 0LL);
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v25);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v26);
  DCompThumbnailHelpers::CDCompFactoryBatcher::~CDCompFactoryBatcher((DCompThumbnailHelpers::CDCompFactoryBatcher *)v31);
}
