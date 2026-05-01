/*
 * XREFs of ?ValidateRect@ViewRectHelper@KeyboardHosting@@CAXPEAURect@Foundation@Windows@@@Z @ 0x1802DE1E8
 * Callers:
 *     ?GetAvoidanceRect@ViewRectHelper@KeyboardHosting@@CA?AUtagRECT@@URect@Foundation@Windows@@0@Z @ 0x18052F7C0 (-GetAvoidanceRect@ViewRectHelper@KeyboardHosting@@CA-AUtagRECT@@URect@Foundation@Windows@@0@Z.c)
 * Callees:
 *     ?IsRectNull@KeyboardHosting@@YA_NAEBURect@Foundation@Windows@@@Z @ 0x1800BE690 (-IsRectNull@KeyboardHosting@@YA_NAEBURect@Foundation@Windows@@@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ?IsRectNull@KeyboardHosting@@YA_NAEBUtagRECT@@@Z @ 0x180513280 (-IsRectNull@KeyboardHosting@@YA_NAEBUtagRECT@@@Z.c)
 */

void __fastcall KeyboardHosting::ViewRectHelper::ValidateRect(struct Windows::Foundation::Rect *this)
{
  HWND ForegroundWindow; // rax
  const struct Windows::Foundation::Rect *v3; // rdx
  const struct tagRECT *v4; // rdx
  float v5; // xmm4_4
  float v6; // xmm5_4
  float v7; // xmm2_4
  float v8; // xmm3_4
  struct tagRECT Rect; // [rsp+20h] [rbp-28h] BYREF

  ForegroundWindow = GetForegroundWindow();
  Rect = 0LL;
  if ( ForegroundWindow )
    GetWindowRect(ForegroundWindow, &Rect);
  if ( !KeyboardHosting::IsRectNull(this, v3) )
  {
    if ( *((float *)this + 2) < 1.0 )
      *((_DWORD *)this + 2) = 1065353216;
    if ( *((float *)this + 3) < 1.0 )
      *((_DWORD *)this + 3) = 1065353216;
    if ( !KeyboardHosting::IsRectNull((KeyboardHosting *)&Rect, v4) )
    {
      v7 = *(float *)this;
      v8 = *((float *)this + 1);
      *(float *)this = (float)(int)*(float *)this;
      *((float *)this + 2) = (float)((int)(float)(v7 + v5) - (int)v7);
      *((float *)this + 1) = (float)(int)v8;
      *((float *)this + 3) = (float)((int)(float)(v8 + v6) - (int)v8);
    }
  }
}
