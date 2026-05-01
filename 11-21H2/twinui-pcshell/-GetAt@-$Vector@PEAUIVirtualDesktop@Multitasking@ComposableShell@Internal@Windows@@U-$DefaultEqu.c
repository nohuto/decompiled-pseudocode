/*
 * XREFs of ?GetAt@?$Vector@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@U?$DefaultEqualityPredicate@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@4Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@4785@U?$DefaultVectorOptions@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@4785@@Internal@Collections@Foundation@Windows@@UEAAJIPEAPEAUIVirtualDesktop@Multitasking@ComposableShell@25@@Z @ 0x180032280
 * Callers:
 *     <none>
 * Callees:
 *     ??$Destroy@UIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@InterfaceLifetimeTraits@XWinRT@@SAXPEAPEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x1800324F0 (--$Destroy@UIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@InterfaceLifetimeTra.c)
 *     ??$Construct@UIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@InterfaceLifetimeTraits@XWinRT@@SAJPEAPEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@PEAU23456@@Z @ 0x180034808 (--$Construct@UIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@InterfaceLifetimeT.c)
 *     ?Read@SerializingLockPolicy@XWinRT@@SA?AV?$LockHolder@VComLock@XWinRT@@UAcquireRead@detail@2@@detail@2@AEAVComLock@2@PEAJ@Z @ 0x180160FD0 (-Read@SerializingLockPolicy@XWinRT@@SA-AV-$LockHolder@VComLock@XWinRT@@UAcquireRead@detail@2@@de.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *>>::GetAt(
        __int64 a1,
        unsigned int a2,
        _QWORD *a3)
{
  __int64 v4; // rsi
  int v6; // ebx
  RTL_SRWLOCK *v7; // rcx
  int v9; // [rsp+40h] [rbp+8h] BYREF
  RTL_SRWLOCK *v10; // [rsp+50h] [rbp+18h] BYREF

  v4 = a2;
  *a3 = 0LL;
  XWinRT::SerializingLockPolicy::Read(&v10, a1 + 72, &v9);
  v6 = v9;
  if ( v9 >= 0 )
  {
    if ( (unsigned int)v4 >= *(_DWORD *)(a1 + 40) )
    {
      v6 = -2147483637;
      RoOriginateError(2147483659LL, 0LL);
    }
    if ( v6 >= 0 )
    {
      XWinRT::InterfaceLifetimeTraits::Destroy<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop>(a3);
      v6 = XWinRT::InterfaceLifetimeTraits::Construct<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop>(
             a3,
             *(_QWORD *)(*(_QWORD *)(a1 + 56) + 8 * v4));
    }
  }
  if ( v10 )
  {
    v7 = v10 + 1;
    if ( LODWORD(v10->Ptr) == 1 )
      --LODWORD(v7->Ptr);
    else
      ReleaseSRWLockShared(v7);
  }
  if ( v6 >= 0 )
    return 0;
  return (unsigned int)v6;
}
