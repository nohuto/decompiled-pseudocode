/*
 * XREFs of ?RemoveChild@CMultitaskingViewFrameElement@@UEAAJPEAUIMultitaskingViewElement@@_N@Z @ 0x1802E4910
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RemoveChild@CMultitaskingViewElementBase@@UEAAJPEAUIMultitaskingViewElement@@_N@Z @ 0x1802E3D60 (-RemoveChild@CMultitaskingViewElementBase@@UEAAJPEAUIMultitaskingViewElement@@_N@Z.c)
 *     ??0CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@AEBV?$ComPtr@UIDCompBatcher@@@WRL@Microsoft@@AEBU_GUID@@PEAUIDCompBatchAnimationCallback@@@Z @ 0x180562760 (--0CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@AEBV-$ComPtr@UIDCompBatcher@@@WRL@Microsoft@.c)
 *     ??1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ @ 0x180562828 (--1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ.c)
 *     ?IsSameElement@ElementHelpers@@YA_NPEAUIMultitaskingViewElement@@0@Z @ 0x18056E0A4 (-IsSameElement@ElementHelpers@@YA_NPEAUIMultitaskingViewElement@@0@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CMultitaskingViewFrameElement::RemoveChild(
        CMultitaskingViewFrameElement *this,
        struct IMultitaskingViewElement *a2,
        char a3)
{
  struct IMultitaskingViewElement *v6; // r8
  struct IMultitaskingViewElement *v7; // r8
  struct IMultitaskingViewElement *v8; // r8
  struct IMultitaskingViewElement *v9; // r8
  struct IMultitaskingViewElement *v10; // r8
  unsigned int v11; // ebx
  _BYTE v13[24]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v14; // [rsp+40h] [rbp+8h] BYREF

  v14 = *((_QWORD *)this + 61);
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v14);
  DCompThumbnailHelpers::CDCompFactoryBatcher::CDCompFactoryBatcher(v13, &v14, &GUID_NULL, 0LL);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v14);
  if ( ElementHelpers::IsSameElement(a2, *((struct IMultitaskingViewElement **)this + 34), v6) )
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 34);
  if ( ElementHelpers::IsSameElement(a2, *((struct IMultitaskingViewElement **)this + 35), v7) )
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 35);
  if ( ElementHelpers::IsSameElement(a2, *((struct IMultitaskingViewElement **)this + 33), v8) )
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 33);
  if ( ElementHelpers::IsSameElement(a2, *((struct IMultitaskingViewElement **)this + 32), v9) )
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 32);
  if ( ElementHelpers::IsSameElement(a2, *((struct IMultitaskingViewElement **)this + 36), v10) )
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 36);
  v11 = CMultitaskingViewElementBase::RemoveChild((struct IMultitaskingViewElement **)this, a2, a3);
  DCompThumbnailHelpers::CDCompFactoryBatcher::~CDCompFactoryBatcher((DCompThumbnailHelpers::CDCompFactoryBatcher *)v13);
  return v11;
}
