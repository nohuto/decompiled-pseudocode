/*
 * XREFs of ??$Construct@UICompositionAnimationBase@Composition@UI@Windows@@@InterfaceLifetimeTraits@XWinRT@@SAJPEAV?$GitStorageType@UICompositionAnimationBase@Composition@UI@Windows@@@detail@1@V231@@Z @ 0x180149EA8
 * Callers:
 *     ?Initialize@?$SimpleKeyValuePair@PEAUHSTRING__@@PEAUICompositionAnimationBase@Composition@UI@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAUICompositionAnimationBase@Composition@UI@Windows@@@7895@$00@Internal@Collections@Foundation@Windows@@AEAAJAEBQEAUHSTRING__@@AEBV?$GitStorageType@UICompositionAnimationBase@Composition@UI@Windows@@@detail@XWinRT@@@Z @ 0x18014C090 (-Initialize@-$SimpleKeyValuePair@PEAUHSTRING__@@PEAUICompositionAnimationBase@Composition@UI@Win.c)
 *     ?Lookup@?$HashMap@PEAUHSTRING__@@PEAUICompositionAnimationBase@Composition@UI@Windows@@U?$DefaultHash@PEAUHSTRING__@@@Internal@Collections@Foundation@5@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@7895@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@7895@U?$DefaultLifetimeTraits@PEAUICompositionAnimationBase@Composition@UI@Windows@@@7895@U?$HashMapOptions@PEAUHSTRING__@@PEAUICompositionAnimationBase@Composition@UI@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@5@$0A@$00$0A@@7895@@Internal@Collections@Foundation@Windows@@UEAAJPEAUHSTRING__@@PEAPEAUICompositionAnimationBase@Composition@UI@5@@Z @ 0x18014C3C0 (-Lookup@-$HashMap@PEAUHSTRING__@@PEAUICompositionAnimationBase@Composition@UI@Windows@@U-$Defaul.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall XWinRT::InterfaceLifetimeTraits::Construct<Windows::UI::Composition::ICompositionAnimationBase>(
        __int64 a1,
        __m128i *a2)
{
  char v2; // al
  __m128i v4; // [rsp+20h] [rbp-18h]

  v4 = *a2;
  v2 = _mm_cvtsi128_si32(_mm_srli_si128(*a2, 8));
  *(_BYTE *)(a1 + 8) = v2;
  if ( v2 )
  {
    *(_QWORD *)a1 = v4.m128i_i64[0];
    _InterlockedIncrement((volatile signed __int32 *)v4.m128i_i64[0]);
  }
  else
  {
    *(_QWORD *)a1 = v4.m128i_i64[0];
    if ( v4.m128i_i64[0] )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4.m128i_i64[0] + 8LL))(v4.m128i_i64[0]);
  }
  return 0LL;
}
