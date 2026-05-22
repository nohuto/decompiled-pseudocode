/*
 * XREFs of ?TryUpdateCalibrationState@GazeHidDevice@@QEAAJXZ @ 0x1800E6624
 * Callers:
 *     ?Initialize@GazeHidDevice@@QEAAJPEAUGazeDeviceInfo@@@Z @ 0x1800E6334 (-Initialize@GazeHidDevice@@QEAAJPEAUGazeDeviceInfo@@@Z.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x180056D48 (--_V@YAXPEAX@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180096C94 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1800CD748 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     wil::details::ScopeExitFn__lambda_c7ef70729348990a668d5db76062aec0___::_ScopeExitFn__lambda_c7ef70729348990a668d5db76062aec0___ @ 0x1800E6098 (wil--details--ScopeExitFn__lambda_c7ef70729348990a668d5db76062aec0___--_ScopeExitFn__lambda_c7ef.c)
 *     ?CreateReportForProperty@GazeHidParser@@QEAAJW4GazeProperty@@PEAPEADPEAK@Z @ 0x1801A09C0 (-CreateReportForProperty@GazeHidParser@@QEAAJW4GazeProperty@@PEAPEADPEAK@Z.c)
 *     ?GetPropertyValue@GazeHidParser@@QEAAJW4GazeProperty@@PEADKW4_HIDP_REPORT_TYPE@@PEAXK@Z @ 0x1801A0E14 (-GetPropertyValue@GazeHidParser@@QEAAJW4GazeProperty@@PEADKW4_HIDP_REPORT_TYPE@@PEAXK@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall GazeHidDevice::TryUpdateCalibrationState(GazeHidDevice *this)
{
  __int64 v2; // rsi
  char *v3; // r14
  int v4; // ebx
  unsigned int v5; // ebx
  int v6; // eax
  int PropertyValue; // eax
  void **v9; // [rsp+50h] [rbp-10h] BYREF
  char v10; // [rsp+58h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]
  unsigned int v12; // [rsp+90h] [rbp+30h] BYREF
  int v13; // [rsp+98h] [rbp+38h] BYREF
  int v14; // [rsp+A0h] [rbp+40h] BYREF
  void *v15; // [rsp+A8h] [rbp+48h] BYREF

  v15 = 0LL;
  v12 = 0;
  v9 = &v15;
  v10 = 1;
  v2 = *((_QWORD *)this + 4);
  *(_BYTE *)(v2 + 1548) = 2;
  v3 = (char *)this + 128;
  v4 = GazeHidParser::CreateReportForProperty((char *)this + 128, 2LL, &v15, &v12);
  if ( v4 < 0 )
    goto LABEL_4;
  v14 = 0;
  v5 = v12;
  v6 = NtRIMDeviceIoControl(*((_QWORD *)this + 1), *((_QWORD *)this + 2), 721298LL, 0LL, 0, v15, v12, &v14, 0);
  if ( v6 < 0 )
  {
    v4 = wil::details::in1diag3::Return_NtStatus(
           retaddr,
           (void *)0x134,
           (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\gazehiddevice.cpp",
           (const char *)(unsigned int)v6);
LABEL_4:
    wil::details::ScopeExitFn__lambda_c7ef70729348990a668d5db76062aec0___::_ScopeExitFn__lambda_c7ef70729348990a668d5db76062aec0___((__int64)&v9);
    return (unsigned int)v4;
  }
  v13 = 0;
  PropertyValue = GazeHidParser::GetPropertyValue(v3, 2LL, v15, v5, 2, &v13, 4);
  if ( PropertyValue < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      318LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\gazehiddevice.cpp",
      (const char *)(unsigned int)PropertyValue);
  *(_BYTE *)(v2 + 1548) = v13;
  if ( v15 )
    operator delete[](v15);
  return 0LL;
}
