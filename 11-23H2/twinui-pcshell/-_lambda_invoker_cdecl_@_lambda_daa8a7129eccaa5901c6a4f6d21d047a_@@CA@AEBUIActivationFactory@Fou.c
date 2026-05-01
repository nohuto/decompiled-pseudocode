/*
 * XREFs of ?_lambda_invoker_cdecl_@_lambda_daa8a7129eccaa5901c6a4f6d21d047a_@@CA@AEBUIActivationFactory@Foundation@Windows@winrt@@@Z @ 0x18006ABB0
 * Callers:
 *     <none>
 * Callees:
 *     ??$ActivateInstance@UDesktopThumbnailDevice@Desktop@Multitasking@Shell@Internal@Windows@winrt@@@IActivationFactory@Foundation@Windows@winrt@@QEBA?AUDesktopThumbnailDevice@Desktop@Multitasking@Shell@Internal@23@XZ @ 0x18006ABD8 (--$ActivateInstance@UDesktopThumbnailDevice@Desktop@Multitasking@Shell@Internal@Windows@winrt@@@.c)
 */

const struct winrt::Windows::Foundation::IActivationFactory *__fastcall _lambda_daa8a7129eccaa5901c6a4f6d21d047a_::_lambda_invoker_cdecl_(
        const struct winrt::Windows::Foundation::IActivationFactory *a1,
        __int64 a2)
{
  winrt::Windows::Foundation::IActivationFactory::ActivateInstance<winrt::Windows::Internal::Shell::Multitasking::Desktop::DesktopThumbnailDevice>(
    a2,
    a1);
  return a1;
}
