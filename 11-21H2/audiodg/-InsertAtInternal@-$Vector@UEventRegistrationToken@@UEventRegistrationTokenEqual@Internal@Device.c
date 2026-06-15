/*
 * XREFs of ?InsertAtInternal@?$Vector@UEventRegistrationToken@@UEventRegistrationTokenEqual@Internal@Devices@Media@Windows@@UPodLifetimeTraits@XWinRT@@U?$DefaultVectorOptions@UEventRegistrationToken@@@3Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@AEAAJIUEventRegistrationToken@@_N@Z @ 0x140027804
 * Callers:
 *     ?Append@?$Vector@UEventRegistrationToken@@UEventRegistrationTokenEqual@Internal@Devices@Media@Windows@@UPodLifetimeTraits@XWinRT@@U?$DefaultVectorOptions@UEventRegistrationToken@@@3Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@UEAAJUEventRegistrationToken@@@Z @ 0x1400277D0 (-Append@-$Vector@UEventRegistrationToken@@UEventRegistrationTokenEqual@Internal@Devices@Media@Wi.c)
 *     ?InsertAt@?$Vector@UEventRegistrationToken@@UEventRegistrationTokenEqual@Internal@Devices@Media@Windows@@UPodLifetimeTraits@XWinRT@@U?$DefaultVectorOptions@UEventRegistrationToken@@@3Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@UEAAJIUEventRegistrationToken@@@Z @ 0x14007A8E0 (-InsertAt@-$Vector@UEventRegistrationToken@@UEventRegistrationTokenEqual@Internal@Devices@Media@.c)
 * Callees:
 *     ??0?$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ @ 0x140027ACC (--0-$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ.c)
 *     ?RaiseEvent@?$VectorOptions@PEAUIBuffer@Streams@Storage@Windows@@$0A@$0A@$0A@@Internal@Collections@Foundation@Windows@@SAJZZ @ 0x140027AE8 (-RaiseEvent@-$VectorOptions@PEAUIBuffer@Streams@Storage@Windows@@$0A@$0A@$0A@@Internal@Collectio.c)
 *     ?ResizeStorage@?$Vector@UEventRegistrationToken@@UEventRegistrationTokenEqual@Internal@Devices@Media@Windows@@UPodLifetimeTraits@XWinRT@@U?$DefaultVectorOptions@UEventRegistrationToken@@@3Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@AEAAJI@Z @ 0x140027B08 (-ResizeStorage@-$Vector@UEventRegistrationToken@@UEventRegistrationTokenEqual@Internal@Devices@M.c)
 *     ?Write@SerializingLockPolicy@XWinRT@@SA?AV?$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@detail@2@AEAVComLock@2@PEAJ@Z @ 0x140027B6C (-Write@SerializingLockPolicy@XWinRT@@SA-AV-$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@.c)
 *     memmove_s_0 @ 0x140081418 (memmove_s_0.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<EventRegistrationToken,Windows::Media::Devices::Internal::EventRegistrationTokenEqual,XWinRT::PodLifetimeTraits,Windows::Foundation::Collections::Internal::DefaultVectorOptions<EventRegistrationToken>>::InsertAtInternal(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        char a4)
{
  unsigned int v4; // ebp
  int v9; // edi
  unsigned int v10; // eax
  unsigned int v11; // r9d
  int v12; // edx
  unsigned int v13; // eax
  RTL_SRWLOCK *v14; // rcx
  RTL_SRWLOCK *v16; // [rsp+30h] [rbp-28h] BYREF
  int v17; // [rsp+70h] [rbp+18h] BYREF

  v17 = 0;
  v4 = a2;
  XWinRT::SerializingLockPolicy::Write(&v16, a1 + 72, &v17);
  v9 = v17;
  if ( v17 >= 0 )
  {
    v4 = *(_DWORD *)(a1 + 40);
    v10 = v4;
    if ( a4 || (v4 = a2, a2 <= v10) )
    {
      if ( v10 >= 0x7FFFFFFF )
        v9 = -2147024882;
      if ( v9 >= 0 )
      {
        XWinRT::detail::ReentrancyGuard<0>::ReentrancyGuard<0>(&v17, *(unsigned __int8 *)(a1 + 93), a1 + 96);
        v9 = 0;
        v11 = *(_DWORD *)(a1 + 44);
        if ( *(_DWORD *)(a1 + 40) + 1 <= v11 )
          goto LABEL_10;
        v12 = 1;
        if ( v11 + 1 <= (v11 >> 1) + v11 )
          v12 = v11 >> 1;
        v9 = Windows::Foundation::Collections::Internal::Vector<EventRegistrationToken,Windows::Media::Devices::Internal::EventRegistrationTokenEqual,XWinRT::PodLifetimeTraits,Windows::Foundation::Collections::Internal::DefaultVectorOptions<EventRegistrationToken>>::ResizeStorage(
               a1,
               v11 + v12);
        if ( v9 >= 0 )
        {
LABEL_10:
          v13 = *(_DWORD *)(a1 + 40);
          if ( v4 < v13
            && memmove_s_0(
                 (void *const)(*(_QWORD *)(a1 + 56) + 8LL * (v4 + 1)),
                 8LL * (*(_DWORD *)(a1 + 44) - v4 - 1),
                 (const void *const)(*(_QWORD *)(a1 + 56) + 8LL * v4),
                 8LL * (v13 - v4)) )
          {
            v9 = -2147418113;
            RoOriginateError(2147549183LL, 0LL);
          }
          if ( v9 >= 0 )
          {
            *(_QWORD *)(*(_QWORD *)(a1 + 56) + 8LL * v4) = a3;
            ++*(_DWORD *)(a1 + 40);
            ++*(_DWORD *)(a1 + 88);
          }
        }
      }
    }
    else
    {
      v9 = -2147483637;
      RoOriginateError(2147483659LL, 0LL);
    }
  }
  if ( v16 )
  {
    v14 = v16 + 1;
    if ( LODWORD(v16->Ptr) == 1 )
      LODWORD(v14->Ptr) += 0x10000000;
    else
      ReleaseSRWLockExclusive(v14);
  }
  if ( v9 >= 0 )
    return (unsigned int)Windows::Foundation::Collections::Internal::VectorOptions<Windows::Storage::Streams::IBuffer *,0,0,0>::RaiseEvent(
                           (unsigned __int8)v17,
                           *(unsigned __int8 *)(a1 + 92),
                           a1,
                           1LL,
                           v4);
  return (unsigned int)v9;
}
