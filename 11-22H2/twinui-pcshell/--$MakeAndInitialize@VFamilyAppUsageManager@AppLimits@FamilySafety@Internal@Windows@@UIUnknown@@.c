/*
 * XREFs of ??$MakeAndInitialize@VFamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x18010A84C
 * Callers:
 *     ?CreateInstance@?$SimpleClassFactory@VFamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x18010A7D0 (-CreateInstance@-$SimpleClassFactory@VFamilyAppUsageManager@AppLimits@FamilySafety@Internal@Wind.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x1800CD110 (InlineIsEqualGUID.c)
 *     ??0FamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@QEAA@XZ @ 0x18010A934 (--0FamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@FamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@QEAAJXZ @ 0x18010AA28 (-RuntimeClassInitialize@FamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@QEAAJXZ.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$0A@UIInspectable@@VCImmersiveShellComponentWithGITSite@@UIWeakReferenceSource@@UIFamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@UIAppStateChangeNotification@89Internal@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18010AB30 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$0A@UIInspectable@@VCImmer.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImmersiveShellComponentWithGITSite@@UIFamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@UIAppStateChangeNotification@6789@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180188190 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImm_ea_180188190.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<Windows::Internal::FamilySafety::AppLimits::FamilyAppUsageManager,IUnknown,>(
        Windows::Internal::FamilySafety::AppLimits::FamilyAppUsageManager **a1)
{
  Windows::Internal::FamilySafety::AppLimits::FamilyAppUsageManager *v2; // rax
  Windows::Internal::FamilySafety::AppLimits::FamilyAppUsageManager *v3; // rdi
  int CanCastTo; // ebx
  _DWORD *v5; // rcx
  __int64 v6; // rcx

  *a1 = 0LL;
  v2 = (Windows::Internal::FamilySafety::AppLimits::FamilyAppUsageManager *)operator new(
                                                                              0x110uLL,
                                                                              (const struct std::nothrow_t *)&std::nothrow);
  if ( v2 )
  {
    v3 = (Windows::Internal::FamilySafety::AppLimits::FamilyAppUsageManager *)Windows::Internal::FamilySafety::AppLimits::FamilyAppUsageManager::FamilyAppUsageManager(v2);
    CanCastTo = Windows::Internal::FamilySafety::AppLimits::FamilyAppUsageManager::RuntimeClassInitialize(v3);
    if ( CanCastTo >= 0 )
    {
      *a1 = 0LL;
      if ( InlineIsEqualGUID(&GUID_00000000_0000_0000_c000_000000000046, &GUID_00000000_0000_0000_c000_000000000046)
        || InlineIsEqualGUID(v5, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90) )
      {
        *a1 = v3;
        (*(void (__fastcall **)(Windows::Internal::FamilySafety::AppLimits::FamilyAppUsageManager *))(*(_QWORD *)v3 + 8LL))(v3);
        CanCastTo = 0;
      }
      else
      {
        CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,0,IInspectable,CImmersiveShellComponentWithGITSite,IWeakReferenceSource,Windows::Internal::FamilySafety::AppLimits::IFamilyAppUsageManager,Windows::Internal::FamilySafety::AppLimits::IAppStateChangeNotification,Microsoft::WRL::FtmBase>::CanCastTo(
                      v3,
                      v6,
                      a1);
        if ( CanCastTo >= 0 )
          (*(void (__fastcall **)(Windows::Internal::FamilySafety::AppLimits::FamilyAppUsageManager *))(*(_QWORD *)*a1 + 8LL))(*a1);
      }
    }
    if ( v3 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CImmersiveShellComponentWithGITSite,Windows::Internal::FamilySafety::AppLimits::IFamilyAppUsageManager,Windows::Internal::FamilySafety::AppLimits::IAppStateChangeNotification,Microsoft::WRL::FtmBase>::Release(v3);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)CanCastTo;
}
