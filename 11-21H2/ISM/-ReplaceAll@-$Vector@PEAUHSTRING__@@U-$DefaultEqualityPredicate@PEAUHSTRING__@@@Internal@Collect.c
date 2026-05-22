/*
 * XREFs of ?ReplaceAll@?$Vector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U?$DefaultVectorOptions@PEAUHSTRING__@@@3456@@Internal@Collections@Foundation@Windows@@UEAAJIPEAPEAUHSTRING__@@@Z @ 0x18016B910
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ @ 0x180163CD8 (--0-$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ.c)
 *     ?RaiseEvent@?$VectorOptions@PEAUHSTRING__@@$0A@$0A@$0A@@Internal@Collections@Foundation@Windows@@SAJZZ @ 0x18016B360 (-RaiseEvent@-$VectorOptions@PEAUHSTRING__@@$0A@$0A@$0A@@Internal@Collections@Foundation@Windows@.c)
 *     ?Write@SerializingLockPolicy@XWinRT@@SA?AV?$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@detail@2@AEAVComLock@2@PEAJ@Z @ 0x18016CFFC (-Write@SerializingLockPolicy@XWinRT@@SA-AV-$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<HSTRING__ *>>::ReplaceAll(
        __int64 a1,
        unsigned int a2,
        HSTRING *a3)
{
  unsigned int v4; // r14d
  HSTRING *v6; // rsi
  int v7; // ebx
  __int64 v8; // rdi
  unsigned int v9; // eax
  HSTRING *v10; // rax
  RTL_SRWLOCK *v11; // rcx
  HSTRING *v12; // r14
  RTL_SRWLOCK *v14; // [rsp+30h] [rbp-28h] BYREF
  HRESULT v15; // [rsp+78h] [rbp+20h] BYREF

  v15 = 0;
  v4 = a2;
  if ( a2 )
  {
    v6 = (HSTRING *)malloc(8LL * a2);
    if ( !v6 )
      return (unsigned int)-2147024882;
    v8 = 0LL;
    while ( 1 )
    {
      v15 = WindowsDuplicateString(*a3, &v6[v8]);
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
    XWinRT::SerializingLockPolicy::Write(&v14, a1 + 72, &v15);
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
      v10 = *(HSTRING **)(a1 + 56);
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
        WindowsDeleteString(*v12);
        *v12++ = 0LL;
        --v8;
      }
      while ( v8 );
    }
    free(v6);
  }
  if ( v7 >= 0 )
    return (unsigned int)Windows::Foundation::Collections::Internal::VectorOptions<HSTRING__ *,0,0,0>::RaiseEvent();
  return (unsigned int)v7;
}
