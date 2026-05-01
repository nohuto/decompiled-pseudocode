/*
 * XREFs of ?ReplaceAll@?$Vector@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@U?$DefaultEqualityPredicate@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@4Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@4785@U?$VectorOptions@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@$0A@$00$0A@@4785@@Internal@Collections@Foundation@Windows@@UEAAJIPEAPEAUIViewWrapper@ViewManagerInterop@Shell@25@@Z @ 0x18039F1D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Write@SerializingLockPolicy@XWinRT@@SA?AV?$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@detail@2@AEAVComLock@2@PEAJ@Z @ 0x18004C8E8 (-Write@SerializingLockPolicy@XWinRT@@SA-AV-$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@.c)
 *     ??0?$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ @ 0x18013FEFC (--0-$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ.c)
 *     ?RaiseEvent@?$VectorOptions@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@$0A@$0A@$0A@@Internal@Collections@Foundation@Windows@@SAJZZ @ 0x18013FF18 (-RaiseEvent@-$VectorOptions@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@$.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Initialize@?$GitStorageType@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@detail@XWinRT@@QEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18039CCC0 (-Initialize@-$GitStorageType@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@detail@XW.c)
 *     ?Release@ReferencedGitCookie@?$GitStorageType@UIGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@detail@XWinRT@@QEAAKXZ @ 0x18039EDDC (-Release@ReferencedGitCookie@-$GitStorageType@UIGetCurrentActivityForViewOperationResults@Activi.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *>,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *,0,1,0>>::ReplaceAll(
        __int64 a1,
        unsigned int a2,
        __int64 *a3)
{
  int v3; // ebx
  unsigned int v5; // r15d
  int v6; // r13d
  __m128i *v9; // rax
  __int64 v10; // rsi
  __m128i *v11; // rbp
  __m128i *v12; // rdi
  __int64 v13; // rdx
  unsigned int v14; // eax
  __m128i *v15; // rax
  RTL_SRWLOCK *v16; // rcx
  volatile signed __int32 **v17; // rdi
  volatile signed __int32 *v18; // rcx
  RTL_SRWLOCK *v20; // [rsp+30h] [rbp-38h] BYREF
  int v21; // [rsp+88h] [rbp+20h] BYREF

  v3 = 0;
  v5 = 0;
  v21 = 0;
  v6 = 0;
  if ( !a2 )
  {
    v10 = 0LL;
    v11 = 0LL;
LABEL_11:
    if ( v3 >= 0 )
    {
      XWinRT::SerializingLockPolicy::Write(&v20, (RTL_SRWLOCK *)(a1 + 104), &v21);
      v3 = v21;
      if ( v21 >= 0 )
      {
        XWinRT::detail::ReentrancyGuard<0>::ReentrancyGuard<0>((__int64)&v21);
        v14 = *(_DWORD *)(a1 + 72);
        v3 = 0;
        ++*(_DWORD *)(a1 + 120);
        *(_DWORD *)(a1 + 72) = v10;
        v10 = v14;
        v15 = *(__m128i **)(a1 + 88);
        *(_QWORD *)(a1 + 88) = v11;
        v11 = v15;
        *(_DWORD *)(a1 + 76) = v5;
        *(_DWORD *)(a1 + 80) = v6;
      }
      if ( v20 )
      {
        v16 = v20 + 1;
        if ( LODWORD(v20->Ptr) == 1 )
          LODWORD(v16->Ptr) += 0x10000000;
        else
          ReleaseSRWLockExclusive(v16);
      }
    }
    goto LABEL_18;
  }
  v9 = (__m128i *)malloc(16LL * a2);
  v10 = 0LL;
  v11 = v9;
  if ( !v9 )
  {
    v3 = -2147024882;
    v21 = -2147024882;
    goto LABEL_11;
  }
  v5 = a2;
  v12 = v9;
  while ( 1 )
  {
    v13 = *a3;
    v12->m128i_i64[0] = 0LL;
    v12->m128i_i8[8] = 0;
    v21 = XWinRT::detail::GitStorageType<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>::Initialize(
            (__int64)v12,
            v13);
    v3 = v21;
    if ( v21 < 0 )
      break;
    if ( (unsigned __int8)_mm_cvtsi128_si32(_mm_srli_si128(*v12, 8)) )
      ++v6;
    v10 = (unsigned int)(v10 + 1);
    ++a3;
    ++v12;
    if ( (unsigned int)v10 >= v5 )
      goto LABEL_11;
  }
LABEL_18:
  if ( v11 )
  {
    if ( (_DWORD)v10 )
    {
      v17 = (volatile signed __int32 **)v11;
      do
      {
        v18 = *v17;
        if ( *((_BYTE *)v17 + 8) )
        {
          XWinRT::detail::GitStorageType<Windows::Internal::Data::Activities::IGetCurrentActivityForViewOperationResults>::ReferencedGitCookie::Release(v18);
        }
        else if ( v18 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 16LL))(v18);
        }
        *v17 = 0LL;
        *((_BYTE *)v17 + 8) = 0;
        v17 += 2;
        --v10;
      }
      while ( v10 );
    }
    free(v11);
  }
  if ( v3 >= 0 )
    return (unsigned int)Windows::Foundation::Collections::Internal::VectorOptions<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *,0,0,0>::RaiseEvent();
  return (unsigned int)v3;
}
