/*
 * XREFs of ?Initialize@?$SimpleKeyValuePair@PEAUHSTRING__@@PEAUICompositionAnimationBase@Composition@UI@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAUICompositionAnimationBase@Composition@UI@Windows@@@7895@$00@Internal@Collections@Foundation@Windows@@AEAAJAEBQEAUHSTRING__@@AEBV?$GitStorageType@UICompositionAnimationBase@Composition@UI@Windows@@@detail@XWinRT@@@Z @ 0x18014C090
 * Callers:
 *     ?Make@?$SimpleKeyValuePair@PEAUHSTRING__@@PEAUICompositionAnimationBase@Composition@UI@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAUICompositionAnimationBase@Composition@UI@Windows@@@7895@$00@Internal@Collections@Foundation@Windows@@SAJAEBQEAUHSTRING__@@AEBV?$GitStorageType@UICompositionAnimationBase@Composition@UI@Windows@@@detail@XWinRT@@PEAPEAV12345@@Z @ 0x18014C7FC (-Make@-$SimpleKeyValuePair@PEAUHSTRING__@@PEAUICompositionAnimationBase@Composition@UI@Windows@@.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$?0PEAUHSTRING__@@@?$AutoValue@PEAUHSTRING__@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@@XWinRT@@QEAA@AEBQEAUHSTRING__@@PEAJ@Z @ 0x180149BC4 (--$-0PEAUHSTRING__@@@-$AutoValue@PEAUHSTRING__@@U-$DefaultLifetimeTraits@PEAUHSTRING__@@@Interna.c)
 *     ??$Construct@UICompositionAnimationBase@Composition@UI@Windows@@@InterfaceLifetimeTraits@XWinRT@@SAJPEAV?$GitStorageType@UICompositionAnimationBase@Composition@UI@Windows@@@detail@1@V231@@Z @ 0x180149EA8 (--$Construct@UICompositionAnimationBase@Composition@UI@Windows@@@InterfaceLifetimeTraits@XWinRT@.c)
 *     ?Release@ReferencedGitCookie@?$GitStorageType@UICompositionAnimationBase@Composition@UI@Windows@@@detail@XWinRT@@QEAAKXZ @ 0x18014CE8C (-Release@ReferencedGitCookie@-$GitStorageType@UICompositionAnimationBase@Composition@UI@Windows@.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::SimpleKeyValuePair<HSTRING__ *,Windows::UI::Composition::ICompositionAnimationBase *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::UI::Composition::ICompositionAnimationBase *>,1>::Initialize(
        __int64 a1,
        HSTRING *a2,
        __m128i *a3)
{
  int v5; // ebx
  __m128i v6; // xmm0
  void *v7; // rcx
  char v8; // al
  HSTRING v9; // rcx
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  HSTRING string; // [rsp+20h] [rbp-30h] BYREF
  void *v14[2]; // [rsp+30h] [rbp-20h] BYREF
  __m128i v15; // [rsp+40h] [rbp-10h] BYREF
  HRESULT v16; // [rsp+78h] [rbp+28h] BYREF

  v16 = 0;
  XWinRT::AutoValue<HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>>::AutoValue<HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>>(
    &string,
    a2,
    &v16);
  v5 = v16;
  if ( v16 >= 0 )
  {
    v6 = *a3;
    v14[0] = 0LL;
    LOBYTE(v14[1]) = 0;
    v15 = v6;
    v5 = XWinRT::InterfaceLifetimeTraits::Construct<Windows::UI::Composition::ICompositionAnimationBase>(
           (__int64)v14,
           &v15);
    if ( v5 >= 0 )
    {
      v9 = *(HSTRING *)(a1 + 64);
      v10 = *(_OWORD *)v14;
      *(_QWORD *)(a1 + 64) = string;
      v11 = *(_OWORD *)(a1 + 72);
      string = v9;
      *(_OWORD *)(a1 + 72) = v10;
      *(_OWORD *)v14 = v11;
      v8 = BYTE8(v11);
      v7 = (void *)v11;
    }
    else
    {
      v7 = 0LL;
      v8 = 0;
    }
    if ( v8 )
    {
      XWinRT::detail::GitStorageType<Windows::UI::Composition::ICompositionAnimationBase>::ReferencedGitCookie::Release(v7);
    }
    else if ( v7 )
    {
      (*(void (__fastcall **)(void *))(*(_QWORD *)v7 + 16LL))(v7);
    }
  }
  WindowsDeleteString(string);
  return (unsigned int)v5;
}
