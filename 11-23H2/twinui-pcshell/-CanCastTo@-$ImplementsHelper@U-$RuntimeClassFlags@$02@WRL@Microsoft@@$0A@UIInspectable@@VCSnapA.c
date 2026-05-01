/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$0A@UIInspectable@@VCSnapAssistControllerBase@@UIWeakReferenceSource@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1800F7CB8
 * Callers:
 *     ?QueryInterface@CSnapAssistController@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801BC720 (-QueryInterface@CSnapAssistController@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCSnapAssistControllerBase@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802E9270 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0_ea_1802E9270.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x1800CD110 (InlineIsEqualGUID.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UISnapAssistControllerPrivate@@UISnapAssistCallback@@UITabletModePositionerManagerNotification@@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@UIGuidedSnapAssistController@89Internal@Windows@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1800F7D3C (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00UISnapAssistControllerP.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00UIWeakReferenceSource@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1800F7E0C (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00UIWeakReferenceSource@@.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,0,IInspectable,CSnapAssistControllerBase,IWeakReferenceSource>::CanCastTo(
        __int64 a1,
        _DWORD *a2)
{
  _DWORD *v4; // rcx
  _QWORD *v5; // r8
  __int64 v6; // rbx
  _QWORD *v7; // r8
  unsigned int CanCastTo; // r9d

  if ( InlineIsEqualGUID(a2, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90) )
  {
    *v5 = a1;
    return 0LL;
  }
  else
  {
    v6 = a1 + 8;
    if ( InlineIsEqualGUID(v4, &GUID_91adc416_4c36_457e_9bab_7e545e723826) )
    {
      *v7 = v6;
    }
    else
    {
      CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,ISnapAssistControllerPrivate,ISnapAssistCallback,ITabletModePositionerManagerNotification,Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,Windows::Internal::Shell::WindowSnapping::IGuidedSnapAssistController>::CanCastTo(
                    v6 + 8,
                    a2);
      if ( CanCastTo == -2147467262 )
        return (unsigned int)Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,IWeakReferenceSource>::CanCastTo(
                               v6 + 320,
                               a2);
    }
    return CanCastTo;
  }
}
