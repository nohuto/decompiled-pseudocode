/*
 * XREFs of ?ReplaceAll@?$Vector@PEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@U?$DefaultEqualityPredicate@PEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@4Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@4785@U?$DefaultVectorOptions@PEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@4785@@Internal@Collections@Foundation@Windows@@UEAAJIPEAPEAUISwitchItem@Multitasking@ComposableShell@25@@Z @ 0x180457360
 * Callers:
 *     <none>
 * Callees:
 *     ??$Construct@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@InterfaceLifetimeTraits@XWinRT@@SAJPEAPEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@PEAU23456@@Z @ 0x180027304 (--$Construct@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@InterfaceLifetimeTrait.c)
 *     ??$Destroy@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@InterfaceLifetimeTraits@XWinRT@@SAXPEAPEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x18002D0B0 (--$Destroy@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@InterfaceLifetimeTraits@.c)
 *     ?Write@SerializingLockPolicy@XWinRT@@SA?AV?$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@detail@2@AEAVComLock@2@PEAJ@Z @ 0x180034788 (-Write@SerializingLockPolicy@XWinRT@@SA-AV-$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@.c)
 *     ??0?$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ @ 0x180125E00 (--0-$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ.c)
 *     ?RaiseEvent@?$VectorOptions@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@$0A@$0A@$0A@@Internal@Collections@Foundation@Windows@@SAJZZ @ 0x180125E1C (-RaiseEvent@-$VectorOptions@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@$.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<Windows::Internal::ComposableShell::Multitasking::ISwitchItem *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Internal::ComposableShell::Multitasking::ISwitchItem *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Internal::ComposableShell::Multitasking::ISwitchItem *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Internal::ComposableShell::Multitasking::ISwitchItem *>>::ReplaceAll(
        __int64 a1,
        unsigned int a2,
        __int64 *a3)
{
  unsigned int v4; // r14d
  __int64 *v6; // rsi
  int v7; // ebx
  __int64 v8; // rdi
  unsigned int v9; // eax
  __int64 *v10; // rax
  RTL_SRWLOCK *v11; // rcx
  __int64 *v12; // r14
  RTL_SRWLOCK *v14; // [rsp+30h] [rbp-28h] BYREF
  int v15; // [rsp+78h] [rbp+20h] BYREF

  v15 = 0;
  v4 = a2;
  if ( a2 )
  {
    v6 = (__int64 *)malloc(8LL * a2);
    if ( !v6 )
      return (unsigned int)-2147024882;
    v8 = 0LL;
    while ( 1 )
    {
      v15 = XWinRT::InterfaceLifetimeTraits::Construct<Windows::Internal::ComposableShell::Multitasking::ISwitchItem>(
              &v6[v8],
              *a3);
      v7 = v15;
      if ( v15 < 0 )
        break;
      v8 = (unsigned int)(v8 + 1);
      ++a3;
      if ( (unsigned int)v8 >= v4 )
        goto LABEL_9;
    }
  }
  else
  {
    v8 = 0LL;
    v6 = 0LL;
    v4 = 0;
LABEL_9:
    XWinRT::SerializingLockPolicy::Write(&v14, (RTL_SRWLOCK *)(a1 + 72), &v15);
    v7 = v15;
    if ( v15 >= 0 )
    {
      XWinRT::detail::ReentrancyGuard<0>::ReentrancyGuard<0>((__int64)&v15);
      v9 = *(_DWORD *)(a1 + 40);
      v7 = 0;
      *(_DWORD *)(a1 + 48) = 0;
      ++*(_DWORD *)(a1 + 88);
      *(_DWORD *)(a1 + 40) = v8;
      v8 = v9;
      v10 = *(__int64 **)(a1 + 56);
      *(_QWORD *)(a1 + 56) = v6;
      v6 = v10;
      *(_DWORD *)(a1 + 44) = v4;
    }
    if ( v14 )
    {
      v11 = v14 + 1;
      if ( LODWORD(v14->Ptr) == 1 )
        LODWORD(v11->Ptr) += 0x10000000;
      else
        ReleaseSRWLockExclusive(v11);
    }
  }
  if ( v6 )
  {
    if ( (_DWORD)v8 )
    {
      v12 = v6;
      do
      {
        XWinRT::InterfaceLifetimeTraits::Destroy<Windows::Internal::ComposableShell::Multitasking::ISwitchItem>(v12++);
        --v8;
      }
      while ( v8 );
    }
    free(v6);
  }
  if ( v7 >= 0 )
    return (unsigned int)Windows::Foundation::Collections::Internal::VectorOptions<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *,0,0,0>::RaiseEvent();
  return (unsigned int)v7;
}
