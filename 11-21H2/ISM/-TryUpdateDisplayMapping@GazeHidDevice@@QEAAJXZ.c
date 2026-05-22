/*
 * XREFs of ?TryUpdateDisplayMapping@GazeHidDevice@@QEAAJXZ @ 0x1800CD148
 * Callers:
 *     ?GetInputInfoForReport@GazeHidDevice@@QEAAJPEADKPEAPEAUInputInfo@@PEA_N@Z @ 0x1800CCB3C (-GetInputInfoForReport@GazeHidDevice@@QEAAJPEADKPEAPEAUInputInfo@@PEA_N@Z.c)
 *     ?Initialize@GazeHidDevice@@QEAAJPEAUGazeDeviceInfo@@@Z @ 0x1800CCD1C (-Initialize@GazeHidDevice@@QEAAJPEAUGazeDeviceInfo@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18004A930 (__security_check_cookie.c)
 *     ??_V@YAXPEAX@Z @ 0x18004AF4C (--_V@YAXPEAX@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007FD5C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1800B4708 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?GetAdapterAndTargetFromEdid@DisplayEdidHelpers@@YAJPEBUEdidIdentificationBlock@@PEAU_LUID@@PEAK@Z @ 0x1800F92D4 (-GetAdapterAndTargetFromEdid@DisplayEdidHelpers@@YAJPEBUEdidIdentificationBlock@@PEAU_LUID@@PEAK.c)
 *     ?CreateReportForProperty@GazeHidParser@@QEAAJW4GazeProperty@@PEAPEADPEAK@Z @ 0x180181778 (-CreateReportForProperty@GazeHidParser@@QEAAJW4GazeProperty@@PEAPEADPEAK@Z.c)
 *     ?GetCalibratedRegion@GazeHidParser@@QEAAJPEADKPEAUtagRECT@@@Z @ 0x180181A50 (-GetCalibratedRegion@GazeHidParser@@QEAAJPEADKPEAUtagRECT@@@Z.c)
 *     ?GetPropertyValue@GazeHidParser@@QEAAJW4GazeProperty@@PEADKW4_HIDP_REPORT_TYPE@@PEAXK@Z @ 0x180181BC8 (-GetPropertyValue@GazeHidParser@@QEAAJW4GazeProperty@@PEADKW4_HIDP_REPORT_TYPE@@PEAXK@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall GazeHidDevice::TryUpdateDisplayMapping(GazeHidDevice *this)
{
  __int64 v2; // r14
  GazeHidParser *v3; // rsi
  int CalibratedRegion; // eax
  int v5; // ebx
  unsigned int v6; // ebx
  int v7; // eax
  int PropertyValue; // eax
  unsigned int *v9; // r9
  int AdapterAndTargetFromEdid; // eax
  int v11; // eax
  char *v13; // [rsp+58h] [rbp+7h] BYREF
  unsigned int v14; // [rsp+60h] [rbp+Fh] BYREF
  int v15; // [rsp+64h] [rbp+13h] BYREF
  char **v16; // [rsp+68h] [rbp+17h]
  char v17; // [rsp+70h] [rbp+1Fh]
  __int64 v18; // [rsp+78h] [rbp+27h] BYREF
  __int16 v19; // [rsp+80h] [rbp+2Fh]
  wil::details::in1diag3 *retaddr; // [rsp+B0h] [rbp+5Fh]

  v13 = 0LL;
  v14 = 0;
  v16 = &v13;
  v17 = 1;
  v2 = *((_QWORD *)this + 4);
  v3 = (GazeHidDevice *)((char *)this + 128);
  CalibratedRegion = GazeHidParser::GetCalibratedRegion(
                       (GazeHidDevice *)((char *)this + 128),
                       0LL,
                       0,
                       (struct tagRECT *)(v2 + 1552));
  v5 = CalibratedRegion;
  if ( CalibratedRegion >= 0 )
  {
    v5 = GazeHidParser::CreateReportForProperty(v3, 3LL, &v13, &v14);
    if ( v5 >= 0 )
    {
      v15 = 0;
      v6 = v14;
      v7 = NtRIMDeviceIoControl(*((_QWORD *)this + 1), *((_QWORD *)this + 2), 721298LL, 0LL, 0, v13, v14, &v15, 0);
      if ( v7 >= 0 )
      {
        v18 = 0LL;
        v19 = 0;
        PropertyValue = GazeHidParser::GetPropertyValue(v3, 3LL, v13, v6, 2, &v18, 10);
        if ( PropertyValue < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            219LL,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\gazehiddevice.cpp",
            (const char *)(unsigned int)PropertyValue);
        AdapterAndTargetFromEdid = DisplayEdidHelpers::GetAdapterAndTargetFromEdid(
                                     (DisplayEdidHelpers *)&v18,
                                     (const struct EdidIdentificationBlock *)(v2 + 1572),
                                     (struct _LUID *)(v2 + 1580),
                                     v9);
        if ( AdapterAndTargetFromEdid < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            223LL,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\gazehiddevice.cpp",
            (const char *)(unsigned int)AdapterAndTargetFromEdid);
        v11 = GazeHidParser::GetCalibratedRegion(v3, v13, v6, (struct tagRECT *)(v2 + 1552));
        if ( v11 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            230LL,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\gazehiddevice.cpp",
            (const char *)(unsigned int)v11);
        v5 = 0;
      }
      else
      {
        v5 = wil::details::in1diag3::Return_NtStatus(
               retaddr,
               (void *)0xD1,
               (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\gazehiddevice.cpp",
               (const char *)(unsigned int)v7);
      }
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xC1,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\gazehiddevice.cpp",
      (const char *)(unsigned int)CalibratedRegion);
  }
  if ( v13 )
    operator delete[](v13);
  return (unsigned int)v5;
}
