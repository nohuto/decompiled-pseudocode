/*
 * XREFs of ?InsertAtInternal@?$Vector@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@UCoreKeyboardPositionAndSizeOptionEquality@KeyboardHosting@@UCoreKeyboardPositionAndSizeOptionLifetimeTraits@8@U?$DefaultVectorOptions@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@4Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@AEAAJIUCoreKeyboardPositionAndSizeOption@Core@Text@2UI@5@_N@Z @ 0x180125C60
 * Callers:
 *     ?Append@?$Vector@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@UCoreKeyboardPositionAndSizeOptionEquality@KeyboardHosting@@UCoreKeyboardPositionAndSizeOptionLifetimeTraits@8@U?$DefaultVectorOptions@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@4Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@UEAAJUCoreKeyboardPositionAndSizeOption@Core@Text@2UI@5@@Z @ 0x180125C10 (-Append@-$Vector@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@UCoreKeyboard.c)
 *     ?InsertAt@?$Vector@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@UCoreKeyboardPositionAndSizeOptionEquality@KeyboardHosting@@UCoreKeyboardPositionAndSizeOptionLifetimeTraits@8@U?$DefaultVectorOptions@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@4Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@UEAAJIUCoreKeyboardPositionAndSizeOption@Core@Text@2UI@5@@Z @ 0x1804864C0 (-InsertAt@-$Vector@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@UCoreKeyboa.c)
 * Callees:
 *     ??0?$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ @ 0x180125E00 (--0-$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ.c)
 *     ?RaiseEvent@?$VectorOptions@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@$0A@$0A@$0A@@Internal@Collections@Foundation@Windows@@SAJZZ @ 0x180125E1C (-RaiseEvent@-$VectorOptions@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@$.c)
 *     memmove_s @ 0x1802DA9D4 (memmove_s.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption,KeyboardHosting::CoreKeyboardPositionAndSizeOptionEquality,KeyboardHosting::CoreKeyboardPositionAndSizeOptionLifetimeTraits,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption>>::InsertAtInternal(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        char a4)
{
  __int64 v6; // rbx
  __int64 v8; // rbp
  unsigned int v9; // esi
  unsigned int v10; // eax
  int v11; // r12d
  unsigned int v12; // r8d
  unsigned int v13; // eax
  __int64 v14; // rax
  __int128 v15; // xmm1
  __int64 v16; // rcx
  __int128 v17; // xmm0
  int v19; // r13d
  __int64 v20; // rcx
  unsigned int v21; // r13d
  void *v22; // rax
  char v23[16]; // [rsp+30h] [rbp-48h] BYREF

  v6 = a1 + 72;
  v8 = a2;
  if ( *(_DWORD *)(a1 + 72) == 1 )
  {
    if ( !*(_DWORD *)(a1 + 80) )
      *(_DWORD *)(a1 + 80) = -268435456;
  }
  else
  {
    AcquireSRWLockExclusive((PSRWLOCK)(a1 + 80));
  }
  v9 = *(_DWORD *)(a1 + 40);
  v10 = v9;
  if ( a4 )
  {
    v8 = v9;
  }
  else
  {
    v9 = v8;
    if ( (unsigned int)v8 > v10 )
    {
      v11 = -2147483637;
      RoOriginateError(2147483659LL, 0LL);
      goto LABEL_10;
    }
  }
  if ( v10 >= 0x7FFFFFFF )
  {
    v11 = -2147024882;
    goto LABEL_10;
  }
  XWinRT::detail::ReentrancyGuard<0>::ReentrancyGuard<0>(v23, *(unsigned __int8 *)(a1 + 93), a1 + 96);
  v11 = 0;
  v12 = *(_DWORD *)(a1 + 44);
  if ( *(_DWORD *)(a1 + 40) + 1 > v12 )
  {
    v19 = 1;
    v20 = *(_QWORD *)(a1 + 56);
    if ( v12 + 1 <= (v12 >> 1) + v12 )
      v19 = v12 >> 1;
    v21 = v12 + v19;
    if ( v20 )
      v22 = (void *)_o_realloc(v20, 56LL * v21);
    else
      v22 = malloc(56LL * v21);
    if ( !v22 )
    {
      v11 = -2147024882;
      goto LABEL_10;
    }
    *(_QWORD *)(a1 + 56) = v22;
    *(_DWORD *)(a1 + 44) = v21;
  }
  v13 = *(_DWORD *)(a1 + 40);
  if ( v9 < v13
    && (v8 = v9,
        memmove_s(
          (void *const)(*(_QWORD *)(a1 + 56) + 56LL * (v9 + 1)),
          56LL * (*(_DWORD *)(a1 + 44) - v9 - 1),
          (const void *const)(*(_QWORD *)(a1 + 56) + 56LL * v9),
          56LL * (v13 - v9))) )
  {
    v11 = -2147418113;
    RoOriginateError(2147549183LL, 0LL);
  }
  else
  {
    v14 = *(_QWORD *)(a1 + 56);
    v15 = *(_OWORD *)(a3 + 16);
    v16 = 56 * v8;
    *(_OWORD *)(v16 + v14) = *(_OWORD *)a3;
    v17 = *(_OWORD *)(a3 + 32);
    *(_OWORD *)(v16 + v14 + 16) = v15;
    *(_QWORD *)&v15 = *(_QWORD *)(a3 + 48);
    *(_OWORD *)(v16 + v14 + 32) = v17;
    *(_QWORD *)(v16 + v14 + 48) = v15;
    ++*(_DWORD *)(a1 + 40);
    ++*(_DWORD *)(a1 + 88);
  }
LABEL_10:
  if ( v6 )
  {
    if ( *(_DWORD *)v6 == 1 )
      *(_DWORD *)(v6 + 8) += 0x10000000;
    else
      ReleaseSRWLockExclusive((PSRWLOCK)(v6 + 8));
  }
  if ( v11 < 0 )
    return (unsigned int)v11;
  else
    return Windows::Foundation::Collections::Internal::VectorOptions<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *,0,0,0>::RaiseEvent(
             (unsigned __int8)v23[0],
             *(unsigned __int8 *)(a1 + 92),
             a1,
             1LL,
             v9);
}
