/*
 * XREFs of ?SetAt@?$Vector@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@U?$DefaultEqualityPredicate@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@4Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@4785@U?$VectorOptions@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@$0A@$00$0A@@4785@@Internal@Collections@Foundation@Windows@@UEAAJIPEAUIViewWrapper@ViewManagerInterop@Shell@25@@Z @ 0x1803A00D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Write@SerializingLockPolicy@XWinRT@@SA?AV?$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@detail@2@AEAVComLock@2@PEAJ@Z @ 0x18004C8E8 (-Write@SerializingLockPolicy@XWinRT@@SA-AV-$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@.c)
 *     ??0?$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ @ 0x18013FEFC (--0-$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ.c)
 *     ?RaiseEvent@?$VectorOptions@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@$0A@$0A@$0A@@Internal@Collections@Foundation@Windows@@SAJZZ @ 0x18013FF18 (-RaiseEvent@-$VectorOptions@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@$.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     memmove_s @ 0x1803908A8 (memmove_s.c)
 *     ??$?0PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@?$AutoValue@V?$GitStorageType@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@detail@XWinRT@@U?$DefaultLifetimeTraits@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Internal@Collections@Foundation@Windows@@@XWinRT@@QEAA@AEBQEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAJ@Z @ 0x18039334C (--$-0PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@-$AutoValue@V-$GitStorageType@.c)
 *     ?Release@ReferencedGitCookie@?$GitStorageType@UIGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@detail@XWinRT@@QEAAKXZ @ 0x18039EDDC (-Release@ReferencedGitCookie@-$GitStorageType@UIGetCurrentActivityForViewOperationResults@Activi.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *>,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *,0,1,0>>::SetAt(
        __int64 a1,
        unsigned int a2,
        __int64 a3)
{
  __int64 v3; // r15
  volatile signed __int32 *v5; // r14
  int v6; // ebx
  volatile signed __int32 *v7; // rsi
  RTL_SRWLOCK *v8; // rcx
  RTL_SRWLOCK *v10; // [rsp+30h] [rbp-40h] BYREF
  void *v11[2]; // [rsp+38h] [rbp-38h] BYREF
  __int128 v12; // [rsp+50h] [rbp-20h]
  __int128 Destination; // [rsp+60h] [rbp-10h] BYREF
  __int64 v14; // [rsp+B0h] [rbp+40h] BYREF
  int v15; // [rsp+B8h] [rbp+48h] BYREF

  v14 = a3;
  v3 = a2;
  v15 = 0;
  v5 = 0LL;
  *(_QWORD *)&v12 = 0LL;
  BYTE8(v12) = 0;
  XWinRT::AutoValue<XWinRT::detail::GitStorageType<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *>>::AutoValue<XWinRT::detail::GitStorageType<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *>>(
    (__int64)v11,
    &v14,
    &v15);
  v6 = v15;
  if ( v15 < 0 )
  {
    v7 = (volatile signed __int32 *)v11[0];
    goto LABEL_18;
  }
  XWinRT::SerializingLockPolicy::Write(&v10, (RTL_SRWLOCK *)(a1 + 104), &v15);
  v6 = v15;
  if ( v15 >= 0 )
  {
    if ( (unsigned int)v3 >= *(_DWORD *)(a1 + 72) )
    {
      v6 = -2147483637;
      RoOriginateError(2147483659LL, 0LL);
    }
    if ( v6 >= 0 )
    {
      XWinRT::detail::ReentrancyGuard<0>::ReentrancyGuard<0>((__int64)&v15);
      v6 = 0;
      *(_QWORD *)&Destination = 0LL;
      BYTE8(Destination) = 0;
      if ( !memmove_s(&Destination, 0x10uLL, (const void *const)(16 * v3 + *(_QWORD *)(a1 + 88)), 0x10uLL) )
      {
        *(_OWORD *)(*(_QWORD *)(a1 + 88) + 16 * v3) = *(_OWORD *)v11;
        v7 = 0LL;
        LOBYTE(v11[1]) = 0;
        ++*(_DWORD *)(a1 + 120);
        v12 = Destination;
        if ( (unsigned __int8)_mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)(*(_QWORD *)(a1 + 88) + 16 * v3), 8)) )
          ++*(_DWORD *)(a1 + 80);
        v5 = (volatile signed __int32 *)v12;
        if ( BYTE8(Destination) )
          --*(_DWORD *)(a1 + 80);
        goto LABEL_9;
      }
      v6 = -2147418113;
      RoOriginateError(2147549183LL, 0LL);
    }
  }
  v7 = (volatile signed __int32 *)v11[0];
LABEL_9:
  if ( v10 )
  {
    v8 = v10 + 1;
    if ( LODWORD(v10->Ptr) == 1 )
      LODWORD(v8->Ptr) += 0x10000000;
    else
      ReleaseSRWLockExclusive(v8);
  }
LABEL_18:
  if ( LOBYTE(v11[1]) )
  {
    XWinRT::detail::GitStorageType<Windows::Internal::Data::Activities::IGetCurrentActivityForViewOperationResults>::ReferencedGitCookie::Release(v7);
  }
  else if ( v7 )
  {
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 16LL))(v7);
  }
  if ( BYTE8(v12) )
  {
    XWinRT::detail::GitStorageType<Windows::Internal::Data::Activities::IGetCurrentActivityForViewOperationResults>::ReferencedGitCookie::Release(v5);
  }
  else if ( v5 )
  {
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v5 + 16LL))(v5);
  }
  if ( v6 >= 0 )
    return (unsigned int)Windows::Foundation::Collections::Internal::VectorOptions<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *,0,0,0>::RaiseEvent();
  return (unsigned int)v6;
}
