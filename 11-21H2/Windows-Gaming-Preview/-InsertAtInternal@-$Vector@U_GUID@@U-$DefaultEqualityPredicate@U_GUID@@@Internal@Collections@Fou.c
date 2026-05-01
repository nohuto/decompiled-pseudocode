/*
 * XREFs of ?InsertAtInternal@?$Vector@U_GUID@@U?$DefaultEqualityPredicate@U_GUID@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@U_GUID@@@3456@U?$VectorOptions@U_GUID@@$0A@$00$0A@@3456@@Internal@Collections@Foundation@Windows@@AEAAJIU_GUID@@_N@Z @ 0x180034A84
 * Callers:
 *     ?InsertAt@?$Vector@U_GUID@@U?$DefaultEqualityPredicate@U_GUID@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@U_GUID@@@3456@U?$VectorOptions@U_GUID@@$0A@$00$0A@@3456@@Internal@Collections@Foundation@Windows@@UEAAJIU_GUID@@@Z @ 0x180032580 (-InsertAt@-$Vector@U_GUID@@U-$DefaultEqualityPredicate@U_GUID@@@Internal@Collections@Foundation@.c)
 *     ?Append@?$Vector@U_GUID@@U?$DefaultEqualityPredicate@U_GUID@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@U_GUID@@@3456@U?$VectorOptions@U_GUID@@$0A@$00$0A@@3456@@Internal@Collections@Foundation@Windows@@UEAAJU_GUID@@@Z @ 0x1800325C0 (-Append@-$Vector@U_GUID@@U-$DefaultEqualityPredicate@U_GUID@@@Internal@Collections@Foundation@Wi.c)
 *     ?GetAllGameConfigStoreIds@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@QEAAJPEAPEAV?$AgileVector@U_GUID@@U?$DefaultEqualityPredicate@U_GUID@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@U_GUID@@@3456@$0A@@Internal@Collections@Foundation@5@@Z @ 0x18003E5A4 (-GetAllGameConfigStoreIds@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@Q.c)
 * Callees:
 *     ??0?$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ @ 0x18000DDD4 (--0-$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ.c)
 *     ?RaiseEvent@?$VectorOptions@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@$0A@$00$0A@@Internal@Collections@Foundation@Windows@@SAJZZ @ 0x18000E470 (-RaiseEvent@-$VectorOptions@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@$0A@$00$0.c)
 *     ?ResizeStorage@?$Vector@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@U?$DefaultEqualityPredicate@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Internal@Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@7895@U?$VectorOptions@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@$0A@$00$0A@@7895@@Internal@Collections@Foundation@Windows@@AEAAJI@Z @ 0x180010488 (-ResizeStorage@-$Vector@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@U-$DefaultEqu.c)
 *     _invalid_parameter_noinfo @ 0x18004B6AE (_invalid_parameter_noinfo.c)
 *     memmove_0 @ 0x18004BF8F (memmove_0.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<_GUID,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,Windows::Foundation::Collections::Internal::VectorOptions<_GUID,0,1,0>>::InsertAtInternal(
        __int64 a1,
        unsigned int a2,
        _OWORD *a3,
        char a4)
{
  _DWORD *v4; // rbx
  RTL_SRWLOCK *v5; // r14
  unsigned int v10; // ebp
  unsigned int v11; // eax
  int v12; // esi
  unsigned int v13; // r8d
  int v14; // edx
  unsigned int v15; // eax
  void *v16; // rcx
  const void *v17; // rdx
  size_t v18; // r8
  char v20; // [rsp+70h] [rbp+18h] BYREF

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
  v10 = *(_DWORD *)(a1 + 72);
  v11 = v10;
  if ( !a4 )
  {
    v10 = a2;
    if ( a2 > v11 )
    {
      v12 = -2147483637;
LABEL_8:
      RoOriginateError((unsigned int)v12, 0LL);
      goto LABEL_25;
    }
  }
  if ( v11 >= 0x7FFFFFFF )
  {
    v12 = -2147024882;
    goto LABEL_25;
  }
  XWinRT::detail::ReentrancyGuard<0>::ReentrancyGuard<0>((__int64)&v20);
  v12 = 0;
  v13 = *(_DWORD *)(a1 + 76);
  if ( *(_DWORD *)(a1 + 72) + 1 <= v13 )
    goto LABEL_15;
  v14 = v13 >> 1;
  if ( v13 + 1 > (v13 >> 1) + v13 )
    v14 = 1;
  v12 = Windows::Foundation::Collections::Internal::Vector<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *>,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *,0,1,0>>::ResizeStorage(
          a1,
          v13 + v14);
  if ( v12 >= 0 )
  {
LABEL_15:
    v15 = *(_DWORD *)(a1 + 72);
    if ( v10 < v15 )
    {
      v16 = (void *)(*(_QWORD *)(a1 + 88) + 16LL * (v10 + 1));
      v17 = (const void *)(*(_QWORD *)(a1 + 88) + 16LL * v10);
      v18 = 16LL * (v15 - v10);
      if ( v18 )
      {
        if ( !v16 || !v17 )
        {
          *(_DWORD *)_o__errno(v16, v17) = 22;
LABEL_22:
          invalid_parameter_noinfo();
          v12 = -2147418113;
          goto LABEL_8;
        }
        if ( 16 * (unsigned __int64)(*(_DWORD *)(a1 + 76) - v10 - 1) < v18 )
        {
          *(_DWORD *)_o__errno(v16, v17) = 34;
          goto LABEL_22;
        }
        memmove_0(v16, v17, v18);
      }
    }
    *(_OWORD *)(*(_QWORD *)(a1 + 88) + 16LL * v10) = *a3;
    ++*(_DWORD *)(a1 + 72);
    ++*(_DWORD *)(a1 + 120);
  }
LABEL_25:
  if ( v4 )
  {
    if ( *v4 == 1 )
      LODWORD(v5->Ptr) += 0x10000000;
    else
      ReleaseSRWLockExclusive(v5);
  }
  if ( v12 >= 0 )
    return (unsigned int)Windows::Foundation::Collections::Internal::VectorOptions<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *,0,1,0>::RaiseEvent();
  return (unsigned int)v12;
}
