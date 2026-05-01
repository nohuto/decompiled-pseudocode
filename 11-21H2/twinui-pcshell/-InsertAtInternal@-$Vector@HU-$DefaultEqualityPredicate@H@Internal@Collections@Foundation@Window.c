/*
 * XREFs of ?InsertAtInternal@?$Vector@HU?$DefaultEqualityPredicate@H@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@H@2345@U?$VectorOptions@H$0A@$00$0A@@2345@@Internal@Collections@Foundation@Windows@@AEAAJIH_N@Z @ 0x1803336C0
 * Callers:
 *     ?Append@?$Vector@HU?$DefaultEqualityPredicate@H@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@H@2345@U?$VectorOptions@H$0A@$00$0A@@2345@@Internal@Collections@Foundation@Windows@@UEAAJH@Z @ 0x18032D510 (-Append@-$Vector@HU-$DefaultEqualityPredicate@H@Internal@Collections@Foundation@Windows@@U-$Defa.c)
 *     ?GetFramesPerSecondChart@GamingOverlayExperienceManager@@UEAAJKPEAPEAU?$IVectorView@H@Collections@Foundation@Windows@@@Z @ 0x180330130 (-GetFramesPerSecondChart@GamingOverlayExperienceManager@@UEAAJKPEAPEAU-$IVectorView@H@Collection.c)
 *     ?InsertAt@?$Vector@HU?$DefaultEqualityPredicate@H@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@H@2345@U?$VectorOptions@H$0A@$00$0A@@2345@@Internal@Collections@Foundation@Windows@@UEAAJIH@Z @ 0x180333690 (-InsertAt@-$Vector@HU-$DefaultEqualityPredicate@H@Internal@Collections@Foundation@Windows@@U-$De.c)
 *     ?GetSessionDetails@AppList@GamingAudio@@QEAAJAEBV?$ComPtr@V?$AgileVector@HU?$DefaultEqualityPredicate@H@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@H@2345@$0A@@Internal@Collections@Foundation@Windows@@@WRL@Microsoft@@AEBV?$ComPtr@V?$AgileVector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@$0A@@Internal@Collections@Foundation@Windows@@@45@0000@Z @ 0x18033F6E4 (-GetSessionDetails@AppList@GamingAudio@@QEAAJAEBV-$ComPtr@V-$AgileVector@HU-$DefaultEqualityPred.c)
 * Callees:
 *     ?Write@SerializingLockPolicy@XWinRT@@SA?AV?$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@detail@2@AEAVComLock@2@PEAJ@Z @ 0x180034788 (-Write@SerializingLockPolicy@XWinRT@@SA-AV-$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@.c)
 *     ??0?$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ @ 0x180125E00 (--0-$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ.c)
 *     ?RaiseEvent@?$VectorOptions@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@$0A@$0A@$0A@@Internal@Collections@Foundation@Windows@@SAJZZ @ 0x180125E1C (-RaiseEvent@-$VectorOptions@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@$.c)
 *     memmove_s @ 0x1802DA9D4 (memmove_s.c)
 *     ?ResizeStorage@?$Vector@IU?$DefaultEqualityPredicate@I@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@I@2345@U?$VectorOptions@I$0A@$00$0A@@2345@@Internal@Collections@Foundation@Windows@@AEAAJI@Z @ 0x18033899C (-ResizeStorage@-$Vector@IU-$DefaultEqualityPredicate@I@Internal@Collections@Foundation@Windows@@.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<int,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<int>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<int>,Windows::Foundation::Collections::Internal::VectorOptions<int,0,1,0>>::InsertAtInternal(
        __int64 a1,
        unsigned int a2,
        int a3,
        char a4)
{
  int v8; // ebx
  unsigned int v9; // esi
  unsigned int v10; // eax
  unsigned int v11; // r9d
  int v12; // edx
  unsigned int v13; // eax
  RTL_SRWLOCK *v14; // rcx
  RTL_SRWLOCK *v16; // [rsp+30h] [rbp-28h] BYREF
  int v17; // [rsp+70h] [rbp+18h] BYREF

  v17 = 0;
  XWinRT::SerializingLockPolicy::Write(&v16, (RTL_SRWLOCK *)(a1 + 104), &v17);
  v8 = v17;
  if ( v17 >= 0 )
  {
    v9 = *(_DWORD *)(a1 + 72);
    v10 = v9;
    if ( a4 || (v9 = a2, a2 <= v10) )
    {
      if ( v10 >= 0x7FFFFFFF )
        v8 = -2147024882;
      if ( v8 >= 0 )
      {
        XWinRT::detail::ReentrancyGuard<0>::ReentrancyGuard<0>((__int64)&v17);
        v8 = 0;
        v11 = *(_DWORD *)(a1 + 76);
        if ( *(_DWORD *)(a1 + 72) + 1 <= v11 )
          goto LABEL_12;
        v12 = 1;
        if ( v11 + 1 <= (v11 >> 1) + v11 )
          v12 = v11 >> 1;
        v8 = Windows::Foundation::Collections::Internal::Vector<unsigned int,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<unsigned int>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<unsigned int>,Windows::Foundation::Collections::Internal::VectorOptions<unsigned int,0,1,0>>::ResizeStorage(
               a1,
               v11 + v12);
        if ( v8 >= 0 )
        {
LABEL_12:
          v13 = *(_DWORD *)(a1 + 72);
          if ( v9 < v13
            && memmove_s(
                 (void *const)(*(_QWORD *)(a1 + 88) + 4LL * (v9 + 1)),
                 4LL * (*(_DWORD *)(a1 + 76) - v9 - 1),
                 (const void *const)(*(_QWORD *)(a1 + 88) + 4LL * v9),
                 4LL * (v13 - v9)) )
          {
            v8 = -2147418113;
            RoOriginateError(2147549183LL, 0LL);
          }
          if ( v8 >= 0 )
          {
            *(_DWORD *)(*(_QWORD *)(a1 + 88) + 4LL * v9) = a3;
            ++*(_DWORD *)(a1 + 72);
            ++*(_DWORD *)(a1 + 120);
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
  if ( v16 )
  {
    v14 = v16 + 1;
    if ( LODWORD(v16->Ptr) == 1 )
      LODWORD(v14->Ptr) += 0x10000000;
    else
      ReleaseSRWLockExclusive(v14);
  }
  if ( v8 >= 0 )
    return (unsigned int)Windows::Foundation::Collections::Internal::VectorOptions<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *,0,0,0>::RaiseEvent();
  return (unsigned int)v8;
}
