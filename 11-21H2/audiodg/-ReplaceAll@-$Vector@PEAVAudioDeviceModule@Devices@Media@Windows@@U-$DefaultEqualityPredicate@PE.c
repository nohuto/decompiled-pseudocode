/*
 * XREFs of ?ReplaceAll@?$Vector@PEAVAudioDeviceModule@Devices@Media@Windows@@U?$DefaultEqualityPredicate@PEAVAudioDeviceModule@Devices@Media@Windows@@@Internal@Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAVAudioDeviceModule@Devices@Media@Windows@@@6784@U?$DefaultVectorOptions@PEAVAudioDeviceModule@Devices@Media@Windows@@@6784@@Internal@Collections@Foundation@Windows@@UEAAJIPEAPEAUIAudioDeviceModule@Devices@Media@5@@Z @ 0x14007E550
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ @ 0x140027ACC (--0-$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ.c)
 *     ?RaiseEvent@?$VectorOptions@PEAUIBuffer@Streams@Storage@Windows@@$0A@$0A@$0A@@Internal@Collections@Foundation@Windows@@SAJZZ @ 0x140027AE8 (-RaiseEvent@-$VectorOptions@PEAUIBuffer@Streams@Storage@Windows@@$0A@$0A@$0A@@Internal@Collectio.c)
 *     ?Write@SerializingLockPolicy@XWinRT@@SA?AV?$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@detail@2@AEAVComLock@2@PEAJ@Z @ 0x140027B6C (-Write@SerializingLockPolicy@XWinRT@@SA-AV-$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@.c)
 *     ??$Construct@UIAudioDeviceModule@Devices@Media@Windows@@@InterfaceLifetimeTraits@XWinRT@@SAJPEAPEAUIAudioDeviceModule@Devices@Media@Windows@@PEAU2345@@Z @ 0x14006FF84 (--$Construct@UIAudioDeviceModule@Devices@Media@Windows@@@InterfaceLifetimeTraits@XWinRT@@SAJPEAP.c)
 *     ??$Destroy@UIAudioDeviceModule@Devices@Media@Windows@@@InterfaceLifetimeTraits@XWinRT@@SAXPEAPEAUIAudioDeviceModule@Devices@Media@Windows@@@Z @ 0x140070114 (--$Destroy@UIAudioDeviceModule@Devices@Media@Windows@@@InterfaceLifetimeTraits@XWinRT@@SAXPEAPEA.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<Windows::Media::Devices::AudioDeviceModule *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Media::Devices::AudioDeviceModule *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Media::Devices::AudioDeviceModule *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Media::Devices::AudioDeviceModule *>>::ReplaceAll(
        __int64 a1,
        unsigned int a2,
        __int64 *a3)
{
  unsigned int v4; // r14d
  __int64 *v6; // rsi
  int v7; // ebx
  __int64 v8; // rdi
  unsigned int v9; // eax
  __int64 *v10; // rax
  RTL_SRWLOCK *v11; // rcx
  __int64 *v12; // r14
  RTL_SRWLOCK *v14; // [rsp+30h] [rbp-28h] BYREF
  int v15; // [rsp+78h] [rbp+20h] BYREF

  v15 = 0;
  v4 = a2;
  if ( a2 )
  {
    v6 = (__int64 *)malloc(8LL * a2);
    if ( !v6 )
      return (unsigned int)-2147024882;
    v8 = 0LL;
    while ( 1 )
    {
      v15 = XWinRT::InterfaceLifetimeTraits::Construct<Windows::Media::Devices::IAudioDeviceModule>(&v6[v8], *a3);
      v7 = v15;
      if ( v15 < 0 )
        break;
      v8 = (unsigned int)(v8 + 1);
      ++a3;
      if ( (unsigned int)v8 >= v4 )
        goto LABEL_9;
    }
  }
  else
  {
    v8 = 0LL;
    v6 = 0LL;
    v4 = 0;
LABEL_9:
    XWinRT::SerializingLockPolicy::Write(&v14, (RTL_SRWLOCK *)(a1 + 72), &v15);
    v7 = v15;
    if ( v15 >= 0 )
    {
      XWinRT::detail::ReentrancyGuard<0>::ReentrancyGuard<0>((__int64)&v15);
      v9 = *(_DWORD *)(a1 + 40);
      v7 = 0;
      *(_DWORD *)(a1 + 48) = 0;
      ++*(_DWORD *)(a1 + 88);
      *(_DWORD *)(a1 + 40) = v8;
      v8 = v9;
      v10 = *(__int64 **)(a1 + 56);
      *(_QWORD *)(a1 + 56) = v6;
      v6 = v10;
      *(_DWORD *)(a1 + 44) = v4;
    }
    if ( v14 )
    {
      v11 = v14 + 1;
      if ( LODWORD(v14->Ptr) == 1 )
        LODWORD(v11->Ptr) += 0x10000000;
      else
        ReleaseSRWLockExclusive(v11);
    }
  }
  if ( v6 )
  {
    if ( (_DWORD)v8 )
    {
      v12 = v6;
      do
      {
        XWinRT::InterfaceLifetimeTraits::Destroy<Windows::Media::Devices::IAudioDeviceModule>(v12++);
        --v8;
      }
      while ( v8 );
    }
    free(v6);
  }
  if ( v7 >= 0 )
    return (unsigned int)Windows::Foundation::Collections::Internal::VectorOptions<Windows::Storage::Streams::IBuffer *,0,0,0>::RaiseEvent();
  return (unsigned int)v7;
}
