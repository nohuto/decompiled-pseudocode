/*
 * XREFs of ?SetAt@?$Vector@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@U?$DefaultEqualityPredicate@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Internal@Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@7895@U?$VectorOptions@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@$0A@$00$0A@@7895@@Internal@Collections@Foundation@Windows@@UEAAJIPEAUIGameListEntry@GamesEnumeration@Preview@Gaming@5@@Z @ 0x18000CEA0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ @ 0x18000DF94 (--0-$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ.c)
 *     ?RaiseEvent@?$VectorOptions@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@$0A@$00$0A@@Internal@Collections@Foundation@Windows@@SAJZZ @ 0x18000E62C (-RaiseEvent@-$VectorOptions@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@$0A@$00$0.c)
 *     ??$Destroy@UIInspectable@@@InterfaceLifetimeTraits@XWinRT@@SAXPEAV?$GitStorageType@UIInspectable@@@detail@1@@Z @ 0x18000F98C (--$Destroy@UIInspectable@@@InterfaceLifetimeTraits@XWinRT@@SAXPEAV-$GitStorageType@UIInspectable.c)
 *     ??$Construct@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@InterfaceLifetimeTraits@XWinRT@@SAJPEAV?$GitStorageType@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@detail@1@PEAUIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Z @ 0x18000FA24 (--$Construct@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@InterfaceLifetimeTraits@X.c)
 *     _invalid_parameter_noinfo @ 0x18004C59E (_invalid_parameter_noinfo.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *>,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *,0,1,0>>::SetAt(
        __int64 a1,
        unsigned int a2,
        __int64 a3)
{
  __int64 v3; // r15
  int v5; // esi
  RTL_SRWLOCK *v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rax
  __int128 *v9; // rcx
  __int128 v10; // xmm6
  RTL_SRWLOCK *v11; // rcx
  __int128 v13; // [rsp+38h] [rbp-48h] BYREF
  __int128 v14; // [rsp+50h] [rbp-30h] BYREF
  __int128 v15; // [rsp+60h] [rbp-20h]
  unsigned __int8 v16; // [rsp+C8h] [rbp+48h] BYREF

  v3 = a2;
  *(_QWORD *)&v14 = 0LL;
  BYTE8(v14) = 0;
  *(_QWORD *)&v13 = 0LL;
  BYTE8(v13) = 0;
  v5 = XWinRT::InterfaceLifetimeTraits::Construct<Windows::Gaming::Preview::GamesEnumeration::IGameListEntry>(&v13, a3);
  if ( v5 < 0 )
  {
    *(_QWORD *)&v13 = 0LL;
    BYTE8(v13) = 0;
    goto LABEL_20;
  }
  v6 = (RTL_SRWLOCK *)(a1 + 112);
  if ( *(_DWORD *)(a1 + 104) == 1 )
  {
    if ( !LODWORD(v6->Ptr) )
      LODWORD(v6->Ptr) = -268435456;
  }
  else
  {
    AcquireSRWLockExclusive(v6);
  }
  if ( (unsigned int)v3 < *(_DWORD *)(a1 + 72) )
  {
    XWinRT::detail::ReentrancyGuard<0>::ReentrancyGuard<0>(&v16, *(unsigned __int8 *)(a1 + 125), a1 + 128);
    v5 = 0;
    BYTE8(v15) = 0;
    v8 = *(_QWORD *)(a1 + 88);
    v9 = (__int128 *)(v8 + 16 * v3);
    if ( v9 )
    {
      v15 = *v9;
      v10 = v15;
      *(_OWORD *)(v8 + 16 * v3) = v13;
      *(_QWORD *)&v13 = 0LL;
      BYTE8(v13) = 0;
      ++*(_DWORD *)(a1 + 120);
      XWinRT::InterfaceLifetimeTraits::Destroy<IInspectable>(&v14);
      v14 = v10;
      if ( (unsigned __int8)_mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)(*(_QWORD *)(a1 + 88) + 16 * v3), 8)) )
        ++*(_DWORD *)(a1 + 80);
      if ( BYTE8(v15) )
        --*(_DWORD *)(a1 + 80);
      goto LABEL_16;
    }
    *(_DWORD *)_o__errno(0LL, v7) = 22;
    invalid_parameter_noinfo();
    v5 = -2147418113;
  }
  else
  {
    v5 = -2147483637;
  }
  RoOriginateError((unsigned int)v5, 0LL);
LABEL_16:
  if ( a1 != -104 )
  {
    v11 = (RTL_SRWLOCK *)(a1 + 112);
    if ( *(_DWORD *)(a1 + 104) == 1 )
      LODWORD(v11->Ptr) += 0x10000000;
    else
      ReleaseSRWLockExclusive(v11);
  }
LABEL_20:
  XWinRT::InterfaceLifetimeTraits::Destroy<IInspectable>(&v13);
  XWinRT::InterfaceLifetimeTraits::Destroy<IInspectable>(&v14);
  if ( v5 >= 0 )
    return (unsigned int)Windows::Foundation::Collections::Internal::VectorOptions<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *,0,1,0>::RaiseEvent(
                           v16,
                           *(unsigned __int8 *)(a1 + 124),
                           a1,
                           3LL,
                           v3);
  return (unsigned int)v5;
}
