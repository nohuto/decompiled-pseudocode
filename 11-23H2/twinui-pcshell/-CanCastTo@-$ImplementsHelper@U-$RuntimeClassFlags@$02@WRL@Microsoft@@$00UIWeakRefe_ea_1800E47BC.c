/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIWeakReferenceSource@@UIExperienceManagerPriorityManipulator@Experience@Shell@Internal@Windows@@UIImmersiveWindowMessageNotification@@UIClosable@Foundation@9@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1800E47BC
 * Callers:
 *     ??$As@UIExperienceManagerPriorityManipulator@Experience@Shell@Internal@Windows@@@?$ComPtr@VPriorityBoostHelper@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIExperienceManagerPriorityManipulator@Experience@Shell@Internal@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800E4830 (--$As@UIExperienceManagerPriorityManipulator@Experience@Shell@Internal@Windows@@@-$ComPtr@VPrior.c)
 *     ??$As@UIHostExperienceManager@Experience@Shell@Internal@Windows@@@?$ComPtr@VPriorityBoostHelper@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIHostExperienceManager@Experience@Shell@Internal@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800E4978 (--$As@UIHostExperienceManager@Experience@Shell@Internal@Windows@@@-$ComPtr@VPriorityBoostHelper@.c)
 *     ?QueryInterface@PriorityBoostHelper@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801BF510 (-QueryInterface@PriorityBoostHelper@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIHostExperienceManager@Experience@Shell@Internal@Windows@@UIExperienceManagerPriorityManipulator@5678@UIImmersiveWindowMessageNotification@@UIClosable@Foundation@8@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1804458F0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0_ea_1804458F0.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x1800CD110 (InlineIsEqualGUID.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIClosable@Foundation@Windows@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18019614C (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIClosable_ea_18019614C.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource,Windows::Internal::Shell::Experience::IExperienceManagerPriorityManipulator,IImmersiveWindowMessageNotification,Windows::Foundation::IClosable>::CanCastTo(
        __int64 a1,
        _DWORD *a2)
{
  _DWORD *v2; // rcx
  _QWORD *v3; // r8
  __int64 v4; // r11
  _DWORD *v5; // rcx
  _QWORD *v6; // r8
  unsigned int v7; // r9d
  __int64 v8; // r11
  __int64 v10; // r10

  if ( InlineIsEqualGUID(a2, &_uuidof__AUIWeakReferenceSource_Details_Platform__) )
  {
    *v3 = v4;
    return 0LL;
  }
  else
  {
    if ( InlineIsEqualGUID(v2, &GUID_fdae1e57_9570_4461_bab5_532c0f899149)
      || InlineIsEqualGUID(v5, &GUID_f4b0e171_08a9_413c_b179_71d7602d8ef0) )
    {
      *v6 = v8;
    }
    else
    {
      return (unsigned int)Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Windows::Foundation::IClosable>::CanCastTo(
                             v8 + 8,
                             v10);
    }
    return v7;
  }
}
