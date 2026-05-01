/*
 * XREFs of ??$MakeAndInitialize@VMeetNowExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@@@Details@WRL@Microsoft@@YAJPEAPEAUIInspectable@@AEAPEAUIServiceProvider@@@Z @ 0x180470CDC
 * Callers:
 *     ?GetExperienceManager@JumpViewExperienceManagerFactory@@UEAAJPEBGPEAUIServiceProvider@@PEAPEAUIInspectable@@@Z @ 0x1804480B0 (-GetExperienceManager@JumpViewExperienceManagerFactory@@UEAAJPEBGPEAUIServiceProvider@@PEAPEAUII.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x1800CD110 (InlineIsEqualGUID.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0MeetNowExperienceManager@@QEAA@XZ @ 0x180471140 (--0MeetNowExperienceManager@@QEAA@XZ.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$0A@UINetworkFlyoutExperienceManager@Experience@Shell@Internal@Windows@@UIWeakReferenceSource@@UILightDismissNotification@@UIClosable@Foundation@8@UIImmersiveWindowMessageNotification@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180471C00 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$0A@UINetworkFlyoutExperie.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIGraphicsEffect@Effects@Graphics@Windows@@UIGraphicsEffectSource@567@UIGraphicsEffectD2D1Interop@567@UIGaussianBlurEffect@5Composition@UI@Internal@3@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180474A10 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIGra_ea_180474A10.c)
 *     ?RuntimeClassInitialize@MeetNowExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x180474C68 (-RuntimeClassInitialize@MeetNowExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<MeetNowExperienceManager,IInspectable,IServiceProvider * &>(
        MeetNowExperienceManager **a1,
        struct IServiceProvider **a2)
{
  MeetNowExperienceManager *v4; // rax
  int CanCastTo; // edi
  MeetNowExperienceManager *v6; // rsi
  _DWORD *v7; // rcx
  __int64 v8; // rdx

  *a1 = 0LL;
  v4 = (MeetNowExperienceManager *)operator new(0x318uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v4 )
  {
    v6 = MeetNowExperienceManager::MeetNowExperienceManager(v4);
    CanCastTo = MeetNowExperienceManager::RuntimeClassInitialize(v6, *a2);
    if ( CanCastTo >= 0 )
    {
      *a1 = 0LL;
      if ( InlineIsEqualGUID(&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90, &GUID_00000000_0000_0000_c000_000000000046)
        || InlineIsEqualGUID(v7, v7) )
      {
        *a1 = v6;
        (*(void (__fastcall **)(MeetNowExperienceManager *))(*(_QWORD *)v6 + 8LL))(v6);
        CanCastTo = 0;
      }
      else
      {
        CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,0,Windows::Internal::Shell::Experience::INetworkFlyoutExperienceManager,IWeakReferenceSource,ILightDismissNotification,Windows::Foundation::IClosable,IImmersiveWindowMessageNotification>::CanCastTo(
                      v6,
                      v8,
                      a1);
        if ( CanCastTo >= 0 )
          (*(void (__fastcall **)(MeetNowExperienceManager *))(*(_QWORD *)*a1 + 8LL))(*a1);
      }
    }
    if ( v6 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Graphics::Effects::IGraphicsEffect,Windows::Graphics::Effects::IGraphicsEffectSource,Windows::Graphics::Effects::IGraphicsEffectD2D1Interop,Microsoft::Internal::UI::Composition::Effects::IGaussianBlurEffect>::Release(v6);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)CanCastTo;
}
