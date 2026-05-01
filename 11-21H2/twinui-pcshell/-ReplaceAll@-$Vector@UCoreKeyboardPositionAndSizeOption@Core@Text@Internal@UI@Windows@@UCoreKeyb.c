/*
 * XREFs of ?ReplaceAll@?$Vector@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@UCoreKeyboardPositionAndSizeOptionEquality@KeyboardHosting@@UCoreKeyboardPositionAndSizeOptionLifetimeTraits@8@U?$DefaultVectorOptions@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@4Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@UEAAJIPEAUCoreKeyboardPositionAndSizeOption@Core@Text@2UI@5@@Z @ 0x1804868C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Write@SerializingLockPolicy@XWinRT@@SA?AV?$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@detail@2@AEAVComLock@2@PEAJ@Z @ 0x180034788 (-Write@SerializingLockPolicy@XWinRT@@SA-AV-$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@.c)
 *     ??0?$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ @ 0x180125E00 (--0-$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ.c)
 *     ?RaiseEvent@?$VectorOptions@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@$0A@$0A@$0A@@Internal@Collections@Foundation@Windows@@SAJZZ @ 0x180125E1C (-RaiseEvent@-$VectorOptions@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@$.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption,KeyboardHosting::CoreKeyboardPositionAndSizeOptionEquality,KeyboardHosting::CoreKeyboardPositionAndSizeOptionLifetimeTraits,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption>>::ReplaceAll(
        __int64 a1,
        unsigned int a2,
        __int64 a3)
{
  __int64 v4; // rdi
  char *v6; // rax
  int v7; // edi
  __int64 v8; // rcx
  __int64 v9; // rbp
  int v10; // r14d
  void *v11; // rsi
  int v12; // r15d
  __int64 v13; // xmm0_8
  __int128 v14; // xmm2
  __int128 v15; // xmm3
  void *v16; // rax
  RTL_SRWLOCK *v17; // rcx
  RTL_SRWLOCK *v19; // [rsp+30h] [rbp-28h] BYREF
  int v20; // [rsp+78h] [rbp+20h] BYREF

  v20 = 0;
  v4 = a2;
  if ( a2 )
  {
    v6 = (char *)malloc(56LL * a2);
    if ( !v6 )
    {
      v7 = -2147024882;
      goto LABEL_16;
    }
    v20 = 0;
    v8 = v4;
    v9 = a3 - (_QWORD)v6;
    v10 = v4;
    v11 = v6;
    v12 = v4;
    do
    {
      v13 = *(_QWORD *)&v6[v9 + 48];
      v14 = *(_OWORD *)&v6[v9 + 16];
      v15 = *(_OWORD *)&v6[v9 + 32];
      *(_OWORD *)v6 = *(_OWORD *)&v6[v9];
      *((_OWORD *)v6 + 1) = v14;
      *((_OWORD *)v6 + 2) = v15;
      *((_QWORD *)v6 + 6) = v13;
      v6 += 56;
      --v8;
    }
    while ( v8 );
  }
  else
  {
    v10 = 0;
    v11 = 0LL;
    v12 = 0;
  }
  XWinRT::SerializingLockPolicy::Write(&v19, (RTL_SRWLOCK *)(a1 + 72), &v20);
  v7 = v20;
  if ( v20 >= 0 )
  {
    XWinRT::detail::ReentrancyGuard<0>::ReentrancyGuard<0>((__int64)&v20);
    v16 = *(void **)(a1 + 56);
    v7 = 0;
    *(_DWORD *)(a1 + 48) = 0;
    ++*(_DWORD *)(a1 + 88);
    *(_QWORD *)(a1 + 56) = v11;
    v11 = v16;
    *(_DWORD *)(a1 + 40) = v10;
    *(_DWORD *)(a1 + 44) = v12;
  }
  if ( v19 )
  {
    v17 = v19 + 1;
    if ( LODWORD(v19->Ptr) == 1 )
      LODWORD(v17->Ptr) += 0x10000000;
    else
      ReleaseSRWLockExclusive(v17);
  }
  if ( v11 )
    free(v11);
LABEL_16:
  if ( v7 >= 0 )
    return (unsigned int)Windows::Foundation::Collections::Internal::VectorOptions<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *,0,0,0>::RaiseEvent();
  return (unsigned int)v7;
}
