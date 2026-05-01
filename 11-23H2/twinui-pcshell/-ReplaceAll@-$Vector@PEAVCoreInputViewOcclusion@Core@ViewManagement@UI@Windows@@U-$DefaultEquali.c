/*
 * XREFs of ?ReplaceAll@?$Vector@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@U?$DefaultEqualityPredicate@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@@Internal@Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@@7895@U?$DefaultVectorOptions@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@@7895@@Internal@Collections@Foundation@Windows@@UEAAJIPEAPEAUICoreInputViewOcclusion@Core@ViewManagement@UI@5@@Z @ 0x18052A7D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Write@SerializingLockPolicy@XWinRT@@SA?AV?$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@detail@2@AEAVComLock@2@PEAJ@Z @ 0x18004C8E8 (-Write@SerializingLockPolicy@XWinRT@@SA-AV-$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@.c)
 *     ??0?$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ @ 0x18013FEFC (--0-$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ.c)
 *     ?RaiseEvent@?$VectorOptions@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@$0A@$0A@$0A@@Internal@Collections@Foundation@Windows@@SAJZZ @ 0x18013FF18 (-RaiseEvent@-$VectorOptions@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@$.c)
 *     ??$Construct@UICoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@@InterfaceLifetimeTraits@XWinRT@@SAJPEAPEAUICoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@PEAU23456@@Z @ 0x1802DCA3E (--$Construct@UICoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@@InterfaceLifetimeTraits@X.c)
 *     ??$Destroy@UICoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@@InterfaceLifetimeTraits@XWinRT@@SAXPEAPEAUICoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@@Z @ 0x1802DCA72 (--$Destroy@UICoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@@InterfaceLifetimeTraits@XWi.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>>::ReplaceAll(
        __int64 a1,
        unsigned int a2,
        __int64 *a3)
{
  int v3; // ebx
  unsigned int v5; // r14d
  __int64 *v8; // rsi
  __int64 v9; // rdi
  unsigned int v10; // eax
  __int64 *v11; // rax
  RTL_SRWLOCK *v12; // rcx
  __int64 *v13; // r14
  RTL_SRWLOCK *v15; // [rsp+30h] [rbp-28h] BYREF
  int v16; // [rsp+78h] [rbp+20h] BYREF

  v3 = 0;
  v5 = 0;
  v16 = 0;
  if ( !a2 )
  {
    v9 = 0LL;
    v8 = 0LL;
LABEL_9:
    if ( v3 >= 0 )
    {
      XWinRT::SerializingLockPolicy::Write(&v15, (RTL_SRWLOCK *)(a1 + 72), &v16);
      v3 = v16;
      if ( v16 >= 0 )
      {
        XWinRT::detail::ReentrancyGuard<0>::ReentrancyGuard<0>((__int64)&v16);
        v10 = *(_DWORD *)(a1 + 40);
        v3 = 0;
        *(_DWORD *)(a1 + 48) = 0;
        ++*(_DWORD *)(a1 + 88);
        *(_DWORD *)(a1 + 40) = v9;
        v9 = v10;
        v11 = *(__int64 **)(a1 + 56);
        *(_QWORD *)(a1 + 56) = v8;
        v8 = v11;
        *(_DWORD *)(a1 + 44) = v5;
      }
      if ( v15 )
      {
        v12 = v15 + 1;
        if ( LODWORD(v15->Ptr) == 1 )
          LODWORD(v12->Ptr) += 0x10000000;
        else
          ReleaseSRWLockExclusive(v12);
      }
    }
    goto LABEL_16;
  }
  v8 = (__int64 *)malloc(8LL * a2);
  if ( !v8 )
  {
    v3 = -2147024882;
    v9 = 0LL;
    v16 = -2147024882;
    goto LABEL_9;
  }
  v5 = a2;
  v9 = 0LL;
  while ( 1 )
  {
    v16 = XWinRT::InterfaceLifetimeTraits::Construct<Windows::UI::ViewManagement::Core::ICoreInputViewOcclusion>(
            &v8[v9],
            *a3);
    v3 = v16;
    if ( v16 < 0 )
      break;
    v9 = (unsigned int)(v9 + 1);
    ++a3;
    if ( (unsigned int)v9 >= v5 )
      goto LABEL_9;
  }
LABEL_16:
  if ( v8 )
  {
    if ( (_DWORD)v9 )
    {
      v13 = v8;
      do
      {
        XWinRT::InterfaceLifetimeTraits::Destroy<Windows::UI::ViewManagement::Core::ICoreInputViewOcclusion>(v13++);
        --v9;
      }
      while ( v9 );
    }
    free(v8);
  }
  if ( v3 >= 0 )
    return (unsigned int)Windows::Foundation::Collections::Internal::VectorOptions<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *,0,0,0>::RaiseEvent();
  return (unsigned int)v3;
}
