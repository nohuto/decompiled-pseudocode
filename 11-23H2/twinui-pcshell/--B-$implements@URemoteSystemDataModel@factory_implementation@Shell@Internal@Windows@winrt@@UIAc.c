/*
 * XREFs of ??B?$implements@URemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@UIActivationFactory@Foundation@56@UIRemoteSystemDataModelStatics@3456@Ustatic_lifetime@6@@winrt@@QEBA?AUIInspectable@Foundation@Windows@1@XZ @ 0x18070EF2C
 * Callers:
 *     ??$invoke@U?$EventHandler@UProcessInfoChangedEventArgs@Shell@Internal@Windows@winrt@@@Foundation@Windows@winrt@@URemoteSystemDataModel@factory_implementation@Shell@Internal@34@UProcessInfoChangedEventArgs@7834@@impl@winrt@@YA_NAEBU?$EventHandler@UProcessInfoChangedEventArgs@Shell@Internal@Windows@winrt@@@Foundation@Windows@1@AEBURemoteSystemDataModel@factory_implementation@Shell@Internal@41@AEBUProcessInfoChangedEventArgs@7841@@Z @ 0x18070BBCC (--$invoke@U-$EventHandler@UProcessInfoChangedEventArgs@Shell@Internal@Windows@winrt@@@Foundation.c)
 *     ??$invoke@U?$EventHandler@URemoteSystemDisplayInfoChangedEventArgs@Shell@Internal@Windows@winrt@@@Foundation@Windows@winrt@@URemoteSystemDataModel@factory_implementation@Shell@Internal@34@URemoteSystemDisplayInfoChangedEventArgs@7834@@impl@winrt@@YA_NAEBU?$EventHandler@URemoteSystemDisplayInfoChangedEventArgs@Shell@Internal@Windows@winrt@@@Foundation@Windows@1@AEBURemoteSystemDataModel@factory_implementation@Shell@Internal@41@AEBURemoteSystemDisplayInfoChangedEventArgs@7841@@Z @ 0x18070BCB0 (--$invoke@U-$EventHandler@URemoteSystemDisplayInfoChangedEventArgs@Shell@Internal@Windows@winrt@.c)
 *     ??$invoke@U?$EventHandler@URemoteSystemStateChangedEventArgs@Shell@Internal@Windows@winrt@@@Foundation@Windows@winrt@@URemoteSystemDataModel@factory_implementation@Shell@Internal@34@URemoteSystemStateChangedEventArgs@7834@@impl@winrt@@YA_NAEBU?$EventHandler@URemoteSystemStateChangedEventArgs@Shell@Internal@Windows@winrt@@@Foundation@Windows@1@AEBURemoteSystemDataModel@factory_implementation@Shell@Internal@41@AEBURemoteSystemStateChangedEventArgs@7841@@Z @ 0x18070BD94 (--$invoke@U-$EventHandler@URemoteSystemStateChangedEventArgs@Shell@Internal@Windows@winrt@@@Foun.c)
 *     ??$invoke@U?$EventHandler@URemoteSystemTimeOutInfoChangedEventArgs@Shell@Internal@Windows@winrt@@@Foundation@Windows@winrt@@URemoteSystemDataModel@factory_implementation@Shell@Internal@34@URemoteSystemTimeOutInfoChangedEventArgs@7834@@impl@winrt@@YA_NAEBU?$EventHandler@URemoteSystemTimeOutInfoChangedEventArgs@Shell@Internal@Windows@winrt@@@Foundation@Windows@1@AEBURemoteSystemDataModel@factory_implementation@Shell@Internal@41@AEBURemoteSystemTimeOutInfoChangedEventArgs@7841@@Z @ 0x18070BE78 (--$invoke@U-$EventHandler@URemoteSystemTimeOutInfoChangedEventArgs@Shell@Internal@Windows@winrt@.c)
 *     ??$invoke@U?$EventHandler@URemoteSystemWindowAddedEventArgs@Shell@Internal@Windows@winrt@@@Foundation@Windows@winrt@@URemoteSystemDataModel@factory_implementation@Shell@Internal@34@URemoteSystemWindowAddedEventArgs@7834@@impl@winrt@@YA_NAEBU?$EventHandler@URemoteSystemWindowAddedEventArgs@Shell@Internal@Windows@winrt@@@Foundation@Windows@1@AEBURemoteSystemDataModel@factory_implementation@Shell@Internal@41@AEBURemoteSystemWindowAddedEventArgs@7841@@Z @ 0x18070BF5C (--$invoke@U-$EventHandler@URemoteSystemWindowAddedEventArgs@Shell@Internal@Windows@winrt@@@Found.c)
 *     ??$invoke@U?$EventHandler@URemoteDesktopConnectedEventArgs@Shell@Internal@Windows@winrt@@@Foundation@Windows@winrt@@URemoteSessionWindowManager@implementation@Shell@Internal@34@URemoteDesktopConnectedEventArgs@7834@@impl@winrt@@YA_NAEBU?$EventHandler@URemoteDesktopConnectedEventArgs@Shell@Internal@Windows@winrt@@@Foundation@Windows@1@AEBURemoteSessionWindowManager@implementation@Shell@Internal@41@AEBURemoteDesktopConnectedEventArgs@7841@@Z @ 0x18071F244 (--$invoke@U-$EventHandler@URemoteDesktopConnectedEventArgs@Shell@Internal@Windows@winrt@@@Founda.c)
 *     ??$invoke@U?$EventHandler@URemoteDesktopStateChangedEventArgs@Shell@Internal@Windows@winrt@@@Foundation@Windows@winrt@@URemoteSessionWindowManager@implementation@Shell@Internal@34@URemoteDesktopStateChangedEventArgs@7834@@impl@winrt@@YA_NAEBU?$EventHandler@URemoteDesktopStateChangedEventArgs@Shell@Internal@Windows@winrt@@@Foundation@Windows@1@AEBURemoteSessionWindowManager@implementation@Shell@Internal@41@AEBURemoteDesktopStateChangedEventArgs@7841@@Z @ 0x18071F328 (--$invoke@U-$EventHandler@URemoteDesktopStateChangedEventArgs@Shell@Internal@Windows@winrt@@@Fou.c)
 * Callees:
 *     ?copy_from_abi@winrt@@YAXAEAUIUnknown@Foundation@Windows@1@PEAX@Z @ 0x1800AD764 (-copy_from_abi@winrt@@YAXAEAUIUnknown@Foundation@Windows@1@PEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

winrt *__fastcall winrt::implements<winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel,winrt::Windows::Foundation::IActivationFactory,winrt::Windows::Internal::Shell::IRemoteSystemDataModelStatics,winrt::static_lifetime>::operator winrt::Windows::Foundation::IInspectable(
        __int64 a1,
        winrt *a2)
{
  struct IUnknown *v3; // rax
  void *v4; // r8

  *(_QWORD *)a2 = 0LL;
  v3 = (struct IUnknown *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 56LL))(a1);
  winrt::copy_from_abi(a2, v3, v4);
  return a2;
}
