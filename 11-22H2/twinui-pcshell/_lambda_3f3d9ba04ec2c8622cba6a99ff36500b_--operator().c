/*
 * XREFs of _lambda_3f3d9ba04ec2c8622cba6a99ff36500b_::operator() @ 0x180572A5C
 * Callers:
 *     LambdaCustomPaintProc__lambda_3f3d9ba04ec2c8622cba6a99ff36500b__ID2D1DeviceContext___ @ 0x1802E2AA0 (LambdaCustomPaintProc__lambda_3f3d9ba04ec2c8622cba6a99ff36500b__ID2D1DeviceContext___.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsBiDiLocale@@YAHK@Z @ 0x180186D9C (-IsBiDiLocale@@YAHK@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     GetThreadUILanguage_0 @ 0x1801C8376 (GetThreadUILanguage_0.c)
 *     ?_RenderIcon@CSwitchItemElement@@IEAAJAEBUD2D_RECT_F@@PEAUID2D1DeviceContext@@@Z @ 0x1802E35DE (-_RenderIcon@CSwitchItemElement@@IEAAJAEBUD2D_RECT_F@@PEAUID2D1DeviceContext@@@Z.c)
 *     ?_RenderText@CSwitchItemElement@@IEAAJAEBUD2D_RECT_F@@PEAUID2D1DeviceContext@@@Z @ 0x1802E3708 (-_RenderText@CSwitchItemElement@@IEAAJAEBUD2D_RECT_F@@PEAUID2D1DeviceContext@@@Z.c)
 */

__int64 __fastcall lambda_3f3d9ba04ec2c8622cba6a99ff36500b_::operator()(
        __int64 *a1,
        struct ID2D1DeviceContext *a2,
        __int64 a3,
        float a4)
{
  __int64 v4; // rbx
  __m128i v6; // xmm1
  float v7; // xmm6_4
  LANGID ThreadUILanguage_0; // ax
  float v9; // xmm2_4
  int v10; // eax
  D2D_RECT_F v12; // [rsp+20h] [rbp-40h] BYREF
  struct D2D_RECT_F v13; // [rsp+30h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]

  v4 = *a1;
  v12.left = 0.0;
  v12.top = 0.0;
  v6 = _mm_cvtsi32_si128(*(_DWORD *)(v4 + 336));
  v13.top = 0.0;
  v12.right = _mm_cvtepi32_ps(v6).m128_f32[0];
  v12.bottom = (float)SHIDWORD(a3);
  v13.bottom = (float)SHIDWORD(a3);
  v7 = (float)(int)a3;
  v13.left = (float)*(int *)(v4 + 352) + v12.right;
  v13.right = (float)(int)a3 - (float)*(int *)(v4 + 356);
  ThreadUILanguage_0 = GetThreadUILanguage_0();
  if ( (unsigned int)IsBiDiLocale(ThreadUILanguage_0) )
  {
    v9 = v12.right - v12.left;
    a4 = v13.right - v13.left;
    v12.right = v7 - (float)(v12.left - 0.0);
    v12.left = v12.right - v9;
    v13.right = v7 - (float)(v13.left - 0.0);
    v13.left = v13.right - a4;
  }
  CSwitchItemElement::_RenderIcon((CSwitchItemElement *)v4, &v12, a2);
  v10 = CSwitchItemElement::_RenderText((CSwitchItemElement *)v4, &v13, a2, a4);
  if ( v10 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x1E6,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\switchitemelement.cpp",
      (const char *)(unsigned int)v10);
  return 0LL;
}
