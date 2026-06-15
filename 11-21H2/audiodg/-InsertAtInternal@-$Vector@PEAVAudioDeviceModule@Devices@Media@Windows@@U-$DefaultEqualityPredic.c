/*
 * XREFs of ?InsertAtInternal@?$Vector@PEAVAudioDeviceModule@Devices@Media@Windows@@U?$DefaultEqualityPredicate@PEAVAudioDeviceModule@Devices@Media@Windows@@@Internal@Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAVAudioDeviceModule@Devices@Media@Windows@@@6784@U?$DefaultVectorOptions@PEAVAudioDeviceModule@Devices@Media@Windows@@@6784@@Internal@Collections@Foundation@Windows@@AEAAJIPEAUIAudioDeviceModule@Devices@Media@5@_N@Z @ 0x14007AABC
 * Callers:
 *     ?Append@?$Vector@PEAVAudioDeviceModule@Devices@Media@Windows@@U?$DefaultEqualityPredicate@PEAVAudioDeviceModule@Devices@Media@Windows@@@Internal@Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAVAudioDeviceModule@Devices@Media@Windows@@@6784@U?$DefaultVectorOptions@PEAVAudioDeviceModule@Devices@Media@Windows@@@6784@@Internal@Collections@Foundation@Windows@@UEAAJPEAUIAudioDeviceModule@Devices@Media@5@@Z @ 0x1400750F0 (-Append@-$Vector@PEAVAudioDeviceModule@Devices@Media@Windows@@U-$DefaultEqualityPredicate@PEAVAu.c)
 *     ?InsertAt@?$Vector@PEAVAudioDeviceModule@Devices@Media@Windows@@U?$DefaultEqualityPredicate@PEAVAudioDeviceModule@Devices@Media@Windows@@@Internal@Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAVAudioDeviceModule@Devices@Media@Windows@@@6784@U?$DefaultVectorOptions@PEAVAudioDeviceModule@Devices@Media@Windows@@@6784@@Internal@Collections@Foundation@Windows@@UEAAJIPEAUIAudioDeviceModule@Devices@Media@5@@Z @ 0x14007A8D0 (-InsertAt@-$Vector@PEAVAudioDeviceModule@Devices@Media@Windows@@U-$DefaultEqualityPredicate@PEAV.c)
 * Callees:
 *     ??0?$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ @ 0x140027ACC (--0-$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ.c)
 *     ?RaiseEvent@?$VectorOptions@PEAUIBuffer@Streams@Storage@Windows@@$0A@$0A@$0A@@Internal@Collections@Foundation@Windows@@SAJZZ @ 0x140027AE8 (-RaiseEvent@-$VectorOptions@PEAUIBuffer@Streams@Storage@Windows@@$0A@$0A@$0A@@Internal@Collectio.c)
 *     ?Write@SerializingLockPolicy@XWinRT@@SA?AV?$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@detail@2@AEAVComLock@2@PEAJ@Z @ 0x140027B6C (-Write@SerializingLockPolicy@XWinRT@@SA-AV-$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@.c)
 *     ??$?0PEAUIAudioDeviceModule@Devices@Media@Windows@@@?$AutoValue@PEAUIAudioDeviceModule@Devices@Media@Windows@@U?$DefaultLifetimeTraits@PEAVAudioDeviceModule@Devices@Media@Windows@@@Internal@Collections@Foundation@4@@XWinRT@@QEAA@AEBQEAUIAudioDeviceModule@Devices@Media@Windows@@PEAJ@Z @ 0x14006ED9C (--$-0PEAUIAudioDeviceModule@Devices@Media@Windows@@@-$AutoValue@PEAUIAudioDeviceModule@Devices@M.c)
 *     ??$Destroy@UIAudioDeviceModule@Devices@Media@Windows@@@InterfaceLifetimeTraits@XWinRT@@SAXPEAPEAUIAudioDeviceModule@Devices@Media@Windows@@@Z @ 0x140070114 (--$Destroy@UIAudioDeviceModule@Devices@Media@Windows@@@InterfaceLifetimeTraits@XWinRT@@SAXPEAPEA.c)
 *     ?ResizeStorage@?$Vector@PEAUIBuffer@Streams@Storage@Windows@@U?$DefaultEqualityPredicate@PEAUIBuffer@Streams@Storage@Windows@@@Internal@Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAUIBuffer@Streams@Storage@Windows@@@6784@U?$DefaultVectorOptions@PEAUIBuffer@Streams@Storage@Windows@@@6784@@Internal@Collections@Foundation@Windows@@AEAAJI@Z @ 0x14007E800 (-ResizeStorage@-$Vector@PEAUIBuffer@Streams@Storage@Windows@@U-$DefaultEqualityPredicate@PEAUIBu.c)
 *     memmove_s_0 @ 0x140081418 (memmove_s_0.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<Windows::Media::Devices::AudioDeviceModule *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Media::Devices::AudioDeviceModule *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Media::Devices::AudioDeviceModule *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Media::Devices::AudioDeviceModule *>>::InsertAtInternal(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        char a4)
{
  int v7; // ebx
  unsigned int v8; // esi
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
  v16 = 0;
  XWinRT::AutoValue<Windows::Media::Devices::IAudioDeviceModule *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Media::Devices::AudioDeviceModule *>>::AutoValue<Windows::Media::Devices::IAudioDeviceModule *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Media::Devices::AudioDeviceModule *>>(
    &v17,
    &v19,
    &v16);
  v7 = v16;
  if ( v16 >= 0 )
  {
    XWinRT::SerializingLockPolicy::Write(&v18, (RTL_SRWLOCK *)(a1 + 72), &v16);
    v7 = v16;
    if ( v16 >= 0 )
    {
      v8 = *(_DWORD *)(a1 + 40);
      v9 = v8;
      if ( a4 || (v8 = a2, a2 <= v9) )
      {
        if ( v9 >= 0x7FFFFFFF )
          v7 = -2147024882;
        if ( v7 >= 0 )
        {
          XWinRT::detail::ReentrancyGuard<0>::ReentrancyGuard<0>((__int64)v15);
          v7 = 0;
          v10 = *(_DWORD *)(a1 + 44);
          if ( *(_DWORD *)(a1 + 40) + 1 <= v10 )
            goto LABEL_13;
          v11 = 1;
          if ( v10 + 1 <= (v10 >> 1) + v10 )
            v11 = v10 >> 1;
          v7 = Windows::Foundation::Collections::Internal::Vector<Windows::Storage::Streams::IBuffer *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Storage::Streams::IBuffer *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Storage::Streams::IBuffer *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Storage::Streams::IBuffer *>>::ResizeStorage(
                 a1,
                 v10 + v11);
          if ( v7 >= 0 )
          {
LABEL_13:
            v12 = *(_DWORD *)(a1 + 40);
            if ( v8 < v12
              && memmove_s_0(
                   (void *const)(*(_QWORD *)(a1 + 56) + 8LL * (v8 + 1)),
                   8LL * (*(_DWORD *)(a1 + 44) - v8 - 1),
                   (const void *const)(*(_QWORD *)(a1 + 56) + 8LL * v8),
                   8LL * (v12 - v8)) )
            {
              v7 = -2147418113;
              RoOriginateError(2147549183LL, 0LL);
            }
            if ( v7 >= 0 )
            {
              *(_QWORD *)(*(_QWORD *)(a1 + 56) + 8LL * v8) = v17;
              v17 = 0LL;
              ++*(_DWORD *)(a1 + 40);
              ++*(_DWORD *)(a1 + 88);
            }
          }
        }
      }
      else
      {
        v7 = -2147483637;
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
    if ( v7 >= 0 )
      v7 = Windows::Foundation::Collections::Internal::VectorOptions<Windows::Storage::Streams::IBuffer *,0,0,0>::RaiseEvent();
  }
  XWinRT::InterfaceLifetimeTraits::Destroy<Windows::Media::Devices::IAudioDeviceModule>(&v17);
  return (unsigned int)v7;
}
