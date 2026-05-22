/*
 * XREFs of ?CreateReportForProperty@GazeHidParser@@QEAAJW4GazeProperty@@PEAPEADPEAK@Z @ 0x1801A09C0
 * Callers:
 *     ?TrySetTrackingEnabled@GazeHidDevice@@QEAAJ_N@Z @ 0x1800E64FC (-TrySetTrackingEnabled@GazeHidDevice@@QEAAJ_N@Z.c)
 *     ?TryUpdateCalibrationState@GazeHidDevice@@QEAAJXZ @ 0x1800E6624 (-TryUpdateCalibrationState@GazeHidDevice@@QEAAJXZ.c)
 *     ?TryUpdateDisplayMapping@GazeHidDevice@@QEAAJXZ @ 0x1800E676C (-TryUpdateDisplayMapping@GazeHidDevice@@QEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C9C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x180056688 (memset_0.c)
 *     __security_check_cookie @ 0x180056730 (__security_check_cookie.c)
 *     ??_U@YAPEAX_K@Z @ 0x180057628 (--_U@YAPEAX_K@Z.c)
 *     wil::details::ScopeExitFn__lambda_c7ef70729348990a668d5db76062aec0___::_ScopeExitFn__lambda_c7ef70729348990a668d5db76062aec0___ @ 0x1800E6098 (wil--details--ScopeExitFn__lambda_c7ef70729348990a668d5db76062aec0___--_ScopeExitFn__lambda_c7ef.c)
 *     ?IsPropertySupported@GazeHidParser@@QEAA_NW4GazeProperty@@@Z @ 0x1801A1308 (-IsPropertySupported@GazeHidParser@@QEAA_NW4GazeProperty@@@Z.c)
 *     ?at@?$map@W4GazeProperty@@GU?$less@W4GazeProperty@@@std@@V?$allocator@U?$pair@$$CBW4GazeProperty@@G@std@@@3@@std@@QEAAAEAGAEBW4GazeProperty@@@Z @ 0x1801A1418 (-at@-$map@W4GazeProperty@@GU-$less@W4GazeProperty@@@std@@V-$allocator@U-$pair@$$CBW4GazeProperty.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall GazeHidParser::CreateReportForProperty(__int64 a1, unsigned int a2, _QWORD *a3, _DWORD *a4)
{
  USHORT v9; // r8
  unsigned int v10; // ebx
  unsigned int v11; // ebx
  USAGE v12; // cx
  USHORT ValueCapsLength; // [rsp+40h] [rbp-69h] BYREF
  unsigned int v14; // [rsp+48h] [rbp-61h] BYREF
  _BYTE *v15; // [rsp+50h] [rbp-59h] BYREF
  _BYTE **v16; // [rsp+58h] [rbp-51h] BYREF
  char v17; // [rsp+60h] [rbp-49h]
  struct _HIDP_VALUE_CAPS ValueCaps; // [rsp+70h] [rbp-39h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+108h] [rbp+5Fh]

  v14 = a2;
  v15 = 0LL;
  memset_0(&ValueCaps, 0, sizeof(ValueCaps));
  ValueCapsLength = 1;
  if ( !(unsigned __int8)GazeHidParser::IsPropertySupported(a1, a2) )
    return 2147943568LL;
  v9 = *(_WORD *)std::map<enum GazeProperty,unsigned short>::at(a1 + 72, &v14);
  v10 = a2 - 1;
  if ( v10 )
  {
    v11 = v10 - 1;
    if ( v11 )
    {
      if ( v11 != 1 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x9A,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\gaze\\hid\\lib\\gazehidparser.cpp",
          (const char *)0x80070057LL);
        return 2147942487LL;
      }
      v12 = 512;
    }
    else
    {
      v12 = 769;
    }
  }
  else
  {
    v12 = 1024;
  }
  v16 = &v15;
  v17 = 1;
  if ( HidP_GetSpecificValueCaps(
         HidP_Feature,
         0x12u,
         v9,
         v12,
         &ValueCaps,
         &ValueCapsLength,
         *(PHIDP_PREPARSED_DATA *)(a1 + 64)) != 1114112 )
  {
    wil::details::ScopeExitFn__lambda_c7ef70729348990a668d5db76062aec0___::_ScopeExitFn__lambda_c7ef70729348990a668d5db76062aec0___((__int64)&v16);
    return 2147943568LL;
  }
  v15 = operator new[](*(unsigned __int16 *)(a1 + 8));
  *v15 = ValueCaps.ReportID;
  *a3 = v15;
  *a4 = *(unsigned __int16 *)(a1 + 8);
  return 0LL;
}
