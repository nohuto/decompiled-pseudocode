/*
 * XREFs of ?ConvertDisplayConfigPathIntoExistingPathModalityAtIdx@@YAJPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@II_N1PEAUD3DKMT_GETPATHSMODALITY@@PEA_N@Z @ 0x1C016FCAC
 * Callers:
 *     ?ConvertDisplayConfigToPathModality@@YAJIPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAUD3DKMT_GETPATHSMODALITY@@PEA_N@Z @ 0x1C017026C (-ConvertDisplayConfigToPathModality@@YAJIPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAUD3DKMT_GETPAT.c)
 *     ?SetDisplayConfigHandleBrokerProvidedPaths@@YAJPEAX_NIPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAPEAUD3DKMT_GETPATHSMODALITY@@PEA_NPEAW4_DXGK_DIAG_SDC_STAGE@@@Z @ 0x1C0172A20 (-SetDisplayConfigHandleBrokerProvidedPaths@@YAJPEAX_NIPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAP.c)
 *     ?SetDisplayConfigHandleOnlyProvidedPath@@YAJPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAPEAUD3DKMT_GETPATHSMODALITY@@PEA_NPEAW4_DXGK_DIAG_SDC_STAGE@@@Z @ 0x1C0172FBC (-SetDisplayConfigHandleOnlyProvidedPath@@YAJPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAPEAUD3DKMT_.c)
 * Callees:
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C00384DC (-wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IH.c)
 *     ?ConvertDisplayConfigScalingToPathModalityForPath@@YAJPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@PEA_N@Z @ 0x1C01701EC (-ConvertDisplayConfigScalingToPathModalityForPath@@YAJPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAU.c)
 *     ?ConvertDisplayConfigWireFormatToPathModalityForPath@@YAJPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z @ 0x1C0170318 (-ConvertDisplayConfigWireFormatToPathModalityForPath@@YAJPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@P.c)
 *     ?GetTargetVirtualization@@YAJU_LUID@@IPEAE11PEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@2PEAW4_D3DKMT_DISPLAY_TARGET_USAGE@@@Z @ 0x1C0172584 (-GetTargetVirtualization@@YAJU_LUID@@IPEAE11PEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@2PEAW4_D3DKMT.c)
 */

__int64 __fastcall ConvertDisplayConfigPathIntoExistingPathModalityAtIdx(
        const struct DISPLAYCONFIG_PATH_INFO_INTERNAL *a1,
        unsigned int a2,
        unsigned int a3,
        char a4,
        bool a5,
        struct D3DKMT_GETPATHSMODALITY *a6,
        bool *a7)
{
  wchar_t *v7; // rsi
  __int64 v10; // r14
  char *v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // r8
  int TargetVirtualization; // eax
  unsigned int v16; // ebp
  unsigned __int8 v17; // r10
  __int64 v18; // rax
  int v19; // esi
  unsigned __int8 v20; // r9
  char v21; // r8
  char v22; // al
  __int64 v23; // rcx
  int v24; // esi
  int v25; // edx
  __int64 v26; // rax
  __int64 v27; // rax
  char v28; // al
  int v29; // eax
  char v30; // al
  unsigned __int8 v31; // [rsp+40h] [rbp-28h] BYREF
  unsigned __int8 v32; // [rsp+41h] [rbp-27h] BYREF
  unsigned __int8 v33[14]; // [rsp+42h] [rbp-26h] BYREF

  v7 = gpGraphicsDeviceList;
  v33[0] = 0;
  v32 = 0;
  v31 = 0;
  v10 = a3;
  while ( 1 )
  {
    if ( !v7 )
    {
      WdLogSingleEntry3(2LL, *((int *)a1 + 5), *((unsigned int *)a1 + 4), a3);
      return 3221225485LL;
    }
    if ( (*((_DWORD *)v7 + 40) & 0x800000) != 0
      && *((_DWORD *)v7 + 62) == *((_DWORD *)a1 + 4)
      && *((_DWORD *)v7 + 63) == *((_DWORD *)a1 + 5) )
    {
      break;
    }
    v7 = (wchar_t *)*((_QWORD *)v7 + 16);
  }
  v12 = (char *)a6 + 296 * a2;
  *((_QWORD *)v12 + 7) = *(_QWORD *)a1;
  *((_QWORD *)v12 + 8) = *((_QWORD *)a1 + 1);
  v13 = *(_QWORD *)a1;
  if ( (*(_QWORD *)a1 & 0x8004700000000000uLL) != 0x8004700000000000uLL || (v13 & 0x7FD30E6FFE7CF070LL) != 0 )
    goto LABEL_10;
  v14 = *((_QWORD *)a1 + 1);
  if ( (v14 & 0xFFFFFE7FFE7DF470uLL) != 0 || (v13 & v14) != v14 )
  {
    WdLogSingleEntry2(2LL, v13, v14);
    return 3221225485LL;
  }
  TargetVirtualization = GetTargetVirtualization(
                           *(struct _LUID *)((char *)a1 + 16),
                           *((_DWORD *)a1 + 7),
                           v33,
                           &v32,
                           &v31,
                           (enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)v12 + 36,
                           (enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)v12 + 37,
                           (enum _D3DKMT_DISPLAY_TARGET_USAGE *)(v12 + 268));
  v16 = TargetVirtualization;
  if ( TargetVirtualization < 0 )
  {
    WdLogSingleEntry1(2LL, TargetVirtualization);
    return v16;
  }
  v17 = v32;
  *((_QWORD *)v12 + 7) |= 0x800000000000uLL;
  v18 = *((_QWORD *)v7 + 31);
  v19 = 4;
  v20 = v33[0];
  *((_QWORD *)v12 + 9) = v18;
  *((_DWORD *)v12 + 20) = *((_DWORD *)a1 + 6);
  *((_DWORD *)v12 + 21) = *((_DWORD *)a1 + 7);
  LODWORD(v18) = *((_DWORD *)a1 + 39);
  *((_QWORD *)v12 + 7) |= 0x8000000000000uLL;
  *((_DWORD *)v12 + 60) = v18;
  v21 = (v31 == 0 ? 4 : 0) | (v17 == 0 ? 2 : 0) | (v20 == 0);
  v12[185] = v21;
  if ( a5 )
  {
    *((_DWORD *)v12 + 78) |= 0x80u;
    if ( v17 || (v22 = 1, !v20) )
      v22 = 0;
    v12[344] = v22;
  }
  if ( (*(_QWORD *)a1 & 0x8000000000000LL) != 0 && v21 != *((_BYTE *)a1 + 101) )
    goto LABEL_23;
  *((_QWORD *)v12 + 38) = 0LL;
  if ( (*(_BYTE *)a1 & 0x87) != 0 )
  {
    *((_DWORD *)v12 + 22) = (unsigned __int16)*((_DWORD *)a1 + 18);
    *((_DWORD *)v12 + 23) = *((_DWORD *)a1 + 16);
    *((_DWORD *)v12 + 24) = *((_DWORD *)a1 + 17);
    *((_DWORD *)v12 + 25) = *((_DWORD *)a1 + 14);
    *((_DWORD *)v12 + 26) = *((_DWORD *)a1 + 15);
    *((_DWORD *)v12 + 27) = *((_DWORD *)a1 + 12);
    *((_DWORD *)v12 + 28) = *((_DWORD *)a1 + 13);
    *((_DWORD *)v12 + 29) = *((_DWORD *)a1 + 10);
    *((_DWORD *)v12 + 30) = *((_DWORD *)a1 + 11);
    *((_QWORD *)v12 + 16) = *((_QWORD *)a1 + 4);
    *((_DWORD *)v12 + 34) ^= (*((_DWORD *)v12 + 34) ^ *((_DWORD *)a1 + 19)) & 7;
    *((_DWORD *)v12 + 34) = *((_DWORD *)v12 + 34) & 7 | (*((_DWORD *)a1 + 18) >> 13) & 0x1F8;
  }
  v23 = *((_QWORD *)v12 + 7);
  if ( (v23 & 2) != 0 && !*((_DWORD *)v12 + 28) )
    goto LABEL_23;
  if ( (*(_DWORD *)a1 & 0x1000000) != 0 )
  {
    if ( *((_DWORD *)a1 + 53) )
    {
      if ( !*((_DWORD *)a1 + 50) )
      {
        v24 = -1073741811;
        goto LABEL_68;
      }
      *((_DWORD *)v12 + 70) = *((_DWORD *)a1 + 49);
      *((_DWORD *)v12 + 71) = *((_DWORD *)a1 + 50);
      *((_DWORD *)v12 + 74) = *((_DWORD *)a1 + 53);
LABEL_37:
      v23 |= 0x1000000uLL;
      *((_QWORD *)v12 + 7) = v23;
      goto LABEL_38;
    }
LABEL_23:
    v13 = v10;
LABEL_10:
    WdLogSingleEntry1(2LL, v13);
    return 3221225485LL;
  }
  if ( (*((_QWORD *)v12 + 7) & 2LL) != 0 )
  {
    v25 = *((_DWORD *)v12 + 28);
    *((_DWORD *)v12 + 70) = *((_DWORD *)v12 + 27);
    *((_DWORD *)v12 + 71) = v25;
    if ( (*((_WORD *)a1 + 37) & 0x3F) != 0 )
      *((_DWORD *)v12 + 71) = v25 * (*((_WORD *)a1 + 37) & 0x3F);
    *((_DWORD *)v12 + 74) = 1;
    goto LABEL_37;
  }
LABEL_38:
  v26 = *(_QWORD *)a1;
  if ( (*(_QWORD *)a1 & 0x20000LL) != 0 )
  {
    *((_QWORD *)v12 + 26) = *(_QWORD *)((char *)a1 + 124);
    if ( !a4 || v20 && v17 )
      v27 = 0LL;
    else
      v27 = 0x20000000000000LL;
    *((_QWORD *)v12 + 7) = v23 | v27;
    wil_details_FeatureReporting_ReportUsageToService(
      (__int64)&Feature_UniformDpiProgrammingModel__private_reporting,
      20743071LL,
      0LL,
      0LL,
      (const struct FEATURE_LOGGED_TRAITS *)&Feature_BrokeredDisplays_ModeChanges_logged_traits,
      0,
      3);
    v26 = *(_QWORD *)a1;
  }
  if ( (v26 & 0x800) != 0 )
  {
    *((_QWORD *)v12 + 25) = *(_QWORD *)((char *)a1 + 116);
    v26 = *(_QWORD *)a1;
  }
  if ( (v26 & 0x100) != 0 )
  {
    *((_DWORD *)v12 + 38) = *((_DWORD *)a1 + 22);
    *((_DWORD *)v12 + 39) = *((_DWORD *)a1 + 23);
    *((_DWORD *)v12 + 40) = *((_DWORD *)a1 + 22);
    *((_DWORD *)v12 + 41) = *((_DWORD *)a1 + 23);
    *((_DWORD *)v12 + 43) = *((_DWORD *)a1 + 24);
    *((_QWORD *)v12 + 22) = 0LL;
    v28 = *((_BYTE *)a1 + 100);
    *((_QWORD *)v12 + 7) |= 0x100uLL;
    v12[184] = v28;
    v26 = *(_QWORD *)a1;
  }
  if ( (v26 & 0x8000000000LL) != 0 )
  {
    v29 = *((_DWORD *)a1 + 24);
    *((_QWORD *)v12 + 7) |= 0x8000000000uLL;
    *((_DWORD *)v12 + 43) = v29;
    v26 = *(_QWORD *)a1;
  }
  if ( (v26 & 0x10000000000LL) != 0 )
  {
    v30 = *((_BYTE *)a1 + 100);
    *((_QWORD *)v12 + 7) |= 0x10000000000uLL;
    v12[184] = v30;
    v26 = *(_QWORD *)a1;
  }
  if ( (v26 & 0x800000) != 0 )
  {
    *((_OWORD *)v12 + 14) = *(_OWORD *)((char *)a1 + 140);
    v26 = *(_QWORD *)a1;
  }
  if ( (v26 & 0x200) != 0 )
  {
    switch ( *((_DWORD *)a1 + 26) )
    {
      case 1:
        v19 = 1;
        break;
      case 2:
        v19 = 2;
        break;
      case 3:
        v19 = 3;
        break;
      default:
        if ( *((_DWORD *)a1 + 26) != 4 )
          v19 = 0;
        break;
    }
    *((_DWORD *)v12 + 47) = v19;
  }
  v24 = ConvertDisplayConfigScalingToPathModalityForPath(a1, (struct D3DKMT_PATHMODALITY_DESCRIPTOR *)(v12 + 56), a7);
  if ( v24 >= 0 )
  {
    *((_DWORD *)v12 + 62) = 0;
    if ( (*(_BYTE *)a1 & 8) == 0 )
      return 0LL;
    v24 = ConvertDisplayConfigWireFormatToPathModalityForPath(a1, (struct D3DKMT_PATHMODALITY_DESCRIPTOR *)(v12 + 56));
    if ( v24 >= 0 )
      return 0LL;
  }
LABEL_68:
  WdLogSingleEntry1(2LL, v10);
  return (unsigned int)v24;
}
