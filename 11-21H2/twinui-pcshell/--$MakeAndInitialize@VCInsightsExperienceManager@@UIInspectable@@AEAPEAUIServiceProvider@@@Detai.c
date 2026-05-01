/*
 * XREFs of ??$MakeAndInitialize@VCInsightsExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@@@Details@WRL@Microsoft@@YAJPEAPEAUIInspectable@@AEAPEAUIServiceProvider@@@Z @ 0x1800FF820
 * Callers:
 *     ?GetExperienceManager@InsightsExperienceManagerFactory@@EEAAJPEAUIServiceProvider@@PEAPEAUIInspectable@@@Z @ 0x180178000 (-GetExperienceManager@InsightsExperienceManagerFactory@@EEAAJPEAUIServiceProvider@@PEAPEAUIInspe.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x18007EB00 (InlineIsEqualGUID.c)
 *     ?RuntimeClassInitialize@CInsightsExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x1800FEEB0 (-RuntimeClassInitialize@CInsightsExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 *     ??0CInsightsExperienceManager@@QEAA@XZ @ 0x18010070C (--0CInsightsExperienceManager@@QEAA@XZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIClosable@Foundation@Windows@@UILightDismissNotification@@UIImmersiveMonitorNotification@@UIInsightsExperienceManager@Experience@Shell@Internal@6@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18014FF70 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIClosable@Foundat.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UILightDismissNotification@@UIImmersiveMonitorNotification@@UIInsightsExperienceManager@Experience@Shell@Internal@Windows@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180384E20 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00UILightDis_ea_180384E20.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CInsightsExperienceManager,IInspectable,IServiceProvider * &>(
        CInsightsExperienceManager **a1,
        struct IServiceProvider **a2)
{
  CInsightsExperienceManager *v4; // rax
  CInsightsExperienceManager *v5; // rdi
  int CanCastTo; // ebx
  _DWORD *v7; // rcx
  _DWORD *v8; // r9
  _DWORD *v9; // rcx
  _DWORD *v11; // rcx
  CInsightsExperienceManager *v12; // r8
  __int64 v13; // r9

  *a1 = 0LL;
  v4 = (CInsightsExperienceManager *)operator new(0x150uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( !v4 )
    return (unsigned int)-2147024882;
  v5 = CInsightsExperienceManager::CInsightsExperienceManager(v4);
  CanCastTo = CInsightsExperienceManager::RuntimeClassInitialize(v5, *a2);
  if ( CanCastTo >= 0 )
  {
    *a1 = 0LL;
    if ( InlineIsEqualGUID(&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90, &GUID_00000000_0000_0000_c000_000000000046)
      || InlineIsEqualGUID(v7, v8) )
    {
      *a1 = v5;
      (*(void (__fastcall **)(CInsightsExperienceManager *))(*(_QWORD *)v5 + 8LL))(v5);
      CanCastTo = 0;
      goto LABEL_6;
    }
    if ( InlineIsEqualGUID(v9, &GUID_30d5a829_7fa4_4026_83bb_d75bae4ea99e) )
    {
      *a1 = v5;
    }
    else
    {
      if ( !InlineIsEqualGUID(v11, &_uuidof__AUIWeakReferenceSource_Details_Platform__) )
      {
        CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,ILightDismissNotification,IImmersiveMonitorNotification,Windows::Internal::Shell::Experience::IInsightsExperienceManager>::CanCastTo(
                      (char *)v12 + 8,
                      v13,
                      a1);
        if ( CanCastTo < 0 )
          goto LABEL_6;
        goto LABEL_16;
      }
      *a1 = v12;
    }
    CanCastTo = 0;
LABEL_16:
    (*(void (__fastcall **)(CInsightsExperienceManager *))(*(_QWORD *)*a1 + 8LL))(*a1);
  }
LABEL_6:
  if ( v5 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Foundation::IClosable,ILightDismissNotification,IImmersiveMonitorNotification,Windows::Internal::Shell::Experience::IInsightsExperienceManager>::Release(v5);
  return (unsigned int)CanCastTo;
}
