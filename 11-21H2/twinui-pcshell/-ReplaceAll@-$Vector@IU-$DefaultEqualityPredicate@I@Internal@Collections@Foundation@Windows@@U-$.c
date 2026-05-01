/*
 * XREFs of ?ReplaceAll@?$Vector@IU?$DefaultEqualityPredicate@I@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@I@2345@U?$VectorOptions@I$0A@$00$0A@@2345@@Internal@Collections@Foundation@Windows@@UEAAJIPEAI@Z @ 0x1803E6060
 * Callers:
 *     <none>
 * Callees:
 *     ?Write@SerializingLockPolicy@XWinRT@@SA?AV?$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@detail@2@AEAVComLock@2@PEAJ@Z @ 0x180034788 (-Write@SerializingLockPolicy@XWinRT@@SA-AV-$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@.c)
 *     ??0?$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ @ 0x180125E00 (--0-$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ.c)
 *     ?RaiseEvent@?$VectorOptions@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@$0A@$0A@$0A@@Internal@Collections@Foundation@Windows@@SAJZZ @ 0x180125E1C (-RaiseEvent@-$VectorOptions@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@$.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<unsigned int,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<unsigned int>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<unsigned int>,Windows::Foundation::Collections::Internal::VectorOptions<unsigned int,0,1,0>>::ReplaceAll(
        __int64 a1,
        unsigned int a2,
        __int64 a3)
{
  __int64 v4; // rbx
  _DWORD *v6; // rax
  _DWORD *v7; // rcx
  int v8; // ebx
  __int64 v9; // rdx
  __int64 v10; // r14
  int v11; // ebp
  void *v12; // rsi
  int v13; // r15d
  void *v14; // rax
  RTL_SRWLOCK *v15; // rcx
  RTL_SRWLOCK *v17; // [rsp+30h] [rbp-28h] BYREF
  int v18; // [rsp+78h] [rbp+20h] BYREF

  v18 = 0;
  v4 = a2;
  if ( a2 )
  {
    v6 = malloc(4LL * a2);
    v7 = v6;
    if ( !v6 )
    {
      v8 = -2147024882;
      goto LABEL_16;
    }
    v18 = 0;
    v9 = v4;
    v10 = a3 - (_QWORD)v6;
    v11 = v4;
    v12 = v6;
    v13 = v4;
    do
    {
      *v7 = *(_DWORD *)((char *)v7 + v10);
      ++v7;
      --v9;
    }
    while ( v9 );
  }
  else
  {
    v11 = 0;
    v12 = 0LL;
    v13 = 0;
  }
  XWinRT::SerializingLockPolicy::Write(&v17, (RTL_SRWLOCK *)(a1 + 104), &v18);
  v8 = v18;
  if ( v18 >= 0 )
  {
    XWinRT::detail::ReentrancyGuard<0>::ReentrancyGuard<0>((__int64)&v18);
    v14 = *(void **)(a1 + 88);
    v8 = 0;
    *(_DWORD *)(a1 + 80) = 0;
    ++*(_DWORD *)(a1 + 120);
    *(_QWORD *)(a1 + 88) = v12;
    v12 = v14;
    *(_DWORD *)(a1 + 72) = v11;
    *(_DWORD *)(a1 + 76) = v13;
  }
  if ( v17 )
  {
    v15 = v17 + 1;
    if ( LODWORD(v17->Ptr) == 1 )
      LODWORD(v15->Ptr) += 0x10000000;
    else
      ReleaseSRWLockExclusive(v15);
  }
  if ( v12 )
    free(v12);
LABEL_16:
  if ( v8 >= 0 )
    return (unsigned int)Windows::Foundation::Collections::Internal::VectorOptions<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *,0,0,0>::RaiseEvent();
  return (unsigned int)v8;
}
