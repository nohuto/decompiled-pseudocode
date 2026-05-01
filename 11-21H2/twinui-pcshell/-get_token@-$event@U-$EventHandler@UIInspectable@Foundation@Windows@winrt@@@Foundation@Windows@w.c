/*
 * XREFs of ?get_token@?$event@U?$EventHandler@UIInspectable@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@@winrt@@AEBA?AUevent_token@2@AEBU?$EventHandler@UIInspectable@Foundation@Windows@winrt@@@Foundation@Windows@2@@Z @ 0x18039FE14
 * Callers:
 *     ??$?R$$T$$T@?$event@U?$EventHandler@UIInspectable@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@@winrt@@QEAAXAEB$$T0@Z @ 0x1801A35E0 (--$-R$$T$$T@-$event@U-$EventHandler@UIInspectable@Foundation@Windows@winrt@@@Foundation@Windows@.c)
 * Callees:
 *     WINRT_IMPL_EncodePointer @ 0x1801892E4 (WINRT_IMPL_EncodePointer.c)
 */

PVOID *__fastcall winrt::event<winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable>>::get_token(
        __int64 a1,
        PVOID *a2,
        PVOID *a3)
{
  *a2 = WINRT_IMPL_EncodePointer(*a3);
  return a2;
}
