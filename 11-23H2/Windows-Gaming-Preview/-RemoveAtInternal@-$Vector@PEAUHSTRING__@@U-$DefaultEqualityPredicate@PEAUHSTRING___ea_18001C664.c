/*
 * XREFs of ?RemoveAtInternal@?$Vector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U?$DefaultVectorOptions@PEAUHSTRING__@@@3456@@Internal@Collections@Foundation@Windows@@AEAAJI_N@Z @ 0x18001C664
 * Callers:
 *     ?RemoveAt@?$Vector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U?$DefaultVectorOptions@PEAUHSTRING__@@@3456@@Internal@Collections@Foundation@Windows@@UEAAJI@Z @ 0x18001B800 (-RemoveAt@-$Vector@PEAUHSTRING__@@U-$DefaultEqualityPredicate@PEAUHSTRING__@@@Inter_ea_18001B800.c)
 *     ?RemoveAtEnd@?$Vector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U?$DefaultVectorOptions@PEAUHSTRING__@@@3456@@Internal@Collections@Foundation@Windows@@UEAAJXZ @ 0x18001B830 (-RemoveAtEnd@-$Vector@PEAUHSTRING__@@U-$DefaultEqualityPredicate@PEAUHSTRING__@@@In_ea_18001B830.c)
 * Callees:
 *     ??0?$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ @ 0x18000DF94 (--0-$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ.c)
 *     ?RaiseEvent@?$VectorOptions@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@$0A@$00$0A@@Internal@Collections@Foundation@Windows@@SAJZZ @ 0x18000E62C (-RaiseEvent@-$VectorOptions@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@$0A@$00$0.c)
 *     ?ResizeStorage@?$Vector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U?$DefaultVectorOptions@PEAUHSTRING__@@@3456@@Internal@Collections@Foundation@Windows@@AEAAJI@Z @ 0x18001D3C8 (-ResizeStorage@-$Vector@PEAUHSTRING__@@U-$DefaultEqualityPredicate@PEAUHSTRING__@@@_ea_18001D3C8.c)
 *     _invalid_parameter_noinfo @ 0x18004C59E (_invalid_parameter_noinfo.c)
 *     memmove_0 @ 0x18004CE7C (memmove_0.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<HSTRING__ *>>::RemoveAtInternal(
        __int64 a1,
        unsigned int a2,
        char a3)
{
  HSTRING v3; // rdi
  _DWORD *v4; // rbx
  RTL_SRWLOCK *v6; // r14
  int v9; // ebp
  int v10; // ecx
  __int64 v11; // rdx
  size_t v12; // r8
  void *v13; // rcx
  unsigned int v14; // r8d
  unsigned int v15; // edx
  char v17; // [rsp+60h] [rbp+8h] BYREF

  v3 = 0LL;
  v4 = (_DWORD *)(a1 + 72);
  v6 = (RTL_SRWLOCK *)(a1 + 80);
  if ( *(_DWORD *)(a1 + 72) == 1 )
  {
    if ( !LODWORD(v6->Ptr) )
      LODWORD(v6->Ptr) = -268435456;
  }
  else
  {
    AcquireSRWLockExclusive((PSRWLOCK)(a1 + 80));
  }
  if ( a3 )
    a2 = *(_DWORD *)(a1 + 40) - 1;
  if ( a2 >= *(_DWORD *)(a1 + 40) )
  {
    v9 = -2147483637;
LABEL_14:
    RoOriginateError((unsigned int)v9, 0LL);
    goto LABEL_20;
  }
  XWinRT::detail::ReentrancyGuard<0>::ReentrancyGuard<0>((__int64)&v17);
  v9 = 0;
  v3 = *(HSTRING *)(*(_QWORD *)(a1 + 56) + 8LL * a2);
  WindowsDeleteString(0LL);
  v10 = *(_DWORD *)(a1 + 40);
  if ( a2 < v10 - 1 )
  {
    v11 = *(_QWORD *)(a1 + 56);
    v12 = 8LL * (v10 - a2 - 1);
    v13 = (void *)(v11 + 8LL * a2);
    if ( v12 )
    {
      if ( !v13 || !(v11 + 8LL * (a2 + 1)) )
      {
        *(_DWORD *)_o__errno(v13, v11) = 22;
        invalid_parameter_noinfo();
        v9 = -2147418113;
        goto LABEL_14;
      }
      memmove_0(v13, (const void *)(v11 + 8LL * (a2 + 1)), v12);
    }
  }
  v14 = *(_DWORD *)(a1 + 44);
  ++*(_DWORD *)(a1 + 88);
  --*(_DWORD *)(a1 + 40);
  v15 = v14 / 3;
  if ( *(_DWORD *)(a1 + 40) < v14 / 3 )
  {
    if ( v14 - 1 < v14 - v15 )
      v15 = 1;
    v9 = Windows::Foundation::Collections::Internal::Vector<HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<HSTRING__ *>>::ResizeStorage(
           a1,
           v14 - v15);
  }
LABEL_20:
  if ( v4 )
  {
    if ( *v4 == 1 )
      LODWORD(v6->Ptr) += 0x10000000;
    else
      ReleaseSRWLockExclusive(v6);
  }
  WindowsDeleteString(v3);
  if ( v9 >= 0 )
    return (unsigned int)Windows::Foundation::Collections::Internal::VectorOptions<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *,0,1,0>::RaiseEvent();
  return (unsigned int)v9;
}
