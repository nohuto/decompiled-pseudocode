/*
 * XREFs of ?UpdateLicenseRefreshTimer@AtmosCheck@@AEAAXXZ @ 0x180041B68
 * Callers:
 *     _lambda_25a52f7b70a5b2ddb41b08d731639da5_::operator() @ 0x180040DE0 (_lambda_25a52f7b70a5b2ddb41b08d731639da5_--operator().c)
 *     ?UninitializeAppServiceMode@AtmosCheck@@AEAAXXZ @ 0x180156B70 (-UninitializeAppServiceMode@AtmosCheck@@AEAAXXZ.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18003FB14 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 *     ?CancelLicenseRefreshTimer@AtmosCheck@@AEAAXXZ @ 0x1801538D0 (-CancelLicenseRefreshTimer@AtmosCheck@@AEAAXXZ.c)
 *     ?GetNearestLicenseExpiryDate@AtmosCheck@@AEAA_KXZ @ 0x180154ADC (-GetNearestLicenseExpiryDate@AtmosCheck@@AEAA_KXZ.c)
 *     ?SetExpiryTimer@AtmosCheck@@AEAAX_K@Z @ 0x180156808 (-SetExpiryTimer@AtmosCheck@@AEAAX_K@Z.c)
 */

void __fastcall AtmosCheck::UpdateLicenseRefreshTimer(AtmosCheck *pv)
{
  struct _TP_TIMER *ThreadpoolTimer; // rax
  struct _TP_TIMER *v3; // rcx
  int LastError; // eax
  unsigned __int64 NearestLicenseExpiryDate; // rax
  unsigned __int64 v6; // rcx
  struct _FILETIME pftDueTime; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v8; // [rsp+38h] [rbp-40h] BYREF
  struct _FILETIME *p_pftDueTime; // [rsp+58h] [rbp-20h]
  int v10; // [rsp+60h] [rbp-18h]
  int v11; // [rsp+64h] [rbp-14h]

  ThreadpoolTimer = (struct _TP_TIMER *)*((_QWORD *)pv + 25);
  if ( ThreadpoolTimer
    || (ThreadpoolTimer = CreateThreadpoolTimer(
                            (PTP_TIMER_CALLBACK)AtmosCheck::StaticAtmosRefreshTimerCallback,
                            pv,
                            0LL),
        (*((_QWORD *)pv + 25) = ThreadpoolTimer) != 0LL) )
  {
    if ( *((_BYTE *)pv + 217) )
    {
      if ( *((_BYTE *)pv + 216) )
      {
        NearestLicenseExpiryDate = AtmosCheck::GetNearestLicenseExpiryDate(pv);
        if ( NearestLicenseExpiryDate )
        {
          v6 = *((_QWORD *)pv + 29);
          if ( !v6 || NearestLicenseExpiryDate < v6 )
            AtmosCheck::SetExpiryTimer(pv, NearestLicenseExpiryDate);
        }
        else if ( *((_QWORD *)pv + 25) )
        {
          AtmosCheck::CancelLicenseRefreshTimer(pv);
        }
      }
    }
    else if ( !IsThreadpoolTimerSet(ThreadpoolTimer) )
    {
      pftDueTime.dwHighDateTime = -1;
      v3 = (struct _TP_TIMER *)*((_QWORD *)pv + 25);
      pftDueTime.dwLowDateTime = 1294967296;
      SetThreadpoolTimer(v3, &pftDueTime, 0x5265C00u, 0x7530u);
    }
  }
  else
  {
    LastError = GetLastError();
    if ( LastError > 0 )
      LastError = (unsigned __int16)LastError | 0x80070000;
    if ( (unsigned int)dword_1801C02B0 > 5 )
    {
      v11 = 0;
      pftDueTime.dwLowDateTime = LastError;
      v10 = 4;
      p_pftDueTime = &pftDueTime;
      tlgWriteTransfer_EventWriteTransfer(
        (__int64)&dword_1801C02B0,
        (unsigned __int8 *)dword_18018FAEC,
        0LL,
        0LL,
        3u,
        &v8);
    }
  }
}
