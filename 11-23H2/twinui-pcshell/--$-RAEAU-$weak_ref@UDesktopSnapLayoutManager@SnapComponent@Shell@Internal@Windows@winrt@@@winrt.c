/*
 * XREFs of ??$?RAEAU?$weak_ref@UDesktopSnapLayoutManager@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@@_lambda_ec733d4b7bc4a75c52677f9b176b6cf3_@@QEBA?A_PAEAU?$weak_ref@UDesktopSnapLayoutManager@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@@Z @ 0x180680D74
 * Callers:
 *     ??$remove_if@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@U?$weak_ref@UDesktopSnapLayoutManager@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@@std@@@std@@@std@@V_lambda_ec733d4b7bc4a75c52677f9b176b6cf3_@@@std@@YA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@U?$weak_ref@UDesktopSnapLayoutManager@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@@std@@@std@@@0@V10@V10@V_lambda_ec733d4b7bc4a75c52677f9b176b6cf3_@@@Z @ 0x1806826C4 (--$remove_if@V-$_Vector_iterator@V-$_Vector_val@U-$_Simple_types@U-$weak_ref@UDesktopSnapLayoutM.c)
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?get@?$weak_ref@UDesktopSnapLayoutManager@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@QEBA@XZ @ 0x1806861FC (-get@-$weak_ref@UDesktopSnapLayoutManager@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@QE.c)
 */

bool __fastcall _lambda_ec733d4b7bc4a75c52677f9b176b6cf3_::operator()<winrt::weak_ref<winrt::Windows::Internal::Shell::SnapComponent::DesktopSnapLayoutManager> &>(
        __int64 a1,
        __int64 a2)
{
  bool v2; // bl
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = a1;
  v2 = *(_QWORD *)winrt::weak_ref<winrt::Windows::Internal::Shell::SnapComponent::DesktopSnapLayoutManager>::get(
                    a2,
                    &v4) == 0LL;
  if ( v4 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v4);
  return v2;
}
