/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UITaskDataBroker@DataEngine@TaskFlow@Shell@Internal@Windows@@UITaskDataCacheBroker@Activities@Data@89@UISetActivityMonitor@Activities@Data@89@VCImmersiveShellComponentWithGITSite@@VICDPUserActivitySettingsCallback@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1800CB894
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIUserActivityMonitor@UserActivities@Internal@ApplicationModel@Windows@@UITaskDataBroker@DataEngine@TaskFlow@Shell@68@UITaskDataCacheBroker@Activities@Data@68@UISetActivityMonitor@Activities@Data@68@VCImmersiveShellComponentWithGITSite@@VICDPUserActivitySettingsCallback@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800CB390 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIUserActiv.c)
 * Callees:
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00U?$ImplementsMarker@VCWRLObjectWithGITSite@@@Details@23@VCImmersiveShellComponent@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1800CBBA0 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00U-$ImplementsMarker@VCW.c)
 *     InlineIsEqualGUID @ 0x1800CD110 (InlineIsEqualGUID.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Windows::Internal::Shell::TaskFlow::DataEngine::ITaskDataBroker,Windows::Internal::Data::Activities::ITaskDataCacheBroker,Windows::Internal::Data::Activities::ISetActivityMonitor,CImmersiveShellComponentWithGITSite,ICDPUserActivitySettingsCallback,Microsoft::WRL::FtmBase>::CanCastTo(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  int IsEqualGUID; // eax
  __int64 v5; // rcx
  _QWORD *v6; // r8
  __int64 v7; // r9
  unsigned int v8; // r11d
  unsigned int CanCastTo; // eax
  __int64 v10; // rcx
  _QWORD *v11; // r8
  __int64 v12; // r9
  unsigned int v13; // r11d
  __int64 v14; // rcx
  unsigned int v15; // r10d

  if ( *a2 == -1507249029
    && a2[1] == *(_DWORD *)&GUID_a629347b_7a47_4061_9c3e_8ac7c6f000a7.Data2
    && a2[2] == *(_DWORD *)GUID_a629347b_7a47_4061_9c3e_8ac7c6f000a7.Data4
    && a2[3] == *(_DWORD *)&GUID_a629347b_7a47_4061_9c3e_8ac7c6f000a7.Data4[4] )
  {
    *a3 = a1;
    return 0LL;
  }
  else
  {
    IsEqualGUID = InlineIsEqualGUID(a2, &GUID_212b9f5d_14a9_510f_b027_ff423fa69cf8);
    v8 = 0;
    if ( IsEqualGUID || (unsigned int)InlineIsEqualGUID(v5, &GUID_1a212157_be49_4892_afc4_1a168e546329) )
    {
      *v6 = v7;
    }
    else
    {
      CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<CWRLObjectWithGITSite>,CImmersiveShellComponent>::CanCastTo(
                    v7 + 8,
                    a2);
      if ( CanCastTo == -2147467262 )
      {
        if ( (unsigned int)InlineIsEqualGUID(a2, &GUID_1531f00e_3fe1_4b79_b0bc_f6cde362f7ea)
          || (unsigned int)InlineIsEqualGUID(v10, &GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90)
          || (unsigned int)InlineIsEqualGUID(v14, &GUID_00000003_0000_0000_c000_000000000046) )
        {
          *v11 = v12;
          return v13;
        }
        else
        {
          return v15;
        }
      }
      return CanCastTo;
    }
    return v8;
  }
}
