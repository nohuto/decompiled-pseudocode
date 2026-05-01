/*
 * XREFs of ?ReplaceAll@?$Vector@IU?$DefaultEqualityPredicate@I@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@I@2345@U?$VectorOptions@I$0A@$00$0A@@2345@@Internal@Collections@Foundation@Windows@@UEAAJIPEAI@Z @ 0x1804C91B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Write@SerializingLockPolicy@XWinRT@@SA?AV?$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@detail@2@AEAVComLock@2@PEAJ@Z @ 0x18004C8E8 (-Write@SerializingLockPolicy@XWinRT@@SA-AV-$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@.c)
 *     ??0?$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ @ 0x18013FEFC (--0-$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ.c)
 *     ?RaiseEvent@?$VectorOptions@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@$0A@$0A@$0A@@Internal@Collections@Foundation@Windows@@SAJZZ @ 0x18013FF18 (-RaiseEvent@-$VectorOptions@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@$.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<unsigned int,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<unsigned int>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<unsigned int>,Windows::Foundation::Collections::Internal::VectorOptions<unsigned int,0,1,0>>::ReplaceAll(
        __int64 a1,
        unsigned int a2,
        __int64 a3)
{
  int v3; // ebx
  __int64 v4; // rbp
  int v5; // r14d
  void *v8; // rax
  void *v9; // rsi
  _DWORD *v10; // rcx
  __int64 v11; // r15
  __int64 v12; // rdx
  void *v13; // rax
  RTL_SRWLOCK *v14; // rcx
  RTL_SRWLOCK *v16; // [rsp+30h] [rbp-28h] BYREF
  int v17; // [rsp+78h] [rbp+20h] BYREF

  v3 = 0;
  v4 = a2;
  v5 = 0;
  v17 = 0;
  if ( a2 )
  {
    v8 = malloc(4LL * a2);
    v9 = v8;
    if ( v8 )
    {
      v5 = v4;
      v10 = v8;
      v11 = a3 - (_QWORD)v8;
      v12 = v4;
      do
      {
        *v10 = *(_DWORD *)((char *)v10 + v11);
        ++v10;
        --v12;
      }
      while ( v12 );
    }
    else
    {
      v3 = -2147024882;
      LODWORD(v4) = 0;
      v17 = -2147024882;
    }
  }
  else
  {
    LODWORD(v4) = 0;
    v9 = 0LL;
  }
  if ( v3 >= 0 )
  {
    XWinRT::SerializingLockPolicy::Write(&v16, (RTL_SRWLOCK *)(a1 + 104), &v17);
    v3 = v17;
    if ( v17 >= 0 )
    {
      XWinRT::detail::ReentrancyGuard<0>::ReentrancyGuard<0>((__int64)&v17);
      v13 = *(void **)(a1 + 88);
      v3 = 0;
      *(_DWORD *)(a1 + 80) = 0;
      ++*(_DWORD *)(a1 + 120);
      *(_QWORD *)(a1 + 88) = v9;
      v9 = v13;
      *(_DWORD *)(a1 + 72) = v4;
      *(_DWORD *)(a1 + 76) = v5;
    }
    if ( v16 )
    {
      v14 = v16 + 1;
      if ( LODWORD(v16->Ptr) == 1 )
        LODWORD(v14->Ptr) += 0x10000000;
      else
        ReleaseSRWLockExclusive(v14);
    }
  }
  if ( v9 )
    free(v9);
  if ( v3 >= 0 )
    return (unsigned int)Windows::Foundation::Collections::Internal::VectorOptions<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *,0,0,0>::RaiseEvent();
  return (unsigned int)v3;
}
