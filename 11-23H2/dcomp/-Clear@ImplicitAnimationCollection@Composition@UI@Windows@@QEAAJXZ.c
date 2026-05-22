/*
 * XREFs of ?Clear@ImplicitAnimationCollection@Composition@UI@Windows@@QEAAJXZ @ 0x180092348
 * Callers:
 *     ?Clear@Api@ImplicitAnimationCollection@Composition@UI@Windows@@UEAAJXZ @ 0x1800922F0 (-Clear@Api@ImplicitAnimationCollection@Composition@UI@Windows@@UEAAJXZ.c)
 *     ?Destroy@ImplicitAnimationCollection@Composition@UI@Windows@@UEAAXXZ @ 0x18014AF00 (-Destroy@ImplicitAnimationCollection@Composition@UI@Windows@@UEAAXXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Clear@?$HashMap@PEAUHSTRING__@@PEAUICompositionAnimationBase@Composition@UI@Windows@@U?$DefaultHash@PEAUHSTRING__@@@Internal@Collections@Foundation@5@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@7895@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@7895@U?$DefaultLifetimeTraits@PEAUICompositionAnimationBase@Composition@UI@Windows@@@7895@U?$HashMapOptions@PEAUHSTRING__@@PEAUICompositionAnimationBase@Composition@UI@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@5@$0A@$00$0A@@7895@@Internal@Collections@Foundation@Windows@@UEAAJXZ @ 0x180091E20 (-Clear@-$HashMap@PEAUHSTRING__@@PEAUICompositionAnimationBase@Composition@UI@Windows@@U-$Default.c)
 */

__int64 __fastcall Windows::UI::Composition::ImplicitAnimationCollection::Clear(
        Windows::UI::Composition::ImplicitAnimationCollection *this)
{
  int v1; // eax
  unsigned int v2; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = Windows::Foundation::Collections::Internal::HashMap<HSTRING__ *,Windows::UI::Composition::ICompositionAnimationBase *,Windows::Foundation::Collections::Internal::DefaultHash<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::UI::Composition::ICompositionAnimationBase *>,Windows::Foundation::Collections::Internal::HashMapOptions<HSTRING__ *,Windows::UI::Composition::ICompositionAnimationBase *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,0,1,0>>::Clear(*((_QWORD *)this + 20));
  v2 = v1;
  if ( v1 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x168,
    (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtimplicitanimationcollection.cpp",
    (const char *)(unsigned int)v1);
  return v2;
}
