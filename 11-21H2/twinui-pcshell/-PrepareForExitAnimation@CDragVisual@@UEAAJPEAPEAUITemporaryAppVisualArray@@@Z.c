/*
 * XREFs of ?PrepareForExitAnimation@CDragVisual@@UEAAJPEAPEAUITemporaryAppVisualArray@@@Z @ 0x180532C60
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@AEBV?$ComPtr@UIDCompBatcher@@@WRL@Microsoft@@AEBU_GUID@@PEAUIDCompBatchAnimationCallback@@@Z @ 0x1804A2F5C (--0CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@AEBV-$ComPtr@UIDCompBatcher@@@WRL@Microsoft@.c)
 *     ??1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ @ 0x1804A3024 (--1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ.c)
 *     ?_CreateTempAppVisuals@CDragVisual@@AEAAJPEAPEAUITemporaryAppVisualArray@@@Z @ 0x180534218 (-_CreateTempAppVisuals@CDragVisual@@AEAAJPEAPEAUITemporaryAppVisualArray@@@Z.c)
 */

__int64 __fastcall CDragVisual::PrepareForExitAnimation(CDragVisual *this, struct ITemporaryAppVisualArray **a2)
{
  int v4; // esi
  __int64 v6[3]; // [rsp+30h] [rbp-18h] BYREF
  __int64 v7; // [rsp+50h] [rbp+8h] BYREF

  if ( a2 )
    *a2 = 0LL;
  v4 = 0;
  if ( *((_BYTE *)this + 255)
    || !*((_QWORD *)this + 11)
    || (v7 = *((_QWORD *)this + 6),
        Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v7),
        DCompThumbnailHelpers::CDCompFactoryBatcher::CDCompFactoryBatcher(v6, &v7, (__int64)&GUID_NULL, 0LL),
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v7),
        v4 = (*(__int64 (__fastcall **)(_QWORD, char *, _QWORD, _QWORD))(**((_QWORD **)this + 11) + 24LL))(
               *((_QWORD *)this + 11),
               (char *)this + 216,
               0LL,
               0LL),
        DCompThumbnailHelpers::CDCompFactoryBatcher::~CDCompFactoryBatcher((DCompThumbnailHelpers::CDCompFactoryBatcher *)v6),
        v4 >= 0) )
  {
    if ( a2 )
      return (unsigned int)CDragVisual::_CreateTempAppVisuals((CDragVisual *)((char *)this - 24), a2);
  }
  return (unsigned int)v4;
}
