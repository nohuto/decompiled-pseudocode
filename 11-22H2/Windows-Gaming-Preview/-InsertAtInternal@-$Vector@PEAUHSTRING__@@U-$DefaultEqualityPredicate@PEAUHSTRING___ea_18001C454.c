/*
 * XREFs of ?InsertAtInternal@?$Vector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U?$DefaultVectorOptions@PEAUHSTRING__@@@3456@@Internal@Collections@Foundation@Windows@@AEAAJIPEAUHSTRING__@@_N@Z @ 0x18001C454
 * Callers:
 *     ?InsertAt@?$Vector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U?$DefaultVectorOptions@PEAUHSTRING__@@@3456@@Internal@Collections@Foundation@Windows@@UEAAJIPEAUHSTRING__@@@Z @ 0x18001B7F0 (-InsertAt@-$Vector@PEAUHSTRING__@@U-$DefaultEqualityPredicate@PEAUHSTRING__@@@Inter_ea_18001B7F0.c)
 *     ?Append@?$Vector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U?$DefaultVectorOptions@PEAUHSTRING__@@@3456@@Internal@Collections@Foundation@Windows@@UEAAJPEAUHSTRING__@@@Z @ 0x18001B810 (-Append@-$Vector@PEAUHSTRING__@@U-$DefaultEqualityPredicate@PEAUHSTRING__@@@Interna_ea_18001B810.c)
 * Callees:
 *     ??0?$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ @ 0x18000DF94 (--0-$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ.c)
 *     ?RaiseEvent@?$VectorOptions@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@$0A@$00$0A@@Internal@Collections@Foundation@Windows@@SAJZZ @ 0x18000E62C (-RaiseEvent@-$VectorOptions@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@$0A@$00$0.c)
 *     ?ResizeStorage@?$Vector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U?$DefaultVectorOptions@PEAUHSTRING__@@@3456@@Internal@Collections@Foundation@Windows@@AEAAJI@Z @ 0x18001D3C8 (-ResizeStorage@-$Vector@PEAUHSTRING__@@U-$DefaultEqualityPredicate@PEAUHSTRING__@@@_ea_18001D3C8.c)
 *     _invalid_parameter_noinfo @ 0x18004C59E (_invalid_parameter_noinfo.c)
 *     memmove_0 @ 0x18004CE7C (memmove_0.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<HSTRING__ *>>::InsertAtInternal(
        __int64 a1,
        unsigned int a2,
        HSTRING a3,
        char a4)
{
  int v7; // esi
  _DWORD *v8; // r14
  unsigned int v9; // r8d
  int v10; // edx
  unsigned int v11; // eax
  __int64 v12; // rdx
  size_t v13; // r8
  void *v14; // rcx
  HSTRING newString; // [rsp+30h] [rbp-38h] BYREF
  char v17; // [rsp+80h] [rbp+18h] BYREF

  v7 = WindowsDuplicateString(a3, &newString);
  if ( v7 < 0 )
  {
    newString = 0LL;
    goto LABEL_34;
  }
  v8 = (_DWORD *)(a1 + 80);
  if ( *(_DWORD *)(a1 + 72) == 1 )
  {
    if ( !*v8 )
      *v8 = -268435456;
  }
  else
  {
    AcquireSRWLockExclusive((PSRWLOCK)(a1 + 80));
  }
  if ( a4 )
    a2 = *(_DWORD *)(a1 + 40);
  if ( a2 <= *(_DWORD *)(a1 + 40) )
  {
    if ( *(_DWORD *)(a1 + 40) >= 0x7FFFFFFFu )
    {
      v7 = -2147024882;
      goto LABEL_28;
    }
    XWinRT::detail::ReentrancyGuard<0>::ReentrancyGuard<0>((__int64)&v17);
    v7 = 0;
    v9 = *(_DWORD *)(a1 + 44);
    if ( *(_DWORD *)(a1 + 40) + 1 > v9 )
    {
      v10 = v9 >> 1;
      if ( v9 + 1 > (v9 >> 1) + v9 )
        v10 = 1;
      v7 = Windows::Foundation::Collections::Internal::Vector<HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<HSTRING__ *>>::ResizeStorage(
             a1,
             v9 + v10);
      if ( v7 < 0 )
        goto LABEL_28;
    }
    v11 = *(_DWORD *)(a1 + 40);
    if ( a2 < v11 )
    {
      v12 = *(_QWORD *)(a1 + 56);
      v13 = 8LL * (v11 - a2);
      v14 = (void *)(v12 + 8LL * (a2 + 1));
      if ( v13 )
      {
        if ( !v14 || !(v12 + 8LL * a2) )
        {
          *(_DWORD *)_o__errno(v14, v12) = 22;
LABEL_25:
          invalid_parameter_noinfo();
          v7 = -2147418113;
          goto LABEL_11;
        }
        if ( 8 * (unsigned __int64)(*(_DWORD *)(a1 + 44) - a2 - 1) < v13 )
        {
          *(_DWORD *)_o__errno(v14, v12) = 34;
          goto LABEL_25;
        }
        memmove_0(v14, (const void *)(v12 + 8LL * a2), v13);
      }
    }
    *(_QWORD *)(*(_QWORD *)(a1 + 56) + 8LL * a2) = newString;
    newString = 0LL;
    ++*(_DWORD *)(a1 + 40);
    ++*(_DWORD *)(a1 + 88);
    goto LABEL_28;
  }
  v7 = -2147483637;
LABEL_11:
  RoOriginateError((unsigned int)v7, 0LL);
LABEL_28:
  if ( a1 != -72 )
  {
    if ( *(_DWORD *)(a1 + 72) == 1 )
      *v8 += 0x10000000;
    else
      ReleaseSRWLockExclusive((PSRWLOCK)(a1 + 80));
  }
  if ( v7 >= 0 )
    v7 = Windows::Foundation::Collections::Internal::VectorOptions<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *,0,1,0>::RaiseEvent();
LABEL_34:
  WindowsDeleteString(newString);
  return (unsigned int)v7;
}
