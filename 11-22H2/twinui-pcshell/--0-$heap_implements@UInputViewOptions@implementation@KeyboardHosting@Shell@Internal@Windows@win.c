/*
 * XREFs of ??0?$heap_implements@UInputViewOptions@implementation@KeyboardHosting@Shell@Internal@Windows@winrt@@@impl@winrt@@QEAA@_N000W4ViewAnimationKind@Text@Shell@Internal@Windows@2@W4ViewEffectKind@45672@W4ViewZOrder@45672@URect@Foundation@72@U?$IVectorView@URect@Foundation@Windows@winrt@@@Collections@Foundation@72@@Z @ 0x1805211AC
 * Callers:
 *     ??$make@UInputViewOptions@implementation@KeyboardHosting@Shell@Internal@Windows@winrt@@AEA_NAEA_NAEA_NAEA_NW4ViewAnimationKind@Text@4567@W4ViewEffectKind@94567@W4ViewZOrder@94567@URect@Foundation@67@AEAU?$IVectorView@URect@Foundation@Windows@winrt@@@Collections@Foundation@67@@winrt@@YA?A_PAEA_N000$$QEAW4ViewAnimationKind@Text@Shell@Internal@Windows@0@$$QEAW4ViewEffectKind@23450@$$QEAW4ViewZOrder@23450@$$QEAURect@Foundation@50@AEAU?$IVectorView@URect@Foundation@Windows@winrt@@@Collections@950@@Z @ 0x180520E14 (--$make@UInputViewOptions@implementation@KeyboardHosting@Shell@Internal@Windows@winrt@@AEA_NAEA_.c)
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ @ 0x180176DC4 (-add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ.c)
 */

__m128i *__fastcall winrt::impl::heap_implements<winrt::Windows::Internal::Shell::KeyboardHosting::implementation::InputViewOptions>::heap_implements<winrt::Windows::Internal::Shell::KeyboardHosting::implementation::InputViewOptions>(
        __m128i *a1,
        __int8 a2,
        __int8 a3,
        __int8 a4,
        char a5,
        int a6,
        int a7,
        int a8,
        const __m128i *a9,
        winrt::Windows::Foundation::IUnknown *a10)
{
  winrt::Windows::Foundation::IUnknown *v10; // rsi
  winrt::Windows::Foundation::IUnknown *v12; // rbx
  __m128i v13; // xmm0
  winrt::Windows::Foundation::IUnknown *v14; // rcx

  v10 = a10;
  v12 = *(winrt::Windows::Foundation::IUnknown **)a10;
  v13 = _mm_loadu_si128(a9);
  *(_QWORD *)a10 = 0LL;
  a1[1].m128i_i64[0] = (__int64)&winrt::impl::produce<winrt::Windows::Internal::Shell::KeyboardHosting::implementation::InputViewOptions,winrt::Windows::Internal::Shell::KeyboardHosting::IInputViewOptions>::`vftable';
  a1[1].m128i_i64[1] = (__int64)&winrt::impl::produce<winrt::Windows::Internal::Shell::KeyboardHosting::implementation::InputViewOptions,winrt::Windows::Internal::Shell::Text::IViewOptions>::`vftable';
  a10 = v12;
  _InterlockedExchangeAdd(&`winrt::get_module_lock'::`2'::s_lock, 1u);
  a1->m128i_i64[1] = 1LL;
  a1->m128i_i64[0] = (__int64)&winrt::Windows::Internal::Shell::KeyboardHosting::implementation::InputViewOptions::`vftable';
  v14 = (winrt::Windows::Foundation::IUnknown *)&a1[4];
  a1[2].m128i_i8[3] = a5;
  a1[2].m128i_i32[1] = a6;
  a1[2].m128i_i32[2] = a7;
  a1[2].m128i_i32[3] = a8;
  a1[2].m128i_i8[0] = a2;
  a1[2].m128i_i8[1] = a3;
  a1[2].m128i_i8[2] = a4;
  a1[3] = v13;
  *(_QWORD *)v14 = v12;
  winrt::Windows::Foundation::IUnknown::add_ref(v14);
  if ( v12 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&a10);
  a1->m128i_i64[0] = (__int64)&winrt::Windows::Internal::Shell::KeyboardHosting::implementation::InputViewOptions::`vftable';
  if ( *(_QWORD *)v10 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref(v10);
  return a1;
}
