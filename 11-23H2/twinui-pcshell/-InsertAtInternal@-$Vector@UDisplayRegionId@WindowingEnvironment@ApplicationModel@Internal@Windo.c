/*
 * XREFs of ?InsertAtInternal@?$Vector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@UDisplayRegionIdEqualityPredicate@2345@UDisplayRegionIdLifetimeTraits@2345@U?$VectorOptions@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@$00$00$0A@@4Collections@Foundation@5@@Internal@Collections@Foundation@Windows@@AEAAJIUDisplayRegionId@WindowingEnvironment@ApplicationModel@25@_N@Z @ 0x1804C69D8
 * Callers:
 *     ?AppViewActivationRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewActivationRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x1804BE170 (-AppViewActivationRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewActivationRequestedEventArgs.c)
 *     ?Append@?$Vector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@UDisplayRegionIdEqualityPredicate@2345@UDisplayRegionIdLifetimeTraits@2345@U?$VectorOptions@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@$00$00$0A@@4Collections@Foundation@5@@Internal@Collections@Foundation@Windows@@UEAAJUDisplayRegionId@WindowingEnvironment@ApplicationModel@25@@Z @ 0x1804C1A50 (-Append@-$Vector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@UDispl.c)
 *     ?InsertAt@?$Vector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@UDisplayRegionIdEqualityPredicate@2345@UDisplayRegionIdLifetimeTraits@2345@U?$VectorOptions@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@$00$00$0A@@4Collections@Foundation@5@@Internal@Collections@Foundation@Windows@@UEAAJIUDisplayRegionId@WindowingEnvironment@ApplicationModel@25@@Z @ 0x1804C6830 (-InsertAt@-$Vector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@UDis.c)
 * Callees:
 *     ?Write@SerializingLockPolicy@XWinRT@@SA?AV?$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@detail@2@AEAVComLock@2@PEAJ@Z @ 0x18004C8E8 (-Write@SerializingLockPolicy@XWinRT@@SA-AV-$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@.c)
 *     memmove_s @ 0x1803908A8 (memmove_s.c)
 *     ??0?$ReentrancyGuard@$00@detail@XWinRT@@QEAA@JPECJ@Z @ 0x1804BB370 (--0-$ReentrancyGuard@$00@detail@XWinRT@@QEAA@JPECJ@Z.c)
 *     ??4?$ReentrancyGuard@$00@detail@XWinRT@@QEAAAEAU012@U012@@Z @ 0x1804BCFE4 (--4-$ReentrancyGuard@$00@detail@XWinRT@@QEAAAEAU012@U012@@Z.c)
 *     ?RaiseEvent@?$VectorOptions@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@$00$00$0A@@Internal@Collections@Foundation@Windows@@SAJAEAU?$ReentrancyGuard@$00@detail@XWinRT@@AEAV?$GitEventSource@U?$VectorChangedEventHandler@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@25@PEAU?$IObservableVector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@@345@W4CollectionChange@345@I@Z @ 0x1804C7EF0 (-RaiseEvent@-$VectorOptions@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Wind.c)
 *     ?ResizeStorage@?$Vector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@UDisplayRegionIdEqualityPredicate@2345@UDisplayRegionIdLifetimeTraits@2345@U?$VectorOptions@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@$00$00$0A@@4Collections@Foundation@5@@Internal@Collections@Foundation@Windows@@AEAAJI@Z @ 0x1804C952C (-ResizeStorage@-$Vector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@.c)
 *     ?hr@?$ReentrancyGuard@$00@detail@XWinRT@@QEAA?BJXZ @ 0x1804CDCCC (-hr@-$ReentrancyGuard@$00@detail@XWinRT@@QEAA-BJXZ.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId,Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionIdEqualityPredicate,Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionIdLifetimeTraits,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId,1,1,0>>::InsertAtInternal(
        __int64 a1,
        unsigned int a2,
        int a3,
        char a4)
{
  _DWORD *v7; // r15
  int v9; // edi
  unsigned int *v10; // r14
  int *v11; // rax
  unsigned int v12; // r9d
  int v13; // edx
  RTL_SRWLOCK *v14; // rcx
  RTL_SRWLOCK *v16; // [rsp+30h] [rbp-30h] BYREF
  int v17; // [rsp+38h] [rbp-28h] BYREF
  _DWORD *v18; // [rsp+40h] [rbp-20h]
  _BYTE v19[24]; // [rsp+48h] [rbp-18h] BYREF
  int v20; // [rsp+A0h] [rbp+40h] BYREF

  v17 = -2147483627;
  v7 = 0LL;
  v20 = 0;
  v18 = 0LL;
  XWinRT::SerializingLockPolicy::Write(&v16, (RTL_SRWLOCK *)(a1 + 120), &v20);
  v9 = v20;
  if ( v20 >= 0 )
  {
    v10 = (unsigned int *)(a1 + 88);
    if ( a4 )
      a2 = *v10;
    if ( a2 <= *v10 )
    {
      if ( *v10 >= 0x7FFFFFFF )
        v9 = -2147024882;
      v20 = v9;
      if ( v9 >= 0 )
      {
        v11 = (int *)XWinRT::detail::ReentrancyGuard<1>::ReentrancyGuard<1>(
                       (__int64)v19,
                       *(_DWORD *)(a1 + 168),
                       (_DWORD *)(a1 + 172));
        XWinRT::detail::ReentrancyGuard<1>::operator=((__int64)&v17, v11);
        v20 = XWinRT::detail::ReentrancyGuard<1>::hr(&v17);
        v9 = v20;
        if ( v20 >= 0 )
        {
          v12 = *(_DWORD *)(a1 + 92);
          if ( *v10 + 1 > v12 )
          {
            v13 = 1;
            if ( v12 + 1 <= (v12 >> 1) + v12 )
              v13 = v12 >> 1;
            v9 = Windows::Foundation::Collections::Internal::Vector<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId,Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionIdEqualityPredicate,Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionIdLifetimeTraits,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId,1,1,0>>::ResizeStorage(
                   a1,
                   v12 + v13);
            v20 = v9;
          }
          if ( v9 >= 0 )
          {
            if ( a2 < *v10
              && memmove_s(
                   (void *const)(*(_QWORD *)(a1 + 104) + 4LL * (a2 + 1)),
                   4LL * (*(_DWORD *)(a1 + 92) - a2 - 1),
                   (const void *const)(*(_QWORD *)(a1 + 104) + 4LL * a2),
                   4LL * (*v10 - a2)) )
            {
              v9 = -2147418113;
              RoOriginateError(2147549183LL, 0LL);
              v20 = -2147418113;
            }
            if ( v9 >= 0 )
            {
              *(_DWORD *)(*(_QWORD *)(a1 + 104) + 4LL * a2) = a3;
              ++*v10;
              ++*(_DWORD *)(a1 + 136);
            }
          }
        }
        v7 = v18;
      }
    }
    else
    {
      v9 = -2147483637;
      RoOriginateError(2147483659LL, 0LL);
      v20 = -2147483637;
    }
  }
  if ( v16 )
  {
    v14 = v16 + 1;
    if ( LODWORD(v16->Ptr) == 1 )
      LODWORD(v14->Ptr) += 0x10000000;
    else
      ReleaseSRWLockExclusive(v14);
    v16 = 0LL;
  }
  if ( v9 >= 0 )
  {
    v9 = Windows::Foundation::Collections::Internal::VectorOptions<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId,1,1,0>::RaiseEvent(
           &v17,
           a1 + 144,
           (a1 + 16) & -(__int64)(a1 != 0),
           1LL,
           a2);
    v20 = v9;
  }
  if ( v7 )
    *v7 = 0;
  return (unsigned int)v9;
}
