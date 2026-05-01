/*
 * XREFs of ?ReplaceAll@?$Vector@U_GUID@@U?$DefaultEqualityPredicate@U_GUID@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@U_GUID@@@3456@U?$VectorOptions@U_GUID@@$0A@$00$0A@@3456@@Internal@Collections@Foundation@Windows@@UEAAJIPEAU_GUID@@@Z @ 0x1800328D0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ @ 0x18000DDD4 (--0-$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ.c)
 *     ?RaiseEvent@?$VectorOptions@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@$0A@$00$0A@@Internal@Collections@Foundation@Windows@@SAJZZ @ 0x18000E470 (-RaiseEvent@-$VectorOptions@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@$0A@$00$0.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<_GUID,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,Windows::Foundation::Collections::Internal::VectorOptions<_GUID,0,1,0>>::ReplaceAll(
        __int64 a1,
        unsigned int a2,
        __int64 a3)
{
  __int64 v3; // rbx
  _OWORD *v6; // rax
  __int64 v8; // rcx
  __int64 v9; // rsi
  int v10; // ebp
  _OWORD *v11; // r14
  int v12; // r15d
  RTL_SRWLOCK *v13; // rcx
  void *v14; // rsi
  RTL_SRWLOCK *v15; // rcx
  char v16; // [rsp+68h] [rbp+20h] BYREF

  v3 = a2;
  if ( a2 )
  {
    v6 = malloc(16LL * a2);
    if ( !v6 )
      return 2147942414LL;
    v8 = v3;
    v9 = a3 - (_QWORD)v6;
    v10 = v3;
    v11 = v6;
    v12 = v3;
    do
    {
      *v6 = *(_OWORD *)((char *)v6 + v9);
      ++v6;
      --v8;
    }
    while ( v8 );
  }
  else
  {
    v10 = 0;
    v11 = 0LL;
    v12 = 0;
  }
  v13 = (RTL_SRWLOCK *)(a1 + 112);
  if ( *(_DWORD *)(a1 + 104) == 1 )
  {
    if ( !LODWORD(v13->Ptr) )
      LODWORD(v13->Ptr) = -268435456;
  }
  else
  {
    AcquireSRWLockExclusive(v13);
  }
  XWinRT::detail::ReentrancyGuard<0>::ReentrancyGuard<0>((__int64)&v16);
  *(_DWORD *)(a1 + 80) = 0;
  ++*(_DWORD *)(a1 + 120);
  v14 = *(void **)(a1 + 88);
  *(_DWORD *)(a1 + 72) = v10;
  *(_DWORD *)(a1 + 76) = v12;
  *(_QWORD *)(a1 + 88) = v11;
  if ( a1 != -104 )
  {
    v15 = (RTL_SRWLOCK *)(a1 + 112);
    if ( *(_DWORD *)(a1 + 104) == 1 )
      LODWORD(v15->Ptr) += 0x10000000;
    else
      ReleaseSRWLockExclusive(v15);
  }
  if ( v14 )
    free(v14);
  return Windows::Foundation::Collections::Internal::VectorOptions<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *,0,1,0>::RaiseEvent();
}
