/*
 * XREFs of ??$MakeAndInitialize@VGaussianBlurEffect@Effects@Composition@UI@Internal@Microsoft@@V123456@$$V@Details@WRL@Microsoft@@YAJPEAPEAVGaussianBlurEffect@Effects@Composition@UI@Internal@2@@Z @ 0x18003B590
 * Callers:
 *     ?CreateHostBackdropBrush@UI@WindowsInternal@@YAJPEAUIDCompositionDesktopDevicePartner@@PEAPEAUICompositionBrush@Composition@1Windows@@@Z @ 0x18003B088 (-CreateHostBackdropBrush@UI@WindowsInternal@@YAJPEAUIDCompositionDesktopDevicePartner@@PEAPEAUIC.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VGaussianBlurEffect@Effects@Composition@UI@Internal@Microsoft@@@WRL@Microsoft@@IEAAKXZ @ 0x1800123E4 (-InternalRelease@-$ComPtr@VGaussianBlurEffect@Effects@Composition@UI@Internal@Microsoft@@@WRL@Mi.c)
 *     ??0GaussianBlurEffect@Effects@Composition@UI@Internal@Microsoft@@QEAA@XZ @ 0x18003B62C (--0GaussianBlurEffect@Effects@Composition@UI@Internal@Microsoft@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18009DBD0 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<Microsoft::Internal::UI::Composition::Effects::GaussianBlurEffect,Microsoft::Internal::UI::Composition::Effects::GaussianBlurEffect,>(
        __int64 *a1)
{
  unsigned int v1; // ebx
  Microsoft::Internal::UI::Composition::Effects::GaussianBlurEffect *v3; // rax
  __int64 v4; // rax
  volatile int *v5; // rdx
  __int64 v6; // r10
  signed __int64 v7; // rax
  signed __int64 v8; // rtt
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0;
  *a1 = 0LL;
  v3 = (Microsoft::Internal::UI::Composition::Effects::GaussianBlurEffect *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                                                                              WPF::g_pProcessHeap,
                                                                              88LL);
  if ( v3 )
  {
    v4 = Microsoft::Internal::UI::Composition::Effects::GaussianBlurEffect::GaussianBlurEffect(v3);
    v10 = v4;
    v6 = v4;
    if ( v4 )
    {
      v7 = *(_QWORD *)(v4 + 48);
      while ( v7 >= 0 )
      {
        if ( (_DWORD)v7 != 0x7FFFFFFF )
        {
          v8 = v7;
          v7 = _InterlockedCompareExchange64((volatile signed __int64 *)(v6 + 48), v7 + 1, v7);
          if ( v8 != v7 )
            continue;
        }
        goto LABEL_7;
      }
      Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(2 * v7 + 16), v5);
    }
LABEL_7:
    *a1 = v6;
    Microsoft::WRL::ComPtr<Microsoft::Internal::UI::Composition::Effects::GaussianBlurEffect>::InternalRelease(&v10);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v1;
}
