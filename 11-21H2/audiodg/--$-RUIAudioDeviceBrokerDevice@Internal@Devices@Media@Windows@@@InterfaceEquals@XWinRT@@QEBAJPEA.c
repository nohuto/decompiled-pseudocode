/*
 * XREFs of ??$?RUIAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@@InterfaceEquals@XWinRT@@QEBAJPEAUIAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@0PEA_N@Z @ 0x14006EE78
 * Callers:
 *     ?IndexOfInternal@?$Vector@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@U?$DefaultEqualityPredicate@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@@2Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@@2785@U?$DefaultVectorOptions@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@@2785@@Internal@Collections@Foundation@Windows@@AEAAJPEAPEAUIAudioDeviceBrokerDevice@2Devices@Media@5@IPEAU62785@PEAIPEAE@Z @ 0x14007A308 (-IndexOfInternal@-$Vector@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@U-$Default.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1400295BC (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall XWinRT::InterfaceEquals::operator()<Windows::Media::Devices::Internal::IAudioDeviceBrokerDevice>(
        __int64 a1,
        __int64 (__fastcall ***a2)(_QWORD, GUID *, __int64 *),
        __int64 (__fastcall ***a3)(_QWORD, GUID *, __int64 *),
        bool *a4)
{
  int v7; // edi
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF
  __int64 v10; // [rsp+48h] [rbp+10h] BYREF

  v9 = a1;
  *a4 = 0;
  v7 = 0;
  if ( a2 == a3 )
  {
    *a4 = 1;
  }
  else if ( a2 && a3 )
  {
    v10 = 0LL;
    v9 = 0LL;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v10);
    v7 = (**a2)(a2, &GUID_00000000_0000_0000_c000_000000000046, &v10);
    if ( v7 >= 0 )
    {
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v9);
      v7 = (**a3)(a3, &GUID_00000000_0000_0000_c000_000000000046, &v9);
      if ( v7 >= 0 )
        *a4 = v10 == v9;
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v9);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v10);
  }
  return (unsigned int)v7;
}
