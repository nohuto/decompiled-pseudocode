/*
 * XREFs of ?TryGetScreenSizeAndDpi@PositionAndSizeOptionsHelper@KeyboardHosting@@CA_NPEAUHMONITOR__@@PEAUScreenSizeAndDpi@2@@Z @ 0x1800BE89C
 * Callers:
 *     ?GetDefaultKeyboardSize@PositionAndSizeOptionsHelper@KeyboardHosting@@QEAA?AUKeyboardSize@2@PEAUHMONITOR__@@URect@Foundation@Windows@@W4DEVICE_SCALE_FACTOR@@_NNPEAN@Z @ 0x1800C104C (-GetDefaultKeyboardSize@PositionAndSizeOptionsHelper@KeyboardHosting@@QEAA-AUKeyboardSize@2@PEAU.c)
 * Callees:
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     sqrt @ 0x1801C74AC (sqrt.c)
 *     memset_0 @ 0x1801C750C (memset_0.c)
 */

char __fastcall KeyboardHosting::PositionAndSizeOptionsHelper::TryGetScreenSizeAndDpi(
        HMONITOR hMonitor,
        struct KeyboardHosting::ScreenSizeAndDpi *a2)
{
  int v4; // edi
  int v5; // ebx
  double v7; // xmm6_8
  double v8; // xmm7_8
  bool v9; // cc
  struct tagMONITORINFO mi; // [rsp+20h] [rbp-C8h] BYREF
  _BYTE v11[24]; // [rsp+50h] [rbp-98h] BYREF
  int v12; // [rsp+68h] [rbp-80h]
  int v13; // [rsp+6Ch] [rbp-7Ch]

  *(_QWORD *)a2 = 0LL;
  *((_DWORD *)a2 + 2) = 96;
  *((_DWORD *)a2 + 3) = 96;
  mi.cbSize = 40;
  memset_0(v11, 0, 0x60uLL);
  if ( !GetMonitorInfoW(hMonitor, &mi) )
    return 0;
  if ( !(unsigned int)GetCurrentDpiInfo(hMonitor, v11) )
    return 0;
  v4 = abs32(mi.rcMonitor.right - mi.rcMonitor.left);
  v5 = abs32(mi.rcMonitor.bottom - mi.rcMonitor.top);
  if ( v4 <= 0 || v5 <= 0 || v12 <= 0 || v13 <= 0 )
    return 0;
  v7 = (double)(100 * v12) / 2540.0;
  v8 = (double)(100 * v13) / 2540.0;
  v9 = v4 < v5;
  if ( v4 <= v5 )
  {
LABEL_11:
    if ( !v9 || v7 <= v8 )
      goto LABEL_14;
    goto LABEL_13;
  }
  if ( v8 <= v7 )
  {
    v9 = v4 < v5;
    goto LABEL_11;
  }
LABEL_13:
  v7 = (double)(100 * v13) / 2540.0;
  v8 = (double)(100 * v12) / 2540.0;
LABEL_14:
  *(double *)a2 = sqrt(v8 * v8 + v7 * v7);
  *((_DWORD *)a2 + 2) = (int)((double)v4 / v7);
  *((_DWORD *)a2 + 3) = (int)((double)v5 / v8);
  return 1;
}
