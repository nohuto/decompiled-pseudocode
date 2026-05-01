/*
 * XREFs of ?InsertAtInternal@?$Vector@U_GUID@@U?$DefaultEqualityPredicate@U_GUID@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@U_GUID@@@3456@U?$VectorOptions@U_GUID@@$0A@$00$0A@@3456@@Internal@Collections@Foundation@Windows@@AEAAJIU_GUID@@_N@Z @ 0x180035490
 * Callers:
 *     ?InsertAt@?$Vector@U_GUID@@U?$DefaultEqualityPredicate@U_GUID@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@U_GUID@@@3456@U?$VectorOptions@U_GUID@@$0A@$00$0A@@3456@@Internal@Collections@Foundation@Windows@@UEAAJIU_GUID@@@Z @ 0x180032F70 (-InsertAt@-$Vector@U_GUID@@U-$DefaultEqualityPredicate@U_GUID@@@Internal@Collections@Foundation@.c)
 *     ?Append@?$Vector@U_GUID@@U?$DefaultEqualityPredicate@U_GUID@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@U_GUID@@@3456@U?$VectorOptions@U_GUID@@$0A@$00$0A@@3456@@Internal@Collections@Foundation@Windows@@UEAAJU_GUID@@@Z @ 0x180032FB0 (-Append@-$Vector@U_GUID@@U-$DefaultEqualityPredicate@U_GUID@@@Internal@Collections@Foundation@Wi.c)
 *     ?GetAllGameConfigStoreIds@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@QEAAJPEAPEAV?$AgileVector@U_GUID@@U?$DefaultEqualityPredicate@U_GUID@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@U_GUID@@@3456@$0A@@Internal@Collections@Foundation@5@@Z @ 0x18003F36C (-GetAllGameConfigStoreIds@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@Q.c)
 * Callees:
 *     ??0?$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ @ 0x18000DF94 (--0-$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ.c)
 *     ?RaiseEvent@?$VectorOptions@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@$0A@$00$0A@@Internal@Collections@Foundation@Windows@@SAJZZ @ 0x18000E62C (-RaiseEvent@-$VectorOptions@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@$0A@$00$0.c)
 *     ?ResizeStorage@?$Vector@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@U?$DefaultEqualityPredicate@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Internal@Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@7895@U?$VectorOptions@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@$0A@$00$0A@@7895@@Internal@Collections@Foundation@Windows@@AEAAJI@Z @ 0x1800105B8 (-ResizeStorage@-$Vector@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@U-$DefaultEqu.c)
 *     _invalid_parameter_noinfo @ 0x18004C59E (_invalid_parameter_noinfo.c)
 *     memmove_0 @ 0x18004CE7C (memmove_0.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<_GUID,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,Windows::Foundation::Collections::Internal::VectorOptions<_GUID,0,1,0>>::InsertAtInternal(
        __int64 a1,
        unsigned int a2,
        _OWORD *a3,
        char a4)
{
  _DWORD *v4; // rbx
  RTL_SRWLOCK *v5; // r14
  int v10; // esi
  unsigned int v11; // r8d
  int v12; // edx
  unsigned int v13; // eax
  void *v14; // rcx
  const void *v15; // rdx
  size_t v16; // r8
  char v18; // [rsp+70h] [rbp+18h] BYREF

  v4 = (_DWORD *)(a1 + 104);
  v5 = (RTL_SRWLOCK *)(a1 + 112);
  if ( *(_DWORD *)(a1 + 104) == 1 )
  {
    if ( !LODWORD(v5->Ptr) )
      LODWORD(v5->Ptr) = -268435456;
  }
  else
  {
    AcquireSRWLockExclusive((PSRWLOCK)(a1 + 112));
  }
  if ( a4 )
    a2 = *(_DWORD *)(a1 + 72);
  if ( a2 > *(_DWORD *)(a1 + 72) )
  {
    v10 = -2147483637;
LABEL_9:
    RoOriginateError((unsigned int)v10, 0LL);
    goto LABEL_26;
  }
  if ( *(_DWORD *)(a1 + 72) >= 0x7FFFFFFFu )
  {
    v10 = -2147024882;
    goto LABEL_26;
  }
  XWinRT::detail::ReentrancyGuard<0>::ReentrancyGuard<0>((__int64)&v18);
  v10 = 0;
  v11 = *(_DWORD *)(a1 + 76);
  if ( *(_DWORD *)(a1 + 72) + 1 <= v11 )
    goto LABEL_16;
  v12 = v11 >> 1;
  if ( v11 + 1 > (v11 >> 1) + v11 )
    v12 = 1;
  v10 = Windows::Foundation::Collections::Internal::Vector<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *>,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *,0,1,0>>::ResizeStorage(
          a1,
          v11 + v12);
  if ( v10 >= 0 )
  {
LABEL_16:
    v13 = *(_DWORD *)(a1 + 72);
    if ( a2 < v13 )
    {
      v14 = (void *)(*(_QWORD *)(a1 + 88) + 16LL * (a2 + 1));
      v15 = (const void *)(*(_QWORD *)(a1 + 88) + 16LL * a2);
      v16 = 16LL * (v13 - a2);
      if ( v16 )
      {
        if ( !v14 || !v15 )
        {
          *(_DWORD *)_o__errno(v14, v15) = 22;
LABEL_23:
          invalid_parameter_noinfo();
          v10 = -2147418113;
          goto LABEL_9;
        }
        if ( 16 * (unsigned __int64)(*(_DWORD *)(a1 + 76) - a2 - 1) < v16 )
        {
          *(_DWORD *)_o__errno(v14, v15) = 34;
          goto LABEL_23;
        }
        memmove_0(v14, v15, v16);
      }
    }
    *(_OWORD *)(*(_QWORD *)(a1 + 88) + 16LL * a2) = *a3;
    ++*(_DWORD *)(a1 + 72);
    ++*(_DWORD *)(a1 + 120);
  }
LABEL_26:
  if ( v4 )
  {
    if ( *v4 == 1 )
      LODWORD(v5->Ptr) += 0x10000000;
    else
      ReleaseSRWLockExclusive(v5);
  }
  if ( v10 >= 0 )
    return (unsigned int)Windows::Foundation::Collections::Internal::VectorOptions<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *,0,1,0>::RaiseEvent();
  return (unsigned int)v10;
}
