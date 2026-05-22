/*
 * XREFs of ?get_DisplaySizePhysicalPixels@TransformInformation@Private@Composition@UI@Windows@@UEAAJPEAUVector2@Numerics@Foundation@5@@Z @ 0x18011BA30
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x180095B40 (__security_check_cookie.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800E4E88 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::Private::TransformInformation::get_DisplaySizePhysicalPixels(
        HWND *this,
        struct Windows::Foundation::Numerics::Vector2 *a2)
{
  HMONITOR v3; // rax
  const char *v4; // r9
  __int64 result; // rax
  unsigned int v6; // eax
  __m128i v7; // xmm0
  tagMONITORINFO mi; // [rsp+28h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  *(_QWORD *)a2 = 0LL;
  v3 = MonitorFromWindow(this[8], 2u);
  mi.cbSize = 40;
  if ( !GetMonitorInfoW(v3, &mi) )
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)0x1E,
             (unsigned int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrttransforminformation.cpp",
             v4);
  v6 = mi.rcMonitor.bottom - mi.rcMonitor.top;
  *(float *)a2 = (float)(mi.rcMonitor.right - mi.rcMonitor.left);
  v7 = _mm_cvtsi32_si128(v6);
  result = 0LL;
  *((_DWORD *)a2 + 1) = _mm_cvtepi32_ps(v7).m128_u32[0];
  return result;
}
