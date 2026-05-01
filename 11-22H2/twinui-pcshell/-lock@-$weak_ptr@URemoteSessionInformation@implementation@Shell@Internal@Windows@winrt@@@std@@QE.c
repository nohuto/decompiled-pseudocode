/*
 * XREFs of ?lock@?$weak_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@QEBA?AV?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@2@XZ @ 0x1807248A4
 * Callers:
 *     _lambda_665315f8e7a3be3e9382c02473f3b139_::operator() @ 0x18027B6B8 (_lambda_665315f8e7a3be3e9382c02473f3b139_--operator().c)
 *     _lambda_c4158f368c90993acd5619817087aedd_::operator()_winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::TransitionScreen_winrt::Windows::Foundation::IInspectable_ @ 0x18071E3D0 (_lambda_c4158f368c90993acd5619817087aedd_--operator()_winrt--Windows--Internal--Shell--CloudDesk.c)
 * Callees:
 *     ?_Incref_nz@_Ref_count_base@std@@QEAA_NXZ @ 0x18010D7E0 (-_Incref_nz@_Ref_count_base@std@@QEAA_NXZ.c)
 */

_QWORD *__fastcall std::weak_ptr<winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation>::lock(
        __int64 a1,
        _QWORD *a2)
{
  _QWORD *v2; // r8
  std::_Ref_count_base *v3; // rcx
  _QWORD *v4; // r9

  *a2 = 0LL;
  a2[1] = 0LL;
  v2 = a2;
  v3 = *(std::_Ref_count_base **)(a1 + 8);
  if ( v3 && std::_Ref_count_base::_Incref_nz(v3) )
  {
    *v2 = *v4;
    v2[1] = v4[1];
  }
  return v2;
}
