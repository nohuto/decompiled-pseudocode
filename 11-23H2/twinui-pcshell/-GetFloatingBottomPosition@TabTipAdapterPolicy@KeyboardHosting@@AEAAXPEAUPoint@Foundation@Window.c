/*
 * XREFs of ?GetFloatingBottomPosition@TabTipAdapterPolicy@KeyboardHosting@@AEAAXPEAUPoint@Foundation@Windows@@I@Z @ 0x1805321EC
 * Callers:
 *     ?GetPositionAndSizeOptions@TabTipAdapterPolicy@KeyboardHosting@@AEAAJPEAPEAU?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@Foundation@Windows@@@Z @ 0x18014A6FC (-GetPositionAndSizeOptions@TabTipAdapterPolicy@KeyboardHosting@@AEAAJPEAPEAU-$IVectorView@UCoreK.c)
 *     ?VerifyInputAppRequestedShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJUCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@IEPEAIPEAURect@Foundation@8@PEAE@Z @ 0x180535540 (-VerifyInputAppRequestedShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJUCoreKeyboardPositionAndS.c)
 * Callees:
 *     ??$_Try_emplace@AEBI$$V@?$map@IURelativePositionOnScreen@KeyboardHosting@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIURelativePositionOnScreen@KeyboardHosting@@@std@@@4@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBIURelativePositionOnScreen@KeyboardHosting@@@std@@PEAX@std@@_N@1@AEBI@Z @ 0x18017B820 (--$_Try_emplace@AEBI$$V@-$map@IURelativePositionOnScreen@KeyboardHosting@@U-$less@I@std@@V-$allo.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??$_Try_emplace@AEBI$$V@?$map@IUSize@Foundation@Windows@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUSize@Foundation@Windows@@@std@@@5@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBIUSize@Foundation@Windows@@@std@@PEAX@std@@_N@1@AEBI@Z @ 0x1802DE46E (--$_Try_emplace@AEBI$$V@-$map@IUSize@Foundation@Windows@@U-$less@I@std@@V-$allocator@U-$pair@$$C.c)
 */

void __fastcall KeyboardHosting::TabTipAdapterPolicy::GetFloatingBottomPosition(
        KeyboardHosting::TabTipAdapterPolicy *this,
        struct Windows::Foundation::Point *a2,
        unsigned int a3,
        unsigned int a4)
{
  __int64 **v4; // rsi
  bool v5; // cf
  unsigned int v7; // r8d
  __m128 v9; // xmm10
  __m128 v10; // xmm4
  float v11; // xmm9_4
  float v12; // xmm3_4
  __m128 v13; // xmm8
  __int64 v14; // rbx
  __int64 v15; // rax
  float v16; // xmm6_4
  float v17; // xmm7_4
  unsigned int v18; // r9d
  __int64 v19; // rbx
  float v20; // xmm0_4
  unsigned int v21; // [rsp+28h] [rbp-A9h] BYREF
  __m128 v22; // [rsp+30h] [rbp-A1h] BYREF
  _BYTE v23[104]; // [rsp+40h] [rbp-91h] BYREF

  v4 = (__int64 **)((char *)this + 576);
  v5 = *((_BYTE *)this + 596) != 0;
  v21 = a3;
  v7 = v5 ? 0x50 : 0;
  v9 = *(__m128 *)((char *)this + v7 + 232);
  v10 = *(__m128 *)((char *)this + v7 + 248);
  v11 = _mm_shuffle_ps(v9, v9, 170).m128_f32[0];
  v9.m128_f32[0] = _mm_shuffle_ps(v9, v9, 255).m128_f32[0];
  v12 = (float)_mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)((char *)this + v7 + 264), 8));
  v22.m128_f32[0] = (float)(v12 * v11) / 100.0;
  v22.m128_f32[1] = (float)(v12 * v9.m128_f32[0]) / 100.0;
  v22.m128_f32[2] = (float)(v12 * v10.m128_f32[0]) / 100.0;
  v22.m128_f32[3] = (float)(v12 * _mm_shuffle_ps(v10, v10, 85).m128_f32[0]) / 100.0;
  v13 = v22;
  v14 = *(_QWORD *)std::map<unsigned int,Windows::Foundation::Size>::_Try_emplace<unsigned int const &,>(
                     (__int64 **)this + 72,
                     (__int64)&v22,
                     &v21,
                     a4);
  v15 = std::map<unsigned int,KeyboardHosting::RelativePositionOnScreen>::_Try_emplace<unsigned int const &,>(
          (__int64 ***)this + 70,
          (__int64)v23,
          &v21);
  v16 = *(float *)(v14 + 32);
  v17 = *(float *)(*(_QWORD *)v15 + 32LL);
  v19 = *(_QWORD *)std::map<unsigned int,Windows::Foundation::Size>::_Try_emplace<unsigned int const &,>(
                     v4,
                     (__int64)v23,
                     &v21,
                     v18);
  v20 = (float)((float)(_mm_shuffle_ps(v13, v13, 170).m128_f32[0] - v16) * v17) + v11;
  v13.m128_f32[0] = (float)((float)(_mm_shuffle_ps(v13, v13, 255).m128_f32[0] - *(float *)(v19 + 36))
                          * *(float *)(*(_QWORD *)std::map<unsigned int,KeyboardHosting::RelativePositionOnScreen>::_Try_emplace<unsigned int const &,>(
                                                    (__int64 ***)this + 70,
                                                    (__int64)&v22,
                                                    &v21)
                                     + 36LL))
                  + v9.m128_f32[0];
  *(float *)a2 = v20;
  *((_DWORD *)a2 + 1) = v13.m128_i32[0];
}
