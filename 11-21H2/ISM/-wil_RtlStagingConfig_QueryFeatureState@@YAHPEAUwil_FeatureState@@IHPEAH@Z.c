/*
 * XREFs of ?wil_RtlStagingConfig_QueryFeatureState@@YAHPEAUwil_FeatureState@@IHPEAH@Z @ 0x18002E73C
 * Callers:
 *     ?WilApiImpl_GetFeatureEnabledState@details@wil@@YA?AW4FEATURE_ENABLED_STATE@@IW4FEATURE_CHANGE_TIME@@PEAH@Z @ 0x18002E610 (-WilApiImpl_GetFeatureEnabledState@details@wil@@YA-AW4FEATURE_ENABLED_STATE@@IW4FEATURE_CHANGE_T.c)
 * Callees:
 *     ?wil_details_GetNtDllModuleHandle@@YAPEAUHINSTANCE__@@XZ @ 0x18002E910 (-wil_details_GetNtDllModuleHandle@@YAPEAUHINSTANCE__@@XZ.c)
 *     __security_check_cookie @ 0x18004A930 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall wil_RtlStagingConfig_QueryFeatureState(
        struct wil_FeatureState *a1,
        unsigned int a2,
        int a3,
        int *a4)
{
  int v4; // ebx
  BOOL v8; // ebp
  unsigned int v9; // edi
  FARPROC ProcAddress; // rax
  HMODULE NtDllModuleHandle; // rax
  int v12; // eax
  int v13; // edx
  unsigned int v15; // ecx
  _BYTE v16[8]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v17; // [rsp+38h] [rbp-40h] BYREF
  int v18; // [rsp+40h] [rbp-38h]

  v4 = 0;
  v8 = a3 == 0;
  v9 = 0;
  v17 = 0LL;
  v18 = 0;
  ProcAddress = (FARPROC)g_wil_details_pfnRtlQueryFeatureConfiguration;
  if ( g_wil_details_pfnRtlQueryFeatureConfiguration
    || (NtDllModuleHandle = wil_details_GetNtDllModuleHandle(),
        ProcAddress = GetProcAddress(NtDllModuleHandle, "RtlQueryFeatureConfiguration"),
        (g_wil_details_pfnRtlQueryFeatureConfiguration = (__int64)ProcAddress) != 0) )
  {
    v12 = ((__int64 (__fastcall *)(_QWORD, BOOL, _BYTE *, __int64 *))ProcAddress)(a2, v8, v16, &v17);
    v13 = v12;
    if ( v12 )
    {
      if ( v12 != 279 )
        goto LABEL_5;
      v15 = HIDWORD(v17);
      v9 = 1;
    }
    else
    {
      v15 = HIDWORD(v17);
      v9 = 1;
      *(_DWORD *)a1 = (HIDWORD(v17) >> 4) & 3;
      *((_BYTE *)a1 + 4) = BYTE1(v15) & 0x3F;
      *((_DWORD *)a1 + 3) = v18;
      *((_DWORD *)a1 + 2) = (unsigned __int16)v15 >> 14;
      *((_DWORD *)a1 + 5) = (v15 >> 6) & 1;
    }
    *((_DWORD *)a1 + 4) = (v15 >> 7) & 1;
  }
  else
  {
    v13 = -1073741511;
  }
LABEL_5:
  if ( a4 )
  {
    LOBYTE(v4) = v13 != -2147483614;
    *a4 = v4;
  }
  return v9;
}
