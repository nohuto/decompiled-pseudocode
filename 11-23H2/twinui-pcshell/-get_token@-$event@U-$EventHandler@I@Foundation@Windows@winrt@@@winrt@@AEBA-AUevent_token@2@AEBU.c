/*
 * XREFs of ?get_token@?$event@U?$EventHandler@I@Foundation@Windows@winrt@@@winrt@@AEBA?AUevent_token@2@AEBU?$EventHandler@I@Foundation@Windows@2@@Z @ 0x18027EF1C
 * Callers:
 *     ??$?RUProcessTracker@implementation@Shell@Internal@Windows@winrt@@I@?$event@U?$EventHandler@I@Foundation@Windows@winrt@@@winrt@@QEAAXAEBUProcessTracker@implementation@Shell@Internal@Windows@1@AEBI@Z @ 0x18027D31C (--$-RUProcessTracker@implementation@Shell@Internal@Windows@winrt@@I@-$event@U-$EventHandler@I@Fo.c)
 *     ?add@?$event@U?$EventHandler@I@Foundation@Windows@winrt@@@winrt@@QEAA?AUevent_token@2@AEBU?$EventHandler@I@Foundation@Windows@2@@Z @ 0x18027EBFC (-add@-$event@U-$EventHandler@I@Foundation@Windows@winrt@@@winrt@@QEAA-AUevent_token@2@AEBU-$Even.c)
 *     ?remove@?$event@U?$EventHandler@I@Foundation@Windows@winrt@@@winrt@@QEAAXUevent_token@2@@Z @ 0x18027EFA4 (-remove@-$event@U-$EventHandler@I@Foundation@Windows@winrt@@@winrt@@QEAAXUevent_token@2@@Z.c)
 * Callees:
 *     WINRT_IMPL_EncodePointer @ 0x1801C78E4 (WINRT_IMPL_EncodePointer.c)
 */

PVOID *__fastcall winrt::event<winrt::Windows::Foundation::EventHandler<unsigned int>>::get_token(
        __int64 a1,
        PVOID *a2,
        PVOID *a3)
{
  *a2 = WINRT_IMPL_EncodePointer(*a3);
  return a2;
}
