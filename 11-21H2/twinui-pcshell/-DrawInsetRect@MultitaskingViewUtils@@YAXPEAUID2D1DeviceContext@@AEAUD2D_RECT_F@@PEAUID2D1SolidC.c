/*
 * XREFs of ?DrawInsetRect@MultitaskingViewUtils@@YAXPEAUID2D1DeviceContext@@AEAUD2D_RECT_F@@PEAUID2D1SolidColorBrush@@H@Z @ 0x1804C7A70
 * Callers:
 *     _lambda_6388d5cf85f46d09280dec8197538f8a_::operator() @ 0x1804CB70C (_lambda_6388d5cf85f46d09280dec8197538f8a_--operator().c)
 * Callees:
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall MultitaskingViewUtils::DrawInsetRect(
        MultitaskingViewUtils *this,
        const __m128i *a2,
        struct D2D_RECT_F *a3,
        struct ID2D1SolidColorBrush *a4)
{
  __m128i v4; // xmm0
  __int64 v5; // rax
  float v6[4]; // [rsp+30h] [rbp-28h] BYREF

  v4 = _mm_loadu_si128(a2);
  v5 = *(_QWORD *)this;
  v6[0] = *(float *)v4.m128i_i32 + (float)((float)(int)a4 * 0.5);
  v6[2] = *(float *)&v4.m128i_i32[2] - (float)((float)(int)a4 * 0.5);
  v6[1] = *(float *)&v4.m128i_i32[1] + (float)((float)(int)a4 * 0.5);
  v6[3] = *(float *)&v4.m128i_i32[3] - (float)((float)(int)a4 * 0.5);
  (*(void (__fastcall **)(MultitaskingViewUtils *, float *, struct D2D_RECT_F *))(v5 + 128))(this, v6, a3);
}
