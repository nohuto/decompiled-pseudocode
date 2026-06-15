/*
 * XREFs of ?RemoveAtInternal@?$Vector@UEventRegistrationToken@@UEventRegistrationTokenEqual@Internal@Devices@Media@Windows@@UPodLifetimeTraits@XWinRT@@U?$DefaultVectorOptions@UEventRegistrationToken@@@3Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@AEAAJI_N@Z @ 0x14008B4EC
 * Callers:
 *     ?RemoveAt@?$Vector@UEventRegistrationToken@@UEventRegistrationTokenEqual@Internal@Devices@Media@Windows@@UPodLifetimeTraits@XWinRT@@U?$DefaultVectorOptions@UEventRegistrationToken@@@3Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@UEAAJI@Z @ 0x14008AF50 (-RemoveAt@-$Vector@UEventRegistrationToken@@UEventRegistrationTokenEqual@Internal@Devices@Media@.c)
 *     ?RemoveAtEnd@?$Vector@UEventRegistrationToken@@UEventRegistrationTokenEqual@Internal@Devices@Media@Windows@@UPodLifetimeTraits@XWinRT@@U?$DefaultVectorOptions@UEventRegistrationToken@@@3Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@UEAAJXZ @ 0x14008AFC0 (-RemoveAtEnd@-$Vector@UEventRegistrationToken@@UEventRegistrationTokenEqual@Internal@Devices@Med.c)
 * Callees:
 *     ??0?$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ @ 0x140022524 (--0-$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ.c)
 *     ?Write@SerializingLockPolicy@XWinRT@@SA?AV?$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@detail@2@AEAVComLock@2@PEAJ@Z @ 0x14002257C (-Write@SerializingLockPolicy@XWinRT@@SA-AV-$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@.c)
 *     ?RaiseEvent@?$VectorOptions@PEAUIBuffer@Streams@Storage@Windows@@$0A@$0A@$0A@@Internal@Collections@Foundation@Windows@@SAJZZ @ 0x1400225C0 (-RaiseEvent@-$VectorOptions@PEAUIBuffer@Streams@Storage@Windows@@$0A@$0A@$0A@@Internal@Collectio.c)
 *     ?ResizeStorage@?$Vector@UEventRegistrationToken@@UEventRegistrationTokenEqual@Internal@Devices@Media@Windows@@UPodLifetimeTraits@XWinRT@@U?$DefaultVectorOptions@UEventRegistrationToken@@@3Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@AEAAJI@Z @ 0x140022614 (-ResizeStorage@-$Vector@UEventRegistrationToken@@UEventRegistrationTokenEqual@Internal@Devices@M.c)
 *     memmove_s_0 @ 0x14008E7AC (memmove_s_0.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<EventRegistrationToken,Windows::Media::Devices::Internal::EventRegistrationTokenEqual,XWinRT::PodLifetimeTraits,Windows::Foundation::Collections::Internal::DefaultVectorOptions<EventRegistrationToken>>::RemoveAtInternal(
        __int64 a1,
        unsigned int a2,
        char a3)
{
  int v6; // ebx
  unsigned int *v7; // rsi
  unsigned int v8; // r9d
  unsigned int v9; // r8d
  int v11; // [rsp+50h] [rbp+8h] BYREF
  RTL_SRWLOCK *v12; // [rsp+68h] [rbp+20h] BYREF

  v11 = 0;
  XWinRT::SerializingLockPolicy::Write(&v12, (RTL_SRWLOCK *)(a1 + 72), &v11);
  v6 = v11;
  if ( v11 >= 0 )
  {
    v7 = (unsigned int *)(a1 + 40);
    if ( a3 )
      a2 = *v7 - 1;
    if ( a2 >= *v7 )
    {
      v6 = -2147483637;
      RoOriginateError(2147483659LL, 0LL);
    }
    if ( v6 >= 0 )
    {
      XWinRT::detail::ReentrancyGuard<0>::ReentrancyGuard<0>((__int64)&v11);
      v6 = 0;
      if ( a2 < *v7 - 1
        && memmove_s_0(
             (void *const)(*(_QWORD *)(a1 + 56) + 8LL * a2),
             8LL * (*v7 - a2 - 1),
             (const void *const)(*(_QWORD *)(a1 + 56) + 8LL * (a2 + 1)),
             8LL * (*v7 - a2 - 1)) )
      {
        v6 = -2147418113;
        RoOriginateError(2147549183LL, 0LL);
      }
      else
      {
        v8 = *(_DWORD *)(a1 + 44);
        ++*(_DWORD *)(a1 + 88);
        if ( --*v7 < v8 / 3 )
        {
          v9 = 1;
          if ( v8 - 1 >= v8 - v8 / 3 )
            v9 = v8 / 3;
          v6 = Windows::Foundation::Collections::Internal::Vector<EventRegistrationToken,Windows::Media::Devices::Internal::EventRegistrationTokenEqual,XWinRT::PodLifetimeTraits,Windows::Foundation::Collections::Internal::DefaultVectorOptions<EventRegistrationToken>>::ResizeStorage(
                 a1,
                 v8 - v9);
        }
      }
    }
  }
  if ( v12 )
  {
    if ( LODWORD(v12->Ptr) == 1 )
      LODWORD(v12[1].Ptr) += 0x10000000;
    else
      ReleaseSRWLockExclusive(v12 + 1);
  }
  if ( v6 >= 0 )
    return (unsigned int)Windows::Foundation::Collections::Internal::VectorOptions<Windows::Storage::Streams::IBuffer *,0,0,0>::RaiseEvent();
  return (unsigned int)v6;
}
