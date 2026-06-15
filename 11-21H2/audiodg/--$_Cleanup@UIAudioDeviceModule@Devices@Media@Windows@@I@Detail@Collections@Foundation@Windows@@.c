/*
 * XREFs of ??$_Cleanup@UIAudioDeviceModule@Devices@Media@Windows@@I@Detail@Collections@Foundation@Windows@@YAXQEAPEAUIAudioDeviceModule@Devices@Media@3@I@Z @ 0x140071D00
 * Callers:
 *     ??$_IteratorGetMany@U?$IIterator_impl@U?$AggregateType@PEAVAudioDeviceModule@Devices@Media@Windows@@PEAUIAudioDeviceModule@234@@Internal@Foundation@Windows@@$00@Collections@Foundation@Windows@@PEAUIAudioDeviceModule@Devices@Media@4@@Detail@Collections@Foundation@Windows@@YAJPEAU?$IIterator_impl@U?$AggregateType@PEAVAudioDeviceModule@Devices@Media@Windows@@PEAUIAudioDeviceModule@234@@Internal@Foundation@Windows@@$00@123@IPEAPEAUIAudioDeviceModule@Devices@Media@3@PEAI@Z @ 0x140071F80 (--$_IteratorGetMany@U-$IIterator_impl@U-$AggregateType@PEAVAudioDeviceModule@Devices@Media@Windo.c)
 *     ??$_VectorGetMany@U?$IVectorView_impl@U?$AggregateType@PEAVAudioDeviceModule@Devices@Media@Windows@@PEAUIAudioDeviceModule@234@@Internal@Foundation@Windows@@$00@Collections@Foundation@Windows@@PEAUIAudioDeviceModule@Devices@Media@4@@Detail@Collections@Foundation@Windows@@YAJPEAU?$IVectorView_impl@U?$AggregateType@PEAVAudioDeviceModule@Devices@Media@Windows@@PEAUIAudioDeviceModule@234@@Internal@Foundation@Windows@@$00@123@IIPEAPEAUIAudioDeviceModule@Devices@Media@3@PEAI@Z @ 0x140072258 (--$_VectorGetMany@U-$IVectorView_impl@U-$AggregateType@PEAVAudioDeviceModule@Devices@Media@Windo.c)
 *     ??$_VectorGetMany@U?$IVector_impl@U?$AggregateType@PEAVAudioDeviceModule@Devices@Media@Windows@@PEAUIAudioDeviceModule@234@@Internal@Foundation@Windows@@$00@Collections@Foundation@Windows@@PEAUIAudioDeviceModule@Devices@Media@4@@Detail@Collections@Foundation@Windows@@YAJPEAU?$IVector_impl@U?$AggregateType@PEAVAudioDeviceModule@Devices@Media@Windows@@PEAUIAudioDeviceModule@234@@Internal@Foundation@Windows@@$00@123@IIPEAPEAUIAudioDeviceModule@Devices@Media@3@PEAI@Z @ 0x140072534 (--$_VectorGetMany@U-$IVector_impl@U-$AggregateType@PEAVAudioDeviceModule@Devices@Media@Windows@@.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Detail::_Cleanup<Windows::Media::Devices::IAudioDeviceModule,unsigned int>(
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
