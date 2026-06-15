/*
 * XREFs of _lambda_25a52f7b70a5b2ddb41b08d731639da5_::operator() @ 0x180039494
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_25a52f7b70a5b2ddb41b08d731639da5___::Run @ 0x180039700 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_25a52f7b70a5b2ddb41b08d731639da5___--Run.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18001C004 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?PerformLicenseCheckInternalLegacy@AtmosCheck@@AEAAJPEA_N@Z @ 0x180038870 (-PerformLicenseCheckInternalLegacy@AtmosCheck@@AEAAJPEA_N@Z.c)
 *     ?RefreshPlatformLicenses@AtmosCheck@@AEAAXXZ @ 0x18003969C (-RefreshPlatformLicenses@AtmosCheck@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1800669B0 (__security_check_cookie.c)
 *     ?CancelLicenseRefreshTimer@AtmosCheck@@AEAAXXZ @ 0x18015AA14 (-CancelLicenseRefreshTimer@AtmosCheck@@AEAAXXZ.c)
 *     ?CheckInstalledAppServicesAvailable@AtmosCheck@@AEAA_NXZ @ 0x18015AAD0 (-CheckInstalledAppServicesAvailable@AtmosCheck@@AEAA_NXZ.c)
 *     ?GetNearestLicenseExpiryDate@AtmosCheck@@AEAA_KXZ @ 0x18015BB8C (-GetNearestLicenseExpiryDate@AtmosCheck@@AEAA_KXZ.c)
 *     ?PerformLicenseCheckForAllEndpoints@AtmosCheck@@AEAAJPEA_N@Z @ 0x18015C4C8 (-PerformLicenseCheckForAllEndpoints@AtmosCheck@@AEAAJPEA_N@Z.c)
 *     ?SetExpiryTimer@AtmosCheck@@AEAAX_K@Z @ 0x18015D7BC (-SetExpiryTimer@AtmosCheck@@AEAAX_K@Z.c)
 */

void __fastcall lambda_25a52f7b70a5b2ddb41b08d731639da5_::operator()(__int64 a1)
{
  AtmosCheck *v1; // rbx
  bool *v3; // rsi
  int *v4; // r14
  int v5; // eax
  char v6; // al
  const WCHAR *v7; // r8
  int v8; // eax
  struct _TP_TIMER *ThreadpoolTimer; // rax
  struct _TP_TIMER *v10; // rcx
  int *v11; // rcx
  int LastError; // eax
  unsigned __int64 NearestLicenseExpiryDate; // rax
  unsigned __int64 v14; // rcx
  int pvData; // [rsp+40h] [rbp-9h] BYREF
  struct _FILETIME pcbData; // [rsp+48h] [rbp-1h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v17; // [rsp+50h] [rbp+7h] BYREF
  struct _FILETIME *p_pcbData; // [rsp+70h] [rbp+27h]
  int v19; // [rsp+78h] [rbp+2Fh]
  int v20; // [rsp+7Ch] [rbp+33h]

  v1 = *(AtmosCheck **)a1;
  AtmosCheck::RefreshPlatformLicenses(*(AtmosCheck **)a1);
  v3 = *(bool **)(a1 + 24);
  v4 = *(int **)(a1 + 16);
  if ( *((_BYTE *)v1 + 217) )
  {
    *v4 = AtmosCheck::PerformLicenseCheckForAllEndpoints(v1, v3);
    if ( !*((_BYTE *)v1 + 99) && AtmosCheck::CheckInstalledAppServicesAvailable(v1) )
      *((_BYTE *)v1 + 99) = 1;
  }
  else
  {
    v5 = AtmosCheck::PerformLicenseCheckInternalLegacy(v1, v3);
    *v4 = v5;
    if ( v5 >= 0 )
    {
      v6 = *((_BYTE *)v1 + 100);
      pvData = 0;
      v7 = L"AudioSrvLicenseResult";
      pcbData.dwLowDateTime = 4;
      if ( !v6 )
        v7 = L"AudioDGLicenseResult";
      RegGetValueW(
        HKEY_LOCAL_MACHINE,
        L"Software\\Microsoft\\Windows\\CurrentVersion\\Audio\\Spatial\\AtmosLicenseDebug",
        v7,
        0x10u,
        0LL,
        &pvData,
        (LPDWORD)&pcbData);
      if ( pvData < 0 )
      {
        v11 = *(int **)(a1 + 8);
        *v11 = pvData;
        v11[1] = pvData;
        v11[2] = pvData;
        v11[3] = pvData;
      }
      EnterCriticalSection((LPCRITICAL_SECTION)((char *)v1 + 56));
      v8 = *((_DWORD *)v1 + 46);
      if ( (v8 == 8 || v8 == 5) && !*((_BYTE *)v1 + 99) )
      {
        *((_BYTE *)v1 + 99) = 1;
        *v3 = 1;
      }
      if ( v1 != (AtmosCheck *)-56LL )
        LeaveCriticalSection((LPCRITICAL_SECTION)((char *)v1 + 56));
    }
  }
  if ( *((_BYTE *)v1 + 100) )
  {
    ThreadpoolTimer = (struct _TP_TIMER *)*((_QWORD *)v1 + 25);
    if ( ThreadpoolTimer
      || (ThreadpoolTimer = CreateThreadpoolTimer(AtmosCheck::StaticAtmosRefreshTimerCallback, v1, 0LL),
          (*((_QWORD *)v1 + 25) = ThreadpoolTimer) != 0LL) )
    {
      if ( *((_BYTE *)v1 + 217) )
      {
        if ( *((_BYTE *)v1 + 216) )
        {
          NearestLicenseExpiryDate = AtmosCheck::GetNearestLicenseExpiryDate(v1);
          if ( NearestLicenseExpiryDate )
          {
            v14 = *((_QWORD *)v1 + 29);
            if ( !v14 || NearestLicenseExpiryDate < v14 )
              AtmosCheck::SetExpiryTimer(v1, NearestLicenseExpiryDate);
          }
          else if ( *((_QWORD *)v1 + 25) )
          {
            AtmosCheck::CancelLicenseRefreshTimer(v1);
          }
        }
      }
      else if ( !IsThreadpoolTimerSet(ThreadpoolTimer) )
      {
        pcbData.dwHighDateTime = -1;
        v10 = (struct _TP_TIMER *)*((_QWORD *)v1 + 25);
        pcbData.dwLowDateTime = 1294967296;
        SetThreadpoolTimer(v10, &pcbData, 0x5265C00u, 0x7530u);
      }
    }
    else
    {
      LastError = GetLastError();
      if ( LastError > 0 )
        LastError = (unsigned __int16)LastError | 0x80070000;
      if ( (unsigned int)dword_1801CD2B8 > 5 )
      {
        v20 = 0;
        pcbData.dwLowDateTime = LastError;
        v19 = 4;
        p_pcbData = &pcbData;
        tlgWriteTransfer_EventWriteTransfer(
          (__int64)&dword_1801CD2B8,
          (unsigned __int8 *)dword_1801991DF,
          0LL,
          0LL,
          3u,
          &v17);
      }
    }
  }
}
