/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UITaskDataCacheBroker@Activities@Data@Internal@Windows@@UISetActivityMonitor@5678@VCImmersiveShellComponentWithGITSite@@VICDPUserActivitySettingsCallback@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18008539C
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIUserActivityMonitor@UserActivities@Internal@ApplicationModel@Windows@@UITaskDataBroker@DataEngine@TaskFlow@Shell@68@UITaskDataCacheBroker@Activities@Data@68@UISetActivityMonitor@Activities@Data@68@VCImmersiveShellComponentWithGITSite@@VICDPUserActivitySettingsCallback@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18007F770 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIUserActiv.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x18007EB00 (InlineIsEqualGUID.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00U?$ImplementsMarker@VCWRLObjectWithGITSite@@@Details@23@VCImmersiveShellComponent@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18007FED0 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00U-$ImplementsMarker@VCW.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Windows::Internal::Data::Activities::ITaskDataCacheBroker,Windows::Internal::Data::Activities::ISetActivityMonitor,CImmersiveShellComponentWithGITSite,ICDPUserActivitySettingsCallback,Microsoft::WRL::FtmBase>::CanCastTo(
        __int64 a1,
        int *a2,
        _QWORD *a3)
{
  __int64 v4; // rcx
  unsigned int CanCastTo; // r8d
  _DWORD *v6; // r11
  BOOL IsEqualGUID; // eax
  _DWORD *v8; // rcx
  __int64 v9; // r9
  _DWORD *v10; // r11
  unsigned int v11; // r10d

  if ( *a2 == 556506973
    && a2[1] == *(_DWORD *)&GUID_212b9f5d_14a9_510f_b027_ff423fa69cf8.Data2
    && a2[2] == *(_DWORD *)GUID_212b9f5d_14a9_510f_b027_ff423fa69cf8.Data4
    && a2[3] == *(_DWORD *)&GUID_212b9f5d_14a9_510f_b027_ff423fa69cf8.Data4[4] )
  {
    *a3 = a1;
    return 0LL;
  }
  else
  {
    v4 = a1 + 8;
    if ( *a2 == 438378839
      && a2[1] == *(_DWORD *)&GUID_1a212157_be49_4892_afc4_1a168e546329.Data2
      && a2[2] == *(_DWORD *)GUID_1a212157_be49_4892_afc4_1a168e546329.Data4
      && a2[3] == *(_DWORD *)&GUID_1a212157_be49_4892_afc4_1a168e546329.Data4[4] )
    {
      *a3 = v4;
      return 0;
    }
    else
    {
      CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<CWRLObjectWithGITSite>,CImmersiveShellComponent>::CanCastTo(
                    v4 + 8,
                    a2,
                    a3);
      if ( CanCastTo == -2147467262 )
      {
        IsEqualGUID = InlineIsEqualGUID(v6, &GUID_1531f00e_3fe1_4b79_b0bc_f6cde362f7ea);
        CanCastTo = 0;
        if ( IsEqualGUID
          || (v9 += 8LL, *v10 == -1796592748)
          && v10[1] == *(_DWORD *)&GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data2
          && v10[2] == *(_DWORD *)GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data4
          && v10[3] == *(_DWORD *)&GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data4[4]
          || InlineIsEqualGUID(v8, &GUID_00000003_0000_0000_c000_000000000046) )
        {
          *a3 = v9;
        }
        else
        {
          return v11;
        }
      }
    }
    return CanCastTo;
  }
}
