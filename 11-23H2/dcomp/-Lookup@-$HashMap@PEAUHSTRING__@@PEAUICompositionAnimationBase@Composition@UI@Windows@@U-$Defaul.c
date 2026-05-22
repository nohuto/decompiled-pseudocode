/*
 * XREFs of ?Lookup@?$HashMap@PEAUHSTRING__@@PEAUICompositionAnimationBase@Composition@UI@Windows@@U?$DefaultHash@PEAUHSTRING__@@@Internal@Collections@Foundation@5@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@7895@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@7895@U?$DefaultLifetimeTraits@PEAUICompositionAnimationBase@Composition@UI@Windows@@@7895@U?$HashMapOptions@PEAUHSTRING__@@PEAUICompositionAnimationBase@Composition@UI@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@5@$0A@$00$0A@@7895@@Internal@Collections@Foundation@Windows@@UEAAJPEAUHSTRING__@@PEAPEAUICompositionAnimationBase@Composition@UI@5@@Z @ 0x18014C3C0
 * Callers:
 *     ?Lookup@Api@ImplicitAnimationCollection@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@PEAPEAUICompositionAnimationBase@345@@Z @ 0x18014C5D0 (-Lookup@Api@ImplicitAnimationCollection@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@PEAPEAUIComp.c)
 * Callees:
 *     ?EnsureInitialized@?$HashMap@PEAUHSTRING__@@PEAUICompositionAnimationBase@Composition@UI@Windows@@U?$DefaultHash@PEAUHSTRING__@@@Internal@Collections@Foundation@5@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@7895@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@7895@U?$DefaultLifetimeTraits@PEAUICompositionAnimationBase@Composition@UI@Windows@@@7895@U?$HashMapOptions@PEAUHSTRING__@@PEAUICompositionAnimationBase@Composition@UI@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@5@$0A@$00$0A@@7895@@Internal@Collections@Foundation@Windows@@AEBAJXZ @ 0x180091FA8 (-EnsureInitialized@-$HashMap@PEAUHSTRING__@@PEAUICompositionAnimationBase@Composition@UI@Windows.c)
 *     ??$Construct@UICompositionAnimationBase@Composition@UI@Windows@@@InterfaceLifetimeTraits@XWinRT@@SAJPEAV?$GitStorageType@UICompositionAnimationBase@Composition@UI@Windows@@@detail@1@V231@@Z @ 0x180149EA8 (--$Construct@UICompositionAnimationBase@Composition@UI@Windows@@@InterfaceLifetimeTraits@XWinRT@.c)
 *     ?Localize@ReferencedGitCookie@?$GitStorageType@UICompositionAnimationBase@Composition@UI@Windows@@@detail@XWinRT@@QEAAJPEAPEAUICompositionAnimationBase@Composition@UI@Windows@@@Z @ 0x18014C378 (-Localize@ReferencedGitCookie@-$GitStorageType@UICompositionAnimationBase@Composition@UI@Windows.c)
 *     ?Lookup@?$XHashMap@PEAUHSTRING__@@V?$GitStorageType@UICompositionAnimationBase@Composition@UI@Windows@@@detail@XWinRT@@UKeyTraits@?$HashMap@PEAUHSTRING__@@PEAUICompositionAnimationBase@Composition@UI@Windows@@U?$DefaultHash@PEAUHSTRING__@@@Internal@Collections@Foundation@5@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@7895@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@7895@U?$DefaultLifetimeTraits@PEAUICompositionAnimationBase@Composition@UI@Windows@@@7895@U?$HashMapOptions@PEAUHSTRING__@@PEAUICompositionAnimationBase@Composition@UI@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@5@$0A@$00$0A@@7895@@Internal@Collections@Foundation@Windows@@V?$CElementTraits@V?$GitStorageType@UICompositionAnimationBase@Composition@UI@Windows@@@detail@XWinRT@@@4@@XWinRT@@QEAAJAEBQEAUHSTRING__@@PEAPEAVCPair@12@@Z @ 0x18014C580 (-Lookup@-$XHashMap@PEAUHSTRING__@@V-$GitStorageType@UICompositionAnimationBase@Composition@UI@Wi.c)
 *     ?Read@SerializingLockPolicy@XWinRT@@SA?AV?$LockHolder@VComLock@XWinRT@@UAcquireRead@detail@2@@detail@2@AEAVComLock@2@PEAJ@Z @ 0x18014CBBC (-Read@SerializingLockPolicy@XWinRT@@SA-AV-$LockHolder@VComLock@XWinRT@@UAcquireRead@detail@2@@de.c)
 *     ?Release@ReferencedGitCookie@?$GitStorageType@UICompositionAnimationBase@Composition@UI@Windows@@@detail@XWinRT@@QEAAKXZ @ 0x18014CE8C (-Release@ReferencedGitCookie@-$GitStorageType@UICompositionAnimationBase@Composition@UI@Windows@.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::HashMap<HSTRING__ *,Windows::UI::Composition::ICompositionAnimationBase *,Windows::Foundation::Collections::Internal::DefaultHash<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::UI::Composition::ICompositionAnimationBase *>,Windows::Foundation::Collections::Internal::HashMapOptions<HSTRING__ *,Windows::UI::Composition::ICompositionAnimationBase *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,0,1,0>>::Lookup(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  void *v5; // rsi
  char v6; // r15
  int v7; // ebx
  int v8; // eax
  RTL_SRWLOCK *v9; // rcx
  RTL_SRWLOCK *v11; // [rsp+20h] [rbp-30h] BYREF
  void *v12; // [rsp+28h] [rbp-28h] BYREF
  char v13; // [rsp+30h] [rbp-20h]
  __m128i v14; // [rsp+40h] [rbp-10h] BYREF
  __int64 v15; // [rsp+88h] [rbp+38h] BYREF
  __int64 v16; // [rsp+98h] [rbp+48h] BYREF

  v15 = a2;
  v5 = 0LL;
  LODWORD(v16) = Windows::Foundation::Collections::Internal::HashMap<HSTRING__ *,Windows::UI::Composition::ICompositionAnimationBase *,Windows::Foundation::Collections::Internal::DefaultHash<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::UI::Composition::ICompositionAnimationBase *>,Windows::Foundation::Collections::Internal::HashMapOptions<HSTRING__ *,Windows::UI::Composition::ICompositionAnimationBase *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,0,1,0>>::EnsureInitialized(a1);
  v6 = 0;
  v12 = 0LL;
  v13 = 0;
  v7 = v16;
  if ( (int)v16 < 0 )
    goto LABEL_16;
  XWinRT::SerializingLockPolicy::Read(&v11, a1 + 160, &v16);
  v7 = v16;
  if ( (int)v16 >= 0 )
  {
    v7 = XWinRT::XHashMap<HSTRING__ *,XWinRT::detail::GitStorageType<Windows::UI::Composition::ICompositionAnimationBase>,Windows::Foundation::Collections::Internal::HashMap<HSTRING__ *,Windows::UI::Composition::ICompositionAnimationBase *,Windows::Foundation::Collections::Internal::DefaultHash<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::UI::Composition::ICompositionAnimationBase *>,Windows::Foundation::Collections::Internal::HashMapOptions<HSTRING__ *,Windows::UI::Composition::ICompositionAnimationBase *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,0,1,0>>::KeyTraits,XWinRT::CElementTraits<XWinRT::detail::GitStorageType<Windows::UI::Composition::ICompositionAnimationBase>>>::Lookup(
           a1 + 72,
           &v15,
           &v16);
    if ( v7 >= 0 )
    {
      if ( v16 )
      {
        v14 = *(__m128i *)(v16 + 8);
        v8 = XWinRT::InterfaceLifetimeTraits::Construct<Windows::UI::Composition::ICompositionAnimationBase>(
               (__int64)&v12,
               &v14);
        v6 = v13;
        v7 = v8;
        v5 = v12;
      }
      else
      {
        v7 = -2147483637;
      }
    }
  }
  if ( v11 )
  {
    v9 = v11 + 1;
    if ( LODWORD(v11->Ptr) == 1 )
      --LODWORD(v9->Ptr);
    else
      ReleaseSRWLockShared(v9);
  }
  if ( v7 < 0 )
    goto LABEL_16;
  *a3 = 0LL;
  if ( !v6 )
  {
    *a3 = v5;
    return 0;
  }
  v7 = XWinRT::detail::GitStorageType<Windows::UI::Composition::ICompositionAnimationBase>::ReferencedGitCookie::Localize(
         (__int64)v5,
         a3);
  if ( v7 < 0 )
  {
LABEL_16:
    *a3 = 0LL;
    return (unsigned int)v7;
  }
  XWinRT::detail::GitStorageType<Windows::UI::Composition::ICompositionAnimationBase>::ReferencedGitCookie::Release(v5);
  return (unsigned int)v7;
}
