/*
 * XREFs of ?UpdateFloatProperties@WindowJointResizeTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@QEAAXAEBU?$IMap@Uhstring@winrt@@N@Collections@Foundation@Windows@6@@Z @ 0x1800F8400
 * Callers:
 *     ?UpdateFloatProperties@?$produce@UWindowJointResizeTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@UITransitionHandler@456@@impl@winrt@@UEAAHPEAX@Z @ 0x1800F83A0 (-UpdateFloatProperties@-$produce@UWindowJointResizeTransitionHandler@implementation@Private@Tran.c)
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x180040BB0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?Lookup@?$consume_Windows_Foundation_Collections_IMap@U?$IMap@Uhstring@winrt@@N@Collections@Foundation@Windows@winrt@@Uhstring@5@N@impl@winrt@@QEBANAEBUhstring@param@3@@Z @ 0x1800F4258 (-Lookup@-$consume_Windows_Foundation_Collections_IMap@U-$IMap@Uhstring@winrt@@N@Collections@Foun.c)
 *     ??$end@U?$IVector@UUserResizeVisual@Transitions@Udwm@winrt@@@Collections@Foundation@Windows@winrt@@$0A@@impl@winrt@@YA?AU?$fast_iterator@U?$IVector@UUserResizeVisual@Transitions@Udwm@winrt@@@Collections@Foundation@Windows@winrt@@@01@AEBU?$IVector@UUserResizeVisual@Transitions@Udwm@winrt@@@Collections@Foundation@Windows@1@@Z @ 0x1800F77B4 (--$end@U-$IVector@UUserResizeVisual@Transitions@Udwm@winrt@@@Collections@Foundation@Windows@winr.c)
 *     ?GetAt@?$consume_Windows_Foundation_Collections_IVector@U?$IVector@UUserResizeVisual@Transitions@Udwm@winrt@@@Collections@Foundation@Windows@winrt@@UUserResizeVisual@Transitions@Udwm@5@@impl@winrt@@QEBA?AUUserResizeVisual@Transitions@Udwm@3@I@Z @ 0x1800F7CD8 (-GetAt@-$consume_Windows_Foundation_Collections_IVector@U-$IVector@UUserResizeVisual@Transitions.c)
 *     ?Rect@?$consume_Udwm_Transitions_IUserResizeVisual@UIUserResizeVisual@Transitions@Udwm@winrt@@@impl@winrt@@QEBA?AU0Foundation@Windows@3@XZ @ 0x1800F81EC (-Rect@-$consume_Udwm_Transitions_IUserResizeVisual@UIUserResizeVisual@Transitions@Udwm@winrt@@@i.c)
 *     ?Rect@?$consume_Udwm_Transitions_IUserResizeVisual@UIUserResizeVisual@Transitions@Udwm@winrt@@@impl@winrt@@QEBAXAEBU0Foundation@Windows@3@@Z @ 0x1800F8234 (-Rect@-$consume_Udwm_Transitions_IUserResizeVisual@UIUserResizeVisual@Transitions@U_ea_1800F8234.c)
 *     ?Target@?$consume_Udwm_Transitions_IUserResizeVisual@UIUserResizeVisual@Transitions@Udwm@winrt@@@impl@winrt@@QEBAHXZ @ 0x1800F8304 (-Target@-$consume_Udwm_Transitions_IUserResizeVisual@UIUserResizeVisual@Transitions@Udwm@winrt@@.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransitionHandler::UpdateFloatProperties(
        __int64 a1,
        __int64 *a2)
{
  unsigned int v4; // esi
  unsigned int v5; // r14d
  unsigned int v6; // r15d
  unsigned int v7; // r12d
  unsigned int v8; // ebx
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  __m128i v16; // xmm0
  __m128i v17; // xmm1
  float v18; // xmm1_4
  __m128i v19; // xmm0
  __m128i v20; // xmm1
  float v21; // xmm1_4
  float v22; // xmm0_4
  __int128 v23; // [rsp+20h] [rbp-30h] BYREF
  __int64 v24; // [rsp+30h] [rbp-20h] BYREF
  int v25; // [rsp+38h] [rbp-18h]
  __int64 *v26; // [rsp+80h] [rbp+30h] BYREF

  v24 = qword_180143208;
  v4 = (int)winrt::impl::consume_Windows_Foundation_Collections_IMap<winrt::Windows::Foundation::Collections::IMap<winrt::hstring,double>,winrt::hstring,double>::Lookup(
              a2,
              &v24);
  v24 = qword_180143200;
  v5 = (int)winrt::impl::consume_Windows_Foundation_Collections_IMap<winrt::Windows::Foundation::Collections::IMap<winrt::hstring,double>,winrt::hstring,double>::Lookup(
              a2,
              &v24);
  v24 = qword_180143218;
  v6 = (int)winrt::impl::consume_Windows_Foundation_Collections_IMap<winrt::Windows::Foundation::Collections::IMap<winrt::hstring,double>,winrt::hstring,double>::Lookup(
              a2,
              &v24);
  v24 = qword_180143210;
  v7 = (int)winrt::impl::consume_Windows_Foundation_Collections_IMap<winrt::Windows::Foundation::Collections::IMap<winrt::hstring,double>,winrt::hstring,double>::Lookup(
              a2,
              &v24);
  v8 = 0;
  winrt::impl::end<winrt::Windows::Foundation::Collections::IVector<winrt::Udwm::Transitions::UserResizeVisual>,0>(
    (__int64)&v24,
    a1 + 32);
  while ( v8 != v25 )
  {
    winrt::impl::consume_Windows_Foundation_Collections_IVector<winrt::Windows::Foundation::Collections::IVector<winrt::Udwm::Transitions::UserResizeVisual>,winrt::Udwm::Transitions::UserResizeVisual>::GetAt(
      (_QWORD *)(a1 + 32),
      &v26,
      v8);
    winrt::impl::consume_Udwm_Transitions_IUserResizeVisual<winrt::Udwm::Transitions::IUserResizeVisual>::Rect(
      &v26,
      &v23);
    v9 = winrt::impl::consume_Udwm_Transitions_IUserResizeVisual<winrt::Udwm::Transitions::IUserResizeVisual>::Target((__int64 *)&v26)
       - 95;
    if ( !v9 )
    {
      v19 = _mm_cvtsi32_si128(v4);
LABEL_22:
      v22 = _mm_cvtepi32_ps(v19).m128_f32[0] - *(float *)&v23;
      goto LABEL_23;
    }
    v10 = v9 - 1;
    if ( v10 )
    {
      v11 = v10 - 1;
      if ( !v11 )
      {
        v16 = _mm_cvtsi32_si128(v5);
LABEL_19:
        *((float *)&v23 + 3) = _mm_cvtepi32_ps(v16).m128_f32[0] - *((float *)&v23 + 1);
        goto LABEL_24;
      }
      v12 = v11 - 1;
      if ( !v12 )
      {
        v17 = _mm_cvtsi32_si128(v7);
        goto LABEL_13;
      }
      v13 = v12 - 1;
      if ( v13 )
      {
        v14 = v13 - 1;
        if ( v14 )
        {
          v15 = v14 - 1;
          if ( !v15 )
          {
            v17 = _mm_cvtsi32_si128(v5);
LABEL_13:
            v18 = _mm_cvtepi32_ps(v17).m128_f32[0];
            *((float *)&v23 + 3) = (float)(*((float *)&v23 + 3) + *((float *)&v23 + 1)) - v18;
            *((float *)&v23 + 1) = v18;
            goto LABEL_24;
          }
          if ( v15 != 1 )
            goto LABEL_24;
          v16 = _mm_cvtsi32_si128(v7);
          goto LABEL_19;
        }
        v19 = _mm_cvtsi32_si128(v6);
        goto LABEL_22;
      }
      v20 = _mm_cvtsi32_si128(v4);
    }
    else
    {
      v20 = _mm_cvtsi32_si128(v6);
    }
    v21 = _mm_cvtepi32_ps(v20).m128_f32[0];
    v22 = (float)(*((float *)&v23 + 2) + *(float *)&v23) - v21;
    *(float *)&v23 = v21;
LABEL_23:
    *((float *)&v23 + 2) = v22;
LABEL_24:
    winrt::impl::consume_Udwm_Transitions_IUserResizeVisual<winrt::Udwm::Transitions::IUserResizeVisual>::Rect(
      &v26,
      &v23);
    if ( v26 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v26);
    ++v8;
  }
}
