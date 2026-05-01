/*
 * XREFs of ?_RenderLabel@CSwitchItemElement@@IEAAXXZ @ 0x180573738
 * Callers:
 *     ObservablePropertyCallback__lambda_775801dc926fad4e7766c846adb2ec1f___::Run @ 0x1802E2F10 (ObservablePropertyCallback__lambda_775801dc926fad4e7766c846adb2ec1f___--Run.c)
 *     ?_CreateLabel@CSwitchItemElement@@IEAAJAEBUCSize@Geometry@@@Z @ 0x1802E350C (-_CreateLabel@CSwitchItemElement@@IEAAJAEBUCSize@Geometry@@@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@AEBV?$ComPtr@UIDCompBatcher@@@WRL@Microsoft@@AEBU_GUID@@PEAUIDCompBatchAnimationCallback@@@Z @ 0x180562760 (--0CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@AEBV-$ComPtr@UIDCompBatcher@@@WRL@Microsoft@.c)
 *     ??1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ @ 0x180562828 (--1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall CSwitchItemElement::_RenderLabel(CSwitchItemElement *this)
{
  __int64 v2; // rcx
  __int64 v3[3]; // [rsp+20h] [rbp-18h] BYREF
  CSwitchItemElement *v4; // [rsp+40h] [rbp+8h] BYREF

  v4 = (CSwitchItemElement *)*((_QWORD *)this + 71);
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v4);
  DCompThumbnailHelpers::CDCompFactoryBatcher::CDCompFactoryBatcher(v3, (__int64 *)&v4, (__int64)&GUID_NULL, 0LL);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v4);
  v2 = *((_QWORD *)this + 77);
  if ( v2 )
  {
    v4 = this;
    (*(void (__fastcall **)(__int64, __int64 (__fastcall *)(__int64, _QWORD *, __int64), CSwitchItemElement **))(*(_QWORD *)v2 + 80LL))(
      v2,
      LambdaCustomPaintProc__lambda_3f3d9ba04ec2c8622cba6a99ff36500b__ID2D1DeviceContext_,
      &v4);
  }
  DCompThumbnailHelpers::CDCompFactoryBatcher::~CDCompFactoryBatcher((DCompThumbnailHelpers::CDCompFactoryBatcher *)v3);
}
