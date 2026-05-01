/*
 * XREFs of ??$MakeAndInitialize@VGaussianBlurEffect@Effects@Composition@UI@Internal@Microsoft@@V123456@$$V@Details@WRL@Microsoft@@YAJPEAPEAVGaussianBlurEffect@Effects@Composition@UI@Internal@2@@Z @ 0x18060A02C
 * Callers:
 *     ?SetBackdropBlurEffect@VirtualDesktopGestureWindow@@IEAAJPEAUIDCompThumbnail@@AEBUCRect@Geometry@@M@Z @ 0x180610E08 (-SetBackdropBlurEffect@VirtualDesktopGestureWindow@@IEAAJPEAUIDCompThumbnail@@AEBUCRect@Geometry.c)
 * Callees:
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x1801484A0 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIGraphicsEffect@Effects@Graphics@Windows@@UIGraphicsEffectSource@567@UIGraphicsEffectD2D1Interop@567@UIGaussianBlurEffect@5Composition@UI@Internal@3@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180474A10 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIGra_ea_180474A10.c)
 *     ??0GaussianBlurEffect@Effects@Composition@UI@Internal@Microsoft@@QEAA@XZ @ 0x18060A698 (--0GaussianBlurEffect@Effects@Composition@UI@Internal@Microsoft@@QEAA@XZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<Microsoft::Internal::UI::Composition::Effects::GaussianBlurEffect,Microsoft::Internal::UI::Composition::Effects::GaussianBlurEffect,>(
        __int64 *a1)
{
  unsigned int v1; // ebx
  Microsoft::Internal::UI::Composition::Effects::GaussianBlurEffect *v3; // rax
  __int64 v4; // rax
  volatile int *v5; // rdx
  __int64 v6; // r8
  signed __int64 v7; // rax
  signed __int64 v8; // rtt

  v1 = 0;
  *a1 = 0LL;
  v3 = (Microsoft::Internal::UI::Composition::Effects::GaussianBlurEffect *)operator new(
                                                                              0x58uLL,
                                                                              (const struct std::nothrow_t *)&std::nothrow);
  if ( v3 )
  {
    v4 = Microsoft::Internal::UI::Composition::Effects::GaussianBlurEffect::GaussianBlurEffect(v3);
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
        goto LABEL_10;
      }
      Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(2 * v7 + 16), v5);
LABEL_10:
      *a1 = v6;
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Graphics::Effects::IGraphicsEffect,Windows::Graphics::Effects::IGraphicsEffectSource,Windows::Graphics::Effects::IGraphicsEffectD2D1Interop,Microsoft::Internal::UI::Composition::Effects::IGaussianBlurEffect>::Release(v6);
    }
    else
    {
      *a1 = 0LL;
    }
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v1;
}
