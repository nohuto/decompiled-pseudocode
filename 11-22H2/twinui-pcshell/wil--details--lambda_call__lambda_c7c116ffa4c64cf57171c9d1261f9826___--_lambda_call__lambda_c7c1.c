/*
 * XREFs of wil::details::lambda_call__lambda_c7c116ffa4c64cf57171c9d1261f9826___::_lambda_call__lambda_c7c116ffa4c64cf57171c9d1261f9826___ @ 0x18068E6A4
 * Callers:
 *     _winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance::TryGetDisplayRegion_::_1_::dtor$1 @ 0x180691FB3 (_winrt--Windows--Internal--Shell--SnapComponent--implementation--SnapFlyoutInstance_ea_180691FB3.c)
 * Callees:
 *     ?Stop@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1805E4658 (-Stop@-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsPr.c)
 */

void __fastcall wil::details::lambda_call__lambda_c7c116ffa4c64cf57171c9d1261f9826___::_lambda_call__lambda_c7c116ffa4c64cf57171c9d1261f9826___(
        __int64 a1,
        int a2)
{
  if ( *(_BYTE *)(a1 + 8) )
  {
    *(_BYTE *)(a1 + 8) = 0;
    wil::ActivityBase<WindowManagementLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Stop(
      *(__int64 **)a1,
      a2);
  }
}
