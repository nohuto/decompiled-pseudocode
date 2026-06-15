/*
 * XREFs of ??$MakeAndInitialize@VCEndpointNotificationDelegator@@V1@AEAVWeakRef@WRL@Microsoft@@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0002@@@Details@WRL@Microsoft@@YAJPEAPEAVCEndpointNotificationDelegator@@AEAVWeakRef@12@$$QEAW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0002@@@Z @ 0x18010352C
 * Callers:
 *     ?RegisterForLoopbackEndpointChangeNotifications@CSharedStreamGroupProxy@@IEAAJXZ @ 0x1801096EC (-RegisterForLoopbackEndpointChangeNotifications@CSharedStreamGroupProxy@@IEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x18003F314 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180067088 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$MakeAllocator@VEffectPackConfigurationManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800CF338 (--1-$MakeAllocator@VEffectPackConfigurationManager@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??0CEndpointNotificationDelegator@@QEAA@XZ @ 0x1801043A4 (--0CEndpointNotificationDelegator@@QEAA@XZ.c)
 *     ?Attach@?$ComPtr@VCEndpointNotificationDelegator@@@WRL@Microsoft@@QEAAXPEAVCEndpointNotificationDelegator@@@Z @ 0x180105954 (-Attach@-$ComPtr@VCEndpointNotificationDelegator@@@WRL@Microsoft@@QEAAXPEAVCEndpointNotification.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CEndpointNotificationDelegator,CEndpointNotificationDelegator,Microsoft::WRL::WeakRef &,enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0002>(
        _QWORD *a1,
        __int64 *a2,
        int *a3)
{
  _QWORD *v6; // rax
  CEndpointNotificationDelegator *v8; // rax
  int v9; // ebp
  _QWORD *v10; // rbx
  __int64 v11; // rdi
  _QWORD *v12; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  v6 = operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
  v12 = v6;
  if ( v6 )
  {
    v8 = CEndpointNotificationDelegator::CEndpointNotificationDelegator((CEndpointNotificationDelegator *)v6);
    v12 = 0LL;
    Microsoft::WRL::ComPtr<CEndpointNotificationDelegator>::Attach(&v12, v8);
    v9 = *a3;
    v10 = v12;
    v11 = *a2;
    if ( v12[5] != v11 )
    {
      if ( v11 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
      v12 = (_QWORD *)v10[5];
      v10[5] = v11;
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v12);
    }
    *((_DWORD *)v10 + 12) = v9;
    *((_DWORD *)v10 + 13) = 0;
    (*(void (__fastcall **)(_QWORD *))(*v10 + 8LL))(v10);
    *a1 = v10;
    (*(void (__fastcall **)(_QWORD *))(*v10 + 16LL))(v10);
    return 0LL;
  }
  else
  {
    Microsoft::WRL::Details::MakeAllocator<EffectPackConfigurationManager>::~MakeAllocator<EffectPackConfigurationManager>((void **)&v12);
    return 2147942414LL;
  }
}
