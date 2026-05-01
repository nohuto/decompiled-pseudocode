/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$0A@UICortanaExperienceManager@Experience@Shell@Internal@Windows@@UIWeakReferenceSource@@UIInitializeTrustedComponentForegroundControl@@VIDeferralMessage@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1801692E0
 * Callers:
 *     ?QueryInterface@UndockedSearchAppExperienceManager@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800CFFE0 (-QueryInterface@UndockedSearchAppExperienceManager@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UICortanaExperienceManager@Experience@Shell@Internal@Windows@@UIInitializeTrustedComponentForegroundControl@@VIDeferralMessage@@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$02@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UICortanaExperienceManager@Experience@Shell@Internal@Windows@@UIInitializeTrustedComponentForegroundControl@@VIDeferralMessage@@@123@AEBU_GUID@@PEAPEAX@Z @ 0x180169244 (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UICortanaExperien.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x1800CD110 (InlineIsEqualGUID.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,0,Windows::Internal::Shell::Experience::ICortanaExperienceManager,IWeakReferenceSource,IInitializeTrustedComponentForegroundControl,IDeferralMessage>::CanCastTo(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  BOOL IsEqualGUID; // eax
  _DWORD *v4; // rcx
  _QWORD *v5; // r10
  __int64 v6; // r11
  unsigned int v7; // r8d
  _QWORD *v8; // r10
  __int64 v9; // r11

  if ( *a2 == 998312018
    && a2[1] == *(_DWORD *)&GUID_3b810852_511f_4404_89ae_347bc2e8b561.Data2
    && a2[2] == *(_DWORD *)GUID_3b810852_511f_4404_89ae_347bc2e8b561.Data4
    && a2[3] == *(_DWORD *)&GUID_3b810852_511f_4404_89ae_347bc2e8b561.Data4[4] )
  {
    *a3 = a1;
    return 0LL;
  }
  else
  {
    if ( *a2 == 56
      && a2[1] == *(_DWORD *)&_uuidof__AUIWeakReferenceSource_Details_Platform__.Data2
      && a2[2] == *(_DWORD *)_uuidof__AUIWeakReferenceSource_Details_Platform__.Data4
      && a2[3] == *(_DWORD *)&_uuidof__AUIWeakReferenceSource_Details_Platform__.Data4[4] )
    {
      *a3 = a1 + 8;
      return 0;
    }
    else
    {
      IsEqualGUID = InlineIsEqualGUID(a2, &GUID_5fefbb8e_82c3_4ec4_93a0_05c4b9fcd4cd);
      v7 = 0;
      if ( IsEqualGUID )
      {
        *v5 = v6;
      }
      else if ( InlineIsEqualGUID(v4, &GUID_d4211406_e345_4633_bd48_e4e2b0cec865) )
      {
        *v8 = v9 + 8;
      }
      else
      {
        return (unsigned int)-2147467262;
      }
    }
    return v7;
  }
}
