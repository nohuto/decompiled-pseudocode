/*
 * XREFs of ?GetAt@?$Vector@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@U?$DefaultEqualityPredicate@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@@2Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@@2785@U?$DefaultVectorOptions@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@@2785@@Internal@Collections@Foundation@Windows@@UEAAJIPEAPEAUIAudioDeviceBrokerDevice@2Devices@Media@5@@Z @ 0x140025200
 * Callers:
 *     <none>
 * Callees:
 *     ??$Destroy@UIAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@@InterfaceLifetimeTraits@XWinRT@@SAXPEAPEAUIAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@@Z @ 0x1400252B4 (--$Destroy@UIAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@@InterfaceLifetimeTraits@XW.c)
 *     ??$Construct@UIAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@@InterfaceLifetimeTraits@XWinRT@@SAJPEAPEAUIAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@PEAU23456@@Z @ 0x140027BEC (--$Construct@UIAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@@InterfaceLifetimeTraits@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<Windows::Media::Devices::Internal::AudioDeviceBrokerDevice *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Media::Devices::Internal::AudioDeviceBrokerDevice *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Media::Devices::Internal::AudioDeviceBrokerDevice *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Media::Devices::Internal::AudioDeviceBrokerDevice *>>::GetAt(
        __int64 a1,
        unsigned int a2,
        _QWORD *a3)
{
  __int64 v4; // r14
  unsigned int v6; // edi
  _DWORD *v7; // rbx
  RTL_SRWLOCK *v8; // rsi
  int v9; // ebp

  v4 = a2;
  v6 = 0;
  *a3 = 0LL;
  v7 = (_DWORD *)(a1 + 72);
  v8 = (RTL_SRWLOCK *)(a1 + 80);
  if ( *(_DWORD *)(a1 + 72) == 1 )
  {
    if ( SLODWORD(v8->Ptr) >= 0 )
      ++LODWORD(v8->Ptr);
  }
  else
  {
    AcquireSRWLockShared((PSRWLOCK)(a1 + 80));
  }
  if ( (unsigned int)v4 >= *(_DWORD *)(a1 + 40) )
  {
    v9 = -2147483637;
    RoOriginateError(2147483659LL, 0LL);
  }
  else
  {
    XWinRT::InterfaceLifetimeTraits::Destroy<Windows::Media::Devices::Internal::IAudioDeviceBrokerDevice>(a3);
    v9 = XWinRT::InterfaceLifetimeTraits::Construct<Windows::Media::Devices::Internal::IAudioDeviceBrokerDevice>(
           a3,
           *(_QWORD *)(*(_QWORD *)(a1 + 56) + 8 * v4));
  }
  if ( v7 )
  {
    if ( *v7 == 1 )
      --LODWORD(v8->Ptr);
    else
      ReleaseSRWLockShared(v8);
  }
  if ( v9 < 0 )
    return (unsigned int)v9;
  return v6;
}
