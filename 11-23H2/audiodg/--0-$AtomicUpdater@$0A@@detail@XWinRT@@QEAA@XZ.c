/*
 * XREFs of ??0?$AtomicUpdater@$0A@@detail@XWinRT@@QEAA@XZ @ 0x14007F550
 * Callers:
 *     ??0?$SimpleVectorIterator@PEAUIBuffer@Streams@Storage@Windows@@V?$Vector@PEAUIBuffer@Streams@Storage@Windows@@U?$DefaultEqualityPredicate@PEAUIBuffer@Streams@Storage@Windows@@@Internal@Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAUIBuffer@Streams@Storage@Windows@@@6784@U?$DefaultVectorOptions@PEAUIBuffer@Streams@Storage@Windows@@@6784@@Internal@Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAUIBuffer@Streams@Storage@Windows@@@6784@UIntVersionTag@XWinRT@@$0A@@Internal@Collections@Foundation@Windows@@QEAA@PEAV?$Vector@PEAUIBuffer@Streams@Storage@Windows@@U?$DefaultEqualityPredicate@PEAUIBuffer@Streams@Storage@Windows@@@Internal@Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAUIBuffer@Streams@Storage@Windows@@@6784@U?$DefaultVectorOptions@PEAUIBuffer@Streams@Storage@Windows@@@6784@@1234@Upermission@01234@@Z @ 0x14007F6A0 (--0-$SimpleVectorIterator@PEAUIBuffer@Streams@Storage@Windows@@V-$Vector@PEAUIBuffer@Streams@Sto.c)
 *     ??0?$SimpleVectorIterator@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@V?$Vector@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@U?$DefaultEqualityPredicate@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@@2Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@@2785@U?$DefaultVectorOptions@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@@2785@@2Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@@2785@UIntVersionTag@XWinRT@@$0A@@Internal@Collections@Foundation@Windows@@QEAA@PEAV?$Vector@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@U?$DefaultEqualityPredicate@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@@2Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@@2785@U?$DefaultVectorOptions@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@@2785@@1234@Upermission@01234@@Z @ 0x14007F75C (--0-$SimpleVectorIterator@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@V-$Vector@.c)
 *     ??0?$SimpleVectorIterator@PEAVAudioDeviceModule@Devices@Media@Windows@@V?$Vector@PEAVAudioDeviceModule@Devices@Media@Windows@@U?$DefaultEqualityPredicate@PEAVAudioDeviceModule@Devices@Media@Windows@@@Internal@Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAVAudioDeviceModule@Devices@Media@Windows@@@6784@U?$DefaultVectorOptions@PEAVAudioDeviceModule@Devices@Media@Windows@@@6784@@Internal@Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAVAudioDeviceModule@Devices@Media@Windows@@@6784@UIntVersionTag@XWinRT@@$0A@@Internal@Collections@Foundation@Windows@@QEAA@PEAV?$Vector@PEAVAudioDeviceModule@Devices@Media@Windows@@U?$DefaultEqualityPredicate@PEAVAudioDeviceModule@Devices@Media@Windows@@@Internal@Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAVAudioDeviceModule@Devices@Media@Windows@@@6784@U?$DefaultVectorOptions@PEAVAudioDeviceModule@Devices@Media@Windows@@@6784@@1234@Upermission@01234@@Z @ 0x14007F818 (--0-$SimpleVectorIterator@PEAVAudioDeviceModule@Devices@Media@Windows@@V-$Vector@PEAVAudioDevice.c)
 *     ??0?$SimpleVectorIterator@UEventRegistrationToken@@V?$Vector@UEventRegistrationToken@@UEventRegistrationTokenEqual@Internal@Devices@Media@Windows@@UPodLifetimeTraits@XWinRT@@U?$DefaultVectorOptions@UEventRegistrationToken@@@3Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@UPodLifetimeTraits@XWinRT@@UIntVersionTag@8@$0A@@Internal@Collections@Foundation@Windows@@QEAA@PEAV?$Vector@UEventRegistrationToken@@UEventRegistrationTokenEqual@Internal@Devices@Media@Windows@@UPodLifetimeTraits@XWinRT@@U?$DefaultVectorOptions@UEventRegistrationToken@@@3Collections@Foundation@6@@1234@Upermission@01234@@Z @ 0x14007F8D4 (--0-$SimpleVectorIterator@UEventRegistrationToken@@V-$Vector@UEventRegistrationToken@@UEventRegi.c)
 * Callees:
 *     <none>
 */

char *__fastcall XWinRT::detail::AtomicUpdater<0>::AtomicUpdater<0>(char *a1)
{
  HRESULT ApartmentType; // eax
  APTTYPE v3; // ecx
  char v4; // dl
  APTTYPE pAptType; // [rsp+30h] [rbp+8h] BYREF
  APTTYPEQUALIFIER pAptQualifier; // [rsp+38h] [rbp+10h] BYREF

  ApartmentType = CoGetApartmentType(&pAptType, &pAptQualifier);
  v3 = pAptType;
  v4 = 0;
  if ( ApartmentType < 0 )
    v3 = APTTYPE_MTA;
  if ( v3 == APTTYPE_MAINSTA || v3 == APTTYPE_STA )
    v4 = 1;
  *a1 = v4;
  return a1;
}
