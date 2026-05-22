/*
 * XREFs of ??$MakeAndInitialize@VMagnifierGestureTarget@@UIInputTarget@@AEAV?$ComPtr@VMagnifierControllerProxy@@@WRL@Microsoft@@AEAV?$ComPtr@VInputSite@@@45@AEAW4GestureType@1@@Details@WRL@Microsoft@@YAJPEAPEAUIInputTarget@@AEAV?$ComPtr@VMagnifierControllerProxy@@@12@AEAV?$ComPtr@VInputSite@@@12@AEAW4GestureType@MagnifierGestureTarget@@@Z @ 0x1801DA9FC
 * Callers:
 *     ?OnInput@MagnifierProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x1801DBA20 (-OnInput@MagnifierProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorRespon.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIAsyncActionCompletedHandler@Foundation@Windows@@@WRL@Microsoft@@IEBAXXZ @ 0x180003198 (-InternalAddRef@-$ComPtr@UIAsyncActionCompletedHandler@Foundation@Windows@@@WRL@Microsoft@@IEBAX.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180058434 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??1?$ComPtr@VNonBamoInputDeliveryServer@@@WRL@Microsoft@@QEAA@XZ @ 0x18005A98C (--1-$ComPtr@VNonBamoInputDeliveryServer@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$MakeAllocator@VForegroundManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18006A110 (--1-$MakeAllocator@VForegroundManager@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIInputTarget@@@WRL@Microsoft@@QEAA@XZ @ 0x1801DAF70 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIInputTarget@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@MagnifierGestureTarget@@QEAAJV?$ComPtr@VMagnifierControllerProxy@@@WRL@Microsoft@@V?$ComPtr@VInputSite@@@34@W4GestureType@1@@Z @ 0x1801DC8D0 (-RuntimeClassInitialize@MagnifierGestureTarget@@QEAAJV-$ComPtr@VMagnifierControllerProxy@@@WRL@M.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<MagnifierGestureTarget,IInputTarget,Microsoft::WRL::ComPtr<MagnifierControllerProxy> &,Microsoft::WRL::ComPtr<InputSite> &,enum MagnifierGestureTarget::GestureType &>(
        _QWORD *a1,
        __int64 *a2,
        __int64 *a3,
        unsigned int *a4)
{
  _QWORD *v8; // rax
  _QWORD *v9; // rdi
  int v10; // ebx
  unsigned int v11; // ebx
  __int64 v12; // rcx
  __int64 v14; // [rsp+20h] [rbp-20h] BYREF
  void *v15; // [rsp+28h] [rbp-18h] BYREF
  _QWORD *v16; // [rsp+30h] [rbp-10h] BYREF
  __int64 v17; // [rsp+60h] [rbp+20h] BYREF

  *a1 = 0LL;
  v8 = operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
  v9 = v8;
  v15 = v8;
  if ( v8 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IInputTarget>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IInputTarget>(v8);
    *v9 = &MagnifierGestureTarget::`vftable';
    v9[2] = 0LL;
    v9[3] = 0LL;
    *((_DWORD *)v9 + 8) = 0;
    *((_BYTE *)v9 + 36) = 0;
    *((_DWORD *)v9 + 10) = 0;
    v16 = v9;
    v15 = 0LL;
    v11 = *a4;
    v17 = *a3;
    Microsoft::WRL::ComPtr<Windows::Foundation::IAsyncActionCompletedHandler>::InternalAddRef(&v17);
    v12 = *a2;
    v14 = v12;
    if ( v12 )
      (**(void (__fastcall ***)(__int64))(v12 + 16))(v12 + 16);
    v10 = ((__int64 (__fastcall *)(_QWORD *, __int64 *, __int64 *, _QWORD))MagnifierGestureTarget::RuntimeClassInitialize)(
            v9,
            &v14,
            &v17,
            v11);
    if ( v10 >= 0 )
    {
      v10 = (*(__int64 (__fastcall **)(_QWORD *, GUID *, _QWORD *))*v9)(
              v9,
              &GUID_9586ac30_9ca0_43dc_8c1c_f977b92a1fd3,
              a1);
      (*(void (__fastcall **)(_QWORD *))(*v9 + 16LL))(v9);
      return (unsigned int)v10;
    }
    Microsoft::WRL::ComPtr<NonBamoInputDeliveryServer>::~ComPtr<NonBamoInputDeliveryServer>(&v16);
  }
  else
  {
    v10 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<ForegroundManager>::~MakeAllocator<ForegroundManager>(&v15);
  return (unsigned int)v10;
}
