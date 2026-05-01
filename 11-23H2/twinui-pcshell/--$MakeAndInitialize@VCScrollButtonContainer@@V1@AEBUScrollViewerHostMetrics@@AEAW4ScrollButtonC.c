/*
 * XREFs of ??$MakeAndInitialize@VCScrollButtonContainer@@V1@AEBUScrollViewerHostMetrics@@AEAW4ScrollButtonContainerFlags@@AEAPEAUIWeakReference@WeakReference@@AEAPEAUIDWriteTextFormat@@AEAPEAUISwitchThumbnailFactory@@@Details@WRL@Microsoft@@YAJPEAPEAVCScrollButtonContainer@@AEBUScrollViewerHostMetrics@@AEAW4ScrollButtonContainerFlags@@AEAPEAUIWeakReference@WeakReference@@AEAPEAUIDWriteTextFormat@@AEAPEAUISwitchThumbnailFactory@@@Z @ 0x18058B160
 * Callers:
 *     ?CScrollButtonContainer_CreateInstance@@YAJAEBUScrollViewerHostMetrics@@W4ScrollButtonContainerFlags@@PEAUIWeakReference@WeakReference@@PEAUIDWriteTextFormat@@PEAUISwitchThumbnailFactory@@AEBU_GUID@@PEAPEAX@Z @ 0x18058B51C (-CScrollButtonContainer_CreateInstance@@YAJAEBUScrollViewerHostMetrics@@W4ScrollButtonContainerF.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0CScrollButtonContainer@@QEAA@XZ @ 0x18058B278 (--0CScrollButtonContainer@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@CScrollButtonContainer@@QEAAJAEBUScrollViewerHostMetrics@@W4ScrollButtonContainerFlags@@PEAUIWeakReference@WeakReference@@PEAUIDWriteTextFormat@@PEAUISwitchThumbnailFactory@@@Z @ 0x18058B764 (-RuntimeClassInitialize@CScrollButtonContainer@@QEAAJAEBUScrollViewerHostMetrics@@W4ScrollButton.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CScrollButtonContainer,CScrollButtonContainer,ScrollViewerHostMetrics const &,enum ScrollButtonContainerFlags &,WeakReference::IWeakReference * &,IDWriteTextFormat * &,ISwitchThumbnailFactory * &>(
        CScrollButtonContainer **a1,
        __int64 a2,
        unsigned int *a3,
        _QWORD *a4,
        _QWORD *a5,
        _QWORD *a6)
{
  CScrollButtonContainer *v10; // rax
  int v11; // esi
  CScrollButtonContainer *v12; // rdi
  CScrollButtonContainer *v14; // [rsp+60h] [rbp+8h] BYREF

  *a1 = 0LL;
  v10 = (CScrollButtonContainer *)operator new(0x1B8uLL, (const struct std::nothrow_t *)&std::nothrow);
  v14 = v10;
  if ( v10 )
  {
    v12 = CScrollButtonContainer::CScrollButtonContainer(v10);
    v14 = v12;
    v11 = CScrollButtonContainer::RuntimeClassInitialize(v12, a2, *a3, *a4, *a5, *a6, 0LL);
    if ( v11 >= 0 )
    {
      if ( v12 )
        (*(void (__fastcall **)(CScrollButtonContainer *))(*(_QWORD *)v12 + 8LL))(v12);
      *a1 = v12;
      v11 = 0;
    }
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v14);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v11;
}
