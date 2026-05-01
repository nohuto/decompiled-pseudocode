/*
 * XREFs of ?InsertAtInternal@?$Vector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U?$VectorOptions@PEAUHSTRING__@@$0A@$00$0A@@3456@@Internal@Collections@Foundation@Windows@@AEAAJIPEAUHSTRING__@@_N@Z @ 0x1804010E8
 * Callers:
 *     ?Append@?$Vector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U?$VectorOptions@PEAUHSTRING__@@$0A@$00$0A@@3456@@Internal@Collections@Foundation@Windows@@UEAAJPEAUHSTRING__@@@Z @ 0x1803FA900 (-Append@-$Vector@PEAUHSTRING__@@U-$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections.c)
 *     ?GetCurrentActiveQuietHoursProfileAllowedApps@GamingOverlayExperienceManager@@UEAAJPEAPEAU?$IVectorView@PEAUHSTRING__@@@Collections@Foundation@Windows@@@Z @ 0x1803FCA50 (-GetCurrentActiveQuietHoursProfileAllowedApps@GamingOverlayExperienceManager@@UEAAJPEAPEAU-$IVec.c)
 *     ?GetDisplayMonitors@GamingOverlayExperienceManager@@UEAAJ_KPEAPEAU?$IVectorView@PEAUHSTRING__@@@Collections@Foundation@Windows@@PEAH@Z @ 0x1803FD3D0 (-GetDisplayMonitors@GamingOverlayExperienceManager@@UEAAJ_KPEAPEAU-$IVectorView@PEAUHSTRING__@@@.c)
 *     ?GetRelevantRunningProcessList@GamingOverlayExperienceManager@@UEAAJKPEAPEAU?$IVectorView@PEAUHSTRING__@@@Collections@Foundation@Windows@@@Z @ 0x1803FF1D0 (-GetRelevantRunningProcessList@GamingOverlayExperienceManager@@UEAAJKPEAPEAU-$IVectorView@PEAUHS.c)
 *     ?InsertAt@?$Vector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U?$VectorOptions@PEAUHSTRING__@@$0A@$00$0A@@3456@@Internal@Collections@Foundation@Windows@@UEAAJIPEAUHSTRING__@@@Z @ 0x180400DA0 (-InsertAt@-$Vector@PEAUHSTRING__@@U-$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collectio.c)
 *     ?GetSessionDetails@AppList@GamingAudio@@QEAAJAEBV?$ComPtr@V?$AgileVector@HU?$DefaultEqualityPredicate@H@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@H@2345@$0A@@Internal@Collections@Foundation@Windows@@@WRL@Microsoft@@AEBV?$ComPtr@V?$AgileVector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@$0A@@Internal@Collections@Foundation@Windows@@@45@0000@Z @ 0x18040D32C (-GetSessionDetails@AppList@GamingAudio@@QEAAJAEBV-$ComPtr@V-$AgileVector@HU-$DefaultEqualityPred.c)
 *     ?GetActiveApps@FamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@UEAAJPEAPEAU?$IVectorView@PEAUHSTRING__@@@Collections@Foundation@5@@Z @ 0x18061D030 (-GetActiveApps@FamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@UEAAJPEAPEAU-$IVec.c)
 * Callees:
 *     ?Write@SerializingLockPolicy@XWinRT@@SA?AV?$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@detail@2@AEAVComLock@2@PEAJ@Z @ 0x18004C8E8 (-Write@SerializingLockPolicy@XWinRT@@SA-AV-$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@.c)
 *     ??0?$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ @ 0x18013FEFC (--0-$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ.c)
 *     ?RaiseEvent@?$VectorOptions@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@$0A@$0A@$0A@@Internal@Collections@Foundation@Windows@@SAJZZ @ 0x18013FF18 (-RaiseEvent@-$VectorOptions@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@$.c)
 *     ??$?0PEAUHSTRING__@@@?$AutoValue@PEAUHSTRING__@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@@XWinRT@@QEAA@AEBQEAUHSTRING__@@PEAJ@Z @ 0x1802D2AD6 (--$-0PEAUHSTRING__@@@-$AutoValue@PEAUHSTRING__@@U-$DefaultLifetimeTraits@PEAUHSTRING__@@@Interna.c)
 *     memmove_s @ 0x1803908A8 (memmove_s.c)
 *     ?ResizeStorage@?$Vector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U?$VectorOptions@PEAUHSTRING__@@$0A@$00$0A@@3456@@Internal@Collections@Foundation@Windows@@AEAAJI@Z @ 0x1804066A4 (-ResizeStorage@-$Vector@PEAUHSTRING__@@U-$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Coll.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::VectorOptions<HSTRING__ *,0,1,0>>::InsertAtInternal(
        __int64 a1,
        unsigned int a2,
        HSTRING a3,
        char a4)
{
  int v7; // ebx
  unsigned int v8; // r9d
  int v9; // edx
  unsigned int v10; // eax
  RTL_SRWLOCK *v11; // rcx
  _BYTE v13[4]; // [rsp+30h] [rbp-20h] BYREF
  HRESULT v14; // [rsp+34h] [rbp-1Ch] BYREF
  HSTRING string; // [rsp+38h] [rbp-18h] BYREF
  RTL_SRWLOCK *v16; // [rsp+40h] [rbp-10h] BYREF
  HSTRING v17; // [rsp+80h] [rbp+30h] BYREF

  v17 = a3;
  v14 = 0;
  XWinRT::AutoValue<HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>>::AutoValue<HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>>(
    &string,
    &v17,
    &v14);
  v7 = v14;
  if ( v14 >= 0 )
  {
    XWinRT::SerializingLockPolicy::Write(&v16, (RTL_SRWLOCK *)(a1 + 104), &v14);
    v7 = v14;
    if ( v14 >= 0 )
    {
      if ( a4 )
        a2 = *(_DWORD *)(a1 + 72);
      if ( a2 <= *(_DWORD *)(a1 + 72) )
      {
        if ( *(_DWORD *)(a1 + 72) >= 0x7FFFFFFFu )
          v7 = -2147024882;
        if ( v7 >= 0 )
        {
          XWinRT::detail::ReentrancyGuard<0>::ReentrancyGuard<0>((__int64)v13);
          v7 = 0;
          v8 = *(_DWORD *)(a1 + 76);
          if ( *(_DWORD *)(a1 + 72) + 1 <= v8 )
            goto LABEL_14;
          v9 = 1;
          if ( v8 + 1 <= (v8 >> 1) + v8 )
            v9 = v8 >> 1;
          v7 = Windows::Foundation::Collections::Internal::Vector<HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::VectorOptions<HSTRING__ *,0,1,0>>::ResizeStorage(
                 a1,
                 v8 + v9);
          if ( v7 >= 0 )
          {
LABEL_14:
            v10 = *(_DWORD *)(a1 + 72);
            if ( a2 < v10
              && memmove_s(
                   (void *const)(*(_QWORD *)(a1 + 88) + 8LL * (a2 + 1)),
                   8LL * (*(_DWORD *)(a1 + 76) - a2 - 1),
                   (const void *const)(*(_QWORD *)(a1 + 88) + 8LL * a2),
                   8LL * (v10 - a2)) )
            {
              v7 = -2147418113;
              RoOriginateError(2147549183LL, 0LL);
            }
            if ( v7 >= 0 )
            {
              *(_QWORD *)(*(_QWORD *)(a1 + 88) + 8LL * a2) = string;
              string = 0LL;
              ++*(_DWORD *)(a1 + 72);
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
    if ( v16 )
    {
      v11 = v16 + 1;
      if ( LODWORD(v16->Ptr) == 1 )
        LODWORD(v11->Ptr) += 0x10000000;
      else
        ReleaseSRWLockExclusive(v11);
    }
    if ( v7 >= 0 )
      v7 = Windows::Foundation::Collections::Internal::VectorOptions<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *,0,0,0>::RaiseEvent();
  }
  WindowsDeleteString(string);
  return (unsigned int)v7;
}
