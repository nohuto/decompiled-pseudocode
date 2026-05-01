/*
 * XREFs of ??$MakeAndInitialize@VFamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x1800ACFB0
 * Callers:
 *     ?CreateInstance@?$SimpleClassFactory@VFamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x1800ACE40 (-CreateInstance@-$SimpleClassFactory@VFamilyAppUsageManager@AppLimits@FamilySafety@Internal@Wind.c)
 * Callees:
 *     ??0FamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@QEAA@XZ @ 0x1800ACEBC (--0FamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@FamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@QEAAJXZ @ 0x1800AF2A0 (-RuntimeClassInitialize@FamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@QEAAJXZ.c)
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImmersiveShellComponentWithGITSite@@UIFamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@UIAppStateChangeNotification@6789@VFtmBase@23@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$02@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImmersiveShellComponentWithGITSite@@UIFamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@UIAppStateChangeNotification@6789@VFtmBase@23@@123@AEBU_GUID@@PEAPEAX@Z @ 0x1800AF32C (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImmersiveShellC.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImmersiveShellComponentWithGITSite@@UIFamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@UIAppStateChangeNotification@6789@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18014F270 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImm_ea_18014F270.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<Windows::Internal::FamilySafety::AppLimits::FamilyAppUsageManager,IUnknown,>(
        _QWORD *a1)
{
  RTL_SRWLOCK *v2; // rax
  RTL_SRWLOCK *v3; // rdi
  int v4; // ebx

  *a1 = 0LL;
  v2 = (RTL_SRWLOCK *)operator new(0x110uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v2 )
  {
    v3 = Windows::Internal::FamilySafety::AppLimits::FamilyAppUsageManager::FamilyAppUsageManager(v2);
    v4 = Windows::Internal::FamilySafety::AppLimits::FamilyAppUsageManager::RuntimeClassInitialize((Windows::Internal::FamilySafety::AppLimits::FamilyAppUsageManager *)v3);
    if ( v4 >= 0 )
      v4 = Microsoft::WRL::Details::RuntimeClassBaseT<3>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CImmersiveShellComponentWithGITSite,Windows::Internal::FamilySafety::AppLimits::IFamilyAppUsageManager,Windows::Internal::FamilySafety::AppLimits::IAppStateChangeNotification,Microsoft::WRL::FtmBase>>(
             v3,
             &GUID_00000000_0000_0000_c000_000000000046,
             a1);
    if ( v3 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CImmersiveShellComponentWithGITSite,Windows::Internal::FamilySafety::AppLimits::IFamilyAppUsageManager,Windows::Internal::FamilySafety::AppLimits::IAppStateChangeNotification,Microsoft::WRL::FtmBase>::Release(v3);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v4;
}
