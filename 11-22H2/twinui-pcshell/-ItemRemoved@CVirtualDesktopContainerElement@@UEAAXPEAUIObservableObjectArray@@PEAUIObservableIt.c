/*
 * XREFs of ?ItemRemoved@CVirtualDesktopContainerElement@@UEAAXPEAUIObservableObjectArray@@PEAUIObservableItem@@@Z @ 0x180592230
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x1800DF498 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?RemoveAt@?$CTSimpleArray@V?$ComPtr@UIWeakReference@WeakReference@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIWeakReference@WeakReference@@@WRL@Microsoft@@@@VComPtrCompareHelper@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIWeakReference@WeakReference@@@WRL@Microsoft@@@@@@QEAAJ_K@Z @ 0x1803B0DE0 (-RemoveAt@-$CTSimpleArray@V-$ComPtr@UIWeakReference@WeakReference@@@WRL@Microsoft@@$0PPPPPPPO@V-.c)
 *     ??0CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@AEBV?$ComPtr@UIDCompBatcher@@@WRL@Microsoft@@AEBU_GUID@@PEAUIDCompBatchAnimationCallback@@@Z @ 0x180562760 (--0CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@AEBV-$ComPtr@UIDCompBatcher@@@WRL@Microsoft@.c)
 *     ??1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ @ 0x180562828 (--1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ.c)
 *     ??4?$ObservableProperty@_N@@QEAAAEB_N$$QEA_N@Z @ 0x180565CCC (--4-$ObservableProperty@_N@@QEAAAEB_N$$QEA_N@Z.c)
 *     ?IsSameElement@ElementHelpers@@YA_NPEAUIMultitaskingViewElement@@0@Z @ 0x18056E0A4 (-IsSameElement@ElementHelpers@@YA_NPEAUIMultitaskingViewElement@@0@Z.c)
 *     ?GetAncestorElementOfType@ElementHelpers@@YA?AV?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@PEAUIMultitaskingViewElement@@W4AnimationCoordinatorItemType@@@Z @ 0x18057FA10 (-GetAncestorElementOfType@ElementHelpers@@YA-AV-$ComPtr@UIMultitaskingViewElement@@@WRL@Microsof.c)
 *     ??$As@UIVirtualDesktopItemElement@@@?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIVirtualDesktopItemElement@@@WRL@Microsoft@@@Details@12@@Z @ 0x1805910DC (--$As@UIVirtualDesktopItemElement@@@-$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@QEBAJV-$.c)
 *     ?VirtualDesktopRemoveAnimationCoordinator_CreateInstance@@YAJPEAUISwitchThumbnailFactory@@AEBUVirtualDesktopMetrics@@HAEBU_GUID@@PEAPEAX@Z @ 0x180596FD0 (-VirtualDesktopRemoveAnimationCoordinator_CreateInstance@@YAJPEAUISwitchThumbnailFactory@@AEBUVi.c)
 */

// Hidden C++ exception states: #wind=15
void __fastcall CVirtualDesktopContainerElement::ItemRemoved(
        CVirtualDesktopContainerElement *this,
        struct IObservableObjectArray *a2,
        struct IObservableItem *a3)
{
  struct IUnknown *v3; // r13
  int v5; // r14d
  char *v6; // r15
  const struct _GUID *v7; // r9
  int v8; // eax
  unsigned int v9; // r12d
  _QWORD *v10; // rax
  unsigned __int64 v11; // rdi
  __int64 (__fastcall ***v12)(_QWORD, GUID *, __int64 *); // rbx
  struct IUnknown **v13; // rax
  bool v14; // r13
  struct IMultitaskingViewElement *v15; // r8
  void (__fastcall *v16)(char *, _QWORD); // rdi
  _QWORD *v17; // rax
  __int64 v18; // rax
  int v19; // r14d
  __int64 v20; // rsi
  __int64 (__fastcall *v21)(__int64, _QWORD, __int64 (__fastcall ***)(_QWORD, GUID *, __int64 *), __int64 *); // rdi
  unsigned int v22; // eax
  int v23; // eax
  __int64 v24; // r8
  char v25; // di
  __int64 v26; // [rsp+30h] [rbp-49h] BYREF
  void *v27; // [rsp+38h] [rbp-41h] BYREF
  __int64 v28; // [rsp+40h] [rbp-39h] BYREF
  __int64 (__fastcall ***v29)(_QWORD, GUID *, __int64 *); // [rsp+48h] [rbp-31h] BYREF
  __int128 v30; // [rsp+50h] [rbp-29h] BYREF
  __int64 v31[2]; // [rsp+60h] [rbp-19h] BYREF
  __int64 v32[2]; // [rsp+70h] [rbp-9h] BYREF
  __int128 v33; // [rsp+80h] [rbp+7h]
  char v34; // [rsp+90h] [rbp+17h]
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]
  __int64 v36; // [rsp+E0h] [rbp+67h] BYREF
  struct IObservableItem *v37; // [rsp+F0h] [rbp+77h]
  __int64 v38; // [rsp+F8h] [rbp+7Fh] BYREF

  v37 = a3;
  v3 = (struct IUnknown *)a3;
  v5 = 0;
  LODWORD(v38) = 0;
  v36 = *((_QWORD *)this + 4);
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v36);
  DCompThumbnailHelpers::CDCompFactoryBatcher::CDCompFactoryBatcher(v32, &v36, (__int64)&GUID_NULL, 0LL);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v36);
  v27 = 0LL;
  v6 = (char *)this - 208;
  ElementHelpers::GetAncestorElementOfType(&v26, (__int64)this - 208);
  if ( v26 )
  {
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v27);
    v8 = VirtualDesktopRemoveAnimationCoordinator_CreateInstance(
           *((struct ISwitchThumbnailFactory **)this + 4),
           (CVirtualDesktopContainerElement *)((char *)this + 88),
           *((_DWORD *)this - 35) - *((_DWORD *)this - 37),
           v7,
           &v27);
    if ( v8 >= 0 )
      (*(void (__fastcall **)(__int64, void *))(*(_QWORD *)v26 + 392LL))(v26, v27);
    else
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x8D,
        (int)"pcshell\\twinui\\multitaskingview\\lib\\virtualdesktopcontainerelement.cpp",
        (const char *)(unsigned int)v8);
  }
  *(_QWORD *)&v30 = &v26;
  *((_QWORD *)&v30 + 1) = &v27;
  v33 = v30;
  v34 = 1;
  v9 = 0;
  if ( *((_QWORD *)this + 74) )
  {
    v10 = (_QWORD *)((char *)this + 584);
    v11 = 0LL;
    while ( 1 )
    {
      v12 = *(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(*v10 + 8 * v11);
      v29 = v12;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v29);
      v28 = 0LL;
      v14 = 0;
      if ( (int)Microsoft::WRL::ComPtr<IMultitaskingViewElement>::As<IVirtualDesktopItemElement>(&v29, &v28) >= 0 )
      {
        v13 = (struct IUnknown **)(*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v28 + 24LL))(v28, &v36);
        v5 |= 1u;
        LODWORD(v38) = v5;
        if ( (unsigned int)SHIsSameObject(*v13, v3) )
          v14 = 1;
      }
      if ( (v5 & 1) != 0 )
      {
        v5 &= ~1u;
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v36);
      }
      if ( v14 )
        break;
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v28);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v29);
      v11 = ++v9;
      v10 = (_QWORD *)((char *)this + 584);
      v3 = (struct IUnknown *)v37;
      if ( (unsigned __int64)v9 >= *((_QWORD *)this + 74) )
        goto LABEL_28;
    }
    v38 = *((_QWORD *)this + 4);
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v38);
    DCompThumbnailHelpers::CDCompFactoryBatcher::CDCompFactoryBatcher(v31, &v38, (__int64)&GUID_NULL, 0LL);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v38);
    CTSimpleArray<Microsoft::WRL::ComPtr<WeakReference::IWeakReference>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<WeakReference::IWeakReference>>,ComPtrCompareHelper,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<WeakReference::IWeakReference>>>::RemoveAt(
      (_QWORD *)this + 73,
      v11);
    if ( *((_QWORD *)this + 74) == 1LL )
    {
      *((_BYTE *)this + 616) = 0;
      LOBYTE(v38) = 1;
      ObservableProperty<bool>::operator=((__int64)this + 624, &v38);
    }
    if ( ElementHelpers::IsSameElement((struct IUnknown *)v12, *((struct IUnknown **)this - 5), v15) )
    {
      v16 = *(void (__fastcall **)(char *, _QWORD))(*(_QWORD *)v6 + 288LL);
      v17 = (_QWORD *)(*(__int64 (__fastcall **)(char *, __int64 *, _QWORD, __int64, _DWORD))(*(_QWORD *)v6 + 272LL))(
                        (char *)this - 208,
                        &v38,
                        *((_QWORD *)this - 5),
                        5LL,
                        0);
      v16((char *)this - 208, *v17);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v38);
    }
    LOBYTE(v36) = 1;
    v18 = (*(__int64 (__fastcall **)(char *, __int128 *))(*(_QWORD *)v6 + 384LL))((char *)this - 208, &v30);
    v19 = v5 | 2;
    LODWORD(v38) = v19;
    v20 = *(_QWORD *)v18;
    v21 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64 (__fastcall ***)(_QWORD, GUID *, __int64 *), __int64 *))(**(_QWORD **)v18 + 32LL);
    v22 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v12)[50])(v12);
    v23 = v21(v20, v22, v12, &v36);
    if ( v23 >= 0 )
    {
      if ( !(_BYTE)v36 )
      {
        v25 = 0;
        goto LABEL_23;
      }
    }
    else
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xB2,
        (int)"pcshell\\twinui\\multitaskingview\\lib\\virtualdesktopcontainerelement.cpp",
        (const char *)(unsigned int)v23);
    }
    v25 = 1;
LABEL_23:
    if ( (v19 & 2) != 0 )
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v30);
    if ( v25 )
    {
      LOBYTE(v24) = 1;
      (*(void (__fastcall **)(char *, __int64 (__fastcall ***)(_QWORD, GUID *, __int64 *), __int64))(*(_QWORD *)v6 + 72LL))(
        v6,
        v12,
        v24);
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v12)[10])(v12);
    }
    DCompThumbnailHelpers::CDCompFactoryBatcher::~CDCompFactoryBatcher((DCompThumbnailHelpers::CDCompFactoryBatcher *)v31);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v28);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v29);
  }
LABEL_28:
  if ( v26 && v27 )
  {
    (*(void (__fastcall **)(void *))(*(_QWORD *)v27 + 72LL))(v27);
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v26 + 392LL))(v26, 0LL);
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v26);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v27);
  DCompThumbnailHelpers::CDCompFactoryBatcher::~CDCompFactoryBatcher((DCompThumbnailHelpers::CDCompFactoryBatcher *)v32);
}
