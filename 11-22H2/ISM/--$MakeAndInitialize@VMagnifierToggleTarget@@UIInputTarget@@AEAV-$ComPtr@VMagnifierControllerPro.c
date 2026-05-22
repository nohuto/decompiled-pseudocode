/*
 * XREFs of ??$MakeAndInitialize@VMagnifierToggleTarget@@UIInputTarget@@AEAV?$ComPtr@VMagnifierControllerProxy@@@WRL@Microsoft@@AEAV?$ComPtr@VInputSite@@@45@@Details@WRL@Microsoft@@YAJPEAPEAUIInputTarget@@AEAV?$ComPtr@VMagnifierControllerProxy@@@12@AEAV?$ComPtr@VInputSite@@@12@@Z @ 0x1801DAC38
 * Callers:
 *     ?OnInput@MagnifierProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x1801DBA20 (-OnInput@MagnifierProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorRespon.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIAsyncActionCompletedHandler@Foundation@Windows@@@WRL@Microsoft@@IEBAXXZ @ 0x180003198 (-InternalAddRef@-$ComPtr@UIAsyncActionCompletedHandler@Foundation@Windows@@@WRL@Microsoft@@IEBAX.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180058434 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??1?$ComPtr@VNonBamoInputDeliveryServer@@@WRL@Microsoft@@QEAA@XZ @ 0x18005A98C (--1-$ComPtr@VNonBamoInputDeliveryServer@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$MakeAllocator@VForegroundManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18006A110 (--1-$MakeAllocator@VForegroundManager@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIInputTarget@@@WRL@Microsoft@@QEAA@XZ @ 0x1801DAF70 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIInputTarget@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@MagnifierToggleTarget@@QEAAJV?$ComPtr@VMagnifierControllerProxy@@@WRL@Microsoft@@V?$ComPtr@VInputSite@@@34@@Z @ 0x1801DC9A4 (-RuntimeClassInitialize@MagnifierToggleTarget@@QEAAJV-$ComPtr@VMagnifierControllerProxy@@@WRL@Mi.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<MagnifierToggleTarget,IInputTarget,Microsoft::WRL::ComPtr<MagnifierControllerProxy> &,Microsoft::WRL::ComPtr<InputSite> &>(
        _QWORD *a1,
        __int64 *a2,
        __int64 *a3)
{
  _QWORD *v6; // rax
  _QWORD *v7; // rdi
  int v8; // ebx
  __int64 v9; // rcx
  void *v11; // [rsp+20h] [rbp-10h] BYREF
  _QWORD *v12; // [rsp+28h] [rbp-8h] BYREF
  __int64 v13; // [rsp+50h] [rbp+20h] BYREF
  __int64 v14; // [rsp+68h] [rbp+38h] BYREF

  *a1 = 0LL;
  v6 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = v6;
  v11 = v6;
  if ( v6 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IInputTarget>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IInputTarget>(v6);
    *v7 = &MagnifierToggleTarget::`vftable';
    v7[2] = 0LL;
    v7[3] = 0LL;
    *((_BYTE *)v7 + 32) = 0;
    v12 = v7;
    v11 = 0LL;
    v13 = *a3;
    Microsoft::WRL::ComPtr<Windows::Foundation::IAsyncActionCompletedHandler>::InternalAddRef(&v13);
    v9 = *a2;
    v14 = v9;
    if ( v9 )
      (**(void (__fastcall ***)(__int64))(v9 + 16))(v9 + 16);
    v8 = MagnifierToggleTarget::RuntimeClassInitialize(v7, &v14, &v13);
    if ( v8 >= 0 )
    {
      v8 = (*(__int64 (__fastcall **)(_QWORD *, GUID *, _QWORD *))*v7)(
             v7,
             &GUID_9586ac30_9ca0_43dc_8c1c_f977b92a1fd3,
             a1);
      (*(void (__fastcall **)(_QWORD *))(*v7 + 16LL))(v7);
      return (unsigned int)v8;
    }
    Microsoft::WRL::ComPtr<NonBamoInputDeliveryServer>::~ComPtr<NonBamoInputDeliveryServer>(&v12);
  }
  else
  {
    v8 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<ForegroundManager>::~MakeAllocator<ForegroundManager>(&v11);
  return (unsigned int)v8;
}
