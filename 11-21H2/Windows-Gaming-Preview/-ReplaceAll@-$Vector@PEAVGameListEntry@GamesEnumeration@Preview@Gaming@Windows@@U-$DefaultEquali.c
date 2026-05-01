/*
 * XREFs of ?ReplaceAll@?$Vector@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@U?$DefaultEqualityPredicate@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Internal@Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@7895@U?$VectorOptions@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@$0A@$00$0A@@7895@@Internal@Collections@Foundation@Windows@@UEAAJIPEAPEAUIGameListEntry@GamesEnumeration@Preview@Gaming@5@@Z @ 0x18000D3D0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ @ 0x18000DDD4 (--0-$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ.c)
 *     ?RaiseEvent@?$VectorOptions@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@$0A@$00$0A@@Internal@Collections@Foundation@Windows@@SAJZZ @ 0x18000E470 (-RaiseEvent@-$VectorOptions@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@$0A@$00$0.c)
 *     ??$Destroy@UIInspectable@@@InterfaceLifetimeTraits@XWinRT@@SAXPEAV?$GitStorageType@UIInspectable@@@detail@1@@Z @ 0x18000F80C (--$Destroy@UIInspectable@@@InterfaceLifetimeTraits@XWinRT@@SAXPEAV-$GitStorageType@UIInspectable.c)
 *     ??$Construct@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@InterfaceLifetimeTraits@XWinRT@@SAJPEAV?$GitStorageType@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@detail@1@PEAUIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Z @ 0x18000F8A4 (--$Construct@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@InterfaceLifetimeTraits@X.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *>,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *,0,1,0>>::ReplaceAll(
        __int64 a1,
        unsigned int a2,
        _QWORD *a3)
{
  int v3; // r13d
  unsigned int v4; // r15d
  __m128i *v7; // rax
  __m128i *v8; // rbx
  int v9; // edi
  __int64 v10; // rsi
  __m128i *v11; // rbp
  RTL_SRWLOCK *v12; // rcx
  unsigned int v13; // eax
  __m128i *v14; // rax
  RTL_SRWLOCK *v15; // rcx
  __m128i *v16; // rbx
  unsigned __int8 v18; // [rsp+78h] [rbp+20h] BYREF

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
      v9 = XWinRT::InterfaceLifetimeTraits::Construct<Windows::Gaming::Preview::GamesEnumeration::IGameListEntry>(
             &v11[(unsigned int)v10],
             *a3);
      if ( v9 < 0 )
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
    LODWORD(v10) = 0;
    v11 = 0LL;
    v4 = 0;
LABEL_11:
    v12 = (RTL_SRWLOCK *)(a1 + 112);
    if ( *(_DWORD *)(a1 + 104) == 1 )
    {
      if ( !LODWORD(v12->Ptr) )
        LODWORD(v12->Ptr) = -268435456;
    }
    else
    {
      AcquireSRWLockExclusive(v12);
    }
    XWinRT::detail::ReentrancyGuard<0>::ReentrancyGuard<0>(&v18, *(unsigned __int8 *)(a1 + 125), a1 + 128);
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
    if ( a1 != -104 )
    {
      v15 = (RTL_SRWLOCK *)(a1 + 112);
      if ( *(_DWORD *)(a1 + 104) == 1 )
        LODWORD(v15->Ptr) += 0x10000000;
      else
        ReleaseSRWLockExclusive(v15);
    }
  }
  if ( v11 )
  {
    if ( (_DWORD)v10 )
    {
      v16 = v11;
      do
      {
        XWinRT::InterfaceLifetimeTraits::Destroy<IInspectable>(v16++);
        --v10;
      }
      while ( v10 );
    }
    free(v11);
  }
  if ( v9 >= 0 )
    return (unsigned int)Windows::Foundation::Collections::Internal::VectorOptions<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *,0,1,0>::RaiseEvent(
                           v18,
                           *(unsigned __int8 *)(a1 + 124),
                           a1,
                           0LL,
                           0);
  return (unsigned int)v9;
}
