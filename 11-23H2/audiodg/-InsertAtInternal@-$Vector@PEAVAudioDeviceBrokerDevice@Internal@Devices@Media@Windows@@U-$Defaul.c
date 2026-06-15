/*
 * XREFs of ?InsertAtInternal@?$Vector@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@U?$DefaultEqualityPredicate@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@@2Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@@2785@U?$DefaultVectorOptions@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@@2785@@Internal@Collections@Foundation@Windows@@AEAAJIPEAUIAudioDeviceBrokerDevice@2Devices@Media@5@_N@Z @ 0x1400223C4
 * Callers:
 *     ?Append@?$Vector@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@U?$DefaultEqualityPredicate@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@@2Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@@2785@U?$DefaultVectorOptions@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@@2785@@Internal@Collections@Foundation@Windows@@UEAAJPEAUIAudioDeviceBrokerDevice@2Devices@Media@5@@Z @ 0x140022250 (-Append@-$Vector@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@U-$DefaultEqualityP.c)
 *     ?InsertAt@?$Vector@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@U?$DefaultEqualityPredicate@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@@2Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@@2785@U?$DefaultVectorOptions@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@@2785@@Internal@Collections@Foundation@Windows@@UEAAJIPEAUIAudioDeviceBrokerDevice@2Devices@Media@5@@Z @ 0x140087A20 (-InsertAt@-$Vector@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@U-$DefaultEqualit.c)
 * Callees:
 *     ??0?$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ @ 0x140022524 (--0-$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ.c)
 *     ??$?0PEAUIAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@@?$AutoValue@PEAUIAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@U?$DefaultLifetimeTraits@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@@2Collections@Foundation@5@@XWinRT@@QEAA@AEBQEAUIAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@PEAJ@Z @ 0x140022540 (--$-0PEAUIAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@@-$AutoValue@PEAUIAudioDeviceB.c)
 *     ?Write@SerializingLockPolicy@XWinRT@@SA?AV?$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@detail@2@AEAVComLock@2@PEAJ@Z @ 0x14002257C (-Write@SerializingLockPolicy@XWinRT@@SA-AV-$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@.c)
 *     ?RaiseEvent@?$VectorOptions@PEAUIBuffer@Streams@Storage@Windows@@$0A@$0A@$0A@@Internal@Collections@Foundation@Windows@@SAJZZ @ 0x1400225C0 (-RaiseEvent@-$VectorOptions@PEAUIBuffer@Streams@Storage@Windows@@$0A@$0A@$0A@@Internal@Collectio.c)
 *     ?ResizeStorage@?$Vector@UEventRegistrationToken@@UEventRegistrationTokenEqual@Internal@Devices@Media@Windows@@UPodLifetimeTraits@XWinRT@@U?$DefaultVectorOptions@UEventRegistrationToken@@@3Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@AEAAJI@Z @ 0x140022614 (-ResizeStorage@-$Vector@UEventRegistrationToken@@UEventRegistrationTokenEqual@Internal@Devices@M.c)
 *     ??$Destroy@UIAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@@InterfaceLifetimeTraits@XWinRT@@SAXPEAPEAUIAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@@Z @ 0x140024404 (--$Destroy@UIAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@@InterfaceLifetimeTraits@XW.c)
 *     memmove_s_0 @ 0x14008E75C (memmove_s_0.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<Windows::Media::Devices::Internal::AudioDeviceBrokerDevice *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Media::Devices::Internal::AudioDeviceBrokerDevice *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Media::Devices::Internal::AudioDeviceBrokerDevice *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Media::Devices::Internal::AudioDeviceBrokerDevice *>>::InsertAtInternal(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        char a4)
{
  int v7; // ebx
  unsigned int v8; // r9d
  int v9; // edx
  unsigned int v10; // eax
  RTL_SRWLOCK *v11; // rcx
  _BYTE v13[4]; // [rsp+30h] [rbp-20h] BYREF
  int v14; // [rsp+34h] [rbp-1Ch] BYREF
  __int64 v15; // [rsp+38h] [rbp-18h] BYREF
  RTL_SRWLOCK *v16; // [rsp+40h] [rbp-10h] BYREF
  __int64 v17; // [rsp+80h] [rbp+30h] BYREF

  v17 = a3;
  v14 = 0;
  XWinRT::AutoValue<Windows::Media::Devices::Internal::IAudioDeviceBrokerDevice *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Media::Devices::Internal::AudioDeviceBrokerDevice *>>::AutoValue<Windows::Media::Devices::Internal::IAudioDeviceBrokerDevice *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Media::Devices::Internal::AudioDeviceBrokerDevice *>>(
    &v15,
    &v17,
    &v14);
  v7 = v14;
  if ( v14 >= 0 )
  {
    XWinRT::SerializingLockPolicy::Write(&v16, a1 + 72, &v14);
    v7 = v14;
    if ( v14 >= 0 )
    {
      if ( a4 )
        a2 = *(_DWORD *)(a1 + 40);
      if ( a2 > *(_DWORD *)(a1 + 40) )
      {
        v7 = -2147483637;
        RoOriginateError(2147483659LL, 0LL);
      }
      else
      {
        if ( *(_DWORD *)(a1 + 40) >= 0x7FFFFFFFu )
          v7 = -2147024882;
        if ( v7 >= 0 )
        {
          XWinRT::detail::ReentrancyGuard<0>::ReentrancyGuard<0>(v13, *(unsigned __int8 *)(a1 + 93), a1 + 96);
          v7 = 0;
          v8 = *(_DWORD *)(a1 + 44);
          if ( *(_DWORD *)(a1 + 40) + 1 <= v8 )
            goto LABEL_13;
          v9 = 1;
          if ( v8 + 1 <= (v8 >> 1) + v8 )
            v9 = v8 >> 1;
          v7 = Windows::Foundation::Collections::Internal::Vector<EventRegistrationToken,Windows::Media::Devices::Internal::EventRegistrationTokenEqual,XWinRT::PodLifetimeTraits,Windows::Foundation::Collections::Internal::DefaultVectorOptions<EventRegistrationToken>>::ResizeStorage(
                 a1,
                 v8 + v9);
          if ( v7 >= 0 )
          {
LABEL_13:
            v10 = *(_DWORD *)(a1 + 40);
            if ( a2 < v10
              && memmove_s_0(
                   (void *const)(*(_QWORD *)(a1 + 56) + 8LL * (a2 + 1)),
                   8LL * (*(_DWORD *)(a1 + 44) - a2 - 1),
                   (const void *const)(*(_QWORD *)(a1 + 56) + 8LL * a2),
                   8LL * (v10 - a2)) )
            {
              v7 = -2147418113;
              RoOriginateError(2147549183LL, 0LL);
            }
            if ( v7 >= 0 )
            {
              *(_QWORD *)(*(_QWORD *)(a1 + 56) + 8LL * a2) = v15;
              v15 = 0LL;
              ++*(_DWORD *)(a1 + 40);
              ++*(_DWORD *)(a1 + 88);
            }
          }
        }
      }
    }
    if ( v16 )
    {
      v11 = v16 + 1;
      if ( LODWORD(v16->Ptr) == 1 )
        LODWORD(v11->Ptr) += 0x10000000;
      else
        ReleaseSRWLockExclusive(v11);
    }
    if ( v7 >= 0 )
      v7 = Windows::Foundation::Collections::Internal::VectorOptions<Windows::Storage::Streams::IBuffer *,0,0,0>::RaiseEvent(
             v13[0],
             *(unsigned __int8 *)(a1 + 92),
             a1,
             1LL,
             a2);
  }
  XWinRT::InterfaceLifetimeTraits::Destroy<Windows::Media::Devices::Internal::IAudioDeviceBrokerDevice>(&v15);
  return (unsigned int)v7;
}
