/*
 * XREFs of ?as@IUnknown@Foundation@Windows@winrt@@QEBA?AUhresult@4@AEBUguid@4@PEAPEAX@Z @ 0x180088000
 * Callers:
 *     ?CreateInstance@?$wrl_factory_for_winrt_com_class@UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@@wil@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x180087630 (-CreateInstance@-$wrl_factory_for_winrt_com_class@UWindowTabHost@implementation@Shell@Internal@W.c)
 *     ?CreateInstance@DashboardActivator@implementation@Shell@Internal@Windows@winrt@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x180087710 (-CreateInstance@DashboardActivator@implementation@Shell@Internal@Windows@winrt@@UEAAJPEAUIUnknow.c)
 *     ?CreateInstance@?$wrl_factory_for_winrt_com_class@UDashboardActivator@implementation@Shell@Internal@Windows@winrt@@@wil@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x180087AD0 (-CreateInstance@-$wrl_factory_for_winrt_com_class@UDashboardActivator@implementation@Shell@Inter.c)
 *     ?CreateInstance@?$wrl_factory_for_winrt_com_class@UDashboardManager@implementation@Shell@Internal@Windows@winrt@@@wil@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x180087BB0 (-CreateInstance@-$wrl_factory_for_winrt_com_class@UDashboardManager@implementation@Shell@Interna.c)
 *     ?CreateInstance@?$wrl_factory_for_winrt_com_class@UPinManager@implementation@Shell@Internal@Windows@winrt@@@wil@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x180087C90 (-CreateInstance@-$wrl_factory_for_winrt_com_class@UPinManager@implementation@Shell@Internal@Wind.c)
 *     ?CreateInstance@?$wrl_factory_for_winrt_com_class@UMeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@@wil@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x180087D60 (-CreateInstance@-$wrl_factory_for_winrt_com_class@UMeetAndChatManager@implementation@Shell@Inter.c)
 *     ?CreateInstance@?$wrl_factory_for_winrt_com_class@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@wil@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x180087E40 (-CreateInstance@-$wrl_factory_for_winrt_com_class@UAppBackupListener@implementation@Shell@Intern.c)
 *     ?CreateInstance@?$wrl_factory_for_winrt_com_class@UCloudPCComponent@implementation@Shell@Internal@Windows@winrt@@@wil@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x180087F20 (-CreateInstance@-$wrl_factory_for_winrt_com_class@UCloudPCComponent@implementation@Shell@Interna.c)
 *     ?CreateInstance@?$wrl_factory_for_winrt_com_class@UDiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@@wil@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x1806FA140 (-CreateInstance@-$wrl_factory_for_winrt_com_class@UDiscoverabilityManager@implementation@Shell@I.c)
 *     ?CreateInstance@?$wrl_factory_for_winrt_com_class@VLaunchRemoteDesktopUriHandler@implementation@Shell@Internal@Windows@winrt@@@wil@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x1807010E0 (-CreateInstance@-$wrl_factory_for_winrt_com_class@VLaunchRemoteDesktopUriHandler@implementation@.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

_DWORD *__fastcall winrt::Windows::Foundation::IUnknown::as(_QWORD *a1, _DWORD *a2, __int64 a3, __int64 a4)
{
  *a2 = (**(__int64 (__fastcall ***)(_QWORD, __int64, __int64))*a1)(*a1, a3, a4);
  return a2;
}
