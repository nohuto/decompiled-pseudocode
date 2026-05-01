/*
 * XREFs of ?InsertAtInternal@?$Vector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U?$DefaultVectorOptions@PEAUHSTRING__@@@3456@@Internal@Collections@Foundation@Windows@@AEAAJIPEAUHSTRING__@@_N@Z @ 0x18001BDA8
 * Callers:
 *     ?InsertAt@?$Vector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U?$DefaultVectorOptions@PEAUHSTRING__@@@3456@@Internal@Collections@Foundation@Windows@@UEAAJIPEAUHSTRING__@@@Z @ 0x18001B180 (-InsertAt@-$Vector@PEAUHSTRING__@@U-$DefaultEqualityPredicate@PEAUHSTRING__@@@Inter_ea_18001B180.c)
 *     ?Append@?$Vector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U?$DefaultVectorOptions@PEAUHSTRING__@@@3456@@Internal@Collections@Foundation@Windows@@UEAAJPEAUHSTRING__@@@Z @ 0x18001B1A0 (-Append@-$Vector@PEAUHSTRING__@@U-$DefaultEqualityPredicate@PEAUHSTRING__@@@Interna_ea_18001B1A0.c)
 * Callees:
 *     ??0?$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ @ 0x18000DDD4 (--0-$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ.c)
 *     ?RaiseEvent@?$VectorOptions@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@$0A@$00$0A@@Internal@Collections@Foundation@Windows@@SAJZZ @ 0x18000E470 (-RaiseEvent@-$VectorOptions@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@$0A@$00$0.c)
 *     ?ResizeStorage@?$Vector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U?$DefaultVectorOptions@PEAUHSTRING__@@@3456@@Internal@Collections@Foundation@Windows@@AEAAJI@Z @ 0x18001CCD8 (-ResizeStorage@-$Vector@PEAUHSTRING__@@U-$DefaultEqualityPredicate@PEAUHSTRING__@@@_ea_18001CCD8.c)
 *     _invalid_parameter_noinfo @ 0x18004B6AE (_invalid_parameter_noinfo.c)
 *     memmove_0 @ 0x18004BF8F (memmove_0.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<HSTRING__ *>>::InsertAtInternal(
        __int64 a1,
        unsigned int a2,
        HSTRING a3,
        char a4)
{
  int v7; // esi
  _DWORD *v8; // r14
  unsigned int v9; // ebp
  unsigned int v10; // eax
  unsigned int v11; // r8d
  int v12; // edx
  unsigned int v13; // eax
  __int64 v14; // rdx
  size_t v15; // r8
  void *v16; // rcx
  HSTRING newString; // [rsp+30h] [rbp-38h] BYREF
  char v19; // [rsp+80h] [rbp+18h] BYREF

  v7 = WindowsDuplicateString(a3, &newString);
  if ( v7 < 0 )
  {
    newString = 0LL;
    goto LABEL_33;
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
  v9 = *(_DWORD *)(a1 + 40);
  v10 = v9;
  if ( a4 || (v9 = a2, a2 <= v10) )
  {
    if ( v10 >= 0x7FFFFFFF )
    {
      v7 = -2147024882;
      goto LABEL_27;
    }
    XWinRT::detail::ReentrancyGuard<0>::ReentrancyGuard<0>((__int64)&v19);
    v7 = 0;
    v11 = *(_DWORD *)(a1 + 44);
    if ( *(_DWORD *)(a1 + 40) + 1 > v11 )
    {
      v12 = v11 >> 1;
      if ( v11 + 1 > (v11 >> 1) + v11 )
        v12 = 1;
      v7 = Windows::Foundation::Collections::Internal::Vector<HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<HSTRING__ *>>::ResizeStorage(
             a1,
             v11 + v12);
      if ( v7 < 0 )
        goto LABEL_27;
    }
    v13 = *(_DWORD *)(a1 + 40);
    if ( v9 < v13 )
    {
      v14 = *(_QWORD *)(a1 + 56);
      v15 = 8LL * (v13 - v9);
      v16 = (void *)(v14 + 8LL * (v9 + 1));
      if ( v15 )
      {
        if ( !v16 || !(v14 + 8LL * v9) )
        {
          *(_DWORD *)_o__errno(v16, v14) = 22;
LABEL_24:
          invalid_parameter_noinfo();
          v7 = -2147418113;
          RoOriginateError(2147549183LL, 0LL);
          goto LABEL_27;
        }
        if ( 8 * (unsigned __int64)(*(_DWORD *)(a1 + 44) - v9 - 1) < v15 )
        {
          *(_DWORD *)_o__errno(v16, v14) = 34;
          goto LABEL_24;
        }
        memmove_0(v16, (const void *)(v14 + 8LL * v9), v15);
      }
    }
    *(_QWORD *)(*(_QWORD *)(a1 + 56) + 8LL * v9) = newString;
    newString = 0LL;
    ++*(_DWORD *)(a1 + 40);
    ++*(_DWORD *)(a1 + 88);
    goto LABEL_27;
  }
  v7 = -2147483637;
  RoOriginateError(2147483659LL, 0LL);
LABEL_27:
  if ( a1 != -72 )
  {
    if ( *(_DWORD *)(a1 + 72) == 1 )
      *v8 += 0x10000000;
    else
      ReleaseSRWLockExclusive((PSRWLOCK)(a1 + 80));
  }
  if ( v7 >= 0 )
    v7 = Windows::Foundation::Collections::Internal::VectorOptions<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *,0,1,0>::RaiseEvent();
LABEL_33:
  WindowsDeleteString(newString);
  return (unsigned int)v7;
}
