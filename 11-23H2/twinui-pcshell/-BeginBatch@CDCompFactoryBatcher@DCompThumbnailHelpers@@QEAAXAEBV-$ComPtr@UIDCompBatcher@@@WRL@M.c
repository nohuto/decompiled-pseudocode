/*
 * XREFs of ?BeginBatch@CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAAXAEBV?$ComPtr@UIDCompBatcher@@@WRL@Microsoft@@AEBU_GUID@@PEAUIDCompBatchAnimationCallback@@@Z @ 0x18059442C
 * Callers:
 *     ?RuntimeClassInitialize@ItemAnimationCoordinatorBase@@QEAAJPEAUISwitchThumbnailFactory@@AEBU_GUID@@@Z @ 0x180595168 (-RuntimeClassInitialize@ItemAnimationCoordinatorBase@@QEAAJPEAUISwitchThumbnailFactory@@AEBU_GUI.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 DCompThumbnailHelpers::CDCompFactoryBatcher::BeginBatch(__int64 *a1, __int64 *a2, __int64 a3, ...)
{
  __int64 v5; // rdi
  __int64 result; // rax
  __int64 v7; // rcx
  __int64 v8; // [rsp+48h] [rbp+20h] BYREF
  va_list va; // [rsp+48h] [rbp+20h]
  va_list va1; // [rsp+50h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v8 = va_arg(va1, _QWORD);
  v5 = *a2;
  if ( *a1 != *a2 )
  {
    v8 = *a2;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)va);
    v8 = *a1;
    *a1 = v5;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)va);
  }
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)*a1 + 24LL))(*a1, a3);
  result = a1[1];
  if ( result )
  {
    v8 = a1[1];
    a1[1] = 0LL;
    result = Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)va);
  }
  v7 = a1[1];
  if ( v7 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 24LL))(v7);
  return result;
}
