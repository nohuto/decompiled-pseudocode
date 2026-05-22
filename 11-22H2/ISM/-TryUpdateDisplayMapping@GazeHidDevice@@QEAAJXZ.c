/*
 * XREFs of ?TryUpdateDisplayMapping@GazeHidDevice@@QEAAJXZ @ 0x1800F56EC
 * Callers:
 *     ?GetInputInfoForReport@GazeHidDevice@@QEAAJPEADKPEAPEAUInputInfo@@PEA_N@Z @ 0x1800F50D4 (-GetInputInfoForReport@GazeHidDevice@@QEAAJPEADKPEAPEAUInputInfo@@PEA_N@Z.c)
 *     ?Initialize@GazeHidDevice@@QEAAJPEAUGazeDeviceInfo@@@Z @ 0x1800F52B4 (-Initialize@GazeHidDevice@@QEAAJPEAUGazeDeviceInfo@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800334B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1800574C0 (__security_check_cookie.c)
 *     ??_V@YAXPEAX@Z @ 0x180057AD8 (--_V@YAXPEAX@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180059DB0 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1800DCA78 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     wil::details::ScopeExitFn__lambda_c7ef70729348990a668d5db76062aec0___::_ScopeExitFn__lambda_c7ef70729348990a668d5db76062aec0___ @ 0x1800F5018 (wil--details--ScopeExitFn__lambda_c7ef70729348990a668d5db76062aec0___--_ScopeExitFn__lambda_c7ef.c)
 *     ?GetAdapterAndTargetFromEdid@DisplayEdidHelpers@@YAJPEBUEdidIdentificationBlock@@PEAU_LUID@@PEAK@Z @ 0x1801232D8 (-GetAdapterAndTargetFromEdid@DisplayEdidHelpers@@YAJPEBUEdidIdentificationBlock@@PEAU_LUID@@PEAK.c)
 *     ?CreateReportForProperty@GazeHidParser@@QEAAJW4GazeProperty@@PEAPEADPEAK@Z @ 0x1801AE9A0 (-CreateReportForProperty@GazeHidParser@@QEAAJW4GazeProperty@@PEAPEADPEAK@Z.c)
 *     ?GetCalibratedRegion@GazeHidParser@@QEAAJPEADKPEAUtagRECT@@@Z @ 0x1801AEC7C (-GetCalibratedRegion@GazeHidParser@@QEAAJPEADKPEAUtagRECT@@@Z.c)
 *     ?GetPropertyValue@GazeHidParser@@QEAAJW4GazeProperty@@PEADKW4_HIDP_REPORT_TYPE@@PEAXK@Z @ 0x1801AEDF4 (-GetPropertyValue@GazeHidParser@@QEAAJW4GazeProperty@@PEADKW4_HIDP_REPORT_TYPE@@PEAXK@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall GazeHidDevice::TryUpdateDisplayMapping(GazeHidDevice *this)
{
  __int64 v2; // r14
  GazeHidParser *v3; // rsi
  int CalibratedRegion; // eax
  unsigned int v5; // ebx
  int v6; // eax
  unsigned int v7; // ebx
  int v8; // eax
  int PropertyValue; // eax
  unsigned int *v11; // r9
  int AdapterAndTargetFromEdid; // eax
  int v13; // eax
  char *v14; // [rsp+58h] [rbp+7h] BYREF
  unsigned int v15; // [rsp+60h] [rbp+Fh] BYREF
  int v16; // [rsp+64h] [rbp+13h] BYREF
  char **v17; // [rsp+68h] [rbp+17h] BYREF
  char v18; // [rsp+70h] [rbp+1Fh]
  __int64 v19; // [rsp+78h] [rbp+27h] BYREF
  __int16 v20; // [rsp+80h] [rbp+2Fh]
  wil::details::in1diag3 *retaddr; // [rsp+B0h] [rbp+5Fh]

  v14 = 0LL;
  v15 = 0;
  v17 = &v14;
  v18 = 1;
  v2 = *((_QWORD *)this + 4);
  v3 = (GazeHidDevice *)((char *)this + 128);
  CalibratedRegion = GazeHidParser::GetCalibratedRegion(
                       (GazeHidDevice *)((char *)this + 128),
                       0LL,
                       0,
                       (struct tagRECT *)(v2 + 1552));
  v5 = CalibratedRegion;
  if ( CalibratedRegion < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xC1,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\gazehiddevice.cpp",
      (const char *)(unsigned int)CalibratedRegion);
LABEL_7:
    wil::details::ScopeExitFn__lambda_c7ef70729348990a668d5db76062aec0___::_ScopeExitFn__lambda_c7ef70729348990a668d5db76062aec0___((__int64)&v17);
    return v5;
  }
  v6 = GazeHidParser::CreateReportForProperty(v3, 3LL, &v14, &v15);
  if ( v6 < 0 )
  {
LABEL_6:
    v5 = v6;
    goto LABEL_7;
  }
  v16 = 0;
  v7 = v15;
  v8 = NtRIMDeviceIoControl(*((_QWORD *)this + 1), *((_QWORD *)this + 2), 721298LL, 0LL, 0, v14, v15, &v16, 0);
  if ( v8 < 0 )
  {
    v6 = wil::details::in1diag3::Return_NtStatus(
           retaddr,
           (void *)0xD1,
           (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\gazehiddevice.cpp",
           (const char *)(unsigned int)v8);
    goto LABEL_6;
  }
  v19 = 0LL;
  v20 = 0;
  PropertyValue = GazeHidParser::GetPropertyValue(v3, 3LL, v14, v7, 2, &v19, 10);
  if ( PropertyValue < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xDB,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\gazehiddevice.cpp",
      (const char *)(unsigned int)PropertyValue);
  AdapterAndTargetFromEdid = DisplayEdidHelpers::GetAdapterAndTargetFromEdid(
                               (DisplayEdidHelpers *)&v19,
                               (const struct EdidIdentificationBlock *)(v2 + 1572),
                               (struct _LUID *)(v2 + 1580),
                               v11);
  if ( AdapterAndTargetFromEdid < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xDF,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\gazehiddevice.cpp",
      (const char *)(unsigned int)AdapterAndTargetFromEdid);
  v13 = GazeHidParser::GetCalibratedRegion(v3, v14, v7, (struct tagRECT *)(v2 + 1552));
  if ( v13 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xE6,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\gazehiddevice.cpp",
      (const char *)(unsigned int)v13);
  if ( v14 )
    operator delete[](v14);
  return 0LL;
}
