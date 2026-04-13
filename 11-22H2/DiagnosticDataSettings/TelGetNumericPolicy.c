/*
 * XREFs of TelGetNumericPolicy @ 0x180001A40
 * Callers:
 *     TelIsRestrictivePolicySet @ 0x180001E10 (TelIsRestrictivePolicySet.c)
 *     TelpReadMdmSetting @ 0x18000228C (TelpReadMdmSetting.c)
 *     TelGetWerTelemetryMode @ 0x180002B50 (TelGetWerTelemetryMode.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003748 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004A4C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180005CA0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall TelGetNumericPolicy(__int64 a1, _DWORD *a2, _DWORD *a3)
{
  FARPROC ProcAddress; // rbx
  __int64 (*v7)(void); // r12
  HMODULE Library; // rax
  HMODULE v9; // r14
  signed int v10; // ebx
  _DWORD *v11; // rcx
  const WCHAR *v12; // rbx
  LSTATUS ValueW; // eax
  int v14; // eax
  __int64 v15; // rdx
  int v17; // [rsp+20h] [rbp-30h]
  __int64 v18; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  DWORD pcbData; // [rsp+80h] [rbp+30h] BYREF
  _DWORD *v21; // [rsp+98h] [rbp+48h] BYREF

  if ( !a1 || !a2 || !a3 )
  {
    v10 = -2147024809;
    v15 = 491LL;
    goto LABEL_46;
  }
  *a3 = 0;
  *a2 = 0;
  ProcAddress = 0LL;
  v7 = 0LL;
  Library = LoadLibraryExW(L"policymanager.dll", 0LL, 0x800u);
  v9 = Library;
  if ( Library )
  {
    ProcAddress = GetProcAddress(Library, "PolicyManager_GetPolicy");
    v7 = GetProcAddress(v9, "PolicyManager_FreeGetPolicyData");
  }
  v21 = 0LL;
  v18 = 0LL;
  if ( !ProcAddress || !v7 )
  {
    v12 = L"LimitEnhancedDiagnosticDataWindowsAnalytics";
    if ( (unsigned int)_o__wcsicmp(a1, L"LimitEnhancedDiagnosticDataWindowsAnalytics") )
    {
      if ( (unsigned int)_o__wcsicmp(a1, L"ConfigureTelemetryOptInChangeNotification") )
      {
        if ( (unsigned int)_o__wcsicmp(a1, L"ConfigureTelemetryOptInSettingsUx") )
        {
          v12 = L"DisableDeviceDelete";
          if ( (unsigned int)_o__wcsicmp(a1, L"DisableDeviceDelete") )
          {
            v12 = L"DisableDiagnosticDataViewer";
            if ( (unsigned int)_o__wcsicmp(a1, L"DisableDiagnosticDataViewer") )
            {
              v12 = L"AllowCommercialDataPipeline";
              if ( (unsigned int)_o__wcsicmp(a1, L"AllowCommercialDataPipeline") )
              {
                v12 = L"AllowTelemetry";
                if ( (unsigned int)_o__wcsicmp(a1, L"AllowTelemetry") )
                {
                  v12 = L"LimitDumpCollection";
                  if ( (unsigned int)_o__wcsicmp(a1, L"LimitDumpCollection") )
                  {
                    v12 = L"LimitDiagnosticLogCollection";
                    if ( (unsigned int)_o__wcsicmp(a1, L"LimitDiagnosticLogCollection") )
                    {
                      v12 = L"DisableEnterpriseAuthProxy";
                      if ( (unsigned int)_o__wcsicmp(a1, L"DisableEnterpriseAuthProxy") )
                      {
                        v12 = L"AllowDeviceNameInDiagnosticData";
                        if ( (unsigned int)_o__wcsicmp(a1, L"AllowDeviceNameInDiagnosticData") )
                        {
                          v12 = L"DisableOneSettingsDownloads";
                          if ( (unsigned int)_o__wcsicmp(a1, L"DisableOneSettingsDownloads") )
                          {
                            v12 = L"EnableOneSettingsAuditing";
                            if ( (unsigned int)_o__wcsicmp(a1, L"EnableOneSettingsAuditing") )
                            {
                              v10 = -2147024809;
                              goto LABEL_37;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        else
        {
          v12 = L"DisableTelemetryOptInSettingsUx";
        }
      }
      else
      {
        v12 = L"DisableTelemetryOptInChangeNotification";
      }
    }
    pcbData = 4;
    ValueW = RegGetValueW(
               HKEY_LOCAL_MACHINE,
               L"Software\\Policies\\Microsoft\\Windows\\DataCollection",
               v12,
               0x18u,
               0LL,
               a3,
               &pcbData);
    v10 = (unsigned __int16)ValueW | 0x80070000;
    if ( ValueW <= 0 )
      v10 = ValueW;
    if ( v10 < 0 )
      goto LABEL_34;
    *a2 = 1;
LABEL_37:
    v11 = v21;
    goto LABEL_38;
  }
  v18 = 0x200000001LL;
  v10 = ((__int64 (__fastcall *)(const wchar_t *, __int64, __int64 *, _DWORD **))ProcAddress)(L"System", a1, &v18, &v21);
  if ( v10 >= 0 )
  {
    v11 = v21;
    if ( v21 )
    {
      if ( !v21[1] )
      {
        *a2 = 0;
        goto LABEL_38;
      }
      if ( v21[2] == 1 )
      {
        *a3 = v21[4];
        *a2 = 1;
        goto LABEL_38;
      }
    }
    v10 = -2147024883;
    goto LABEL_38;
  }
LABEL_34:
  v11 = v21;
  if ( v10 == -2147024894 )
  {
    v10 = 0;
    *a2 = 0;
  }
LABEL_38:
  if ( v11 )
  {
    v14 = v7();
    if ( v14 < 0 )
      wil::details::in1diag3::_Log_Hr(retaddr, (void *)0x270, (unsigned int)a3, (const char *)(unsigned int)v14, v17);
  }
  if ( v9 )
    FreeLibrary(v9);
  if ( v10 < 0 )
  {
    v15 = 633LL;
LABEL_46:
    wil::details::in1diag3::Return_Hr(retaddr, (void *)v15, (unsigned int)a3, (const char *)(unsigned int)v10, v17);
  }
  return (unsigned int)v10;
}
