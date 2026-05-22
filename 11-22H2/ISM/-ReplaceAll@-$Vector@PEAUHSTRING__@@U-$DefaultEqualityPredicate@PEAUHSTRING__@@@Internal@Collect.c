/*
 * XREFs of ?ReplaceAll@?$Vector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U?$DefaultVectorOptions@PEAUHSTRING__@@@3456@@Internal@Collections@Foundation@Windows@@UEAAJIPEAPEAUHSTRING__@@@Z @ 0x180198DF0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ @ 0x18019112C (--0-$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ.c)
 *     ?RaiseEvent@?$VectorOptions@PEAUHSTRING__@@$0A@$0A@$0A@@Internal@Collections@Foundation@Windows@@SAJZZ @ 0x180198830 (-RaiseEvent@-$VectorOptions@PEAUHSTRING__@@$0A@$0A@$0A@@Internal@Collections@Foundation@Windows@.c)
 *     ?Write@SerializingLockPolicy@XWinRT@@SA?AV?$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@detail@2@AEAVComLock@2@PEAJ@Z @ 0x18019A504 (-Write@SerializingLockPolicy@XWinRT@@SA-AV-$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<HSTRING__ *>>::ReplaceAll(
        __int64 a1,
        unsigned int a2,
        HSTRING *a3)
{
  int v3; // ebx
  unsigned int v5; // r14d
  HSTRING *v8; // rsi
  __int64 v9; // rdi
  unsigned int v10; // eax
  HSTRING *v11; // rax
  RTL_SRWLOCK *v12; // rcx
  HSTRING *v13; // r14
  RTL_SRWLOCK *v15; // [rsp+30h] [rbp-28h] BYREF
  HRESULT v16; // [rsp+78h] [rbp+20h] BYREF

  v3 = 0;
  v5 = 0;
  v16 = 0;
  if ( !a2 )
  {
    v9 = 0LL;
    v8 = 0LL;
LABEL_9:
    if ( v3 >= 0 )
    {
      XWinRT::SerializingLockPolicy::Write(&v15, a1 + 72, &v16);
      v3 = v16;
      if ( v16 >= 0 )
      {
        XWinRT::detail::ReentrancyGuard<0>::ReentrancyGuard<0>((__int64)&v16);
        v10 = *(_DWORD *)(a1 + 40);
        v3 = 0;
        *(_DWORD *)(a1 + 48) = 0;
        ++*(_DWORD *)(a1 + 88);
        *(_DWORD *)(a1 + 40) = v9;
        v9 = v10;
        v11 = *(HSTRING **)(a1 + 56);
        *(_QWORD *)(a1 + 56) = v8;
        v8 = v11;
        *(_DWORD *)(a1 + 44) = v5;
      }
      if ( v15 )
      {
        v12 = v15 + 1;
        if ( LODWORD(v15->Ptr) == 1 )
          LODWORD(v12->Ptr) += 0x10000000;
        else
          ReleaseSRWLockExclusive(v12);
      }
    }
    goto LABEL_16;
  }
  v8 = (HSTRING *)malloc(8LL * a2);
  if ( !v8 )
  {
    v3 = -2147024882;
    v9 = 0LL;
    v16 = -2147024882;
    goto LABEL_9;
  }
  v5 = a2;
  v9 = 0LL;
  while ( 1 )
  {
    v16 = WindowsDuplicateString(*a3, &v8[v9]);
    v3 = v16;
    if ( v16 < 0 )
      break;
    v9 = (unsigned int)(v9 + 1);
    ++a3;
    if ( (unsigned int)v9 >= v5 )
      goto LABEL_9;
  }
LABEL_16:
  if ( v8 )
  {
    if ( (_DWORD)v9 )
    {
      v13 = v8;
      do
      {
        WindowsDeleteString(*v13);
        *v13++ = 0LL;
        --v9;
      }
      while ( v9 );
    }
    free(v8);
  }
  if ( v3 >= 0 )
    return (unsigned int)Windows::Foundation::Collections::Internal::VectorOptions<HSTRING__ *,0,0,0>::RaiseEvent();
  return (unsigned int)v3;
}
