/*
 * XREFs of ?get_ScreenPhysicalPixelsToHimetricScaleFactor@TransformInformation@Private@Composition@UI@Windows@@UEAAJPEAUVector2@Numerics@Foundation@5@@Z @ 0x18011BAF0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800E4E88 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?GetDpiForMonitorHelper@@YAHPEAUHMONITOR__@@PEAI1@Z @ 0x180100268 (-GetDpiForMonitorHelper@@YAHPEAUHMONITOR__@@PEAI1@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::Private::TransformInformation::get_ScreenPhysicalPixelsToHimetricScaleFactor(
        HWND *this,
        struct Windows::Foundation::Numerics::Vector2 *a2)
{
  HMONITOR v3; // rax
  const char *v4; // r9
  __int64 result; // rax
  float v6; // xmm1_4
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF
  unsigned int v9; // [rsp+38h] [rbp+10h] BYREF

  v8 = 0LL;
  *(_QWORD *)a2 = 0LL;
  v3 = MonitorFromWindow(this[8], 2u);
  if ( !(unsigned int)GetDpiForMonitorHelper(v3, (unsigned int *)&v8, &v9) )
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)0x2F,
             (unsigned int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrttransforminformation.cpp",
             v4);
  v6 = (float)(int)v9;
  result = 0LL;
  *(float *)a2 = 2540.0 / (float)(int)v8;
  *((float *)a2 + 1) = 2540.0 / v6;
  return result;
}
