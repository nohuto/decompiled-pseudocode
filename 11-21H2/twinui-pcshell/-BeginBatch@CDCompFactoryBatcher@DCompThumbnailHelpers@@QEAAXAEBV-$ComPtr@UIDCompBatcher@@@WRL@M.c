/*
 * XREFs of ?BeginBatch@CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAAXAEBV?$ComPtr@UIDCompBatcher@@@WRL@Microsoft@@AEBU_GUID@@PEAUIDCompBatchAnimationCallback@@@Z @ 0x1804DC654
 * Callers:
 *     ?RuntimeClassInitialize@ItemAnimationCoordinatorBase@@QEAAJPEAUISwitchThumbnailFactory@@AEBU_GUID@@@Z @ 0x1804DD388 (-RuntimeClassInitialize@ItemAnimationCoordinatorBase@@QEAAJPEAUISwitchThumbnailFactory@@AEBU_GUI.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 DCompThumbnailHelpers::CDCompFactoryBatcher::BeginBatch(__int64 *a1, __int64 *a2, __int64 a3, ...)
{
  __int64 v5; // rcx
  __int64 v6; // rdi
  __int64 result; // rax
  __int64 v8; // rcx
  __int64 v9; // [rsp+48h] [rbp+20h] BYREF
  va_list va; // [rsp+48h] [rbp+20h]
  va_list va1; // [rsp+50h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v9 = va_arg(va1, _QWORD);
  v5 = *a1;
  v6 = *a2;
  if ( v5 != *a2 )
  {
    v9 = *a2;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)va);
    v9 = *a1;
    *a1 = v6;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)va);
    v5 = *a1;
  }
  result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 24LL))(v5, a3);
  if ( a1[1] )
  {
    v9 = a1[1];
    a1[1] = 0LL;
    result = Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)va);
    v8 = a1[1];
    if ( v8 )
      return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 24LL))(v8);
  }
  return result;
}
