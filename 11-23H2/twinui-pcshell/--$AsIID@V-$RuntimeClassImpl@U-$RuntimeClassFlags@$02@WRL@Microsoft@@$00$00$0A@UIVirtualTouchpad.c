/*
 * XREFs of ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIVirtualTouchpadExperienceManager@Experience@Shell@Internal@Windows@@UIApplicationFrameEventHandler@@UIScaleChangeSink@@UIClosable@Foundation@8@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$02@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIVirtualTouchpadExperienceManager@Experience@Shell@Internal@Windows@@UIApplicationFrameEventHandler@@UIScaleChangeSink@@UIClosable@Foundation@8@@123@AEBU_GUID@@PEAPEAX@Z @ 0x1800CF328
 * Callers:
 *     ??$MakeAndInitialize@VCVirtualTouchpadExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@@@Details@WRL@Microsoft@@YAJPEAPEAUIInspectable@@AEAPEAUIServiceProvider@@@Z @ 0x18013471C (--$MakeAndInitialize@VCVirtualTouchpadExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@.c)
 *     ?QueryInterface@CVirtualTouchpadExperienceManager@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18019BF10 (-QueryInterface@CVirtualTouchpadExperienceManager@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ??$AsWeak@VCVirtualTouchpadExperienceManager@@@WRL@Microsoft@@YAJPEAVCVirtualTouchpadExperienceManager@@PEAVWeakRef@01@@Z @ 0x1801B1E04 (--$AsWeak@VCVirtualTouchpadExperienceManager@@@WRL@Microsoft@@YAJPEAVCVirtualTouchpadExperienceM.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x1800CD110 (InlineIsEqualGUID.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassBaseT<3>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::IVirtualTouchpadExperienceManager,IApplicationFrameEventHandler,IScaleChangeSink,Windows::Foundation::IClosable>>(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  _DWORD *v3; // rcx
  __int64 v4; // r10
  _DWORD *v5; // rcx
  __int64 v6; // r10
  int v7; // ebx

  *a3 = 0LL;
  if ( (*a2
     || a2[1] != *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data2
     || a2[2] != *(_DWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4
     || a2[3] != *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data4[4])
    && (*a2 != -1350114592
     || a2[1] != *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data2
     || a2[2] != *(_DWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4
     || a2[3] != *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4[4]) )
  {
    if ( *a2 == 398781585
      && a2[1] == *(_DWORD *)&GUID_17c4ec91_62df_486d_aa0d_6a11c725e414.Data2
      && a2[2] == *(_DWORD *)GUID_17c4ec91_62df_486d_aa0d_6a11c725e414.Data4
      && a2[3] == *(_DWORD *)&GUID_17c4ec91_62df_486d_aa0d_6a11c725e414.Data4[4] )
    {
      *a3 = a1;
      goto LABEL_15;
    }
    if ( *a2 == 56
      && a2[1] == *(_DWORD *)&_uuidof__AUIWeakReferenceSource_Details_Platform__.Data2
      && a2[2] == *(_DWORD *)_uuidof__AUIWeakReferenceSource_Details_Platform__.Data4
      && a2[3] == *(_DWORD *)&_uuidof__AUIWeakReferenceSource_Details_Platform__.Data4[4] )
    {
      *a3 = a1 + 8;
LABEL_15:
      v7 = 0;
      goto LABEL_16;
    }
    if ( InlineIsEqualGUID(a2, &GUID_ea5d0de4_770d_4da0_a9f8_d7f9a140ff79)
      || InlineIsEqualGUID(v3, &GUID_abadfe7f_04c1_4a9f_9b3c_a323f1c80178) )
    {
      *a3 = v4;
    }
    else
    {
      if ( !InlineIsEqualGUID(v5, &GUID_30d5a829_7fa4_4026_83bb_d75bae4ea99e) )
      {
        v7 = -2147467262;
        goto LABEL_9;
      }
      *a3 = v6 + 8;
    }
    v7 = 0;
LABEL_9:
    if ( v7 < 0 )
      return (unsigned int)v7;
LABEL_16:
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a3 + 8LL))(*a3);
    return (unsigned int)v7;
  }
  *a3 = a1;
  (*(void (__fastcall **)(__int64, _DWORD *, _QWORD *, _DWORD *))(*(_QWORD *)a1 + 8LL))(a1, a2, a3, a2);
  return 0LL;
}
