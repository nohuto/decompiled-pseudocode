/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$0A@UICortanaExperienceManager@Experience@Shell@Internal@Windows@@UIWeakReferenceSource@@UIInitializeTrustedComponentForegroundControl@@VIDeferralMessage@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18006C2E8
 * Callers:
 *     ??$AsWeak@VUndockedSearchAppExperienceManager@@@WRL@Microsoft@@YAJPEAVUndockedSearchAppExperienceManager@@PEAVWeakRef@01@@Z @ 0x18006C088 (--$AsWeak@VUndockedSearchAppExperienceManager@@@WRL@Microsoft@@YAJPEAVUndockedSearchAppExperienc.c)
 *     ?QueryInterface@UndockedSearchAppExperienceManager@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18006C230 (-QueryInterface@UndockedSearchAppExperienceManager@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UICortanaExperienceManager@Experience@Shell@Internal@Windows@@UIInitializeTrustedComponentForegroundControl@@VIDeferralMessage@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18038F700 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0_ea_18038F700.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,0,Windows::Internal::Shell::Experience::ICortanaExperienceManager,IWeakReferenceSource,IInitializeTrustedComponentForegroundControl,IDeferralMessage>::CanCastTo(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  if ( *a2 != 189803187
    || a2[1] != *(_DWORD *)&GUID_0b502ab3_072b_4e6b_9c82_38b49c4132c3.Data2
    || a2[2] != *(_DWORD *)GUID_0b502ab3_072b_4e6b_9c82_38b49c4132c3.Data4
    || a2[3] != *(_DWORD *)&GUID_0b502ab3_072b_4e6b_9c82_38b49c4132c3.Data4[4] )
  {
    a1 += 8LL;
    if ( *a2 != 56
      || a2[1] != *(_DWORD *)&_uuidof__AUIWeakReferenceSource_Details_Platform__.Data2
      || a2[2] != *(_DWORD *)_uuidof__AUIWeakReferenceSource_Details_Platform__.Data4
      || a2[3] != *(_DWORD *)&_uuidof__AUIWeakReferenceSource_Details_Platform__.Data4[4] )
    {
      a1 += 8LL;
      if ( *a2 != 1609546638
        || a2[1] != *(_DWORD *)&GUID_5fefbb8e_82c3_4ec4_93a0_05c4b9fcd4cd.Data2
        || a2[2] != *(_DWORD *)GUID_5fefbb8e_82c3_4ec4_93a0_05c4b9fcd4cd.Data4
        || a2[3] != *(_DWORD *)&GUID_5fefbb8e_82c3_4ec4_93a0_05c4b9fcd4cd.Data4[4] )
      {
        a1 += 8LL;
        if ( *a2 != -736029690
          || a2[1] != *(_DWORD *)&GUID_d4211406_e345_4633_bd48_e4e2b0cec865.Data2
          || a2[2] != *(_DWORD *)GUID_d4211406_e345_4633_bd48_e4e2b0cec865.Data4
          || a2[3] != *(_DWORD *)&GUID_d4211406_e345_4633_bd48_e4e2b0cec865.Data4[4] )
        {
          return 2147500034LL;
        }
      }
    }
  }
  *a3 = a1;
  return 0LL;
}
