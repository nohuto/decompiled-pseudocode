/*
 * XREFs of ?GetNode@?$XHashMap@PEAUHSTRING__@@V?$GitStorageType@UICompositionAnimationBase@Composition@UI@Windows@@@detail@XWinRT@@UKeyTraits@?$HashMap@PEAUHSTRING__@@PEAUICompositionAnimationBase@Composition@UI@Windows@@U?$DefaultHash@PEAUHSTRING__@@@Internal@Collections@Foundation@5@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@7895@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@7895@U?$DefaultLifetimeTraits@PEAUICompositionAnimationBase@Composition@UI@Windows@@@7895@U?$HashMapOptions@PEAUHSTRING__@@PEAUICompositionAnimationBase@Composition@UI@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@5@$0A@$00$0A@@7895@@Internal@Collections@Foundation@Windows@@V?$CElementTraits@V?$GitStorageType@UICompositionAnimationBase@Composition@UI@Windows@@@detail@XWinRT@@@4@@XWinRT@@AEBAJAEBQEAUHSTRING__@@AEAI1AEAPEAVCNode@12@PEAPEAV412@@Z @ 0x180036364
 * Callers:
 *     ?SetAt@?$XHashMap@PEAUHSTRING__@@V?$GitStorageType@UICompositionAnimationBase@Composition@UI@Windows@@@detail@XWinRT@@UKeyTraits@?$HashMap@PEAUHSTRING__@@PEAUICompositionAnimationBase@Composition@UI@Windows@@U?$DefaultHash@PEAUHSTRING__@@@Internal@Collections@Foundation@5@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@7895@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@7895@U?$DefaultLifetimeTraits@PEAUICompositionAnimationBase@Composition@UI@Windows@@@7895@U?$HashMapOptions@PEAUHSTRING__@@PEAUICompositionAnimationBase@Composition@UI@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@5@$0A@$00$0A@@7895@@Internal@Collections@Foundation@Windows@@V?$CElementTraits@V?$GitStorageType@UICompositionAnimationBase@Composition@UI@Windows@@@detail@XWinRT@@@4@@XWinRT@@QEAAJAEBQEAUHSTRING__@@AEBV?$GitStorageType@UICompositionAnimationBase@Composition@UI@Windows@@@detail@2@PEAPEAUTXPOSITION@2@@Z @ 0x1800362C8 (-SetAt@-$XHashMap@PEAUHSTRING__@@V-$GitStorageType@UICompositionAnimationBase@Composition@UI@Win.c)
 *     ?Lookup@?$XHashMap@PEAUHSTRING__@@V?$GitStorageType@UICompositionAnimationBase@Composition@UI@Windows@@@detail@XWinRT@@UKeyTraits@?$HashMap@PEAUHSTRING__@@PEAUICompositionAnimationBase@Composition@UI@Windows@@U?$DefaultHash@PEAUHSTRING__@@@Internal@Collections@Foundation@5@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@7895@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@7895@U?$DefaultLifetimeTraits@PEAUICompositionAnimationBase@Composition@UI@Windows@@@7895@U?$HashMapOptions@PEAUHSTRING__@@PEAUICompositionAnimationBase@Composition@UI@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@5@$0A@$00$0A@@7895@@Internal@Collections@Foundation@Windows@@V?$CElementTraits@V?$GitStorageType@UICompositionAnimationBase@Composition@UI@Windows@@@detail@XWinRT@@@4@@XWinRT@@QEAAJAEBQEAUHSTRING__@@PEAPEAVCPair@12@@Z @ 0x18014C580 (-Lookup@-$XHashMap@PEAUHSTRING__@@V-$GitStorageType@UICompositionAnimationBase@Composition@UI@Wi.c)
 * Callees:
 *     ??RStringHash@XWinRT@@QEBAJPEAUHSTRING__@@PEAI@Z @ 0x1800363E8 (--RStringHash@XWinRT@@QEBAJPEAUHSTRING__@@PEAI@Z.c)
 *     ??RStringEquals@XWinRT@@QEBAJPEAUHSTRING__@@0PEA_N@Z @ 0x18014AAA8 (--RStringEquals@XWinRT@@QEBAJPEAUHSTRING__@@0PEA_N@Z.c)
 */

__int64 __fastcall XWinRT::XHashMap<HSTRING__ *,XWinRT::detail::GitStorageType<Windows::UI::Composition::ICompositionAnimationBase>,Windows::Foundation::Collections::Internal::HashMap<HSTRING__ *,Windows::UI::Composition::ICompositionAnimationBase *,Windows::Foundation::Collections::Internal::DefaultHash<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::UI::Composition::ICompositionAnimationBase *>,Windows::Foundation::Collections::Internal::HashMapOptions<HSTRING__ *,Windows::UI::Composition::ICompositionAnimationBase *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,0,1,0>>::KeyTraits,XWinRT::CElementTraits<XWinRT::detail::GitStorageType<Windows::UI::Composition::ICompositionAnimationBase>>>::GetNode(
        __int64 a1,
        _QWORD *a2,
        _DWORD *a3,
        _DWORD *a4,
        _QWORD *a5,
        _QWORD *a6)
{
  __int64 result; // rax
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rbx
  _QWORD *v14; // rsi
  __int64 v15; // rdi
  __int64 v16; // rbx
  _QWORD *v17; // rax
  char v18; // [rsp+40h] [rbp+8h] BYREF

  result = XWinRT::StringHash::operator()(a1, *a2, a4);
  if ( (int)result >= 0 )
  {
    v11 = (unsigned int)*a4;
    v12 = (unsigned int)(*a4 % *(_DWORD *)(a1 + 24));
    v13 = *(_QWORD *)(a1 + 8);
    *a3 = v12;
    if ( v13 )
    {
      v14 = a5;
      v15 = 0LL;
      v16 = *(_QWORD *)(v13 + 8 * v12);
      *a5 = 0LL;
      while ( v16 )
      {
        if ( *(_DWORD *)(v16 + 32) == (_DWORD)v11 )
        {
          result = XWinRT::StringEquals::operator()(v11, *(_QWORD *)v16, *a2, &v18);
          v11 = (unsigned int)*a4;
          if ( (int)result < 0 )
            return result;
          if ( v18 )
          {
            v17 = a6;
            *v14 = v15;
            *v17 = v16;
            return 0LL;
          }
        }
        v15 = v16;
        v16 = *(_QWORD *)(v16 + 24);
      }
    }
    *a6 = 0LL;
    return 0LL;
  }
  return result;
}
