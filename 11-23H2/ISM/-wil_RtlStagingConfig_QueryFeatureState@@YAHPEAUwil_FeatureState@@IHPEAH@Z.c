/*
 * XREFs of ?wil_RtlStagingConfig_QueryFeatureState@@YAHPEAUwil_FeatureState@@IHPEAH@Z @ 0x18004CB20
 * Callers:
 *     ?IsFeatureConfigured@details@wil@@YA_NPEAUwil_FeatureState@@I_NW4wil_FeatureStore@@PEAH@Z @ 0x18004CA4C (-IsFeatureConfigured@details@wil@@YA_NPEAUwil_FeatureState@@I_NW4wil_FeatureStore@@PEAH@Z.c)
 * Callees:
 *     ?wil_details_GetNtDllModuleHandle@@YAPEAUHINSTANCE__@@XZ @ 0x18004CC10 (-wil_details_GetNtDllModuleHandle@@YAPEAUHINSTANCE__@@XZ.c)
 *     __security_check_cookie @ 0x180056730 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
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
  int v11; // eax
  int v12; // edx
  HMODULE NtDllModuleHandle; // rax
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
    v11 = ((__int64 (__fastcall *)(_QWORD, BOOL, _BYTE *, __int64 *))ProcAddress)(a2, v8, v16, &v17);
    v12 = v11;
    if ( v11 )
    {
      if ( v11 != 279 )
        goto LABEL_4;
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
    v12 = -1073741511;
  }
LABEL_4:
  if ( a4 )
  {
    LOBYTE(v4) = v12 != -2147483614;
    *a4 = v4;
  }
  return v9;
}
