/*
 * XREFs of ?TryUpdateCalibrationState@GazeHidDevice@@QEAAJXZ @ 0x1800CD004
 * Callers:
 *     ?Initialize@GazeHidDevice@@QEAAJPEAUGazeDeviceInfo@@@Z @ 0x1800CCD1C (-Initialize@GazeHidDevice@@QEAAJPEAUGazeDeviceInfo@@@Z.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x18004AF4C (--_V@YAXPEAX@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007FD5C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1800B4708 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?CreateReportForProperty@GazeHidParser@@QEAAJW4GazeProperty@@PEAPEADPEAK@Z @ 0x180181778 (-CreateReportForProperty@GazeHidParser@@QEAAJW4GazeProperty@@PEAPEADPEAK@Z.c)
 *     ?GetPropertyValue@GazeHidParser@@QEAAJW4GazeProperty@@PEADKW4_HIDP_REPORT_TYPE@@PEAXK@Z @ 0x180181BC8 (-GetPropertyValue@GazeHidParser@@QEAAJW4GazeProperty@@PEADKW4_HIDP_REPORT_TYPE@@PEAXK@Z.c)
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
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]
  unsigned int v10; // [rsp+90h] [rbp+30h] BYREF
  int v11; // [rsp+98h] [rbp+38h] BYREF
  int v12; // [rsp+A0h] [rbp+40h] BYREF
  void *v13; // [rsp+A8h] [rbp+48h] BYREF

  v13 = 0LL;
  v10 = 0;
  v2 = *((_QWORD *)this + 4);
  *(_BYTE *)(v2 + 1548) = 2;
  v3 = (char *)this + 128;
  v4 = GazeHidParser::CreateReportForProperty((char *)this + 128, 2LL, &v13, &v10);
  if ( v4 >= 0 )
  {
    v12 = 0;
    v5 = v10;
    v6 = NtRIMDeviceIoControl(*((_QWORD *)this + 1), *((_QWORD *)this + 2), 721298LL, 0LL, 0, v13, v10, &v12, 0);
    if ( v6 >= 0 )
    {
      v11 = 0;
      PropertyValue = GazeHidParser::GetPropertyValue(v3, 2LL, v13, v5, 2, &v11, 4);
      if ( PropertyValue < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          318LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\gazehiddevice.cpp",
          (const char *)(unsigned int)PropertyValue);
      *(_BYTE *)(v2 + 1548) = v11;
      v4 = 0;
    }
    else
    {
      v4 = wil::details::in1diag3::Return_NtStatus(
             retaddr,
             (void *)0x134,
             (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\gazehiddevice.cpp",
             (const char *)(unsigned int)v6);
    }
  }
  if ( v13 )
    operator delete[](v13);
  return (unsigned int)v4;
}
