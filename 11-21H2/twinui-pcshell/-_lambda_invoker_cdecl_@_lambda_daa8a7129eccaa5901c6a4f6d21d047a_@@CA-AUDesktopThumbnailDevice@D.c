/*
 * XREFs of ?_lambda_invoker_cdecl_@_lambda_daa8a7129eccaa5901c6a4f6d21d047a_@@CA?AUDesktopThumbnailDevice@Desktop@Multitasking@Shell@Internal@Windows@winrt@@AEBUIActivationFactory@Foundation@78@@Z @ 0x18003CFC0
 * Callers:
 *     <none>
 * Callees:
 *     ??$ActivateInstance@UDesktopThumbnailDevice@Desktop@Multitasking@Shell@Internal@Windows@winrt@@@IActivationFactory@Foundation@Windows@winrt@@QEBA?AUDesktopThumbnailDevice@Desktop@Multitasking@Shell@Internal@23@XZ @ 0x18003CFE8 (--$ActivateInstance@UDesktopThumbnailDevice@Desktop@Multitasking@Shell@Internal@Windows@winrt@@@.c)
 */

__int64 __fastcall _lambda_daa8a7129eccaa5901c6a4f6d21d047a_::_lambda_invoker_cdecl_(__int64 a1, __int64 a2)
{
  winrt::Windows::Foundation::IActivationFactory::ActivateInstance<winrt::Windows::Internal::Shell::Multitasking::Desktop::DesktopThumbnailDevice>(
    a2,
    a1);
  return a1;
}
