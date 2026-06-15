/*
 * XREFs of ?GetAt@?$Vector@PEAVAudioDeviceModule@Devices@Media@Windows@@U?$DefaultEqualityPredicate@PEAVAudioDeviceModule@Devices@Media@Windows@@@Internal@Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAVAudioDeviceModule@Devices@Media@Windows@@@6784@U?$DefaultVectorOptions@PEAVAudioDeviceModule@Devices@Media@Windows@@@6784@@Internal@Collections@Foundation@Windows@@UEAAJIPEAPEAUIAudioDeviceModule@Devices@Media@5@@Z @ 0x1400770E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Read@SerializingLockPolicy@XWinRT@@SA?AV?$LockHolder@VComLock@XWinRT@@UAcquireRead@detail@2@@detail@2@AEAVComLock@2@PEAJ@Z @ 0x14002A850 (-Read@SerializingLockPolicy@XWinRT@@SA-AV-$LockHolder@VComLock@XWinRT@@UAcquireRead@detail@2@@de.c)
 *     ??$Construct@UIAudioDeviceModule@Devices@Media@Windows@@@InterfaceLifetimeTraits@XWinRT@@SAJPEAPEAUIAudioDeviceModule@Devices@Media@Windows@@PEAU2345@@Z @ 0x14006FF84 (--$Construct@UIAudioDeviceModule@Devices@Media@Windows@@@InterfaceLifetimeTraits@XWinRT@@SAJPEAP.c)
 *     ??$Destroy@UIAudioDeviceModule@Devices@Media@Windows@@@InterfaceLifetimeTraits@XWinRT@@SAXPEAPEAUIAudioDeviceModule@Devices@Media@Windows@@@Z @ 0x140070114 (--$Destroy@UIAudioDeviceModule@Devices@Media@Windows@@@InterfaceLifetimeTraits@XWinRT@@SAXPEAPEA.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<Windows::Media::Devices::AudioDeviceModule *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Media::Devices::AudioDeviceModule *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Media::Devices::AudioDeviceModule *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Media::Devices::AudioDeviceModule *>>::GetAt(
        __int64 a1,
        unsigned int a2,
        __int64 *a3)
{
  __int64 v4; // rsi
  int v6; // ebx
  RTL_SRWLOCK *v7; // rcx
  int v9; // [rsp+40h] [rbp+8h] BYREF
  RTL_SRWLOCK *v10; // [rsp+50h] [rbp+18h] BYREF

  v4 = a2;
  *a3 = 0LL;
  XWinRT::SerializingLockPolicy::Read(&v10, (RTL_SRWLOCK *)(a1 + 72), &v9);
  v6 = v9;
  if ( v9 >= 0 )
  {
    if ( (unsigned int)v4 >= *(_DWORD *)(a1 + 40) )
    {
      v6 = -2147483637;
      RoOriginateError(2147483659LL, 0LL);
    }
    if ( v6 >= 0 )
    {
      XWinRT::InterfaceLifetimeTraits::Destroy<Windows::Media::Devices::IAudioDeviceModule>(a3);
      v6 = XWinRT::InterfaceLifetimeTraits::Construct<Windows::Media::Devices::IAudioDeviceModule>(
             a3,
             *(_QWORD *)(*(_QWORD *)(a1 + 56) + 8 * v4));
    }
  }
  if ( v10 )
  {
    v7 = v10 + 1;
    if ( LODWORD(v10->Ptr) == 1 )
      --LODWORD(v7->Ptr);
    else
      ReleaseSRWLockShared(v7);
  }
  if ( v6 >= 0 )
    return 0;
  return (unsigned int)v6;
}
