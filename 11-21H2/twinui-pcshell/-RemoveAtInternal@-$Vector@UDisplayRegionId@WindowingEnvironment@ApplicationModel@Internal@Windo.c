/*
 * XREFs of ?RemoveAtInternal@?$Vector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@UDisplayRegionIdEqualityPredicate@2345@UDisplayRegionIdLifetimeTraits@2345@U?$VectorOptions@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@$00$00$0A@@4Collections@Foundation@5@@Internal@Collections@Foundation@Windows@@AEAAJI_N@Z @ 0x1803E5DD0
 * Callers:
 *     ?RemoveAt@?$Vector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@UDisplayRegionIdEqualityPredicate@2345@UDisplayRegionIdLifetimeTraits@2345@U?$VectorOptions@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@$00$00$0A@@4Collections@Foundation@5@@Internal@Collections@Foundation@Windows@@UEAAJI@Z @ 0x1803E5DB0 (-RemoveAt@-$Vector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@UDis.c)
 *     ?RemoveAtEnd@?$Vector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@UDisplayRegionIdEqualityPredicate@2345@UDisplayRegionIdLifetimeTraits@2345@U?$VectorOptions@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@$00$00$0A@@4Collections@Foundation@5@@Internal@Collections@Foundation@Windows@@UEAAJXZ @ 0x1803E5DC0 (-RemoveAtEnd@-$Vector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@U.c)
 * Callees:
 *     ?Write@SerializingLockPolicy@XWinRT@@SA?AV?$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@detail@2@AEAVComLock@2@PEAJ@Z @ 0x180034788 (-Write@SerializingLockPolicy@XWinRT@@SA-AV-$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@.c)
 *     memmove_s @ 0x1802DA9D4 (memmove_s.c)
 *     ??0?$ReentrancyGuard@$00@detail@XWinRT@@QEAA@JPECJ@Z @ 0x1803DE134 (--0-$ReentrancyGuard@$00@detail@XWinRT@@QEAA@JPECJ@Z.c)
 *     ??4?$ReentrancyGuard@$00@detail@XWinRT@@QEAAAEAU012@U012@@Z @ 0x1803DF60C (--4-$ReentrancyGuard@$00@detail@XWinRT@@QEAAAEAU012@U012@@Z.c)
 *     ?RaiseEvent@?$VectorOptions@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@$00$00$0A@@Internal@Collections@Foundation@Windows@@SAJAEAU?$ReentrancyGuard@$00@detail@XWinRT@@AEAV?$GitEventSource@U?$VectorChangedEventHandler@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@25@PEAU?$IObservableVector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@@345@W4CollectionChange@345@I@Z @ 0x1803E5B34 (-RaiseEvent@-$VectorOptions@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Wind.c)
 *     ?ResizeStorage@?$Vector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@UDisplayRegionIdEqualityPredicate@2345@UDisplayRegionIdLifetimeTraits@2345@U?$VectorOptions@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@$00$00$0A@@4Collections@Foundation@5@@Internal@Collections@Foundation@Windows@@AEAAJI@Z @ 0x1803E6350 (-ResizeStorage@-$Vector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@.c)
 *     ?hr@?$ReentrancyGuard@$00@detail@XWinRT@@QEAA?BJXZ @ 0x1803E7E58 (-hr@-$ReentrancyGuard@$00@detail@XWinRT@@QEAA-BJXZ.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId,Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionIdEqualityPredicate,Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionIdLifetimeTraits,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId,1,1,0>>::RemoveAtInternal(
        __int64 a1,
        unsigned int a2,
        char a3)
{
  _DWORD *v6; // rsi
  int v7; // ebx
  unsigned int v8; // eax
  int *v9; // rax
  int v10; // eax
  unsigned int v11; // r9d
  unsigned int v12; // r8d
  RTL_SRWLOCK *v13; // rcx
  unsigned int v15; // [rsp+20h] [rbp-30h]
  int v16; // [rsp+30h] [rbp-20h] BYREF
  _DWORD *v17; // [rsp+38h] [rbp-18h]
  _BYTE v18[16]; // [rsp+40h] [rbp-10h] BYREF
  int v19; // [rsp+80h] [rbp+30h] BYREF
  RTL_SRWLOCK *v20; // [rsp+98h] [rbp+48h] BYREF

  v19 = 0;
  v16 = -2147483627;
  v6 = 0LL;
  v17 = 0LL;
  XWinRT::SerializingLockPolicy::Write(&v20, (RTL_SRWLOCK *)(a1 + 120), &v19);
  v7 = v19;
  if ( v19 >= 0 )
  {
    v8 = *(_DWORD *)(a1 + 88);
    if ( a3 )
      a2 = v8 - 1;
    if ( a2 >= v8 )
    {
      v7 = -2147483637;
      RoOriginateError(2147483659LL, 0LL);
      v19 = -2147483637;
    }
    if ( v7 >= 0 )
    {
      v9 = (int *)XWinRT::detail::ReentrancyGuard<1>::ReentrancyGuard<1>(
                    (__int64)v18,
                    *(_DWORD *)(a1 + 168),
                    (_DWORD *)(a1 + 172));
      XWinRT::detail::ReentrancyGuard<1>::operator=((__int64)&v16, v9);
      v19 = XWinRT::detail::ReentrancyGuard<1>::hr(&v16);
      v7 = v19;
      if ( v19 >= 0 )
      {
        v10 = *(_DWORD *)(a1 + 88);
        if ( a2 < v10 - 1
          && memmove_s(
               (void *const)(*(_QWORD *)(a1 + 104) + 4LL * a2),
               4LL * (v10 - a2 - 1),
               (const void *const)(*(_QWORD *)(a1 + 104) + 4LL * (a2 + 1)),
               4LL * (v10 - a2 - 1)) )
        {
          v7 = -2147418113;
          RoOriginateError(2147549183LL, 0LL);
          v19 = -2147418113;
        }
        if ( v7 >= 0 )
        {
          v11 = *(_DWORD *)(a1 + 92);
          ++*(_DWORD *)(a1 + 136);
          if ( --*(_DWORD *)(a1 + 88) < v11 / 3 )
          {
            v12 = 1;
            if ( v11 - 1 >= v11 - v11 / 3 )
              v12 = v11 / 3;
            v7 = Windows::Foundation::Collections::Internal::Vector<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId,Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionIdEqualityPredicate,Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionIdLifetimeTraits,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId,1,1,0>>::ResizeStorage(
                   a1,
                   v11 - v12);
            v19 = v7;
          }
        }
      }
      v6 = v17;
    }
  }
  if ( v20 )
  {
    v13 = v20 + 1;
    if ( LODWORD(v20->Ptr) == 1 )
      LODWORD(v13->Ptr) += 0x10000000;
    else
      ReleaseSRWLockExclusive(v13);
    v20 = 0LL;
  }
  if ( v7 >= 0 )
  {
    v15 = a2;
    v7 = Windows::Foundation::Collections::Internal::VectorOptions<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId,1,1,0>::RaiseEvent(
           (__int64)&v16,
           a1 + 144,
           (a1 + 16) & -(__int64)(a1 != 0),
           2u,
           v15);
    v19 = v7;
  }
  if ( v6 )
    *v6 = 0;
  return (unsigned int)v7;
}
