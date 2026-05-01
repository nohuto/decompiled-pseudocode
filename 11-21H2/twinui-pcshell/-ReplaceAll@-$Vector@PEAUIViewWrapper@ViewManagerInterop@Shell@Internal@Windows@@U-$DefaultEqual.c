/*
 * XREFs of ?ReplaceAll@?$Vector@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@U?$DefaultEqualityPredicate@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@4Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@4785@U?$VectorOptions@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@$0A@$00$0A@@4785@@Internal@Collections@Foundation@Windows@@UEAAJIPEAPEAUIViewWrapper@ViewManagerInterop@Shell@25@@Z @ 0x1802E71B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Write@SerializingLockPolicy@XWinRT@@SA?AV?$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@detail@2@AEAVComLock@2@PEAJ@Z @ 0x180034788 (-Write@SerializingLockPolicy@XWinRT@@SA-AV-$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@.c)
 *     ??0?$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ @ 0x180125E00 (--0-$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ.c)
 *     ?RaiseEvent@?$VectorOptions@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@$0A@$0A@$0A@@Internal@Collections@Foundation@Windows@@SAJZZ @ 0x180125E1C (-RaiseEvent@-$VectorOptions@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@$.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Initialize@?$GitStorageType@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@detail@XWinRT@@QEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1802E4E74 (-Initialize@-$GitStorageType@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@detail@XW.c)
 *     ?Release@ReferencedGitCookie@?$GitStorageType@UIGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@detail@XWinRT@@QEAAKXZ @ 0x1802E6DEC (-Release@ReferencedGitCookie@-$GitStorageType@UIGetCurrentActivityForViewOperationResults@Activi.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *>,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *,0,1,0>>::ReplaceAll(
        __int64 a1,
        unsigned int a2,
        __int64 *a3)
{
  int v3; // r13d
  unsigned int v4; // r14d
  __m128i *v7; // rax
  __m128i *v8; // rdi
  int v9; // ebx
  __int64 v10; // rsi
  __m128i *v11; // r15
  __int64 v12; // rdx
  unsigned int v13; // eax
  __m128i *v14; // rax
  RTL_SRWLOCK *v15; // rcx
  volatile signed __int32 **v16; // rdi
  volatile signed __int32 *v17; // rcx
  RTL_SRWLOCK *v19; // [rsp+30h] [rbp-38h] BYREF
  int v20; // [rsp+88h] [rbp+20h] BYREF

  v20 = 0;
  v3 = 0;
  v4 = a2;
  if ( a2 )
  {
    v7 = (__m128i *)malloc(16LL * a2);
    v8 = v7;
    if ( !v7 )
      return (unsigned int)-2147024882;
    v10 = 0LL;
    v11 = v7;
    while ( 1 )
    {
      v12 = *a3;
      v8->m128i_i64[0] = 0LL;
      v8->m128i_i8[8] = 0;
      v20 = XWinRT::detail::GitStorageType<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>::Initialize(
              (__int64)v8,
              v12);
      v9 = v20;
      if ( v20 < 0 )
        break;
      if ( (unsigned __int8)_mm_cvtsi128_si32(_mm_srli_si128(*v8, 8)) )
        ++v3;
      v10 = (unsigned int)(v10 + 1);
      ++a3;
      ++v8;
      if ( (unsigned int)v10 >= v4 )
        goto LABEL_11;
    }
  }
  else
  {
    v10 = 0LL;
    v11 = 0LL;
    v4 = 0;
LABEL_11:
    XWinRT::SerializingLockPolicy::Write(&v19, (RTL_SRWLOCK *)(a1 + 104), &v20);
    v9 = v20;
    if ( v20 >= 0 )
    {
      XWinRT::detail::ReentrancyGuard<0>::ReentrancyGuard<0>((__int64)&v20);
      v13 = *(_DWORD *)(a1 + 72);
      v9 = 0;
      ++*(_DWORD *)(a1 + 120);
      *(_DWORD *)(a1 + 72) = v10;
      v10 = v13;
      v14 = *(__m128i **)(a1 + 88);
      *(_QWORD *)(a1 + 88) = v11;
      v11 = v14;
      *(_DWORD *)(a1 + 76) = v4;
      *(_DWORD *)(a1 + 80) = v3;
    }
    if ( v19 )
    {
      v15 = v19 + 1;
      if ( LODWORD(v19->Ptr) == 1 )
        LODWORD(v15->Ptr) += 0x10000000;
      else
        ReleaseSRWLockExclusive(v15);
    }
  }
  if ( v11 )
  {
    if ( (_DWORD)v10 )
    {
      v16 = (volatile signed __int32 **)v11;
      do
      {
        v17 = *v16;
        if ( *((_BYTE *)v16 + 8) )
        {
          XWinRT::detail::GitStorageType<Windows::Internal::Data::Activities::IGetCurrentActivityForViewOperationResults>::ReferencedGitCookie::Release(v17);
        }
        else if ( v17 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 16LL))(v17);
        }
        *((_BYTE *)v16 + 8) = 0;
        *v16 = 0LL;
        v16 += 2;
        --v10;
      }
      while ( v10 );
    }
    free(v11);
  }
  if ( v9 >= 0 )
    return (unsigned int)Windows::Foundation::Collections::Internal::VectorOptions<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *,0,0,0>::RaiseEvent();
  return (unsigned int)v9;
}
