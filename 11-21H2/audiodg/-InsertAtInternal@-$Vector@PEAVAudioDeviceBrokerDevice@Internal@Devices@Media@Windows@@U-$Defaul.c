/*
 * XREFs of ?InsertAtInternal@?$Vector@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@U?$DefaultEqualityPredicate@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@@2Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@@2785@U?$DefaultVectorOptions@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@@2785@@Internal@Collections@Foundation@Windows@@AEAAJIPEAUIAudioDeviceBrokerDevice@2Devices@Media@5@_N@Z @ 0x140027950
 * Callers:
 *     ?Append@?$Vector@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@U?$DefaultEqualityPredicate@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@@2Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@@2785@U?$DefaultVectorOptions@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@@2785@@Internal@Collections@Foundation@Windows@@UEAAJPEAUIAudioDeviceBrokerDevice@2Devices@Media@5@@Z @ 0x1400277F0 (-Append@-$Vector@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@U-$DefaultEqualityP.c)
 *     ?InsertAt@?$Vector@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@U?$DefaultEqualityPredicate@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@@2Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@@2785@U?$DefaultVectorOptions@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@@2785@@Internal@Collections@Foundation@Windows@@UEAAJIPEAUIAudioDeviceBrokerDevice@2Devices@Media@5@@Z @ 0x14007A8C0 (-InsertAt@-$Vector@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@U-$DefaultEqualit.c)
 * Callees:
 *     ??$Destroy@UIAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@@InterfaceLifetimeTraits@XWinRT@@SAXPEAPEAUIAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@@Z @ 0x1400252B4 (--$Destroy@UIAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@@InterfaceLifetimeTraits@XW.c)
 *     ??0?$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ @ 0x140027ACC (--0-$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ.c)
 *     ?RaiseEvent@?$VectorOptions@PEAUIBuffer@Streams@Storage@Windows@@$0A@$0A@$0A@@Internal@Collections@Foundation@Windows@@SAJZZ @ 0x140027AE8 (-RaiseEvent@-$VectorOptions@PEAUIBuffer@Streams@Storage@Windows@@$0A@$0A@$0A@@Internal@Collectio.c)
 *     ?ResizeStorage@?$Vector@UEventRegistrationToken@@UEventRegistrationTokenEqual@Internal@Devices@Media@Windows@@UPodLifetimeTraits@XWinRT@@U?$DefaultVectorOptions@UEventRegistrationToken@@@3Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@AEAAJI@Z @ 0x140027B08 (-ResizeStorage@-$Vector@UEventRegistrationToken@@UEventRegistrationTokenEqual@Internal@Devices@M.c)
 *     ?Write@SerializingLockPolicy@XWinRT@@SA?AV?$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@detail@2@AEAVComLock@2@PEAJ@Z @ 0x140027B6C (-Write@SerializingLockPolicy@XWinRT@@SA-AV-$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@.c)
 *     ??$?0PEAUIAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@@?$AutoValue@PEAUIAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@U?$DefaultLifetimeTraits@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@@2Collections@Foundation@5@@XWinRT@@QEAA@AEBQEAUIAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@PEAJ@Z @ 0x140027BB0 (--$-0PEAUIAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@@-$AutoValue@PEAUIAudioDeviceB.c)
 *     memmove_s_0 @ 0x140081418 (memmove_s_0.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<Windows::Media::Devices::Internal::AudioDeviceBrokerDevice *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Media::Devices::Internal::AudioDeviceBrokerDevice *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Media::Devices::Internal::AudioDeviceBrokerDevice *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Media::Devices::Internal::AudioDeviceBrokerDevice *>>::InsertAtInternal(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        char a4)
{
  unsigned int v5; // esi
  int v8; // ebx
  unsigned int v9; // eax
  unsigned int v10; // r9d
  int v11; // edx
  unsigned int v12; // eax
  RTL_SRWLOCK *v13; // rcx
  char v15[4]; // [rsp+30h] [rbp-20h] BYREF
  int v16; // [rsp+34h] [rbp-1Ch] BYREF
  __int64 v17; // [rsp+38h] [rbp-18h] BYREF
  RTL_SRWLOCK *v18; // [rsp+40h] [rbp-10h] BYREF
  __int64 v19; // [rsp+80h] [rbp+30h] BYREF

  v19 = a3;
  v5 = a2;
  v16 = 0;
  XWinRT::AutoValue<Windows::Media::Devices::Internal::IAudioDeviceBrokerDevice *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Media::Devices::Internal::AudioDeviceBrokerDevice *>>::AutoValue<Windows::Media::Devices::Internal::IAudioDeviceBrokerDevice *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Media::Devices::Internal::AudioDeviceBrokerDevice *>>(
    &v17,
    &v19,
    &v16);
  v8 = v16;
  if ( v16 >= 0 )
  {
    XWinRT::SerializingLockPolicy::Write(&v18, a1 + 72, &v16);
    v8 = v16;
    if ( v16 >= 0 )
    {
      v5 = *(_DWORD *)(a1 + 40);
      v9 = v5;
      if ( a4 || (v5 = a2, a2 <= v9) )
      {
        if ( v9 >= 0x7FFFFFFF )
          v8 = -2147024882;
        if ( v8 >= 0 )
        {
          XWinRT::detail::ReentrancyGuard<0>::ReentrancyGuard<0>(v15, *(unsigned __int8 *)(a1 + 93), a1 + 96);
          v8 = 0;
          v10 = *(_DWORD *)(a1 + 44);
          if ( *(_DWORD *)(a1 + 40) + 1 <= v10 )
            goto LABEL_11;
          v11 = 1;
          if ( v10 + 1 <= (v10 >> 1) + v10 )
            v11 = v10 >> 1;
          v8 = Windows::Foundation::Collections::Internal::Vector<EventRegistrationToken,Windows::Media::Devices::Internal::EventRegistrationTokenEqual,XWinRT::PodLifetimeTraits,Windows::Foundation::Collections::Internal::DefaultVectorOptions<EventRegistrationToken>>::ResizeStorage(
                 a1,
                 v10 + v11);
          if ( v8 >= 0 )
          {
LABEL_11:
            v12 = *(_DWORD *)(a1 + 40);
            if ( v5 < v12
              && memmove_s_0(
                   (void *const)(*(_QWORD *)(a1 + 56) + 8LL * (v5 + 1)),
                   8LL * (*(_DWORD *)(a1 + 44) - v5 - 1),
                   (const void *const)(*(_QWORD *)(a1 + 56) + 8LL * v5),
                   8LL * (v12 - v5)) )
            {
              v8 = -2147418113;
              RoOriginateError(2147549183LL, 0LL);
            }
            if ( v8 >= 0 )
            {
              *(_QWORD *)(*(_QWORD *)(a1 + 56) + 8LL * v5) = v17;
              v17 = 0LL;
              ++*(_DWORD *)(a1 + 40);
              ++*(_DWORD *)(a1 + 88);
            }
          }
        }
      }
      else
      {
        v8 = -2147483637;
        RoOriginateError(2147483659LL, 0LL);
      }
    }
    if ( v18 )
    {
      v13 = v18 + 1;
      if ( LODWORD(v18->Ptr) == 1 )
        LODWORD(v13->Ptr) += 0x10000000;
      else
        ReleaseSRWLockExclusive(v13);
    }
    if ( v8 >= 0 )
      v8 = Windows::Foundation::Collections::Internal::VectorOptions<Windows::Storage::Streams::IBuffer *,0,0,0>::RaiseEvent(
             (unsigned __int8)v15[0],
             *(unsigned __int8 *)(a1 + 92),
             a1,
             1LL,
             v5);
  }
  XWinRT::InterfaceLifetimeTraits::Destroy<Windows::Media::Devices::Internal::IAudioDeviceBrokerDevice>(&v17);
  return (unsigned int)v8;
}
