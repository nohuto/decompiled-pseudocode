/*
 * XREFs of ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UITaskDataListener@DataEngine@TaskFlow@Shell@Internal@Windows@@UIApplicationViewChangeListener@@UIAppViewListener@56789@UIWindowSnappingEvents@@VFtmBase@23@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$02@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UITaskDataListener@DataEngine@TaskFlow@Shell@Internal@Windows@@UIApplicationViewChangeListener@@UIAppViewListener@56789@UIWindowSnappingEvents@@VFtmBase@23@@123@AEBU_GUID@@PEAPEAX@Z @ 0x1801392FC
 * Callers:
 *     ?Create@AppViewListenerFactory@DataEngine@TaskFlow@Shell@Internal@Windows@@UEAAJPEAUITaskDataArbiter@23456@PEAPEAUITaskDataListener@23456@@Z @ 0x1800AAF90 (-Create@AppViewListenerFactory@DataEngine@TaskFlow@Shell@Internal@Windows@@UEAAJPEAUITaskDataArb.c)
 *     ?QueryInterface@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180179760 (-QueryInterface@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@UEAAJAEBU_GUID@@PEAP.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x18007EB00 (InlineIsEqualGUID.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassBaseT<3>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::TaskFlow::DataEngine::ITaskDataListener,IApplicationViewChangeListener,Windows::Internal::Shell::TaskFlow::DataEngine::IAppViewListener,IWindowSnappingEvents,Microsoft::WRL::FtmBase>>(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  __int64 v3; // rcx
  _DWORD *v4; // rcx
  __int64 v5; // r10
  _DWORD *v6; // rcx
  int v7; // ebx
  int v9; // eax

  *a3 = 0LL;
  if ( *a2 )
  {
    if ( *a2 != -1350114592 )
    {
      if ( *a2 == -377348647
        && a2[1] == *(_DWORD *)&GUID_e9821dd9_a9b2_47c8_9aac_7b6b042ef0b0.Data2
        && a2[2] == *(_DWORD *)GUID_e9821dd9_a9b2_47c8_9aac_7b6b042ef0b0.Data4
        && a2[3] == *(_DWORD *)&GUID_e9821dd9_a9b2_47c8_9aac_7b6b042ef0b0.Data4[4] )
      {
LABEL_16:
        *a3 = a1;
        v7 = 0;
        goto LABEL_17;
      }
LABEL_4:
      a1 += 8LL;
      if ( *a2 == 56
        && a2[1] == *(_DWORD *)&_uuidof__AUIWeakReferenceSource_Details_Platform__.Data2
        && a2[2] == *(_DWORD *)_uuidof__AUIWeakReferenceSource_Details_Platform__.Data4
        && a2[3] == *(_DWORD *)&_uuidof__AUIWeakReferenceSource_Details_Platform__.Data4[4] )
      {
        goto LABEL_16;
      }
      a1 += 8LL;
      if ( *a2 == 1920966295
        && a2[1] == *(_DWORD *)&GUID_727f9e97_76ee_497b_a942_b6371328485c.Data2
        && a2[2] == *(_DWORD *)GUID_727f9e97_76ee_497b_a942_b6371328485c.Data4
        && a2[3] == *(_DWORD *)&GUID_727f9e97_76ee_497b_a942_b6371328485c.Data4[4] )
      {
        goto LABEL_16;
      }
      v3 = a1 + 8;
      if ( *a2 == -1425581731
        && a2[1] == *(_DWORD *)&GUID_ab07595d_1829_43fd_a9fb_83039fa32720.Data2
        && a2[2] == *(_DWORD *)GUID_ab07595d_1829_43fd_a9fb_83039fa32720.Data4
        && a2[3] == *(_DWORD *)&GUID_ab07595d_1829_43fd_a9fb_83039fa32720.Data4[4] )
      {
        *a3 = v3;
      }
      else
      {
        if ( !InlineIsEqualGUID(a2, &GUID_478fc176_f9a5_48fc_afcd_9741564de272)
          && !InlineIsEqualGUID(v4, &GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90)
          && !InlineIsEqualGUID(v6, &GUID_00000003_0000_0000_c000_000000000046) )
        {
          v7 = -2147467262;
          goto LABEL_11;
        }
        *a3 = v5;
      }
      v7 = 0;
LABEL_11:
      if ( v7 < 0 )
        return (unsigned int)v7;
LABEL_17:
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a3 + 8LL))(*a3);
      return (unsigned int)v7;
    }
    if ( a2[1] != *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data2
      || a2[2] != *(_DWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4 )
    {
      goto LABEL_4;
    }
    v9 = *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4[4];
  }
  else
  {
    if ( a2[1] != *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data2
      || a2[2] != *(_DWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4 )
    {
      goto LABEL_4;
    }
    v9 = *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data4[4];
  }
  if ( a2[3] != v9 )
    goto LABEL_4;
  *a3 = a1;
  (*(void (__fastcall **)(__int64, _DWORD *, _QWORD *, _DWORD *))(*(_QWORD *)a1 + 8LL))(a1, a2, a3, a2);
  return 0LL;
}
