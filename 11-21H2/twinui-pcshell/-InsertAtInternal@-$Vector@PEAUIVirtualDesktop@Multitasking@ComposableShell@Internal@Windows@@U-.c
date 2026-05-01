/*
 * XREFs of ?InsertAtInternal@?$Vector@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@U?$DefaultEqualityPredicate@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@4Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@4785@U?$DefaultVectorOptions@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@4785@@Internal@Collections@Foundation@Windows@@AEAAJIPEAUIVirtualDesktop@Multitasking@ComposableShell@25@_N@Z @ 0x1800345B4
 * Callers:
 *     ?Append@?$Vector@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@U?$DefaultEqualityPredicate@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@4Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@4785@U?$DefaultVectorOptions@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@4785@@Internal@Collections@Foundation@Windows@@UEAAJPEAUIVirtualDesktop@Multitasking@ComposableShell@25@@Z @ 0x1800345A0 (-Append@-$Vector@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@U-$DefaultEq.c)
 *     ?InsertAt@?$Vector@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@U?$DefaultEqualityPredicate@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@4Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@4785@U?$DefaultVectorOptions@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@4785@@Internal@Collections@Foundation@Windows@@UEAAJIPEAUIVirtualDesktop@Multitasking@ComposableShell@25@@Z @ 0x18048B360 (-InsertAt@-$Vector@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@U-$Default.c)
 * Callees:
 *     ??$Destroy@UIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@InterfaceLifetimeTraits@XWinRT@@SAXPEAPEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x1800324F0 (--$Destroy@UIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@InterfaceLifetimeTra.c)
 *     ?ResizeStorage@?$Vector@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@U?$DefaultEqualityPredicate@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@4Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@4785@U?$DefaultVectorOptions@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@4785@@Internal@Collections@Foundation@Windows@@AEAAJI@Z @ 0x180034724 (-ResizeStorage@-$Vector@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@U-$De.c)
 *     ?Write@SerializingLockPolicy@XWinRT@@SA?AV?$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@detail@2@AEAVComLock@2@PEAJ@Z @ 0x180034788 (-Write@SerializingLockPolicy@XWinRT@@SA-AV-$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@.c)
 *     ??$?0PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@?$AutoValue@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@U?$DefaultLifetimeTraits@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@4Collections@Foundation@5@@XWinRT@@QEAA@AEBQEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@PEAJ@Z @ 0x1800347CC (--$-0PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@-$AutoValue@PEAUIVirtua.c)
 *     ??0?$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ @ 0x180125E00 (--0-$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ.c)
 *     ?RaiseEvent@?$VectorOptions@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@$0A@$0A@$0A@@Internal@Collections@Foundation@Windows@@SAJZZ @ 0x180125E1C (-RaiseEvent@-$VectorOptions@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@$.c)
 *     memmove_s @ 0x1802DA9D4 (memmove_s.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *>>::InsertAtInternal(
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
  XWinRT::AutoValue<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *>>::AutoValue<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *>>(
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
          v8 = Windows::Foundation::Collections::Internal::Vector<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *>>::ResizeStorage(
                 a1,
                 v10 + v11);
          if ( v8 >= 0 )
          {
LABEL_11:
            v12 = *(_DWORD *)(a1 + 40);
            if ( v5 < v12
              && memmove_s(
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
      v8 = Windows::Foundation::Collections::Internal::VectorOptions<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *,0,0,0>::RaiseEvent(
             (unsigned __int8)v15[0],
             *(unsigned __int8 *)(a1 + 92),
             a1,
             1LL,
             v5);
  }
  XWinRT::InterfaceLifetimeTraits::Destroy<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop>(&v17);
  return (unsigned int)v8;
}
