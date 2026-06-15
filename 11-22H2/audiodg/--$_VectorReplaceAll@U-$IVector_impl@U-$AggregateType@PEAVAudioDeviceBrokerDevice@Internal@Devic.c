/*
 * XREFs of ??$_VectorReplaceAll@U?$IVector_impl@U?$AggregateType@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@PEAUIAudioDeviceBrokerDevice@2345@@Internal@Foundation@Windows@@$00@Collections@Foundation@Windows@@PEAUIAudioDeviceBrokerDevice@Internal@Devices@Media@4@@Detail@Collections@Foundation@Windows@@YAJPEAU?$IVector_impl@U?$AggregateType@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@PEAUIAudioDeviceBrokerDevice@2345@@Internal@Foundation@Windows@@$00@123@IPEAPEAUIAudioDeviceBrokerDevice@Internal@Devices@Media@3@@Z @ 0x14007F38C
 * Callers:
 *     ?ReplaceAll@?$IVector_impl@U?$AggregateType@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@PEAUIAudioDeviceBrokerDevice@2345@@Internal@Foundation@Windows@@$00@Collections@Foundation@Windows@@UEAAJIPEAPEAUIAudioDeviceBrokerDevice@Internal@Devices@Media@4@@Z @ 0x14008B670 (-ReplaceAll@-$IVector_impl@U-$AggregateType@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@W.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F210 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Detail::_VectorReplaceAll<Windows::Foundation::Collections::IVector_impl<Windows::Foundation::Internal::AggregateType<Windows::Media::Devices::Internal::AudioDeviceBrokerDevice *,Windows::Media::Devices::Internal::IAudioDeviceBrokerDevice *>,1>,Windows::Media::Devices::Internal::IAudioDeviceBrokerDevice *>(
        __int64 a1,
        unsigned int a2,
        _QWORD *a3)
{
  int v6; // ebp
  unsigned int v7; // ebx

  v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 120LL))(a1);
  if ( v6 >= 0 )
  {
    v7 = 0;
    if ( a2 )
    {
      while ( 1 )
      {
        v6 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 104LL))(a1, *a3);
        if ( v6 < 0 )
          break;
        ++v7;
        ++a3;
        if ( v7 >= a2 )
          return (unsigned int)v6;
      }
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 120LL))(a1);
    }
  }
  return (unsigned int)v6;
}
