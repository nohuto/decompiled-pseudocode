/*
 * XREFs of ?UpdateFloatProperties@WindowJointResizeTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@QEAAXAEBU?$IMap@Uhstring@winrt@@N@Collections@Foundation@Windows@6@@Z @ 0x1800FA1C0
 * Callers:
 *     ?UpdateFloatProperties@?$produce@UWindowJointResizeTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@UITransitionHandler@456@@impl@winrt@@UEAAHPEAX@Z @ 0x1800FA160 (-UpdateFloatProperties@-$produce@UWindowJointResizeTransitionHandler@implementation@Private@Tran.c)
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x18002FA10 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?Lookup@?$consume_Windows_Foundation_Collections_IMap@U?$IMap@Uhstring@winrt@@N@Collections@Foundation@Windows@winrt@@Uhstring@5@N@impl@winrt@@QEBA@AEBUhstring@param@3@@Z @ 0x1800F1CD8 (-Lookup@-$consume_Windows_Foundation_Collections_IMap@U-$IMap@Uhstring@winrt@@N@Collections@Foun.c)
 *     ?GetAt@?$consume_Windows_Foundation_Collections_IVector@U?$IVector@UUserResizeVisual@Transitions@Udwm@winrt@@@Collections@Foundation@Windows@winrt@@UUserResizeVisual@Transitions@Udwm@5@@impl@winrt@@QEBA@I@Z @ 0x1800F95B4 (-GetAt@-$consume_Windows_Foundation_Collections_IVector@U-$IVector@UUserResizeVisual@Transitions.c)
 *     ?Rect@?$consume_Udwm_Transitions_IUserResizeVisual@UIUserResizeVisual@Transitions@Udwm@winrt@@@impl@winrt@@QEBA@AEBU0Foundation@Windows@3@@Z @ 0x1800F9E0C (-Rect@-$consume_Udwm_Transitions_IUserResizeVisual@UIUserResizeVisual@Transitions@Udwm@winrt@@@i.c)
 *     ?Rect@?$consume_Udwm_Transitions_IUserResizeVisual@UIUserResizeVisual@Transitions@Udwm@winrt@@@impl@winrt@@QEBA@XZ @ 0x1800F9E50 (-Rect@-$consume_Udwm_Transitions_IUserResizeVisual@UIUserResizeVisual@Transitions@U_ea_1800F9E50.c)
 *     ?Size@?$consume_Windows_Foundation_Collections_IVector@U?$IVector@UUserResizeVisual@Transitions@Udwm@winrt@@@Collections@Foundation@Windows@winrt@@UUserResizeVisual@Transitions@Udwm@5@@impl@winrt@@QEBA@XZ @ 0x1800FA084 (-Size@-$consume_Windows_Foundation_Collections_IVector@U-$IVector@UUserResizeVisual@Transitions@.c)
 *     ?Target@?$consume_Udwm_Transitions_IUserResizeVisual@UIUserResizeVisual@Transitions@Udwm@winrt@@@impl@winrt@@QEBA@XZ @ 0x1800FA0C8 (-Target@-$consume_Udwm_Transitions_IUserResizeVisual@UIUserResizeVisual@Transitions@Udwm@winrt@@.c)
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
  int v9; // edi
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  __m128i v17; // xmm0
  __m128i v18; // xmm1
  float v19; // xmm1_4
  __m128i v20; // xmm0
  __m128i v21; // xmm1
  float v22; // xmm1_4
  float v23; // xmm0_4
  __int128 v24[2]; // [rsp+20h] [rbp-20h] BYREF
  __int64 *v25; // [rsp+70h] [rbp+30h] BYREF

  *(_QWORD *)&v24[0] = qword_180148920;
  v4 = (int)winrt::impl::consume_Windows_Foundation_Collections_IMap<winrt::Windows::Foundation::Collections::IMap<winrt::hstring,double>,winrt::hstring,double>::Lookup(
              a2,
              v24);
  *(_QWORD *)&v24[0] = qword_180148918;
  v5 = (int)winrt::impl::consume_Windows_Foundation_Collections_IMap<winrt::Windows::Foundation::Collections::IMap<winrt::hstring,double>,winrt::hstring,double>::Lookup(
              a2,
              v24);
  *(_QWORD *)&v24[0] = qword_180148930;
  v6 = (int)winrt::impl::consume_Windows_Foundation_Collections_IMap<winrt::Windows::Foundation::Collections::IMap<winrt::hstring,double>,winrt::hstring,double>::Lookup(
              a2,
              v24);
  *(_QWORD *)&v24[0] = qword_180148928;
  v7 = (int)winrt::impl::consume_Windows_Foundation_Collections_IMap<winrt::Windows::Foundation::Collections::IMap<winrt::hstring,double>,winrt::hstring,double>::Lookup(
              a2,
              v24);
  v8 = 0;
  v9 = winrt::impl::consume_Windows_Foundation_Collections_IVector<winrt::Windows::Foundation::Collections::IVector<winrt::Udwm::Transitions::UserResizeVisual>,winrt::Udwm::Transitions::UserResizeVisual>::Size((__int64 *)(a1 + 40));
  while ( v8 != v9 )
  {
    winrt::impl::consume_Windows_Foundation_Collections_IVector<winrt::Windows::Foundation::Collections::IVector<winrt::Udwm::Transitions::UserResizeVisual>,winrt::Udwm::Transitions::UserResizeVisual>::GetAt(
      (_QWORD *)(a1 + 40),
      &v25,
      v8);
    winrt::impl::consume_Udwm_Transitions_IUserResizeVisual<winrt::Udwm::Transitions::IUserResizeVisual>::Rect(
      &v25,
      v24);
    v10 = winrt::impl::consume_Udwm_Transitions_IUserResizeVisual<winrt::Udwm::Transitions::IUserResizeVisual>::Target((__int64 *)&v25)
        - 95;
    if ( !v10 )
    {
      v20 = _mm_cvtsi32_si128(v4);
LABEL_22:
      v23 = _mm_cvtepi32_ps(v20).m128_f32[0] - *(float *)v24;
      goto LABEL_23;
    }
    v11 = v10 - 1;
    if ( v11 )
    {
      v12 = v11 - 1;
      if ( !v12 )
      {
        v17 = _mm_cvtsi32_si128(v5);
LABEL_19:
        *((float *)v24 + 3) = _mm_cvtepi32_ps(v17).m128_f32[0] - *((float *)v24 + 1);
        goto LABEL_24;
      }
      v13 = v12 - 1;
      if ( !v13 )
      {
        v18 = _mm_cvtsi32_si128(v7);
        goto LABEL_13;
      }
      v14 = v13 - 1;
      if ( v14 )
      {
        v15 = v14 - 1;
        if ( v15 )
        {
          v16 = v15 - 1;
          if ( !v16 )
          {
            v18 = _mm_cvtsi32_si128(v5);
LABEL_13:
            v19 = _mm_cvtepi32_ps(v18).m128_f32[0];
            *((float *)v24 + 3) = (float)(*((float *)v24 + 3) + *((float *)v24 + 1)) - v19;
            *((float *)v24 + 1) = v19;
            goto LABEL_24;
          }
          if ( v16 != 1 )
            goto LABEL_24;
          v17 = _mm_cvtsi32_si128(v7);
          goto LABEL_19;
        }
        v20 = _mm_cvtsi32_si128(v6);
        goto LABEL_22;
      }
      v21 = _mm_cvtsi32_si128(v4);
    }
    else
    {
      v21 = _mm_cvtsi32_si128(v6);
    }
    v22 = _mm_cvtepi32_ps(v21).m128_f32[0];
    v23 = (float)(*((float *)v24 + 2) + *(float *)v24) - v22;
    *(float *)v24 = v22;
LABEL_23:
    *((float *)v24 + 2) = v23;
LABEL_24:
    winrt::impl::consume_Udwm_Transitions_IUserResizeVisual<winrt::Udwm::Transitions::IUserResizeVisual>::Rect(
      &v25,
      v24);
    if ( v25 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v25);
    ++v8;
  }
}
