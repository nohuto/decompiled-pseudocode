/*
 * XREFs of ??$_Cleanup@UIAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@I@Detail@Collections@Foundation@Windows@@YAXQEAPEAUIAudioDeviceBrokerDevice@Internal@Devices@Media@3@I@Z @ 0x140071CB0
 * Callers:
 *     ??$_IteratorGetMany@U?$IIterator_impl@U?$AggregateType@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@PEAUIAudioDeviceBrokerDevice@2345@@Internal@Foundation@Windows@@$00@Collections@Foundation@Windows@@PEAUIAudioDeviceBrokerDevice@Internal@Devices@Media@4@@Detail@Collections@Foundation@Windows@@YAJPEAU?$IIterator_impl@U?$AggregateType@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@PEAUIAudioDeviceBrokerDevice@2345@@Internal@Foundation@Windows@@$00@123@IPEAPEAUIAudioDeviceBrokerDevice@Internal@Devices@Media@3@PEAI@Z @ 0x140071E90 (--$_IteratorGetMany@U-$IIterator_impl@U-$AggregateType@PEAVAudioDeviceBrokerDevice@Internal@Devi.c)
 *     ??$_VectorGetMany@U?$IVectorView_impl@U?$AggregateType@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@PEAUIAudioDeviceBrokerDevice@2345@@Internal@Foundation@Windows@@$00@Collections@Foundation@Windows@@PEAUIAudioDeviceBrokerDevice@Internal@Devices@Media@4@@Detail@Collections@Foundation@Windows@@YAJPEAU?$IVectorView_impl@U?$AggregateType@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@PEAUIAudioDeviceBrokerDevice@2345@@Internal@Foundation@Windows@@$00@123@IIPEAPEAUIAudioDeviceBrokerDevice@Internal@Devices@Media@3@PEAI@Z @ 0x140072164 (--$_VectorGetMany@U-$IVectorView_impl@U-$AggregateType@PEAVAudioDeviceBrokerDevice@Internal@Devi.c)
 *     ??$_VectorGetMany@U?$IVector_impl@U?$AggregateType@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@PEAUIAudioDeviceBrokerDevice@2345@@Internal@Foundation@Windows@@$00@Collections@Foundation@Windows@@PEAUIAudioDeviceBrokerDevice@Internal@Devices@Media@4@@Detail@Collections@Foundation@Windows@@YAJPEAU?$IVector_impl@U?$AggregateType@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@PEAUIAudioDeviceBrokerDevice@2345@@Internal@Foundation@Windows@@$00@123@IIPEAPEAUIAudioDeviceBrokerDevice@Internal@Devices@Media@3@PEAI@Z @ 0x140072440 (--$_VectorGetMany@U-$IVector_impl@U-$AggregateType@PEAVAudioDeviceBrokerDevice@Internal@Devices@.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Detail::_Cleanup<Windows::Media::Devices::Internal::IAudioDeviceBrokerDevice,unsigned int>(
        _QWORD *a1,
        unsigned int a2)
{
  __int64 v3; // rdi
  __int64 result; // rax

  if ( a2 )
  {
    v3 = a2;
    do
    {
      result = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 16LL))(*a1);
      *a1++ = 0LL;
      --v3;
    }
    while ( v3 );
  }
  return result;
}
