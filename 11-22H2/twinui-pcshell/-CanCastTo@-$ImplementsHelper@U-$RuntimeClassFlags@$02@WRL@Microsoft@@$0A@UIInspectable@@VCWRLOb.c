/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$0A@UIInspectable@@VCWRLObjectWithSite@@UIWeakReferenceSource@@UIStartExperienceManager@Experience@Shell@Internal@Windows@@UIImmersiveWindowMessageNotification@@UIClosable@Foundation@Windows@@UIDWMStoryboardListener@@UIInputHostLayoutChanges@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18019E2D8
 * Callers:
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCWRLObjectWithSite@@UIStartExperienceManager@Experience@Shell@Internal@Windows@@UIImmersiveWindowMessageNotification@@UIClosable@Foundation@9@UIDWMStoryboardListener@@UIInputHostLayoutChanges@@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$02@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCWRLObjectWithSite@@UIStartExperienceManager@Experience@Shell@Internal@Windows@@UIImmersiveWindowMessageNotification@@UIClosable@Foundation@9@UIDWMStoryboardListener@@UIInputHostLayoutChanges@@@123@AEBU_GUID@@PEAPEAX@Z @ 0x18019E23C (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCWRLObjectWithSi.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x1800CD110 (InlineIsEqualGUID.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIWeakReferenceSource@@UIStartExperienceManager@Experience@Shell@Internal@Windows@@UIImmersiveWindowMessageNotification@@UIClosable@Foundation@9@UIDWMStoryboardListener@@UIInputHostLayoutChanges@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1800CE294 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIWeakRefe_ea_1800CE294.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,0,IInspectable,CWRLObjectWithSite,IWeakReferenceSource,Windows::Internal::Shell::Experience::IStartExperienceManager,IImmersiveWindowMessageNotification,Windows::Foundation::IClosable,IDWMStoryboardListener,IInputHostLayoutChanges>::CanCastTo(
        __int64 a1,
        _DWORD *a2)
{
  BOOL IsEqualGUID; // eax
  _QWORD *v3; // r8
  _DWORD *v4; // r9
  __int64 v5; // r10
  unsigned int v6; // edx

  IsEqualGUID = InlineIsEqualGUID(a2, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90);
  v6 = 0;
  if ( IsEqualGUID )
  {
    *v3 = v5;
    return 0LL;
  }
  else
  {
    if ( *v4 == -62389853
      && v4[1] == *(_DWORD *)&GUID_fc4801a3_2ba9_11cf_a229_00aa003d7352.Data2
      && v4[2] == *(_DWORD *)GUID_fc4801a3_2ba9_11cf_a229_00aa003d7352.Data4
      && v4[3] == *(_DWORD *)&GUID_fc4801a3_2ba9_11cf_a229_00aa003d7352.Data4[4] )
    {
      *v3 = v5 + 8;
    }
    else
    {
      return (unsigned int)Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource,Windows::Internal::Shell::Experience::IStartExperienceManager,IImmersiveWindowMessageNotification,Windows::Foundation::IClosable,IDWMStoryboardListener,IInputHostLayoutChanges>::CanCastTo(
                             v5 + 32,
                             v4,
                             v3);
    }
    return v6;
  }
}
