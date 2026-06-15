/*
 * XREFs of _lambda_25a52f7b70a5b2ddb41b08d731639da5_::operator() @ 0x180040DE0
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_25a52f7b70a5b2ddb41b08d731639da5___::Run @ 0x180040DD0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_25a52f7b70a5b2ddb41b08d731639da5___--Run.c)
 * Callees:
 *     ?PerformLicenseCheckInternalLegacy@AtmosCheck@@AEAAJPEA_N@Z @ 0x180040EF8 (-PerformLicenseCheckInternalLegacy@AtmosCheck@@AEAAJPEA_N@Z.c)
 *     ?UpdateLicenseRefreshTimer@AtmosCheck@@AEAAXXZ @ 0x180041B68 (-UpdateLicenseRefreshTimer@AtmosCheck@@AEAAXXZ.c)
 *     ?RefreshPlatformLicenses@AtmosCheck@@AEAAXXZ @ 0x180041C20 (-RefreshPlatformLicenses@AtmosCheck@@AEAAXXZ.c)
 *     ?CheckInstalledAppServicesAvailable@AtmosCheck@@AEAA_NXZ @ 0x18015398C (-CheckInstalledAppServicesAvailable@AtmosCheck@@AEAA_NXZ.c)
 *     ?PerformLicenseCheckForAllEndpoints@AtmosCheck@@AEAAJPEA_N@Z @ 0x180155538 (-PerformLicenseCheckForAllEndpoints@AtmosCheck@@AEAAJPEA_N@Z.c)
 */

void __fastcall lambda_25a52f7b70a5b2ddb41b08d731639da5_::operator()(__int64 a1)
{
  AtmosCheck *v2; // rcx
  bool *v3; // rdx
  int *v4; // rbx
  int v5; // eax
  AtmosCheck *v6; // rax
  const WCHAR *v7; // r8
  char v8; // cl
  struct _RTL_CRITICAL_SECTION *v9; // rbx
  AtmosCheck *v10; // rcx
  int v11; // eax
  _BYTE *v12; // rax
  int *v13; // rcx
  int pvData; // [rsp+50h] [rbp+8h] BYREF
  DWORD pcbData; // [rsp+58h] [rbp+10h] BYREF

  AtmosCheck::RefreshPlatformLicenses(*(AtmosCheck **)a1);
  v2 = *(AtmosCheck **)a1;
  v3 = *(bool **)(a1 + 24);
  if ( *(_BYTE *)(*(_QWORD *)a1 + 217LL) )
  {
    **(_DWORD **)(a1 + 16) = AtmosCheck::PerformLicenseCheckForAllEndpoints(v2, v3);
    if ( !*(_BYTE *)(*(_QWORD *)a1 + 99LL) && AtmosCheck::CheckInstalledAppServicesAvailable(*(AtmosCheck **)a1) )
      *(_BYTE *)(*(_QWORD *)a1 + 99LL) = 1;
  }
  else
  {
    v4 = *(int **)(a1 + 16);
    v5 = AtmosCheck::PerformLicenseCheckInternalLegacy(v2, v3);
    *v4 = v5;
    if ( v5 >= 0 )
    {
      v6 = *(AtmosCheck **)a1;
      v7 = L"AudioSrvLicenseResult";
      pcbData = 4;
      v8 = *((_BYTE *)v6 + 100);
      pvData = 0;
      if ( !v8 )
        v7 = L"AudioDGLicenseResult";
      RegGetValueW(
        HKEY_LOCAL_MACHINE,
        L"Software\\Microsoft\\Windows\\CurrentVersion\\Audio\\Spatial\\AtmosLicenseDebug",
        v7,
        0x10u,
        0LL,
        &pvData,
        &pcbData);
      if ( pvData < 0 )
      {
        v13 = *(int **)(a1 + 8);
        *v13 = pvData;
        v13[1] = pvData;
        v13[2] = pvData;
        v13[3] = pvData;
      }
      v9 = (struct _RTL_CRITICAL_SECTION *)(*(_QWORD *)a1 + 56LL);
      EnterCriticalSection(v9);
      v10 = *(AtmosCheck **)a1;
      v11 = *(_DWORD *)(*(_QWORD *)a1 + 184LL);
      if ( (v11 == 8 || v11 == 5) && !*((_BYTE *)v10 + 99) )
      {
        v12 = *(_BYTE **)(a1 + 24);
        *((_BYTE *)v10 + 99) = 1;
        *v12 = 1;
      }
      if ( v9 )
        LeaveCriticalSection(v9);
    }
  }
  if ( *(_BYTE *)(*(_QWORD *)a1 + 100LL) )
    AtmosCheck::UpdateLicenseRefreshTimer(*(PVOID *)a1);
}
