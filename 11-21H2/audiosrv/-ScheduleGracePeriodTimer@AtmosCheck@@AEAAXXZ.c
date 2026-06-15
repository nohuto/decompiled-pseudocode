/*
 * XREFs of ?ScheduleGracePeriodTimer@AtmosCheck@@AEAAXXZ @ 0x180156600
 * Callers:
 *     _lambda_8f6469647279b04fec56e75d6ce621cf_::operator() @ 0x1801531D4 (_lambda_8f6469647279b04fec56e75d6ce621cf_--operator().c)
 *     _lambda_cc9ef5d5666b848f78e6be49ef14c6a9_::operator() @ 0x180153314 (_lambda_cc9ef5d5666b848f78e6be49ef14c6a9_--operator().c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18003FB14 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 *     ?GetSpatialAudioLicenseGracePeriodInMs@AtmosCheck@@CAHXZ @ 0x180154B7C (-GetSpatialAudioLicenseGracePeriodInMs@AtmosCheck@@CAHXZ.c)
 */

void __fastcall AtmosCheck::ScheduleGracePeriodTimer(char *pv)
{
  struct _RTL_CRITICAL_SECTION *v1; // r14
  PTP_TIMER ThreadpoolTimer; // rax
  signed int LastError; // eax
  int SpatialAudioLicenseGracePeriodInMs; // esi
  int v6; // [rsp+30h] [rbp-50h] BYREF
  struct _FILETIME pftDueTime; // [rsp+38h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v8; // [rsp+40h] [rbp-40h] BYREF
  int *v9; // [rsp+60h] [rbp-20h]
  int v10; // [rsp+68h] [rbp-18h]
  int v11; // [rsp+6Ch] [rbp-14h]

  v1 = (struct _RTL_CRITICAL_SECTION *)(pv + 56);
  EnterCriticalSection((LPCRITICAL_SECTION)(pv + 56));
  if ( pv[217] )
  {
    if ( !pv[216] && !*((_QWORD *)pv + 26) && pv[265] && pv[264] )
    {
      ThreadpoolTimer = CreateThreadpoolTimer(AtmosCheck::StaticGracePeriodExpiredFired, pv, 0LL);
      *((_QWORD *)pv + 26) = ThreadpoolTimer;
      if ( ThreadpoolTimer )
      {
        SpatialAudioLicenseGracePeriodInMs = AtmosCheck::GetSpatialAudioLicenseGracePeriodInMs();
        if ( !SpatialAudioLicenseGracePeriodInMs )
          SpatialAudioLicenseGracePeriodInMs = 5;
        if ( (unsigned int)dword_1801C02B0 > 5 )
        {
          v11 = 0;
          v9 = &v6;
          v6 = SpatialAudioLicenseGracePeriodInMs;
          v10 = 4;
          tlgWriteTransfer_EventWriteTransfer(
            (__int64)&dword_1801C02B0,
            (unsigned __int8 *)dword_18018F5D4,
            0LL,
            0LL,
            3u,
            &v8);
        }
        pftDueTime = (struct _FILETIME)(-10000LL * SpatialAudioLicenseGracePeriodInMs);
        SetThreadpoolTimer(*((PTP_TIMER *)pv + 26), &pftDueTime, 0, 0);
        if ( (unsigned int)dword_1801C02B0 > 5 )
          tlgWriteTransfer_EventWriteTransfer(
            (__int64)&dword_1801C02B0,
            (unsigned __int8 *)dword_18018F91D,
            0LL,
            0LL,
            2u,
            &v8);
      }
      else
      {
        LastError = GetLastError();
        if ( LastError > 0 )
          LastError = (unsigned __int16)LastError | 0x80070000;
        if ( (unsigned int)dword_1801C02B0 > 5 )
        {
          v11 = 0;
          v6 = LastError;
          v9 = &v6;
          v10 = 4;
          tlgWriteTransfer_EventWriteTransfer((__int64)&dword_1801C02B0, byte_18018FA8C, 0LL, 0LL, 3u, &v8);
        }
      }
    }
  }
  else
  {
    pv[216] = 1;
  }
  if ( v1 )
    LeaveCriticalSection(v1);
}
