/*
 * XREFs of ?GetForegroundAppRect@ViewRectHelper@KeyboardHosting@@SAJAEAURect@Foundation@Windows@@@Z @ 0x1800C2804
 * Callers:
 *     ?GetPositionAndSizeOptions@TabTipAdapterPolicy@KeyboardHosting@@AEAAJPEAPEAU?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@Foundation@Windows@@@Z @ 0x1800C0C40 (-GetPositionAndSizeOptions@TabTipAdapterPolicy@KeyboardHosting@@AEAAJPEAPEAU-$IVectorView@UCoreK.c)
 * Callees:
 *     ?PhysicalRectToRelative@ScalingHelper@KeyboardHosting@@SA?AURect@Foundation@Windows@@AEBU345@W4DEVICE_SCALE_FACTOR@@@Z @ 0x180053554 (-PhysicalRectToRelative@ScalingHelper@KeyboardHosting@@SA-AURect@Foundation@Windows@@AEBU345@W4D.c)
 *     ?UpdateMonitorInfo@MonitorInformation@KeyboardHosting@@QEAAXXZ @ 0x1800BE420 (-UpdateMonitorInfo@MonitorInformation@KeyboardHosting@@QEAAXXZ.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180166104 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 */

__int64 __fastcall KeyboardHosting::ViewRectHelper::GetForegroundAppRect(struct Windows::Foundation::Rect *a1)
{
  HWND ForegroundWindow; // rax
  const char *v3; // r9
  HMONITOR v4; // rax
  float v6[4]; // [rsp+20h] [rbp-19h] BYREF
  HMONITOR v7; // [rsp+30h] [rbp-9h] BYREF
  __int128 v8; // [rsp+38h] [rbp-1h]
  __int128 v9; // [rsp+48h] [rbp+Fh]
  int v10; // [rsp+58h] [rbp+1Fh]
  float v11[4]; // [rsp+60h] [rbp+27h] BYREF
  struct tagRECT Rect; // [rsp+70h] [rbp+37h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+5Fh]

  *(_OWORD *)a1 = 0LL;
  ForegroundWindow = GetForegroundWindow();
  if ( !ForegroundWindow )
    return 0LL;
  if ( !GetWindowRect(ForegroundWindow, &Rect) )
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)0x1F,
             (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\viewrecthelper.cpp",
             v3);
  v4 = MonitorFromRect(&Rect, 2u);
  if ( v4 )
  {
    v10 = 100;
    v7 = v4;
    v8 = 0LL;
    v9 = 0LL;
    KeyboardHosting::MonitorInformation::UpdateMonitorInfo((KeyboardHosting::MonitorInformation *)&v7);
    v11[0] = (float)Rect.left;
    v11[1] = (float)Rect.top;
    v11[2] = (float)(Rect.right - Rect.left + 1);
    v11[3] = (float)(Rect.bottom - Rect.top + 1);
    *(__m128i *)a1 = _mm_loadu_si128((const __m128i *)KeyboardHosting::ScalingHelper::PhysicalRectToRelative(
                                                        v6,
                                                        v11,
                                                        v10));
    return 0LL;
  }
  return 2147549183LL;
}
