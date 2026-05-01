/*
 * XREFs of ?GetMany@?$Vector@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@U?$DefaultEqualityPredicate@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@4Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@4785@U?$VectorOptions@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@$0A@$00$0A@@4785@@Internal@Collections@Foundation@Windows@@UEAAJIIPEAPEAUIViewWrapper@ViewManagerInterop@Shell@25@PEAI@Z @ 0x18039B8F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Read@SerializingLockPolicy@XWinRT@@SA?AV?$LockHolder@VComLock@XWinRT@@UAcquireRead@detail@2@@detail@2@AEAVComLock@2@PEAJ@Z @ 0x180046D70 (-Read@SerializingLockPolicy@XWinRT@@SA-AV-$LockHolder@VComLock@XWinRT@@UAcquireRead@detail@2@@de.c)
 *     memset_0 @ 0x1801C750C (memset_0.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C8FA4 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1801C8FB0 (--_V@YAXPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$Construct@UIGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@InterfaceLifetimeTraits@XWinRT@@SAJPEAV?$GitStorageType@UIGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@detail@1@V231@@Z @ 0x180393CAC (--$Construct@UIGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@Inte.c)
 *     ??$Destroy@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@InterfaceLifetimeTraits@XWinRT@@SAXPEAPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180393D0C (--$Destroy@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@InterfaceLifetimeTraits@XWi.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x180397CBC (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ?Localize@ReferencedGitCookie@?$GitStorageType@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@detail@XWinRT@@QEAAJPEAPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18039D5A4 (-Localize@ReferencedGitCookie@-$GitStorageType@UIViewWrapper@ViewManagerInterop@Shell@Internal@W.c)
 *     ?Release@ReferencedGitCookie@?$GitStorageType@UIGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@detail@XWinRT@@QEAAKXZ @ 0x18039EDDC (-Release@ReferencedGitCookie@-$GitStorageType@UIGetCurrentActivityForViewOperationResults@Activi.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *>,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *,0,1,0>>::GetMany(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        void *a4,
        unsigned int *a5)
{
  unsigned int v6; // ebp
  unsigned __int64 v8; // rbx
  unsigned int v9; // esi
  unsigned int v10; // r12d
  char *v11; // r13
  size_t v12; // rax
  char *v13; // rax
  int v14; // edi
  unsigned int v15; // ecx
  unsigned int v16; // eax
  unsigned int v17; // eax
  unsigned int v18; // ebp
  _QWORD *v19; // rbx
  __int64 v20; // rcx
  RTL_SRWLOCK *v21; // rcx
  unsigned int v22; // r15d
  char *v23; // rbx
  _QWORD *v24; // r14
  unsigned int v25; // ecx
  __int64 v26; // rbp
  __int64 *v27; // r14
  char *v28; // rbx
  __int64 v29; // rsi
  void *v30; // rcx
  int v32; // [rsp+20h] [rbp-68h] BYREF
  RTL_SRWLOCK *v33; // [rsp+28h] [rbp-60h] BYREF
  __m128i v34[5]; // [rsp+30h] [rbp-58h] BYREF
  unsigned int v35; // [rsp+90h] [rbp+8h]

  v6 = a3;
  v8 = a3;
  v9 = 0;
  v10 = 0;
  v35 = 0;
  v32 = 0;
  if ( a3 )
    memset_0(a4, 0, 8LL * a3);
  *a5 = 0;
  v11 = 0LL;
  XWinRT::SerializingLockPolicy::Read(&v33, (RTL_SRWLOCK *)(a1 + 104), &v32);
  if ( !*(_DWORD *)(a1 + 80) )
    goto LABEL_11;
  v12 = 16 * v8;
  if ( !is_mul_ok(v8, 0x10uLL) )
    v12 = -1LL;
  v13 = (char *)operator new[](v12, (const struct std::nothrow_t *)&std::nothrow);
  v11 = v13;
  v34[0].m128i_i64[0] = (__int64)v13;
  if ( v13 )
    `vector constructor iterator'(
      v13,
      16LL,
      v8,
      (void (__fastcall *)(char *))XWinRT::detail::GitStorageType<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>::GitStorageType<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>);
  else
    v11 = 0LL;
  if ( v11 )
  {
LABEL_11:
    v14 = v32;
  }
  else
  {
    v14 = -2147024882;
    RoOriginateError(2147942414LL, 0LL);
  }
  if ( v14 >= 0 )
  {
    v15 = *(_DWORD *)(a1 + 72);
    v35 = v15;
    v16 = a2;
    if ( a2 > v15 )
    {
      v14 = -2147483637;
      RoOriginateError(2147483659LL, 0LL);
      v15 = v35;
      v16 = a2;
    }
    if ( v14 >= 0 && v6 )
    {
      if ( *(_DWORD *)(a1 + 80) )
      {
        do
        {
          v17 = v10 + v16;
          if ( v17 >= v15 )
            break;
          v34[0] = *(__m128i *)(*(_QWORD *)(a1 + 88) + 16LL * v17);
          v14 = XWinRT::InterfaceLifetimeTraits::Construct<Windows::Internal::Data::Activities::IGetCurrentActivityForViewOperationResults>(
                  (__int64)&v11[16 * v10],
                  v34);
          if ( v14 < 0 )
            break;
          ++v10;
          v15 = v35;
          v16 = a2;
        }
        while ( v10 < v6 );
        goto LABEL_29;
      }
      v18 = v16;
      v19 = a4;
      while ( 1 )
      {
        if ( v18 >= v15 )
        {
LABEL_28:
          v6 = a3;
          goto LABEL_29;
        }
        v34[0] = *(__m128i *)(*(_QWORD *)(a1 + 88) + 16LL * v18);
        v14 = 0;
        v20 = v34[0].m128i_i64[0];
        if ( (unsigned __int8)_mm_cvtsi128_si32(_mm_srli_si128(v34[0], 8)) )
          break;
        *v19 = v34[0].m128i_i64[0];
        if ( !v20 )
          goto LABEL_26;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 8LL))(v20);
LABEL_27:
        ++v9;
        ++v18;
        ++v19;
        v15 = v35;
        if ( v9 >= a3 )
          goto LABEL_28;
      }
      v14 = XWinRT::detail::GitStorageType<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>::ReferencedGitCookie::Localize(
              v34[0].m128i_i64[0],
              v19);
LABEL_26:
      if ( v14 < 0 )
        goto LABEL_28;
      goto LABEL_27;
    }
  }
LABEL_29:
  if ( v33 )
  {
    v21 = v33 + 1;
    if ( LODWORD(v33->Ptr) == 1 )
      --LODWORD(v21->Ptr);
    else
      ReleaseSRWLockShared(v21);
  }
  if ( v14 < 0 )
  {
LABEL_46:
    if ( v9 )
    {
      v26 = v9;
      v27 = (__int64 *)a4;
      do
      {
        XWinRT::InterfaceLifetimeTraits::Destroy<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>(v27++);
        --v26;
      }
      while ( v26 );
    }
    if ( v9 < v10 )
    {
      v28 = &v11[16 * v9];
      v29 = v10 - v9;
      do
      {
        v30 = *(void **)v28;
        if ( v28[8] )
        {
          XWinRT::detail::GitStorageType<Windows::Internal::Data::Activities::IGetCurrentActivityForViewOperationResults>::ReferencedGitCookie::Release(v30);
        }
        else if ( v30 )
        {
          (*(void (__fastcall **)(void *))(*(_QWORD *)v30 + 16LL))(v30);
        }
        v28[8] = 0;
        *(_QWORD *)v28 = 0LL;
        v28 += 16;
        --v29;
      }
      while ( v29 );
    }
  }
  else
  {
    if ( v10 )
    {
      v22 = 0;
      if ( v6 )
      {
        v23 = v11;
        v24 = a4;
        v25 = v35;
        do
        {
          if ( v22 + a2 >= v25 )
            break;
          *v24 = 0LL;
          if ( v23[8] )
          {
            v14 = XWinRT::detail::GitStorageType<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>::ReferencedGitCookie::Localize(
                    *(_QWORD *)v23,
                    v24);
            if ( v14 < 0 )
              goto LABEL_46;
            XWinRT::detail::GitStorageType<Windows::Internal::Data::Activities::IGetCurrentActivityForViewOperationResults>::ReferencedGitCookie::Release(*(void **)v23);
            v23[8] = 0;
            *(_QWORD *)v23 = 0LL;
            v25 = v35;
          }
          else
          {
            *v24 = *(_QWORD *)v23;
            *(_QWORD *)v23 = 0LL;
            v14 = 0;
          }
          ++v9;
          ++v22;
          ++v24;
          v23 += 16;
        }
        while ( v22 < v6 );
      }
    }
    *a5 = v9;
  }
  operator delete[](v11);
  return (unsigned int)v14;
}
