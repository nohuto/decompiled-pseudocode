/*
 * XREFs of ?InsertAtInternal@?$Vector@PEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@U?$DefaultEqualityPredicate@PEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@4Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@4785@U?$DefaultVectorOptions@PEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@4785@@Internal@Collections@Foundation@Windows@@AEAAJIPEAUISwitchItem@Multitasking@ComposableShell@25@_N@Z @ 0x1800270F4
 * Callers:
 *     ?Append@?$Vector@PEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@U?$DefaultEqualityPredicate@PEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@4Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@4785@U?$DefaultVectorOptions@PEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@4785@@Internal@Collections@Foundation@Windows@@UEAAJPEAUISwitchItem@Multitasking@ComposableShell@25@@Z @ 0x1800270E0 (-Append@-$Vector@PEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@U-$DefaultEquali.c)
 *     ?InsertAt@?$Vector@PEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@U?$DefaultEqualityPredicate@PEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@4Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@4785@U?$DefaultVectorOptions@PEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@4785@@Internal@Collections@Foundation@Windows@@UEAAJIPEAUISwitchItem@Multitasking@ComposableShell@25@@Z @ 0x180456D20 (-InsertAt@-$Vector@PEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@U-$DefaultEqua.c)
 * Callees:
 *     ?ResizeStorage@?$Vector@PEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@U?$DefaultEqualityPredicate@PEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@4Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@4785@U?$DefaultVectorOptions@PEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@4785@@Internal@Collections@Foundation@Windows@@AEAAJI@Z @ 0x180027258 (-ResizeStorage@-$Vector@PEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@U-$Defaul.c)
 *     ??$?0PEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@?$AutoValue@PEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@U?$DefaultLifetimeTraits@PEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@4Collections@Foundation@5@@XWinRT@@QEAA@AEBQEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@PEAJ@Z @ 0x1800272C8 (--$-0PEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@-$AutoValue@PEAUISwitchItem.c)
 *     ??$Destroy@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@InterfaceLifetimeTraits@XWinRT@@SAXPEAPEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x18002D0B0 (--$Destroy@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@InterfaceLifetimeTraits@.c)
 *     ??0?$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ @ 0x180125E00 (--0-$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ.c)
 *     ?RaiseEvent@?$VectorOptions@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@$0A@$0A@$0A@@Internal@Collections@Foundation@Windows@@SAJZZ @ 0x180125E1C (-RaiseEvent@-$VectorOptions@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@$.c)
 *     memmove_s @ 0x1802DA9D4 (memmove_s.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<Windows::Internal::ComposableShell::Multitasking::ISwitchItem *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Internal::ComposableShell::Multitasking::ISwitchItem *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Internal::ComposableShell::Multitasking::ISwitchItem *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Internal::ComposableShell::Multitasking::ISwitchItem *>>::InsertAtInternal(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        char a4)
{
  int v7; // esi
  _DWORD *v8; // r14
  unsigned int v9; // ebp
  unsigned int v10; // eax
  unsigned int v11; // r9d
  int v12; // edx
  unsigned int v13; // eax
  char v15[4]; // [rsp+30h] [rbp-38h] BYREF
  int v16; // [rsp+34h] [rbp-34h] BYREF
  _QWORD v17[6]; // [rsp+38h] [rbp-30h] BYREF
  __int64 v18; // [rsp+80h] [rbp+18h] BYREF

  v18 = a3;
  v16 = 0;
  XWinRT::AutoValue<Windows::Internal::ComposableShell::Multitasking::ISwitchItem *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Internal::ComposableShell::Multitasking::ISwitchItem *>>::AutoValue<Windows::Internal::ComposableShell::Multitasking::ISwitchItem *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Internal::ComposableShell::Multitasking::ISwitchItem *>>(
    v17,
    &v18,
    &v16);
  v7 = v16;
  if ( v16 >= 0 )
  {
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
      }
      else
      {
        XWinRT::detail::ReentrancyGuard<0>::ReentrancyGuard<0>(v15, *(unsigned __int8 *)(a1 + 93), a1 + 96);
        v7 = 0;
        v11 = *(_DWORD *)(a1 + 44);
        if ( *(_DWORD *)(a1 + 40) + 1 <= v11 )
          goto LABEL_11;
        v12 = 1;
        if ( v11 + 1 <= (v11 >> 1) + v11 )
          v12 = v11 >> 1;
        v7 = Windows::Foundation::Collections::Internal::Vector<Windows::Internal::ComposableShell::Multitasking::ISwitchItem *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Internal::ComposableShell::Multitasking::ISwitchItem *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Internal::ComposableShell::Multitasking::ISwitchItem *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Internal::ComposableShell::Multitasking::ISwitchItem *>>::ResizeStorage(
               a1,
               v11 + v12);
        if ( v7 >= 0 )
        {
LABEL_11:
          v13 = *(_DWORD *)(a1 + 40);
          if ( v9 < v13
            && memmove_s(
                 (void *const)(*(_QWORD *)(a1 + 56) + 8LL * (v9 + 1)),
                 8LL * (*(_DWORD *)(a1 + 44) - v9 - 1),
                 (const void *const)(*(_QWORD *)(a1 + 56) + 8LL * v9),
                 8LL * (v13 - v9)) )
          {
            v7 = -2147418113;
            RoOriginateError(2147549183LL, 0LL);
          }
          if ( v7 >= 0 )
          {
            *(_QWORD *)(*(_QWORD *)(a1 + 56) + 8LL * v9) = v17[0];
            v17[0] = 0LL;
            ++*(_DWORD *)(a1 + 40);
            ++*(_DWORD *)(a1 + 88);
          }
        }
      }
    }
    else
    {
      v7 = -2147483637;
      RoOriginateError(2147483659LL, 0LL);
    }
    if ( a1 != -72 )
    {
      if ( *(_DWORD *)(a1 + 72) == 1 )
        *v8 += 0x10000000;
      else
        ReleaseSRWLockExclusive((PSRWLOCK)(a1 + 80));
    }
    if ( v7 >= 0 )
      v7 = Windows::Foundation::Collections::Internal::VectorOptions<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *,0,0,0>::RaiseEvent(
             (unsigned __int8)v15[0],
             *(unsigned __int8 *)(a1 + 92),
             a1,
             1LL,
             v9);
  }
  XWinRT::InterfaceLifetimeTraits::Destroy<Windows::Internal::ComposableShell::Multitasking::ISwitchItem>(v17);
  return (unsigned int)v7;
}
