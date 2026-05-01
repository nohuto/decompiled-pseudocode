/*
 * XREFs of ?InsertAtInternal@?$Vector@NU?$DefaultEqualityPredicate@N@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@N@2345@U?$VectorOptions@N$0A@$00$0A@@2345@@Internal@Collections@Foundation@Windows@@AEAAJIN_N@Z @ 0x180400F48
 * Callers:
 *     ?Append@?$Vector@NU?$DefaultEqualityPredicate@N@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@N@2345@U?$VectorOptions@N$0A@$00$0A@@2345@@Internal@Collections@Foundation@Windows@@UEAAJN@Z @ 0x1803FA8E0 (-Append@-$Vector@NU-$DefaultEqualityPredicate@N@Internal@Collections@Foundation@Windows@@U-$Defa.c)
 *     ?GetCpuUsagePercentChart@GamingOverlayExperienceManager@@UEAAJPEAPEAU?$IVectorView@N@Collections@Foundation@Windows@@@Z @ 0x1803FC8F0 (-GetCpuUsagePercentChart@GamingOverlayExperienceManager@@UEAAJPEAPEAU-$IVectorView@N@Collections.c)
 *     ?GetDedicatedGpuMemoryGbChart@GamingOverlayExperienceManager@@UEAAJPEAPEAU?$IVectorView@N@Collections@Foundation@Windows@@PEAN@Z @ 0x1803FCFD0 (-GetDedicatedGpuMemoryGbChart@GamingOverlayExperienceManager@@UEAAJPEAPEAU-$IVectorView@N@Collec.c)
 *     ?GetMemoryUsageGbChart@GamingOverlayExperienceManager@@UEAAJPEAPEAU?$IVectorView@N@Collections@Foundation@Windows@@PEAN@Z @ 0x1803FE800 (-GetMemoryUsageGbChart@GamingOverlayExperienceManager@@UEAAJPEAPEAU-$IVectorView@N@Collections@F.c)
 *     ?InsertAt@?$Vector@NU?$DefaultEqualityPredicate@N@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@N@2345@U?$VectorOptions@N$0A@$00$0A@@2345@@Internal@Collections@Foundation@Windows@@UEAAJIN@Z @ 0x180400D90 (-InsertAt@-$Vector@NU-$DefaultEqualityPredicate@N@Internal@Collections@Foundation@Windows@@U-$De.c)
 * Callees:
 *     ?Write@SerializingLockPolicy@XWinRT@@SA?AV?$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@detail@2@AEAVComLock@2@PEAJ@Z @ 0x18004C8E8 (-Write@SerializingLockPolicy@XWinRT@@SA-AV-$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@.c)
 *     ??0?$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ @ 0x18013FEFC (--0-$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ.c)
 *     ?RaiseEvent@?$VectorOptions@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@$0A@$0A@$0A@@Internal@Collections@Foundation@Windows@@SAJZZ @ 0x18013FF18 (-RaiseEvent@-$VectorOptions@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@$.c)
 *     memmove_s @ 0x1803908A8 (memmove_s.c)
 *     ?ResizeStorage@?$Vector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U?$VectorOptions@PEAUHSTRING__@@$0A@$00$0A@@3456@@Internal@Collections@Foundation@Windows@@AEAAJI@Z @ 0x1804066A4 (-ResizeStorage@-$Vector@PEAUHSTRING__@@U-$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Coll.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<double,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<double>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<double>,Windows::Foundation::Collections::Internal::VectorOptions<double,0,1,0>>::InsertAtInternal(
        __int64 a1,
        unsigned int a2,
        double a3,
        char a4)
{
  int v7; // ebx
  unsigned int *v8; // rsi
  unsigned int v9; // r9d
  int v10; // edx
  RTL_SRWLOCK *v11; // rcx
  RTL_SRWLOCK *v13; // [rsp+30h] [rbp-38h] BYREF
  int v14; // [rsp+80h] [rbp+18h] BYREF

  v14 = 0;
  XWinRT::SerializingLockPolicy::Write(&v13, (RTL_SRWLOCK *)(a1 + 104), &v14);
  v7 = v14;
  if ( v14 >= 0 )
  {
    v8 = (unsigned int *)(a1 + 72);
    if ( a4 )
      a2 = *v8;
    if ( a2 <= *v8 )
    {
      if ( *v8 >= 0x7FFFFFFF )
        v7 = -2147024882;
      if ( v7 >= 0 )
      {
        XWinRT::detail::ReentrancyGuard<0>::ReentrancyGuard<0>((__int64)&v14);
        v7 = 0;
        v9 = *(_DWORD *)(a1 + 76);
        if ( *v8 + 1 <= v9 )
          goto LABEL_27;
        v10 = 1;
        if ( v9 + 1 <= (v9 >> 1) + v9 )
          v10 = v9 >> 1;
        v7 = Windows::Foundation::Collections::Internal::Vector<HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::VectorOptions<HSTRING__ *,0,1,0>>::ResizeStorage(
               a1,
               v9 + v10);
        if ( v7 >= 0 )
        {
LABEL_27:
          if ( a2 < *v8
            && memmove_s(
                 (void *const)(*(_QWORD *)(a1 + 88) + 8LL * (a2 + 1)),
                 8LL * (*(_DWORD *)(a1 + 76) - a2 - 1),
                 (const void *const)(*(_QWORD *)(a1 + 88) + 8LL * a2),
                 8LL * (*v8 - a2)) )
          {
            v7 = -2147418113;
            RoOriginateError(2147549183LL, 0LL);
          }
          if ( v7 >= 0 )
          {
            *(double *)(*(_QWORD *)(a1 + 88) + 8LL * a2) = a3;
            ++*v8;
            ++*(_DWORD *)(a1 + 120);
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
  if ( v13 )
  {
    v11 = v13 + 1;
    if ( LODWORD(v13->Ptr) == 1 )
      LODWORD(v11->Ptr) += 0x10000000;
    else
      ReleaseSRWLockExclusive(v11);
  }
  if ( v7 >= 0 )
    return (unsigned int)Windows::Foundation::Collections::Internal::VectorOptions<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *,0,0,0>::RaiseEvent();
  return (unsigned int)v7;
}
