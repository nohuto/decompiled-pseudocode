/*
 * XREFs of ??$MakeAndInitialize@VGaussianBlurEffect@Effects@Composition@UI@Internal@Microsoft@@V123456@$$V@Details@WRL@Microsoft@@YAJPEAPEAVGaussianBlurEffect@Effects@Composition@UI@Internal@2@@Z @ 0x18004E844
 * Callers:
 *     ?CreateHostBackdropBrush@UI@WindowsInternal@@YAJPEAUIDCompositionDesktopDevicePartner@@PEAPEAUICompositionBrush@Composition@1Windows@@@Z @ 0x18004DF20 (-CreateHostBackdropBrush@UI@WindowsInternal@@YAJPEAUIDCompositionDesktopDevicePartner@@PEAPEAUIC.c)
 * Callees:
 *     ??0GaussianBlurEffect@Effects@Composition@UI@Internal@Microsoft@@QEAA@XZ @ 0x18004E8DC (--0GaussianBlurEffect@Effects@Composition@UI@Internal@Microsoft@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@VGaussianBlurEffect@Effects@Composition@UI@Internal@Microsoft@@@WRL@Microsoft@@IEAAKXZ @ 0x18005802C (-InternalRelease@-$ComPtr@VGaussianBlurEffect@Effects@Composition@UI@Internal@Microsoft@@@WRL@Mi.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x1800A60CC (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ??1?$MakeAllocator@VGaussianBlurEffect@Effects@Composition@UI@Internal@Microsoft@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180110A3C (--1-$MakeAllocator@VGaussianBlurEffect@Effects@Composition@UI@Internal@Microsoft@@@Details@WRL@M.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<Microsoft::Internal::UI::Composition::Effects::GaussianBlurEffect,Microsoft::Internal::UI::Composition::Effects::GaussianBlurEffect,>(
        __int64 *a1)
{
  Microsoft::Internal::UI::Composition::Effects::GaussianBlurEffect *v2; // rax
  __int64 v3; // rax
  volatile int *v4; // rdx
  __int64 v5; // r10
  signed __int64 v6; // rax
  signed __int64 v7; // rtt
  Microsoft::Internal::UI::Composition::Effects::GaussianBlurEffect *v9; // [rsp+30h] [rbp+8h] BYREF
  __int64 v10; // [rsp+38h] [rbp+10h] BYREF

  *a1 = 0LL;
  v2 = (Microsoft::Internal::UI::Composition::Effects::GaussianBlurEffect *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                                                                              WPF::g_pProcessHeap,
                                                                              88LL);
  v9 = v2;
  if ( v2 )
  {
    v3 = Microsoft::Internal::UI::Composition::Effects::GaussianBlurEffect::GaussianBlurEffect(v2);
    v10 = v3;
    v5 = v3;
    if ( v3 )
    {
      v6 = *(_QWORD *)(v3 + 48);
      while ( v6 >= 0 )
      {
        if ( (_DWORD)v6 != 0x7FFFFFFF )
        {
          v7 = v6;
          v6 = _InterlockedCompareExchange64((volatile signed __int64 *)(v5 + 48), v6 + 1, v6);
          if ( v7 != v6 )
            continue;
        }
        goto LABEL_7;
      }
      Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(2 * v6 + 16), v4);
    }
LABEL_7:
    *a1 = v5;
    Microsoft::WRL::ComPtr<Microsoft::Internal::UI::Composition::Effects::GaussianBlurEffect>::InternalRelease(&v10);
    return 0LL;
  }
  else
  {
    Microsoft::WRL::Details::MakeAllocator<Microsoft::Internal::UI::Composition::Effects::GaussianBlurEffect>::~MakeAllocator<Microsoft::Internal::UI::Composition::Effects::GaussianBlurEffect>(&v9);
    return 2147942414LL;
  }
}
