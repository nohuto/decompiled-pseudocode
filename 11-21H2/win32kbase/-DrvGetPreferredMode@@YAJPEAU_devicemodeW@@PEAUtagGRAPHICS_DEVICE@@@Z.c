/*
 * XREFs of ?DrvGetPreferredMode@@YAJPEAU_devicemodeW@@PEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C00BD3E0
 * Callers:
 *     DrvEnumDisplaySettings @ 0x1C006F640 (DrvEnumDisplaySettings.c)
 * Callees:
 *     Win32FreePool @ 0x1C0026670 (Win32FreePool.c)
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C00384DC (-wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IH.c)
 *     PALLOCMEM @ 0x1C0086980 (PALLOCMEM.c)
 *     DrvDisplayConfigGetDeviceInfo @ 0x1C00C4CF0 (DrvDisplayConfigGetDeviceInfo.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 */

__int64 __fastcall DrvGetPreferredMode(struct _devicemodeW *a1, struct tagGRAPHICS_DEVICE *a2)
{
  struct _devicemodeW *v3; // r14
  __int64 result; // rax
  unsigned int v5; // r15d
  int v6; // ebx
  unsigned int v7; // esi
  __int64 v8; // rdi
  unsigned int v9; // r12d
  __int64 *v10; // rcx
  _BYTE *v11; // rdx
  __int64 v12; // rax
  int DeviceInfo; // ebx
  int v14; // eax
  unsigned int v15; // eax
  int v16; // [rsp+40h] [rbp-8E8h]
  __int64 v17; // [rsp+48h] [rbp-8E0h]
  __int64 v18; // [rsp+48h] [rbp-8E0h]
  _OWORD v20[5]; // [rsp+60h] [rbp-8C8h] BYREF
  _BYTE v21[944]; // [rsp+B0h] [rbp-878h] BYREF
  _OWORD v22[14]; // [rsp+460h] [rbp-4C8h] BYREF
  __int64 v23; // [rsp+540h] [rbp-3E8h] BYREF
  __int64 v24; // [rsp+548h] [rbp-3E0h]
  __int128 v25; // [rsp+550h] [rbp-3D8h]
  __int128 v26; // [rsp+560h] [rbp-3C8h]
  __m128i v27; // [rsp+570h] [rbp-3B8h]
  __int128 v28; // [rsp+580h] [rbp-3A8h]
  __int64 v29; // [rsp+8D4h] [rbp-54h]
  int v30; // [rsp+8ECh] [rbp-3Ch]

  v3 = a1;
  wil_details_FeatureReporting_ReportUsageToService(
    (__int64)&Feature_EnumDisplaySettings_UseSharedLockWhenPossible__private_reporting,
    31058687LL,
    0LL,
    0LL,
    (const struct FEATURE_LOGGED_TRAITS *)&Feature_KeyboardInputVirtualization_logged_traits,
    1,
    3);
  wil_details_FeatureReporting_ReportUsageToService(
    (__int64)&Feature_EnumDisplayDevices_UseSharedLock_DontCheck__private_reporting,
    31051196LL,
    0LL,
    0LL,
    (const struct FEATURE_LOGGED_TRAITS *)&Feature_KeyboardInputVirtualization_logged_traits,
    1,
    3);
  if ( (*((_DWORD *)a2 + 40) & 0x800000) == 0 )
    return 3221225711LL;
  v5 = 0x7FFF;
  v6 = 0x7FFF;
  v16 = 0x7FFF;
  v7 = 0x7FFF;
  v8 = PALLOCMEM(0x100DBu, 1986356295);
  if ( !v8 )
    return 3221225495LL;
  v9 = 0;
  if ( !*((_DWORD *)a2 + 54) )
    goto LABEL_21;
  do
  {
    v17 = *((_QWORD *)a2 + 28);
    if ( (*(_BYTE *)(v17 + 20LL * v9) & 3) == 3 )
    {
      v30 = 0;
      memset(v21, 0, 0x3ACuLL);
      v10 = &v23;
      v11 = v21;
      v12 = 7LL;
      do
      {
        *(_OWORD *)v10 = *(_OWORD *)v11;
        *((_OWORD *)v10 + 1) = *((_OWORD *)v11 + 1);
        *((_OWORD *)v10 + 2) = *((_OWORD *)v11 + 2);
        *((_OWORD *)v10 + 3) = *((_OWORD *)v11 + 3);
        *((_OWORD *)v10 + 4) = *((_OWORD *)v11 + 4);
        *((_OWORD *)v10 + 5) = *((_OWORD *)v11 + 5);
        *((_OWORD *)v10 + 6) = *((_OWORD *)v11 + 6);
        v10 += 16;
        *((_OWORD *)v10 - 1) = *((_OWORD *)v11 + 7);
        v11 += 128;
        --v12;
      }
      while ( v12 );
      *(_OWORD *)v10 = *(_OWORD *)v11;
      *((_OWORD *)v10 + 1) = *((_OWORD *)v11 + 1);
      v10[4] = *((_QWORD *)v11 + 4);
      *((_DWORD *)v10 + 10) = *((_DWORD *)v11 + 10);
      v23 = 0x3ACFFFFFFF9LL;
      v24 = *(_QWORD *)(v17 + 20LL * v9 + 8);
      LODWORD(v25) = *(_DWORD *)(v17 + 20LL * v9 + 4);
      DeviceInfo = DrvDisplayConfigGetDeviceInfo(&v23);
      memset(v22, 0, 0xD8uLL);
      *(_QWORD *)&v22[1] = *((_QWORD *)a2 + 31);
      DWORD2(v22[1]) = *((_DWORD *)a2 + 64);
      v18 = *((_QWORD *)a2 + 28);
      HIDWORD(v22[1]) = *(_DWORD *)(v18 + 20LL * v9 + 4);
      if ( DeviceInfo < 0 )
      {
        memset(v20, 0, sizeof(v20));
        v24 = *((_QWORD *)&v20[0] + 1);
        v25 = v20[1];
        v26 = v20[2];
        v27 = (__m128i)v20[3];
        v28 = v20[4];
        v23 = 0x5000000003LL;
        v24 = *(_QWORD *)(v18 + 20LL * v9 + 8);
        LODWORD(v25) = *(_DWORD *)(v18 + 20LL * v9 + 4);
        if ( (int)DrvDisplayConfigGetDeviceInfo(&v23) < 0 )
          goto LABEL_18;
        v22[2] = v26;
        v22[3] = v27;
        v22[4] = v28;
        *(_QWORD *)((char *)&v22[12] + 4) = v27.m128i_i64[0];
        *((_QWORD *)&v22[5] + 1) = __PAIR64__(
                                     _mm_cvtsi128_si32(_mm_srli_si128(v27, 12)),
                                     _mm_cvtsi128_si32(_mm_srli_si128(v27, 8)));
        HIDWORD(v22[7]) = DWORD1(v25);
        v14 = DWORD2(v25);
      }
      else
      {
        *((_QWORD *)&v22[3] + 1) = v29;
        v14 = HIDWORD(v29);
        *(_QWORD *)&v22[3] = 0xFFFFFFFEFFFFFFFEuLL;
        *(_QWORD *)((char *)&v22[12] + 4) = 0xFFFFFFFEFFFFFFFEuLL;
        HIDWORD(v22[4]) = 1;
        *((_QWORD *)&v22[5] + 1) = v29;
        HIDWORD(v22[7]) = v29;
      }
      LODWORD(v22[8]) = v14;
      DWORD1(v22[13]) = 1;
      *(_QWORD *)&v22[0] = 0x700001030387LL;
      LODWORD(v22[7]) = 1;
      DWORD2(v22[6]) = 1;
      LODWORD(v22[6]) = 21;
      if ( (int)((__int64 (__fastcall *)(_OWORD *, __int64))qword_1C0296910)(v22, v8) >= 0 )
      {
        v15 = *(_DWORD *)(v8 + 184);
        if ( v15 >= v7 )
          v15 = v7;
        v7 = v15;
        if ( *(_DWORD *)(v8 + 172) <= v5 )
        {
          v5 = *(_DWORD *)(v8 + 172);
          v6 = *(_DWORD *)(v8 + 176);
          v16 = v6;
          goto LABEL_19;
        }
      }
    }
LABEL_18:
    v6 = v16;
LABEL_19:
    ++v9;
  }
  while ( v9 < *((_DWORD *)a2 + 54) );
  v3 = a1;
LABEL_21:
  Win32FreePool((char *)v8);
  result = 3221225713LL;
  if ( v5 != 0x7FFF )
    result = 0LL;
  v3->dmDisplayFrequency = v7;
  v3->dmPelsWidth = v5;
  v3->dmPelsHeight = v6;
  v3->dmFields = 5767168;
  return result;
}
