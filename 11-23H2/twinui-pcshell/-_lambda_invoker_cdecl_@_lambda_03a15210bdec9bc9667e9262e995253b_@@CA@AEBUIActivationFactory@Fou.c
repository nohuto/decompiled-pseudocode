/*
 * XREFs of ?_lambda_invoker_cdecl_@_lambda_03a15210bdec9bc9667e9262e995253b_@@CA@AEBUIActivationFactory@Foundation@Windows@winrt@@@Z @ 0x180645930
 * Callers:
 *     <none>
 * Callees:
 *     ??$ActivateInstance@UTaskGroupWindowInformation@TaskGroups@Shell@Internal@Windows@winrt@@@IActivationFactory@Foundation@Windows@winrt@@QEBA?AUTaskGroupWindowInformation@TaskGroups@Shell@Internal@23@XZ @ 0x180645DBC (--$ActivateInstance@UTaskGroupWindowInformation@TaskGroups@Shell@Internal@Windows@winrt@@@IActiv.c)
 */

const struct winrt::Windows::Foundation::IActivationFactory *__fastcall _lambda_03a15210bdec9bc9667e9262e995253b_::_lambda_invoker_cdecl_(
        const struct winrt::Windows::Foundation::IActivationFactory *a1,
        __int64 a2)
{
  winrt::Windows::Foundation::IActivationFactory::ActivateInstance<winrt::Windows::Internal::Shell::TaskGroups::TaskGroupWindowInformation>(
    a2,
    a1);
  return a1;
}
