/*
 * XREFs of ?SetChildFocus@CVirtualDesktopContainerElement@@UEAAXPEAUIMultitaskingViewElement@@@Z @ 0x180592E20
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@AEBV?$ComPtr@UIDCompBatcher@@@WRL@Microsoft@@AEBU_GUID@@PEAUIDCompBatchAnimationCallback@@@Z @ 0x180562760 (--0CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@AEBV-$ComPtr@UIDCompBatcher@@@WRL@Microsoft@.c)
 *     ??1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ @ 0x180562828 (--1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ.c)
 *     ?SetChildFocus@CMultitaskingViewElementBase@@UEAAXPEAUIMultitaskingViewElement@@@Z @ 0x1805755D0 (-SetChildFocus@CMultitaskingViewElementBase@@UEAAXPEAUIMultitaskingViewElement@@@Z.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall CVirtualDesktopContainerElement::SetChildFocus(
        CVirtualDesktopContainerElement *this,
        struct IUnknown *a2)
{
  __int64 v4[3]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v5; // [rsp+40h] [rbp+8h] BYREF

  v5 = *((_QWORD *)this + 30);
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v5);
  DCompThumbnailHelpers::CDCompFactoryBatcher::CDCompFactoryBatcher(v4, &v5, (__int64)&GUID_NULL, 0LL);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v5);
  CMultitaskingViewElementBase::SetChildFocus(this, a2);
  (*(void (__fastcall **)(char *, struct IUnknown *))(*((_QWORD *)this + 27) + 48LL))((char *)this + 216, a2);
  DCompThumbnailHelpers::CDCompFactoryBatcher::~CDCompFactoryBatcher((DCompThumbnailHelpers::CDCompFactoryBatcher *)v4);
}
