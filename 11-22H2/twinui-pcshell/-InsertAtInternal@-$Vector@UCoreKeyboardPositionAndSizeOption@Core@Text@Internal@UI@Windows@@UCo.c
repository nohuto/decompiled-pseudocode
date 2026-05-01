/*
 * XREFs of ?InsertAtInternal@?$Vector@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@UCoreKeyboardPositionAndSizeOptionEquality@KeyboardHosting@@UCoreKeyboardPositionAndSizeOptionLifetimeTraits@8@U?$DefaultVectorOptions@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@4Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@AEAAJIUCoreKeyboardPositionAndSizeOption@Core@Text@2UI@5@_N@Z @ 0x18013FD00
 * Callers:
 *     ?Append@?$Vector@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@UCoreKeyboardPositionAndSizeOptionEquality@KeyboardHosting@@UCoreKeyboardPositionAndSizeOptionLifetimeTraits@8@U?$DefaultVectorOptions@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@4Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@UEAAJUCoreKeyboardPositionAndSizeOption@Core@Text@2UI@5@@Z @ 0x18013FCB0 (-Append@-$Vector@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@UCoreKeyboard.c)
 *     ?InsertAt@?$Vector@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@UCoreKeyboardPositionAndSizeOptionEquality@KeyboardHosting@@UCoreKeyboardPositionAndSizeOptionLifetimeTraits@8@U?$DefaultVectorOptions@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@4Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@UEAAJIUCoreKeyboardPositionAndSizeOption@Core@Text@2UI@5@@Z @ 0x180539730 (-InsertAt@-$Vector@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@UCoreKeyboa.c)
 * Callees:
 *     ??0?$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ @ 0x18013FEFC (--0-$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ.c)
 *     ?RaiseEvent@?$VectorOptions@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@$0A@$0A@$0A@@Internal@Collections@Foundation@Windows@@SAJZZ @ 0x18013FF18 (-RaiseEvent@-$VectorOptions@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@$.c)
 *     memmove_s @ 0x1803908A8 (memmove_s.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption,KeyboardHosting::CoreKeyboardPositionAndSizeOptionEquality,KeyboardHosting::CoreKeyboardPositionAndSizeOptionLifetimeTraits,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption>>::InsertAtInternal(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        char a4)
{
  __int64 v6; // rbx
  _DWORD *v9; // r14
  unsigned int v10; // r13d
  unsigned int v11; // eax
  unsigned int *v12; // rbp
  int v13; // edx
  unsigned int v14; // r8d
  unsigned int v15; // eax
  __int64 v16; // rbp
  __int64 v17; // rax
  __int128 v18; // xmm1
  __int64 v19; // rcx
  __int128 v20; // xmm0
  int v22; // r9d
  __int64 v23; // rcx
  unsigned int v24; // r9d
  void *v25; // rax
  int v26; // [rsp+30h] [rbp-48h]
  unsigned int v27; // [rsp+30h] [rbp-48h]
  char v28[12]; // [rsp+34h] [rbp-44h] BYREF

  v6 = a1 + 72;
  if ( *(_DWORD *)(a1 + 72) == 1 )
  {
    if ( !*(_DWORD *)(a1 + 80) )
      *(_DWORD *)(a1 + 80) = -268435456;
  }
  else
  {
    AcquireSRWLockExclusive((PSRWLOCK)(a1 + 80));
  }
  if ( a4 )
  {
    a2 = *(_DWORD *)(a1 + 40);
    v9 = (_DWORD *)(a1 + 40);
    v10 = a2;
    v11 = a2;
    v12 = (unsigned int *)(a1 + 40);
  }
  else
  {
    v11 = *(_DWORD *)(a1 + 40);
    v12 = (unsigned int *)(a1 + 40);
    v9 = (_DWORD *)(a1 + 40);
    v10 = a2;
    if ( a2 > v11 )
    {
      v26 = -2147483637;
      RoOriginateError(2147483659LL, 0LL);
      v13 = -2147483637;
      goto LABEL_11;
    }
  }
  if ( v11 >= 0x7FFFFFFF )
  {
    v13 = -2147024882;
    v26 = -2147024882;
    goto LABEL_11;
  }
  XWinRT::detail::ReentrancyGuard<0>::ReentrancyGuard<0>(v28, *(unsigned __int8 *)(a1 + 93), a1 + 96);
  v13 = 0;
  v14 = *(_DWORD *)(a1 + 44);
  v26 = 0;
  if ( *v12 + 1 > v14 )
  {
    v22 = 1;
    v23 = *(_QWORD *)(a1 + 56);
    if ( v14 + 1 <= (v14 >> 1) + v14 )
      v22 = v14 >> 1;
    v24 = v14 + v22;
    v27 = v24;
    if ( v23 )
      v25 = (void *)_o_realloc(v23, 56LL * v24);
    else
      v25 = malloc(56LL * v24);
    if ( !v25 )
    {
      v13 = -2147024882;
      v26 = -2147024882;
      goto LABEL_11;
    }
    *(_QWORD *)(a1 + 56) = v25;
    v13 = 0;
    *(_DWORD *)(a1 + 44) = v27;
    v26 = 0;
  }
  v15 = *v12;
  if ( a2 >= *v12 )
  {
    v16 = v10;
LABEL_10:
    v17 = *(_QWORD *)(a1 + 56);
    v18 = *(_OWORD *)(a3 + 16);
    v19 = 56 * v16;
    *(_OWORD *)(v19 + v17) = *(_OWORD *)a3;
    v20 = *(_OWORD *)(a3 + 32);
    *(_OWORD *)(v19 + v17 + 16) = v18;
    *(_QWORD *)&v18 = *(_QWORD *)(a3 + 48);
    *(_OWORD *)(v19 + v17 + 32) = v20;
    *(_QWORD *)(v19 + v17 + 48) = v18;
    ++*v9;
    ++*(_DWORD *)(a1 + 88);
    goto LABEL_11;
  }
  v16 = a2;
  if ( !memmove_s(
          (void *const)(*(_QWORD *)(a1 + 56) + 56LL * (a2 + 1)),
          56LL * (*(_DWORD *)(a1 + 44) - a2 - 1),
          (const void *const)(*(_QWORD *)(a1 + 56) + 56LL * a2),
          56LL * (v15 - a2)) )
  {
    v13 = 0;
    goto LABEL_10;
  }
  v26 = -2147418113;
  RoOriginateError(2147549183LL, 0LL);
  v13 = -2147418113;
LABEL_11:
  if ( v6 )
  {
    if ( *(_DWORD *)v6 == 1 )
    {
      *(_DWORD *)(v6 + 8) += 0x10000000;
    }
    else
    {
      ReleaseSRWLockExclusive((PSRWLOCK)(v6 + 8));
      v13 = v26;
    }
  }
  if ( v13 < 0 )
    return (unsigned int)v13;
  else
    return Windows::Foundation::Collections::Internal::VectorOptions<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *,0,0,0>::RaiseEvent(
             (unsigned __int8)v28[0],
             *(unsigned __int8 *)(a1 + 92),
             a1,
             1LL,
             a2);
}
