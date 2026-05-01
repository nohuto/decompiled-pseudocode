/*
 * XREFs of DCompThumbnailHelpers::DCompThumbnail_SetValueWithPreAndPostCallbacks_tagRECT_const_&__lambda_6a2847f209d66b4d08d504655ca3e0ac___lambda_c0d8e1709f705684b7fc3b88b56d28ed___ @ 0x180216294
 * Callers:
 *     DCompThumbnailHelpers::DCompThumbnail_SetRectWithCallback__lambda_c0d8e1709f705684b7fc3b88b56d28ed___ @ 0x1802161E8 (DCompThumbnailHelpers--DCompThumbnail_SetRectWithCallback__lambda_c0d8e1709f705684b7fc3b88b56d28.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     DCompThumbnailHelpers::DCompThumbnail_MakeAnimationHandler__lambda_6a2847f209d66b4d08d504655ca3e0ac___lambda_c0d8e1709f705684b7fc3b88b56d28ed___ @ 0x180215E58 (DCompThumbnailHelpers--DCompThumbnail_MakeAnimationHandler__lambda_6a2847f209d66b4d08d504655ca3e.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??_9IDCompThumbnail@@$BBI@AA @ 0x1802A82A0 (--_9IDCompThumbnail@@$BBI@AA.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall DCompThumbnailHelpers::DCompThumbnail_SetValueWithPreAndPostCallbacks_tagRECT_const____lambda_6a2847f209d66b4d08d504655ca3e0ac___lambda_c0d8e1709f705684b7fc3b88b56d28ed___(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        char a5,
        __int64 *a6)
{
  __int64 *v9; // rbx
  __int64 v10; // rcx
  __int64 (__fastcall ***v11)(_QWORD, GUID *, _QWORD *); // r8
  int AnimationHandler__lambda_6a2847f209d66b4d08d504655ca3e0ac___lambda_c0d8e1709f705684b7fc3b88b56d28ed; // edi
  __int64 v13; // rcx
  __int64 v15; // [rsp+20h] [rbp-28h] BYREF
  int v16; // [rsp+28h] [rbp-20h]
  __int64 v17; // [rsp+68h] [rbp+20h] BYREF

  v17 = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v17);
  v9 = a6;
  v15 = *a6;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v15);
  v16 = *((_DWORD *)v9 + 2);
  LOBYTE(v10) = a5;
  AnimationHandler__lambda_6a2847f209d66b4d08d504655ca3e0ac___lambda_c0d8e1709f705684b7fc3b88b56d28ed = DCompThumbnailHelpers::DCompThumbnail_MakeAnimationHandler__lambda_6a2847f209d66b4d08d504655ca3e0ac___lambda_c0d8e1709f705684b7fc3b88b56d28ed___(v10, &v15, v11, &v17);
  if ( AnimationHandler__lambda_6a2847f209d66b4d08d504655ca3e0ac___lambda_c0d8e1709f705684b7fc3b88b56d28ed >= 0 )
    AnimationHandler__lambda_6a2847f209d66b4d08d504655ca3e0ac___lambda_c0d8e1709f705684b7fc3b88b56d28ed =  IDCompThumbnail::`vcall'{24,{flat}}(a1, a2, a3, v17);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v17);
  v13 = *v9;
  if ( *v9 )
  {
    *v9 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  }
  return (unsigned int)AnimationHandler__lambda_6a2847f209d66b4d08d504655ca3e0ac___lambda_c0d8e1709f705684b7fc3b88b56d28ed;
}
