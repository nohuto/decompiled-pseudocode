/*
 * XREFs of ?RemoveAtInternal@?$Vector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@UDisplayRegionIdEqualityPredicate@2345@UDisplayRegionIdLifetimeTraits@2345@U?$VectorOptions@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@$00$00$0A@@4Collections@Foundation@5@@Internal@Collections@Foundation@Windows@@AEAAJI_N@Z @ 0x1804C8DE0
 * Callers:
 *     ?RemoveAt@?$Vector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@UDisplayRegionIdEqualityPredicate@2345@UDisplayRegionIdLifetimeTraits@2345@U?$VectorOptions@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@$00$00$0A@@4Collections@Foundation@5@@Internal@Collections@Foundation@Windows@@UEAAJI@Z @ 0x1804C8DC0 (-RemoveAt@-$Vector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@UDis.c)
 *     ?RemoveAtEnd@?$Vector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@UDisplayRegionIdEqualityPredicate@2345@UDisplayRegionIdLifetimeTraits@2345@U?$VectorOptions@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@$00$00$0A@@4Collections@Foundation@5@@Internal@Collections@Foundation@Windows@@UEAAJXZ @ 0x1804C8DD0 (-RemoveAtEnd@-$Vector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@U.c)
 * Callees:
 *     ?Write@SerializingLockPolicy@XWinRT@@SA?AV?$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@detail@2@AEAVComLock@2@PEAJ@Z @ 0x18004C8E8 (-Write@SerializingLockPolicy@XWinRT@@SA-AV-$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@.c)
 *     memmove_s @ 0x1803908A8 (memmove_s.c)
 *     ??0?$ReentrancyGuard@$00@detail@XWinRT@@QEAA@JPECJ@Z @ 0x1804BB370 (--0-$ReentrancyGuard@$00@detail@XWinRT@@QEAA@JPECJ@Z.c)
 *     ??4?$ReentrancyGuard@$00@detail@XWinRT@@QEAAAEAU012@U012@@Z @ 0x1804BCFE4 (--4-$ReentrancyGuard@$00@detail@XWinRT@@QEAAAEAU012@U012@@Z.c)
 *     ?RaiseEvent@?$VectorOptions@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@$00$00$0A@@Internal@Collections@Foundation@Windows@@SAJAEAU?$ReentrancyGuard@$00@detail@XWinRT@@AEAV?$GitEventSource@U?$VectorChangedEventHandler@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@25@PEAU?$IObservableVector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@@345@W4CollectionChange@345@I@Z @ 0x1804C7EF0 (-RaiseEvent@-$VectorOptions@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Wind.c)
 *     ?ResizeStorage@?$Vector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@UDisplayRegionIdEqualityPredicate@2345@UDisplayRegionIdLifetimeTraits@2345@U?$VectorOptions@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@$00$00$0A@@4Collections@Foundation@5@@Internal@Collections@Foundation@Windows@@AEAAJI@Z @ 0x1804C952C (-ResizeStorage@-$Vector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@.c)
 *     ?hr@?$ReentrancyGuard@$00@detail@XWinRT@@QEAA?BJXZ @ 0x1804CDCCC (-hr@-$ReentrancyGuard@$00@detail@XWinRT@@QEAA-BJXZ.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId,Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionIdEqualityPredicate,Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionIdLifetimeTraits,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId,1,1,0>>::RemoveAtInternal(
        __int64 a1,
        unsigned int a2,
        char a3)
{
  _DWORD *v6; // r15
  int v7; // ebx
  unsigned int *v8; // rsi
  int *v9; // rax
  unsigned int v10; // r9d
  unsigned int v11; // r8d
  RTL_SRWLOCK *v12; // rcx
  unsigned int v14; // [rsp+20h] [rbp-30h]
  int v15; // [rsp+30h] [rbp-20h] BYREF
  _DWORD *v16; // [rsp+38h] [rbp-18h]
  _BYTE v17[16]; // [rsp+40h] [rbp-10h] BYREF
  int v18; // [rsp+80h] [rbp+30h] BYREF
  RTL_SRWLOCK *v19; // [rsp+98h] [rbp+48h] BYREF

  v18 = 0;
  v15 = -2147483627;
  v6 = 0LL;
  v16 = 0LL;
  XWinRT::SerializingLockPolicy::Write(&v19, (RTL_SRWLOCK *)(a1 + 120), &v18);
  v7 = v18;
  if ( v18 >= 0 )
  {
    v8 = (unsigned int *)(a1 + 88);
    if ( a3 )
      a2 = *v8 - 1;
    if ( a2 >= *v8 )
    {
      v7 = -2147483637;
      RoOriginateError(2147483659LL, 0LL);
      v18 = -2147483637;
    }
    if ( v7 >= 0 )
    {
      v9 = (int *)XWinRT::detail::ReentrancyGuard<1>::ReentrancyGuard<1>(
                    (__int64)v17,
                    *(_DWORD *)(a1 + 168),
                    (_DWORD *)(a1 + 172));
      XWinRT::detail::ReentrancyGuard<1>::operator=((__int64)&v15, v9);
      v18 = XWinRT::detail::ReentrancyGuard<1>::hr(&v15);
      v7 = v18;
      if ( v18 >= 0 )
      {
        if ( a2 < *v8 - 1
          && memmove_s(
               (void *const)(*(_QWORD *)(a1 + 104) + 4LL * a2),
               4LL * (*v8 - a2 - 1),
               (const void *const)(*(_QWORD *)(a1 + 104) + 4LL * (a2 + 1)),
               4LL * (*v8 - a2 - 1)) )
        {
          v7 = -2147418113;
          RoOriginateError(2147549183LL, 0LL);
          v18 = -2147418113;
        }
        if ( v7 >= 0 )
        {
          v10 = *(_DWORD *)(a1 + 92);
          ++*(_DWORD *)(a1 + 136);
          if ( --*v8 < v10 / 3 )
          {
            v11 = 1;
            if ( v10 - 1 >= v10 - v10 / 3 )
              v11 = v10 / 3;
            v7 = Windows::Foundation::Collections::Internal::Vector<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId,Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionIdEqualityPredicate,Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionIdLifetimeTraits,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId,1,1,0>>::ResizeStorage(
                   a1,
                   v10 - v11);
            v18 = v7;
          }
        }
      }
      v6 = v16;
    }
  }
  if ( v19 )
  {
    v12 = v19 + 1;
    if ( LODWORD(v19->Ptr) == 1 )
      LODWORD(v12->Ptr) += 0x10000000;
    else
      ReleaseSRWLockExclusive(v12);
    v19 = 0LL;
  }
  if ( v7 >= 0 )
  {
    v14 = a2;
    v7 = Windows::Foundation::Collections::Internal::VectorOptions<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId,1,1,0>::RaiseEvent(
           (__int64)&v15,
           a1 + 144,
           (a1 + 16) & -(__int64)(a1 != 0),
           2u,
           v14);
    v18 = v7;
  }
  if ( v6 )
    *v6 = 0;
  return (unsigned int)v7;
}
