/*
 * XREFs of ?SetAt@?$Vector@NU?$DefaultEqualityPredicate@N@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@N@2345@U?$VectorOptions@N$0A@$00$0A@@2345@@Internal@Collections@Foundation@Windows@@UEAAJIN@Z @ 0x180406C20
 * Callers:
 *     <none>
 * Callees:
 *     ?Write@SerializingLockPolicy@XWinRT@@SA?AV?$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@detail@2@AEAVComLock@2@PEAJ@Z @ 0x18004C8E8 (-Write@SerializingLockPolicy@XWinRT@@SA-AV-$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@.c)
 *     ??0?$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ @ 0x18013FEFC (--0-$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ.c)
 *     ?RaiseEvent@?$VectorOptions@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@$0A@$0A@$0A@@Internal@Collections@Foundation@Windows@@SAJZZ @ 0x18013FF18 (-RaiseEvent@-$VectorOptions@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@$.c)
 *     memmove_s @ 0x1803908A8 (memmove_s.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<double,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<double>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<double>,Windows::Foundation::Collections::Internal::VectorOptions<double,0,1,0>>::SetAt(
        __int64 a1,
        unsigned int a2,
        double a3)
{
  __int64 v3; // rsi
  int v5; // ebx
  RTL_SRWLOCK *v6; // rcx
  int Destination; // [rsp+70h] [rbp+18h] BYREF
  RTL_SRWLOCK *v9; // [rsp+78h] [rbp+20h] BYREF

  Destination = 0;
  v3 = a2;
  XWinRT::SerializingLockPolicy::Write(&v9, (RTL_SRWLOCK *)(a1 + 104), &Destination);
  v5 = Destination;
  if ( Destination >= 0 )
  {
    if ( (unsigned int)v3 >= *(_DWORD *)(a1 + 72) )
    {
      v5 = -2147483637;
      RoOriginateError(2147483659LL, 0LL);
    }
    if ( v5 >= 0 )
    {
      XWinRT::detail::ReentrancyGuard<0>::ReentrancyGuard<0>((__int64)&Destination);
      v5 = 0;
      if ( memmove_s(&Destination, 8uLL, (const void *const)(*(_QWORD *)(a1 + 88) + 8 * v3), 8uLL) )
      {
        v5 = -2147418113;
        RoOriginateError(2147549183LL, 0LL);
      }
      else
      {
        *(double *)(*(_QWORD *)(a1 + 88) + 8 * v3) = a3;
        ++*(_DWORD *)(a1 + 120);
      }
    }
  }
  if ( v9 )
  {
    v6 = v9 + 1;
    if ( LODWORD(v9->Ptr) == 1 )
      LODWORD(v6->Ptr) += 0x10000000;
    else
      ReleaseSRWLockExclusive(v6);
  }
  if ( v5 >= 0 )
    return (unsigned int)Windows::Foundation::Collections::Internal::VectorOptions<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *,0,0,0>::RaiseEvent();
  return (unsigned int)v5;
}
