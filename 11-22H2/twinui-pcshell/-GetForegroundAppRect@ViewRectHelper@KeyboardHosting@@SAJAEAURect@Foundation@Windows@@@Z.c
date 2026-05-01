/*
 * XREFs of ?GetForegroundAppRect@ViewRectHelper@KeyboardHosting@@SAJAEAURect@Foundation@Windows@@@Z @ 0x18014A9FC
 * Callers:
 *     ?GetPositionAndSizeOptions@TabTipAdapterPolicy@KeyboardHosting@@AEAAJPEAPEAU?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@Foundation@Windows@@@Z @ 0x18014A6FC (-GetPositionAndSizeOptions@TabTipAdapterPolicy@KeyboardHosting@@AEAAJPEAPEAU-$IVectorView@UCoreK.c)
 * Callees:
 *     ?PhysicalRectToRelative@ScalingHelper@KeyboardHosting@@SA?AURect@Foundation@Windows@@AEBU345@W4DEVICE_SCALE_FACTOR@@@Z @ 0x180052F2C (-PhysicalRectToRelative@ScalingHelper@KeyboardHosting@@SA-AURect@Foundation@Windows@@AEBU345@W4D.c)
 *     ??0MonitorInformation@KeyboardHosting@@QEAA@PEAUHMONITOR__@@@Z @ 0x180064314 (--0MonitorInformation@KeyboardHosting@@QEAA@PEAUHMONITOR__@@@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1801322B8 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 */

__int64 __fastcall KeyboardHosting::ViewRectHelper::GetForegroundAppRect(struct Windows::Foundation::Rect *a1)
{
  HWND ForegroundWindow; // rax
  const char *v3; // r9
  HMONITOR v4; // rax
  float v6[4]; // [rsp+20h] [rbp-39h] BYREF
  _BYTE v7[40]; // [rsp+30h] [rbp-29h] BYREF
  int v8; // [rsp+58h] [rbp-1h]
  struct tagRECT Rect; // [rsp+80h] [rbp+27h] BYREF
  float v10[4]; // [rsp+90h] [rbp+37h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]

  *(_OWORD *)a1 = 0LL;
  ForegroundWindow = GetForegroundWindow();
  if ( !ForegroundWindow )
    return 0LL;
  if ( !GetWindowRect(ForegroundWindow, &Rect) )
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)0x1F,
             (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\viewrecthelper.cpp",
             v3);
  v4 = MonitorFromRect(&Rect, 2u);
  if ( v4 )
  {
    KeyboardHosting::MonitorInformation::MonitorInformation((KeyboardHosting::MonitorInformation *)v7, v4);
    v10[0] = (float)Rect.left;
    v10[1] = (float)Rect.top;
    v10[2] = (float)(Rect.right - Rect.left);
    v10[3] = (float)(Rect.bottom - Rect.top);
    *(__m128i *)a1 = _mm_loadu_si128((const __m128i *)KeyboardHosting::ScalingHelper::PhysicalRectToRelative(
                                                        v6,
                                                        v10,
                                                        v8));
    return 0LL;
  }
  return 2147549183LL;
}
