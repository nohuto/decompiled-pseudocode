/*
 * XREFs of ?GetPropertyValue@GazeHidParser@@QEAAJW4GazeProperty@@PEADKW4_HIDP_REPORT_TYPE@@PEAXK@Z @ 0x1801AEDF4
 * Callers:
 *     ?GetInputInfoForReport@GazeHidDevice@@QEAAJPEADKPEAPEAUInputInfo@@PEA_N@Z @ 0x1800F50D4 (-GetInputInfoForReport@GazeHidDevice@@QEAAJPEADKPEAPEAUInputInfo@@PEA_N@Z.c)
 *     ?TryUpdateCalibrationState@GazeHidDevice@@QEAAJXZ @ 0x1800F55A4 (-TryUpdateCalibrationState@GazeHidDevice@@QEAAJXZ.c)
 *     ?TryUpdateDisplayMapping@GazeHidDevice@@QEAAJXZ @ 0x1800F56EC (-TryUpdateDisplayMapping@GazeHidDevice@@QEAAJXZ.c)
 *     ?GetCalibratedRegion@GazeHidParser@@QEAAJPEADKPEAUtagRECT@@@Z @ 0x1801AEC7C (-GetCalibratedRegion@GazeHidParser@@QEAAJPEADKPEAUtagRECT@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800334B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsPropertySupported@GazeHidParser@@QEAA_NW4GazeProperty@@@Z @ 0x1801AF2E8 (-IsPropertySupported@GazeHidParser@@QEAA_NW4GazeProperty@@@Z.c)
 *     ?at@?$map@W4GazeProperty@@GU?$less@W4GazeProperty@@@std@@V?$allocator@U?$pair@$$CBW4GazeProperty@@G@std@@@3@@std@@QEAAAEAGAEBW4GazeProperty@@@Z @ 0x1801AF3F8 (-at@-$map@W4GazeProperty@@GU-$less@W4GazeProperty@@@std@@V-$allocator@U-$pair@$$CBW4GazeProperty.c)
 */

__int64 __fastcall GazeHidParser::GetPropertyValue(
        __int64 a1,
        __int64 a2,
        CHAR *a3,
        ULONG a4,
        HIDP_REPORT_TYPE ReportType,
        PCHAR UsageValue,
        unsigned int a7)
{
  int v9; // ebx
  USHORT v11; // r14
  int v12; // ebx
  int v13; // ebx
  int v14; // ebx
  int v15; // ebx
  __int64 v16; // rdx
  USAGE v18; // r9
  PCHAR v19; // r13
  HIDP_REPORT_TYPE v20; // ecx
  HIDP_REPORT_TYPE v21; // ecx
  HIDP_REPORT_TYPE v22; // ecx
  USAGE v23; // r9
  int v24; // ebx
  int v25; // ebx
  int v26; // ebx
  PCHAR v27; // r13
  HIDP_REPORT_TYPE v28; // ecx
  ULONG v29[4]; // [rsp+50h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]
  int v31; // [rsp+98h] [rbp+38h] BYREF

  v31 = a2;
  v29[0] = 0;
  v9 = a2;
  if ( !(unsigned __int8)GazeHidParser::IsPropertySupported(a1, a2) )
    return 2147943568LL;
  v11 = *(_WORD *)std::map<enum GazeProperty,unsigned short>::at(a1 + 72, &v31);
  if ( v9 > 6 )
  {
    v24 = v9 - 7;
    if ( !v24 || (v25 = v24 - 1) == 0 || (v26 = v25 - 1) == 0 )
    {
      v16 = 279LL;
      goto LABEL_11;
    }
    if ( v26 != 1 )
      goto LABEL_33;
    goto LABEL_34;
  }
  if ( v9 == 6 )
  {
LABEL_34:
    if ( a7 < 8 )
    {
      v16 = 303LL;
      goto LABEL_11;
    }
    if ( HidP_GetUsageValue(ReportType, 0x12u, v11, 0x21u, v29, *(PHIDP_PREPARSED_DATA *)(a1 + 64), a3, a4) != 1114112 )
      return 2147943568LL;
    v18 = 34;
    goto LABEL_38;
  }
  v12 = v9 - 1;
  if ( !v12 )
  {
    v23 = 1024;
LABEL_27:
    if ( HidP_GetUsageValue(ReportType, 0x12u, v11, v23, v29, *(PHIDP_PREPARSED_DATA *)(a1 + 64), a3, a4) == 1114112 )
    {
      *(_DWORD *)UsageValue = v29[0];
      return 0LL;
    }
    return 2147943568LL;
  }
  v13 = v12 - 1;
  if ( !v13 )
  {
    v23 = 769;
    goto LABEL_27;
  }
  v14 = v13 - 1;
  if ( !v14 )
  {
    if ( a7 < 0xA )
    {
      v16 = 338LL;
      goto LABEL_11;
    }
    if ( HidP_GetUsageValue(ReportType, 0x12u, v11, 0x200u, v29, *(PHIDP_PREPARSED_DATA *)(a1 + 64), a3, a4) == 1114112 )
    {
      v19 = UsageValue;
      v20 = ReportType;
      *(_WORD *)UsageValue = v29[0];
      if ( HidP_GetUsageValue(v20, 0x12u, v11, 0x201u, v29, *(PHIDP_PREPARSED_DATA *)(a1 + 64), a3, a4) == 1114112 )
      {
        v21 = ReportType;
        *((_WORD *)v19 + 1) = v29[0];
        if ( HidP_GetUsageValue(v21, 0x12u, v11, 0x202u, v29, *(PHIDP_PREPARSED_DATA *)(a1 + 64), a3, a4) == 1114112 )
        {
          v22 = ReportType;
          *((_DWORD *)v19 + 1) = v29[0];
          if ( HidP_GetUsageValue(v22, 0x12u, v11, 0x203u, v29, *(PHIDP_PREPARSED_DATA *)(a1 + 64), a3, a4) == 1114112 )
          {
            *((_WORD *)v19 + 4) = v29[0];
            return 0LL;
          }
        }
      }
    }
    return 2147943568LL;
  }
  v15 = v14 - 1;
  if ( !v15 )
  {
    if ( a7 < 8 )
    {
      v16 = 397LL;
      goto LABEL_11;
    }
    if ( HidP_GetUsageValue(ReportType, 0x12u, v11, 0x204u, v29, *(PHIDP_PREPARSED_DATA *)(a1 + 64), a3, a4) != 1114112 )
      return 2147943568LL;
    v18 = 517;
LABEL_38:
    v27 = UsageValue;
    v28 = ReportType;
    *(_DWORD *)UsageValue = v29[0];
    if ( HidP_GetUsageValue(v28, 0x12u, v11, v18, v29, *(PHIDP_PREPARSED_DATA *)(a1 + 64), a3, a4) == 1114112 )
    {
      *((_DWORD *)v27 + 1) = v29[0];
      return 0LL;
    }
    return 2147943568LL;
  }
  if ( v15 != 1 )
  {
LABEL_33:
    v16 = 428LL;
    goto LABEL_11;
  }
  if ( a7 < 8 )
  {
    v16 = 254LL;
LABEL_11:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v16,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\gaze\\hid\\lib\\gazehidparser.cpp",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
  if ( HidP_GetUsageValueArray(
         ReportType,
         0x12u,
         v11,
         0x20u,
         UsageValue,
         8u,
         *(PHIDP_PREPARSED_DATA *)(a1 + 64),
         a3,
         a4) != 1114112 )
    return 2147943568LL;
  return 0LL;
}
