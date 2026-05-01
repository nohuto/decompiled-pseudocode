/*
 * XREFs of ?SetAt@?$Vector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U?$VectorOptions@PEAUHSTRING__@@$0A@$00$0A@@3456@@Internal@Collections@Foundation@Windows@@UEAAJIPEAUHSTRING__@@@Z @ 0x180339160
 * Callers:
 *     <none>
 * Callees:
 *     ?Write@SerializingLockPolicy@XWinRT@@SA?AV?$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@detail@2@AEAVComLock@2@PEAJ@Z @ 0x180034788 (-Write@SerializingLockPolicy@XWinRT@@SA-AV-$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@.c)
 *     ??0?$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ @ 0x180125E00 (--0-$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ.c)
 *     ?RaiseEvent@?$VectorOptions@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@$0A@$0A@$0A@@Internal@Collections@Foundation@Windows@@SAJZZ @ 0x180125E1C (-RaiseEvent@-$VectorOptions@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@$.c)
 *     memmove_s @ 0x1802DA9D4 (memmove_s.c)
 *     ??$?0PEAUHSTRING__@@@?$AutoValue@PEAUHSTRING__@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@@XWinRT@@QEAA@AEBQEAUHSTRING__@@PEAJ@Z @ 0x1803242FC (--$-0PEAUHSTRING__@@@-$AutoValue@PEAUHSTRING__@@U-$DefaultLifetimeTraits@PEAUHSTRING__@@@Interna.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::VectorOptions<HSTRING__ *,0,1,0>>::SetAt(
        __int64 a1,
        unsigned int a2,
        HSTRING a3)
{
  __int64 v3; // r14
  int v5; // ebx
  HSTRING v6; // rdi
  RTL_SRWLOCK *v7; // rcx
  HSTRING string; // [rsp+30h] [rbp-10h] BYREF
  RTL_SRWLOCK *v10; // [rsp+38h] [rbp-8h] BYREF
  HSTRING v11; // [rsp+70h] [rbp+30h] BYREF
  HSTRING Destination; // [rsp+78h] [rbp+38h] BYREF

  v11 = a3;
  LODWORD(Destination) = 0;
  v3 = a2;
  XWinRT::AutoValue<HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>>::AutoValue<HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>>(
    &string,
    &v11,
    (HRESULT *)&Destination);
  v5 = (int)Destination;
  v6 = 0LL;
  if ( (int)Destination >= 0 )
  {
    XWinRT::SerializingLockPolicy::Write(&v10, (RTL_SRWLOCK *)(a1 + 104), &Destination);
    v5 = (int)Destination;
    if ( (int)Destination >= 0 )
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
          *(_QWORD *)(*(_QWORD *)(a1 + 88) + 8 * v3) = string;
          string = 0LL;
          ++*(_DWORD *)(a1 + 120);
          WindowsDeleteString(0LL);
          v6 = Destination;
        }
      }
    }
    if ( v10 )
    {
      v7 = v10 + 1;
      if ( LODWORD(v10->Ptr) == 1 )
        LODWORD(v7->Ptr) += 0x10000000;
      else
        ReleaseSRWLockExclusive(v7);
    }
  }
  WindowsDeleteString(string);
  string = 0LL;
  WindowsDeleteString(v6);
  if ( v5 >= 0 )
    return (unsigned int)Windows::Foundation::Collections::Internal::VectorOptions<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *,0,0,0>::RaiseEvent();
  return (unsigned int)v5;
}
