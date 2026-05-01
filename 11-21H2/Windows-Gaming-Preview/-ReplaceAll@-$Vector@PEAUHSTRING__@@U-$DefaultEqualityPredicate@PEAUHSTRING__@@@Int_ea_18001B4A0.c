/*
 * XREFs of ?ReplaceAll@?$Vector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U?$DefaultVectorOptions@PEAUHSTRING__@@@3456@@Internal@Collections@Foundation@Windows@@UEAAJIPEAPEAUHSTRING__@@@Z @ 0x18001B4A0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ @ 0x18000DDD4 (--0-$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ.c)
 *     ?RaiseEvent@?$VectorOptions@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@$0A@$00$0A@@Internal@Collections@Foundation@Windows@@SAJZZ @ 0x18000E470 (-RaiseEvent@-$VectorOptions@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@$0A@$00$0.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<HSTRING__ *>>::ReplaceAll(
        __int64 a1,
        unsigned int a2,
        HSTRING *a3)
{
  unsigned int v3; // r15d
  HSTRING *v6; // r14
  HRESULT v7; // edi
  __int64 v8; // rsi
  RTL_SRWLOCK *v9; // rcx
  unsigned int v10; // eax
  HSTRING *v11; // rax
  RTL_SRWLOCK *v12; // rcx
  HSTRING *v13; // rbx
  char v15; // [rsp+68h] [rbp+20h] BYREF

  v3 = a2;
  if ( a2 )
  {
    v6 = (HSTRING *)malloc(8LL * a2);
    if ( !v6 )
      return (unsigned int)-2147024882;
    v8 = 0LL;
    while ( 1 )
    {
      v7 = WindowsDuplicateString(*a3, &v6[v8]);
      if ( v7 < 0 )
        break;
      v8 = (unsigned int)(v8 + 1);
      ++a3;
      if ( (unsigned int)v8 >= v3 )
        goto LABEL_9;
    }
  }
  else
  {
    LODWORD(v8) = 0;
    v6 = 0LL;
    v3 = 0;
LABEL_9:
    v9 = (RTL_SRWLOCK *)(a1 + 80);
    if ( *(_DWORD *)(a1 + 72) == 1 )
    {
      if ( !LODWORD(v9->Ptr) )
        LODWORD(v9->Ptr) = -268435456;
    }
    else
    {
      AcquireSRWLockExclusive(v9);
    }
    XWinRT::detail::ReentrancyGuard<0>::ReentrancyGuard<0>((__int64)&v15);
    v10 = *(_DWORD *)(a1 + 40);
    v7 = 0;
    *(_DWORD *)(a1 + 48) = 0;
    ++*(_DWORD *)(a1 + 88);
    *(_DWORD *)(a1 + 40) = v8;
    v8 = v10;
    v11 = *(HSTRING **)(a1 + 56);
    *(_QWORD *)(a1 + 56) = v6;
    v6 = v11;
    *(_DWORD *)(a1 + 44) = v3;
    if ( a1 != -72 )
    {
      v12 = (RTL_SRWLOCK *)(a1 + 80);
      if ( *(_DWORD *)(a1 + 72) == 1 )
        LODWORD(v12->Ptr) += 0x10000000;
      else
        ReleaseSRWLockExclusive(v12);
    }
  }
  if ( v6 )
  {
    if ( (_DWORD)v8 )
    {
      v13 = v6;
      do
      {
        WindowsDeleteString(*v13);
        *v13++ = 0LL;
        --v8;
      }
      while ( v8 );
    }
    free(v6);
  }
  if ( v7 >= 0 )
    return (unsigned int)Windows::Foundation::Collections::Internal::VectorOptions<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *,0,1,0>::RaiseEvent();
  return (unsigned int)v7;
}
