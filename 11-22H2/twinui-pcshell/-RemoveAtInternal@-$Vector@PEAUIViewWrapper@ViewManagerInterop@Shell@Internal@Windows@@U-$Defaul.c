/*
 * XREFs of ?RemoveAtInternal@?$Vector@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@U?$DefaultEqualityPredicate@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@4Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@4785@U?$VectorOptions@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@$0A@$00$0A@@4785@@Internal@Collections@Foundation@Windows@@AEAAJI_N@Z @ 0x18039EF20
 * Callers:
 *     ?RemoveAt@?$Vector@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@U?$DefaultEqualityPredicate@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@4Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@4785@U?$VectorOptions@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@$0A@$00$0A@@4785@@Internal@Collections@Foundation@Windows@@UEAAJI@Z @ 0x18039EF00 (-RemoveAt@-$Vector@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@U-$DefaultEqualit.c)
 *     ?RemoveAtEnd@?$Vector@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@U?$DefaultEqualityPredicate@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@4Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@4785@U?$VectorOptions@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@$0A@$00$0A@@4785@@Internal@Collections@Foundation@Windows@@UEAAJXZ @ 0x18039EF10 (-RemoveAtEnd@-$Vector@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@U-$DefaultEqua.c)
 * Callees:
 *     ?Write@SerializingLockPolicy@XWinRT@@SA?AV?$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@detail@2@AEAVComLock@2@PEAJ@Z @ 0x18004C8E8 (-Write@SerializingLockPolicy@XWinRT@@SA-AV-$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@.c)
 *     ??0?$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ @ 0x18013FEFC (--0-$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ.c)
 *     ?RaiseEvent@?$VectorOptions@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@$0A@$0A@$0A@@Internal@Collections@Foundation@Windows@@SAJZZ @ 0x18013FF18 (-RaiseEvent@-$VectorOptions@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@$.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     memmove_s @ 0x1803908A8 (memmove_s.c)
 *     ?Release@ReferencedGitCookie@?$GitStorageType@UIGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@detail@XWinRT@@QEAAKXZ @ 0x18039EDDC (-Release@ReferencedGitCookie@-$GitStorageType@UIGetCurrentActivityForViewOperationResults@Activi.c)
 *     ?ResizeStorage@?$Vector@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@U?$DefaultEqualityPredicate@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@4Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@4785@U?$VectorOptions@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@$0A@$00$0A@@4785@@Internal@Collections@Foundation@Windows@@AEAAJI@Z @ 0x18039FB8C (-ResizeStorage@-$Vector@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@U-$DefaultEq.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *>,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *,0,1,0>>::RemoveAtInternal(
        __int64 a1,
        unsigned int a2,
        char a3)
{
  volatile signed __int32 *v6; // r14
  int v7; // ebx
  unsigned int *v8; // rsi
  __int64 v9; // r9
  __m128i *v10; // rcx
  unsigned int v11; // r9d
  unsigned int v12; // r8d
  RTL_SRWLOCK *v13; // rcx
  __m128i v15; // [rsp+30h] [rbp-10h]
  int v16; // [rsp+70h] [rbp+30h] BYREF
  RTL_SRWLOCK *v17; // [rsp+88h] [rbp+48h] BYREF

  v16 = 0;
  v6 = 0LL;
  v15.m128i_i8[8] = 0;
  XWinRT::SerializingLockPolicy::Write(&v17, (RTL_SRWLOCK *)(a1 + 104), &v16);
  v7 = v16;
  if ( v16 >= 0 )
  {
    v8 = (unsigned int *)(a1 + 72);
    if ( a3 )
      a2 = *v8 - 1;
    if ( a2 >= *v8 )
    {
      v7 = -2147483637;
      RoOriginateError(2147483659LL, 0LL);
    }
    if ( v7 >= 0 )
    {
      XWinRT::detail::ReentrancyGuard<0>::ReentrancyGuard<0>((__int64)&v16);
      v7 = 0;
      v9 = *(_QWORD *)(a1 + 88);
      v10 = (__m128i *)(v9 + 16LL * a2);
      if ( (unsigned __int8)_mm_cvtsi128_si32(_mm_srli_si128(*v10, 8)) )
        --*(_DWORD *)(a1 + 80);
      v15 = *v10;
      if ( a2 < *v8 - 1
        && memmove_s(v10, 16LL * (*v8 - a2 - 1), (const void *const)(v9 + 16LL * (a2 + 1)), 16LL * (*v8 - a2 - 1)) )
      {
        v7 = -2147418113;
        RoOriginateError(2147549183LL, 0LL);
      }
      else
      {
        ++*(_DWORD *)(a1 + 120);
        --*v8;
        v11 = *(_DWORD *)(a1 + 76);
        if ( *v8 < v11 / 3 )
        {
          v12 = 1;
          if ( v11 - 1 >= v11 - v11 / 3 )
            v12 = v11 / 3;
          v7 = Windows::Foundation::Collections::Internal::Vector<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *>,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *,0,1,0>>::ResizeStorage(
                 a1,
                 v11 - v12);
        }
      }
      v6 = (volatile signed __int32 *)v15.m128i_i64[0];
    }
  }
  if ( v17 )
  {
    v13 = v17 + 1;
    if ( LODWORD(v17->Ptr) == 1 )
      LODWORD(v13->Ptr) += 0x10000000;
    else
      ReleaseSRWLockExclusive(v13);
  }
  if ( v15.m128i_i8[8] )
  {
    XWinRT::detail::GitStorageType<Windows::Internal::Data::Activities::IGetCurrentActivityForViewOperationResults>::ReferencedGitCookie::Release(v6);
  }
  else if ( v6 )
  {
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v6 + 16LL))(v6);
  }
  if ( v7 >= 0 )
    return (unsigned int)Windows::Foundation::Collections::Internal::VectorOptions<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *,0,0,0>::RaiseEvent();
  return (unsigned int)v7;
}
