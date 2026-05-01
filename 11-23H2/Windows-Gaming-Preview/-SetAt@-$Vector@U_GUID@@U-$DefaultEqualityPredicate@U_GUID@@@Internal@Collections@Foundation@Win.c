/*
 * XREFs of ?SetAt@?$Vector@U_GUID@@U?$DefaultEqualityPredicate@U_GUID@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@U_GUID@@@3456@U?$VectorOptions@U_GUID@@$0A@$00$0A@@3456@@Internal@Collections@Foundation@Windows@@UEAAJIU_GUID@@@Z @ 0x180032E50
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ @ 0x18000DF94 (--0-$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ.c)
 *     ?RaiseEvent@?$VectorOptions@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@$0A@$00$0A@@Internal@Collections@Foundation@Windows@@SAJZZ @ 0x18000E62C (-RaiseEvent@-$VectorOptions@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@$0A@$00$0.c)
 *     _invalid_parameter_noinfo @ 0x18004C59E (_invalid_parameter_noinfo.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<_GUID,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,Windows::Foundation::Collections::Internal::VectorOptions<_GUID,0,1,0>>::SetAt(
        __int64 a1,
        unsigned int a2,
        _OWORD *a3)
{
  _DWORD *v3; // rbx
  __int64 v4; // rbp
  RTL_SRWLOCK *v5; // r14
  int v8; // edi
  __int64 v9; // rax
  _BYTE v11[56]; // [rsp+30h] [rbp-38h] BYREF

  v3 = (_DWORD *)(a1 + 104);
  v4 = a2;
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
  if ( (unsigned int)v4 >= *(_DWORD *)(a1 + 72) )
  {
    v8 = -2147483637;
LABEL_9:
    RoOriginateError((unsigned int)v8, 0LL);
    goto LABEL_11;
  }
  XWinRT::detail::ReentrancyGuard<0>::ReentrancyGuard<0>((__int64)v11);
  v9 = *(_QWORD *)(a1 + 88);
  v8 = 0;
  if ( !(v9 + 16 * v4) )
  {
    *(_DWORD *)_o__errno(0LL, 2 * v4) = 22;
    invalid_parameter_noinfo();
    v8 = -2147418113;
    goto LABEL_9;
  }
  *(_OWORD *)(v9 + 16 * v4) = *a3;
  ++*(_DWORD *)(a1 + 120);
LABEL_11:
  if ( v3 )
  {
    if ( *v3 == 1 )
      LODWORD(v5->Ptr) += 0x10000000;
    else
      ReleaseSRWLockExclusive(v5);
  }
  if ( v8 >= 0 )
    return (unsigned int)Windows::Foundation::Collections::Internal::VectorOptions<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *,0,1,0>::RaiseEvent();
  return (unsigned int)v8;
}
