/*
 * XREFs of ?ItemRemoved@CSwitchItemGrid@@UEAAXPEAUIObservableObjectArray@@PEAUIObservableItem@@@Z @ 0x1805795B0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180132F90 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@AEBV?$ComPtr@UIDCompBatcher@@@WRL@Microsoft@@AEBU_GUID@@PEAUIDCompBatchAnimationCallback@@@Z @ 0x180562760 (--0CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@AEBV-$ComPtr@UIDCompBatcher@@@WRL@Microsoft@.c)
 *     ??1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ @ 0x180562828 (--1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ.c)
 *     ??$FindEx@VCompareToItemData@@@?$CTSimpleFixedArray@V?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@VElementCompare@ElementHelpers@@@@QEBAJAEBVCompareToItemData@@AEBV?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@PEA_K_K@Z @ 0x1805783E4 (--$FindEx@VCompareToItemData@@@-$CTSimpleFixedArray@V-$ComPtr@UIMultitaskingViewElement@@@WRL@Mi.c)
 */

// Hidden C++ exception states: #wind=6
void __fastcall CSwitchItemGrid::ItemRemoved(
        CSwitchItemGrid *this,
        struct IObservableObjectArray *a2,
        struct IObservableItem *a3)
{
  _QWORD *v5; // r14
  __int64 v6; // r8
  char *v7; // r15
  __int64 v8; // rax
  __int64 v9; // rsi
  __int64 (__fastcall *v10)(__int64, _QWORD, __int64, struct IObservableItem **); // rdi
  __int64 v11; // r12
  __int64 v12; // rbx
  unsigned int v13; // eax
  int v14; // eax
  char v15; // bl
  __int64 v16; // r8
  __int64 v17; // [rsp+30h] [rbp-20h] BYREF
  __int64 v18[3]; // [rsp+38h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+38h]
  struct IObservableItem *v20; // [rsp+90h] [rbp+40h] BYREF
  __int64 v21; // [rsp+A0h] [rbp+50h] BYREF
  __int64 v22; // [rsp+A8h] [rbp+58h] BYREF

  LODWORD(v21) = 0;
  v20 = (struct IObservableItem *)*((_QWORD *)this + 80);
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v20);
  DCompThumbnailHelpers::CDCompFactoryBatcher::CDCompFactoryBatcher(v18, (__int64 *)&v20, (__int64)&GUID_NULL, 0LL);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v20);
  v5 = (_QWORD *)((char *)this - 200);
  v21 = 0LL;
  v20 = a3;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v20);
  LOBYTE(a3) = (int)CTSimpleFixedArray<Microsoft::WRL::ComPtr<IMultitaskingViewElement>,ElementHelpers::ElementCompare>::FindEx<CompareToItemData>(
                      (_QWORD *)this - 25,
                      &v20,
                      v6,
                      &v22) >= 0;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v20);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v21);
  if ( !(_BYTE)a3 )
    goto LABEL_7;
  LOBYTE(v20) = 1;
  v7 = (char *)this - 216;
  v8 = (*(__int64 (__fastcall **)(char *, __int64 *))(*((_QWORD *)this - 27) + 384LL))((char *)this - 216, &v17);
  LODWORD(v21) = 1;
  v9 = *(_QWORD *)v8;
  v10 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, struct IObservableItem **))(**(_QWORD **)v8 + 32LL);
  v11 = v22;
  v12 = *(_QWORD *)(*v5 + 8 * v22);
  v13 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v12 + 400LL))(v12);
  v14 = v10(v9, v13, v12, &v20);
  if ( v14 < 0 )
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x245,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\grid.cpp",
      (const char *)(unsigned int)v14);
LABEL_4:
    v15 = 1;
    goto LABEL_5;
  }
  if ( (_BYTE)v20 )
    goto LABEL_4;
  v15 = 0;
LABEL_5:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v17);
  if ( v15 )
  {
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*v5 + 8 * v11) + 80LL))(*(_QWORD *)(*v5 + 8 * v11));
    LOBYTE(v16) = 1;
    (*(void (__fastcall **)(char *, _QWORD, __int64))(*(_QWORD *)v7 + 72LL))(v7, *(_QWORD *)(*v5 + 8 * v11), v16);
  }
LABEL_7:
  DCompThumbnailHelpers::CDCompFactoryBatcher::~CDCompFactoryBatcher((DCompThumbnailHelpers::CDCompFactoryBatcher *)v18);
}
