/*
 * XREFs of ??$MakeAndInitialize@VCEndpointNotificationDelegator@@V1@AEAVWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@YAJPEAPEAVCEndpointNotificationDelegator@@AEAVWeakRef@12@@Z @ 0x180103428
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
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CEndpointNotificationDelegator,CEndpointNotificationDelegator,Microsoft::WRL::WeakRef &>(
        _QWORD *a1,
        __int64 *a2)
{
  _QWORD *v4; // rax
  CEndpointNotificationDelegator *v6; // rax
  _QWORD *v7; // rbx
  __int64 v8; // rdi
  _QWORD *v9; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  v4 = operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
  v9 = v4;
  if ( v4 )
  {
    v6 = CEndpointNotificationDelegator::CEndpointNotificationDelegator((CEndpointNotificationDelegator *)v4);
    v9 = 0LL;
    Microsoft::WRL::ComPtr<CEndpointNotificationDelegator>::Attach(&v9, v6);
    v7 = v9;
    v8 = *a2;
    if ( v9[5] != v8 )
    {
      if ( v8 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
      v9 = (_QWORD *)v7[5];
      v7[5] = v8;
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v9);
    }
    *((_DWORD *)v7 + 12) = 0;
    *((_DWORD *)v7 + 13) = 0;
    (*(void (__fastcall **)(_QWORD *))(*v7 + 8LL))(v7);
    *a1 = v7;
    (*(void (__fastcall **)(_QWORD *))(*v7 + 16LL))(v7);
    return 0LL;
  }
  else
  {
    Microsoft::WRL::Details::MakeAllocator<EffectPackConfigurationManager>::~MakeAllocator<EffectPackConfigurationManager>((void **)&v9);
    return 2147942414LL;
  }
}
