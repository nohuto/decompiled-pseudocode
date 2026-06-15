/*
 * XREFs of ?GetTrustLevel@AudioDeviceModuleNotificationEventArgs@Devices@Media@Windows@@UEAAJPEAW4TrustLevel@@@Z @ 0x140026C70
 * Callers:
 *     ?GetTrustLevel@?$SimpleVectorView@PEAUIBuffer@Streams@Storage@Windows@@V?$Vector@PEAUIBuffer@Streams@Storage@Windows@@U?$DefaultEqualityPredicate@PEAUIBuffer@Streams@Storage@Windows@@@Internal@Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAUIBuffer@Streams@Storage@Windows@@@6784@U?$DefaultVectorOptions@PEAUIBuffer@Streams@Storage@Windows@@@6784@@Internal@Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAUIBuffer@Streams@Storage@Windows@@@6784@UIntVersionTag@XWinRT@@$0A@@Internal@Collections@Foundation@Windows@@WBA@EAAJPEAW4TrustLevel@@@Z @ 0x140032090 (-GetTrustLevel@-$SimpleVectorView@PEAUIBuffer@Streams@Storage@Windows@@V-$Vector@PEAUIBuffer@Str.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Media::Devices::AudioDeviceModuleNotificationEventArgs::GetTrustLevel(
        Windows::Media::Devices::AudioDeviceModuleNotificationEventArgs *this,
        enum TrustLevel *a2)
{
  *a2 = BaseTrust;
  return 0LL;
}
