/*
 * XREFs of ?Navigate@CMultitaskingViewFrame@@UEAAJW4MultitaskingViewControlFlags@@I@Z @ 0x1804B1A90
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??4?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1800727D8 (--4-$ComPtr@UISnappedWindow@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??4?$ComPtr@UIObjectArray@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x18030D564 (--4-$ComPtr@UIObjectArray@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 *     ??0CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@AEBV?$ComPtr@UIDCompBatcher@@@WRL@Microsoft@@AEBU_GUID@@PEAUIDCompBatchAnimationCallback@@@Z @ 0x1804A2F5C (--0CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@AEBV-$ComPtr@UIDCompBatcher@@@WRL@Microsoft@.c)
 *     ??1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ @ 0x1804A3024 (--1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ.c)
 *     ??$As@UIMultitaskingViewElementRoot@@@?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIMultitaskingViewElementRoot@@@WRL@Microsoft@@@Details@12@@Z @ 0x1804AF5EC (--$As@UIMultitaskingViewElementRoot@@@-$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@QEBAJV.c)
 *     ?_SetFocusToControl@CMultitaskingViewFrame@@AEAAJW4MultitaskingViewControlFlags@@AEBU_GUID@@PEAPEAX@Z @ 0x1804B2E38 (-_SetFocusToControl@CMultitaskingViewFrame@@AEAAJW4MultitaskingViewControlFlags@@AEBU_GUID@@PEAP.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall CMultitaskingViewFrame::Navigate(__int64 a1, unsigned int a2, unsigned int a3)
{
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 *v10; // rax
  __int64 *v11; // rax
  __int64 *v12; // rcx
  __int64 *v13; // rax
  __int64 v15; // [rsp+30h] [rbp-30h] BYREF
  __int64 v16; // [rsp+38h] [rbp-28h] BYREF
  __int64 v17; // [rsp+40h] [rbp-20h] BYREF
  __int64 v18[3]; // [rsp+48h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]
  __int64 v20; // [rsp+80h] [rbp+20h] BYREF
  __int64 *v21; // [rsp+98h] [rbp+38h] BYREF

  v20 = *(_QWORD *)(a1 + 2480);
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v20);
  DCompThumbnailHelpers::CDCompFactoryBatcher::CDCompFactoryBatcher(v18, &v20, (__int64)&GUID_NULL, 0LL);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v20);
  v16 = 0LL;
  Microsoft::WRL::ComPtr<IMultitaskingViewElement>::As<IMultitaskingViewElementRoot>(
    (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(a1 + 2520),
    &v16);
  (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v16 + 24LL))(v16, 1LL, 1LL);
  v21 = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v21);
  v6 = CMultitaskingViewFrame::_SetFocusToControl(a1, a2, &GUID_0bb549a1_eae6_47ed_b29e_ca24ee64ad8d, &v21);
  v7 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x245,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\frame.cpp",
      (const char *)(unsigned int)v6);
    goto LABEL_18;
  }
  v20 = 0LL;
  v8 = *v21;
  if ( a3 - 7 <= 1 )
  {
    v13 = (__int64 *)(*(__int64 (__fastcall **)(__int64 *, __int64 *, _QWORD, _QWORD, _DWORD))(v8 + 272))(
                       v21,
                       &v17,
                       0LL,
                       a3,
                       0);
    Microsoft::WRL::ComPtr<IObjectArray>::operator=(&v20, v13);
    v12 = &v17;
    goto LABEL_14;
  }
  (*(void (__fastcall **)(__int64 *, __int64 *))(v8 + 280))(v21, &v15);
  v9 = *v21;
  if ( !v15 )
  {
    v11 = (__int64 *)(*(__int64 (__fastcall **)(__int64 *, __int64 *, _QWORD, _QWORD, _DWORD))(v9 + 272))(
                       v21,
                       &v17,
                       0LL,
                       a3,
                       0);
    goto LABEL_11;
  }
  v10 = (__int64 *)(*(__int64 (__fastcall **)(__int64 *, __int64 *, __int64, _QWORD, _DWORD))(v9 + 272))(
                     v21,
                     &v17,
                     v15,
                     a3,
                     0);
  Microsoft::WRL::ComPtr<IObjectArray>::operator=(&v20, v10);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v17);
  if ( !v20 )
  {
    if ( a2 == 1 && a3 - 5 <= 1 )
    {
      v11 = (__int64 *)(*(__int64 (__fastcall **)(__int64 *, __int64 *, _QWORD, _QWORD, _DWORD))(*v21 + 272))(
                         v21,
                         &v17,
                         0LL,
                         (unsigned int)(a3 != 5) + 7,
                         0);
LABEL_11:
      Microsoft::WRL::ComPtr<IObjectArray>::operator=(&v20, v11);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v17);
      goto LABEL_12;
    }
    Microsoft::WRL::ComPtr<ISnappedWindow>::operator=(&v20, &v15);
  }
LABEL_12:
  v12 = &v15;
LABEL_14:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v12);
  if ( v20 )
  {
    (*(void (__fastcall **)(__int64 *, __int64))(*v21 + 288))(v21, v20);
    v7 = 0;
  }
  else
  {
    v7 = -2147023728;
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v20);
LABEL_18:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v21);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v16);
  DCompThumbnailHelpers::CDCompFactoryBatcher::~CDCompFactoryBatcher((DCompThumbnailHelpers::CDCompFactoryBatcher *)v18);
  return v7;
}
