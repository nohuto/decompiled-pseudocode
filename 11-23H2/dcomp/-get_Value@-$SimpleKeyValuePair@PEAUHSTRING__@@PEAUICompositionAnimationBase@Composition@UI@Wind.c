/*
 * XREFs of ?get_Value@?$SimpleKeyValuePair@PEAUHSTRING__@@PEAUICompositionAnimationBase@Composition@UI@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAUICompositionAnimationBase@Composition@UI@Windows@@@7895@$00@Internal@Collections@Foundation@Windows@@UEAAJPEAPEAUICompositionAnimationBase@Composition@UI@5@@Z @ 0x18014D890
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Localize@ReferencedGitCookie@?$GitStorageType@UICompositionAnimationBase@Composition@UI@Windows@@@detail@XWinRT@@QEAAJPEAPEAUICompositionAnimationBase@Composition@UI@Windows@@@Z @ 0x18014C378 (-Localize@ReferencedGitCookie@-$GitStorageType@UICompositionAnimationBase@Composition@UI@Windows.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::SimpleKeyValuePair<HSTRING__ *,Windows::UI::Composition::ICompositionAnimationBase *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::UI::Composition::ICompositionAnimationBase *>,1>::get_Value(
        __int64 a1,
        _QWORD *a2)
{
  unsigned int v2; // ebx
  __int64 v3; // rcx
  __m128i v5; // [rsp+20h] [rbp-18h]

  v2 = 0;
  v5 = *(__m128i *)(a1 + 72);
  v3 = *(_QWORD *)(a1 + 72);
  if ( (unsigned __int8)_mm_cvtsi128_si32(_mm_srli_si128(v5, 8)) )
  {
    return (unsigned int)XWinRT::detail::GitStorageType<Windows::UI::Composition::ICompositionAnimationBase>::ReferencedGitCookie::Localize(
                           v3,
                           a2);
  }
  else
  {
    *a2 = v5.m128i_i64[0];
    if ( v3 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  }
  return v2;
}
