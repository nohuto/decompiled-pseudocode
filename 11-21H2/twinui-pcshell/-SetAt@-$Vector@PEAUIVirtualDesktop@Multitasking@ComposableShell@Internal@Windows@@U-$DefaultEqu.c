/*
 * XREFs of ?SetAt@?$Vector@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@U?$DefaultEqualityPredicate@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@4Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@4785@U?$DefaultVectorOptions@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@4785@@Internal@Collections@Foundation@Windows@@UEAAJIPEAUIVirtualDesktop@Multitasking@ComposableShell@25@@Z @ 0x18048BA30
 * Callers:
 *     <none>
 * Callees:
 *     ??$Destroy@UIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@InterfaceLifetimeTraits@XWinRT@@SAXPEAPEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x1800324F0 (--$Destroy@UIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@InterfaceLifetimeTra.c)
 *     ?Write@SerializingLockPolicy@XWinRT@@SA?AV?$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@detail@2@AEAVComLock@2@PEAJ@Z @ 0x180034788 (-Write@SerializingLockPolicy@XWinRT@@SA-AV-$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@.c)
 *     ??$?0PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@?$AutoValue@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@U?$DefaultLifetimeTraits@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@4Collections@Foundation@5@@XWinRT@@QEAA@AEBQEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@PEAJ@Z @ 0x1800347CC (--$-0PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@-$AutoValue@PEAUIVirtua.c)
 *     ??0?$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ @ 0x180125E00 (--0-$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ.c)
 *     ?RaiseEvent@?$VectorOptions@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@$0A@$0A@$0A@@Internal@Collections@Foundation@Windows@@SAJZZ @ 0x180125E1C (-RaiseEvent@-$VectorOptions@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@$.c)
 *     memmove_s @ 0x1802DA9D4 (memmove_s.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *>>::SetAt(
        __int64 a1,
        unsigned int a2,
        __int64 a3)
{
  __int64 v3; // rsi
  int v5; // ebx
  RTL_SRWLOCK *v6; // rcx
  __int64 v8; // [rsp+30h] [rbp-20h] BYREF
  __int64 v9; // [rsp+38h] [rbp-18h] BYREF
  RTL_SRWLOCK *v10; // [rsp+40h] [rbp-10h] BYREF
  __int64 v11; // [rsp+80h] [rbp+30h] BYREF
  __int64 Destination; // [rsp+88h] [rbp+38h] BYREF

  v11 = a3;
  v3 = a2;
  LODWORD(Destination) = 0;
  v9 = 0LL;
  XWinRT::AutoValue<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *>>::AutoValue<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *>>(
    &v8,
    &v11,
    (int *)&Destination);
  v5 = Destination;
  if ( (int)Destination >= 0 )
  {
    XWinRT::SerializingLockPolicy::Write(&v10, (RTL_SRWLOCK *)(a1 + 72), &Destination);
    v5 = Destination;
    if ( (int)Destination >= 0 )
    {
      if ( (unsigned int)v3 >= *(_DWORD *)(a1 + 40) )
      {
        v5 = -2147483637;
        RoOriginateError(2147483659LL, 0LL);
      }
      if ( v5 >= 0 )
      {
        XWinRT::detail::ReentrancyGuard<0>::ReentrancyGuard<0>((__int64)&Destination);
        v5 = 0;
        if ( memmove_s(&Destination, 8uLL, (const void *const)(*(_QWORD *)(a1 + 56) + 8 * v3), 8uLL) )
        {
          v5 = -2147418113;
          RoOriginateError(2147549183LL, 0LL);
        }
        else
        {
          *(_QWORD *)(*(_QWORD *)(a1 + 56) + 8 * v3) = v8;
          v8 = 0LL;
          ++*(_DWORD *)(a1 + 88);
          XWinRT::InterfaceLifetimeTraits::Destroy<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop>(&v9);
          v9 = Destination;
        }
      }
    }
    if ( v10 )
    {
      v6 = v10 + 1;
      if ( LODWORD(v10->Ptr) == 1 )
        LODWORD(v6->Ptr) += 0x10000000;
      else
        ReleaseSRWLockExclusive(v6);
    }
  }
  XWinRT::InterfaceLifetimeTraits::Destroy<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop>(&v8);
  XWinRT::InterfaceLifetimeTraits::Destroy<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop>(&v9);
  if ( v5 >= 0 )
    return (unsigned int)Windows::Foundation::Collections::Internal::VectorOptions<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *,0,0,0>::RaiseEvent();
  return (unsigned int)v5;
}
