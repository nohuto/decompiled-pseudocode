/*
 * XREFs of ?NavigateToItem@CMultitaskingViewFrame@@UEAAJW4MultitaskingViewControlFlags@@PEAUIUnknown@@@Z @ 0x1804B1D80
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@AEBV?$ComPtr@UIDCompBatcher@@@WRL@Microsoft@@AEBU_GUID@@PEAUIDCompBatchAnimationCallback@@@Z @ 0x1804A2F5C (--0CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@AEBV-$ComPtr@UIDCompBatcher@@@WRL@Microsoft@.c)
 *     ??1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ @ 0x1804A3024 (--1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ.c)
 *     ??$As@UIMultitaskingViewElementRoot@@@?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIMultitaskingViewElementRoot@@@WRL@Microsoft@@@Details@12@@Z @ 0x1804AF5EC (--$As@UIMultitaskingViewElementRoot@@@-$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@QEBAJV.c)
 *     ?_SetFocusToControl@CMultitaskingViewFrame@@AEAAJW4MultitaskingViewControlFlags@@AEBU_GUID@@PEAPEAX@Z @ 0x1804B2E38 (-_SetFocusToControl@CMultitaskingViewFrame@@AEAAJW4MultitaskingViewControlFlags@@AEBU_GUID@@PEAP.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CMultitaskingViewFrame::NavigateToItem(__int64 a1, int a2, __int64 a3)
{
  int v5; // ebx
  int v6; // eax
  __int64 v8; // [rsp+20h] [rbp-20h] BYREF
  __int64 v9; // [rsp+28h] [rbp-18h] BYREF
  __int64 v10[2]; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+8h]
  __int64 v12; // [rsp+68h] [rbp+28h] BYREF

  if ( a2 == 1 )
  {
    v8 = *(_QWORD *)(a1 + 2480);
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v8);
    DCompThumbnailHelpers::CDCompFactoryBatcher::CDCompFactoryBatcher(v10, &v8, (__int64)&GUID_NULL, 0LL);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v8);
    v9 = 0LL;
    Microsoft::WRL::ComPtr<IMultitaskingViewElement>::As<IMultitaskingViewElementRoot>(
      (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(a1 + 2520),
      &v9);
    (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v9 + 24LL))(v9, 1LL, 1LL);
    v12 = 0LL;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v12);
    v6 = CMultitaskingViewFrame::_SetFocusToControl(a1, 1LL, &GUID_32fb1eed_1f54_4f39_8ace_bc73caac51e2, &v12);
    v5 = v6;
    if ( v6 >= 0 )
    {
      v5 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v12 + 104LL))(v12, a3);
      if ( v5 >= 0 )
        v5 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x284,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\frame.cpp",
        (const char *)(unsigned int)v6);
    }
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v12);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v9);
    DCompThumbnailHelpers::CDCompFactoryBatcher::~CDCompFactoryBatcher((DCompThumbnailHelpers::CDCompFactoryBatcher *)v10);
  }
  else
  {
    v5 = -2147467263;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x279,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\frame.cpp",
      (const char *)0x80004001LL);
  }
  return (unsigned int)v5;
}
