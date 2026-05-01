/*
 * XREFs of ?RemoveAtInternal@?$Vector@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@U?$DefaultEqualityPredicate@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Internal@Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@7895@U?$VectorOptions@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@$0A@$00$0A@@7895@@Internal@Collections@Foundation@Windows@@AEAAJI_N@Z @ 0x18000EAA0
 * Callers:
 *     ?RemoveAt@?$Vector@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@U?$DefaultEqualityPredicate@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Internal@Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@7895@U?$VectorOptions@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@$0A@$00$0A@@7895@@Internal@Collections@Foundation@Windows@@UEAAJI@Z @ 0x18000D070 (-RemoveAt@-$Vector@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@U-$DefaultEquality.c)
 *     ?RemoveAtEnd@?$Vector@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@U?$DefaultEqualityPredicate@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Internal@Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@7895@U?$VectorOptions@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@$0A@$00$0A@@7895@@Internal@Collections@Foundation@Windows@@UEAAJXZ @ 0x18000D0A0 (-RemoveAtEnd@-$Vector@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@U-$DefaultEqual.c)
 * Callees:
 *     ??0?$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ @ 0x18000DF94 (--0-$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ.c)
 *     ?RaiseEvent@?$VectorOptions@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@$0A@$00$0A@@Internal@Collections@Foundation@Windows@@SAJZZ @ 0x18000E62C (-RaiseEvent@-$VectorOptions@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@$0A@$00$0.c)
 *     ??$Destroy@UIInspectable@@@InterfaceLifetimeTraits@XWinRT@@SAXPEAV?$GitStorageType@UIInspectable@@@detail@1@@Z @ 0x18000F98C (--$Destroy@UIInspectable@@@InterfaceLifetimeTraits@XWinRT@@SAXPEAV-$GitStorageType@UIInspectable.c)
 *     ?ResizeStorage@?$Vector@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@U?$DefaultEqualityPredicate@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Internal@Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@7895@U?$VectorOptions@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@$0A@$00$0A@@7895@@Internal@Collections@Foundation@Windows@@AEAAJI@Z @ 0x1800105B8 (-ResizeStorage@-$Vector@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@U-$DefaultEqu.c)
 *     _invalid_parameter_noinfo @ 0x18004C59E (_invalid_parameter_noinfo.c)
 *     memmove_0 @ 0x18004CE7C (memmove_0.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *>,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *,0,1,0>>::RemoveAtInternal(
        __int64 a1,
        unsigned int a2,
        char a3)
{
  RTL_SRWLOCK *v6; // rbx
  RTL_SRWLOCK *v7; // rcx
  int v8; // esi
  __int64 v9; // rcx
  __int128 v10; // xmm6
  int v11; // ecx
  size_t v12; // r8
  __int64 v13; // rdx
  void *v14; // rcx
  unsigned int v15; // r8d
  unsigned int v16; // edx
  RTL_SRWLOCK *v17; // rcx
  __int128 v19; // [rsp+30h] [rbp-48h] BYREF
  char v20; // [rsp+80h] [rbp+8h] BYREF
  __int64 v21; // [rsp+98h] [rbp+20h]

  *(_QWORD *)&v19 = 0LL;
  BYTE8(v19) = 0;
  v6 = (RTL_SRWLOCK *)(a1 + 104);
  v21 = a1 + 104;
  v7 = (RTL_SRWLOCK *)(a1 + 112);
  if ( LODWORD(v6->Ptr) == 1 )
  {
    if ( !LODWORD(v7->Ptr) )
      LODWORD(v7->Ptr) = -268435456;
  }
  else
  {
    AcquireSRWLockExclusive(v7);
  }
  if ( a3 )
    a2 = *(_DWORD *)(a1 + 72) - 1;
  if ( a2 >= *(_DWORD *)(a1 + 72) )
  {
    v8 = -2147483637;
LABEL_16:
    RoOriginateError((unsigned int)v8, 0LL);
    goto LABEL_22;
  }
  XWinRT::detail::ReentrancyGuard<0>::ReentrancyGuard<0>((__int64)&v20);
  v8 = 0;
  v9 = *(_QWORD *)(a1 + 88);
  if ( (unsigned __int8)_mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)(v9 + 16LL * a2), 8)) )
    --*(_DWORD *)(a1 + 80);
  v10 = *(_OWORD *)(v9 + 16LL * a2);
  XWinRT::InterfaceLifetimeTraits::Destroy<IInspectable>(&v19);
  v19 = v10;
  v11 = *(_DWORD *)(a1 + 72);
  if ( a2 < v11 - 1 )
  {
    v12 = 16LL * (v11 - a2 - 1);
    v13 = *(_QWORD *)(a1 + 88);
    v14 = (void *)(v13 + 16LL * a2);
    if ( v12 )
    {
      if ( !v14 || !(v13 + 16LL * (a2 + 1)) )
      {
        *(_DWORD *)_o__errno(v14, v13) = 22;
        invalid_parameter_noinfo();
        v8 = -2147418113;
        goto LABEL_16;
      }
      memmove_0(v14, (const void *)(v13 + 16LL * (a2 + 1)), v12);
    }
  }
  ++*(_DWORD *)(a1 + 120);
  --*(_DWORD *)(a1 + 72);
  v15 = *(_DWORD *)(a1 + 76);
  v16 = v15 / 3;
  if ( *(_DWORD *)(a1 + 72) < v15 / 3 )
  {
    if ( v15 - 1 < v15 - v16 )
      v16 = 1;
    v8 = Windows::Foundation::Collections::Internal::Vector<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *>,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *,0,1,0>>::ResizeStorage(
           a1,
           v15 - v16);
  }
LABEL_22:
  if ( v6 )
  {
    v17 = v6 + 1;
    if ( LODWORD(v6->Ptr) == 1 )
      LODWORD(v17->Ptr) += 0x10000000;
    else
      ReleaseSRWLockExclusive(v17);
  }
  XWinRT::InterfaceLifetimeTraits::Destroy<IInspectable>(&v19);
  if ( v8 >= 0 )
    return (unsigned int)Windows::Foundation::Collections::Internal::VectorOptions<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *,0,1,0>::RaiseEvent();
  return (unsigned int)v8;
}
