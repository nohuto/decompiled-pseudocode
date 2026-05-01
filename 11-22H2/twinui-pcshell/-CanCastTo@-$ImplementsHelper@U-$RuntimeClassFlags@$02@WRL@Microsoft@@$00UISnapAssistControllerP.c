/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UISnapAssistControllerPrivate@@UISnapAssistCallback@@UITabletModePositionerManagerNotification@@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@UIGuidedSnapAssistController@89Internal@Windows@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1800F7D3C
 * Callers:
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$0A@UIInspectable@@VCSnapAssistControllerBase@@UIWeakReferenceSource@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1800F7CB8 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$0A@UIInspectable@@VCSnapA.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x1800CD110 (InlineIsEqualGUID.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UITabletModePositionerManagerNotification@@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@UIGuidedSnapAssistController@6789@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1800F7D9C (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00UITabletModePositionerM.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,ISnapAssistControllerPrivate,ISnapAssistCallback,ITabletModePositionerManagerNotification,Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,Windows::Internal::Shell::WindowSnapping::IGuidedSnapAssistController>::CanCastTo(
        __int64 a1,
        _DWORD *a2)
{
  _DWORD *v2; // rcx
  _QWORD *v3; // r8
  __int64 v4; // r10
  _QWORD *v5; // r8
  unsigned int v6; // r9d
  __int64 v7; // r10
  __int64 v8; // r11

  if ( InlineIsEqualGUID(a2, &GUID_c60c7e8a_f650_4afb_917b_8d93242dbc36) )
  {
    *v3 = v4;
    return 0LL;
  }
  else
  {
    if ( InlineIsEqualGUID(v2, &GUID_76d7759a_857c_46bd_ba0c_841904e0fc8d) )
      *v5 = v7;
    else
      return (unsigned int)Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,ITabletModePositionerManagerNotification,Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,Windows::Internal::Shell::WindowSnapping::IGuidedSnapAssistController>::CanCastTo(
                             v7 + 8,
                             v8);
    return v6;
  }
}
