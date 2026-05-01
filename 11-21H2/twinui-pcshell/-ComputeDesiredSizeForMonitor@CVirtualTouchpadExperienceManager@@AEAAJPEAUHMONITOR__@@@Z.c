/*
 * XREFs of ?ComputeDesiredSizeForMonitor@CVirtualTouchpadExperienceManager@@AEAAJPEAUHMONITOR__@@@Z @ 0x18037D908
 * Callers:
 *     _lambda_db776e8ce77c2c191d2fdbaad842576b_::operator() @ 0x18037CC58 (_lambda_db776e8ce77c2c191d2fdbaad842576b_--operator().c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180166104 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ?ComputeDesiredSize@CVirtualTouchpadExperienceManager@@AEAAJPEAUHMONITOR__@@PEBUtagRECT@@PEBW4DEVICE_SCALE_FACTOR@@@Z @ 0x18037D68C (-ComputeDesiredSize@CVirtualTouchpadExperienceManager@@AEAAJPEAUHMONITOR__@@PEBUtagRECT@@PEBW4DE.c)
 */

__int64 __fastcall CVirtualTouchpadExperienceManager::ComputeDesiredSizeForMonitor(
        CVirtualTouchpadExperienceManager *this,
        HMONITOR a2)
{
  const char *v4; // r9
  int ScaleFactorForMonitor; // ebx
  __int64 v7; // rdx
  enum DEVICE_SCALE_FACTOR v8; // [rsp+20h] [rbp-48h] BYREF
  struct tagMONITORINFO mi; // [rsp+28h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  mi.cbSize = 40;
  memset(&mi.rcMonitor, 0, 36);
  if ( !GetMonitorInfoW(a2, &mi) )
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)0x13B,
             (int)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
             v4);
  ScaleFactorForMonitor = GetScaleFactorForMonitor(a2, &v8);
  if ( ScaleFactorForMonitor < 0 )
  {
    v7 = 317LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
      (const char *)(unsigned int)ScaleFactorForMonitor);
    return (unsigned int)ScaleFactorForMonitor;
  }
  ScaleFactorForMonitor = CVirtualTouchpadExperienceManager::ComputeDesiredSize(this, a2, &mi.rcMonitor, &v8);
  if ( ScaleFactorForMonitor < 0 )
  {
    v7 = 318LL;
    goto LABEL_5;
  }
  return 0LL;
}
