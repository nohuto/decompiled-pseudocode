/*
 * XREFs of ?ScheduleGracePeriodTimer@AtmosCheck@@AEAAXXZ @ 0x18015D5F0
 * Callers:
 *     _lambda_2d0fc716a24758c5659c2630b6d3cdc8_::operator() @ 0x18015A2A4 (_lambda_2d0fc716a24758c5659c2630b6d3cdc8_--operator().c)
 *     _lambda_aaa9b3e3e77bc6900f26072d6eeeed96_::operator() @ 0x18015A614 (_lambda_aaa9b3e3e77bc6900f26072d6eeeed96_--operator().c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18001C004 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1800669A0 (__security_check_cookie.c)
 *     ??1SyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x180084474 (--1SyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@QEAA@XZ.c)
 *     ?GetSpatialAudioLicenseGracePeriodInMs@AtmosCheck@@CAHXZ @ 0x18015BC7C (-GetSpatialAudioLicenseGracePeriodInMs@AtmosCheck@@CAHXZ.c)
 */

void __fastcall AtmosCheck::ScheduleGracePeriodTimer(char *pv)
{
  struct _RTL_CRITICAL_SECTION *v1; // rsi
  bool v3; // zf
  PTP_TIMER ThreadpoolTimer; // rax
  signed int LastError; // eax
  int SpatialAudioLicenseGracePeriodInMs; // r14d
  signed int v7; // [rsp+30h] [rbp-50h] BYREF
  struct _FILETIME pftDueTime; // [rsp+38h] [rbp-48h] BYREF
  struct _RTL_CRITICAL_SECTION *v9; // [rsp+40h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v10; // [rsp+48h] [rbp-38h] BYREF
  signed int *v11; // [rsp+68h] [rbp-18h]
  int v12; // [rsp+70h] [rbp-10h]
  int v13; // [rsp+74h] [rbp-Ch]

  v1 = (struct _RTL_CRITICAL_SECTION *)(pv + 56);
  EnterCriticalSection((LPCRITICAL_SECTION)(pv + 56));
  v3 = pv[217] == 0;
  v9 = v1;
  if ( v3 )
  {
    pv[216] = 1;
LABEL_3:
    Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection::~SyncLockCriticalSection(&v9);
    return;
  }
  if ( pv[216] || *((_QWORD *)pv + 26) || !pv[265] || !pv[264] )
    goto LABEL_3;
  ThreadpoolTimer = CreateThreadpoolTimer(AtmosCheck::StaticGracePeriodExpiredFired, pv, 0LL);
  *((_QWORD *)pv + 26) = ThreadpoolTimer;
  if ( !ThreadpoolTimer )
  {
    LastError = GetLastError();
    if ( LastError > 0 )
      LastError = (unsigned __int16)LastError | 0x80070000;
    if ( (unsigned int)dword_1801CD2B8 > 5 )
    {
      v13 = 0;
      v7 = LastError;
      v12 = 4;
      v11 = &v7;
      tlgWriteTransfer_EventWriteTransfer(
        (__int64)&dword_1801CD2B8,
        (unsigned __int8 *)dword_18019917F,
        0LL,
        0LL,
        3u,
        &v10);
    }
    goto LABEL_3;
  }
  SpatialAudioLicenseGracePeriodInMs = AtmosCheck::GetSpatialAudioLicenseGracePeriodInMs();
  if ( !SpatialAudioLicenseGracePeriodInMs )
    SpatialAudioLicenseGracePeriodInMs = 5;
  if ( (unsigned int)dword_1801CD2B8 > 5 )
  {
    v13 = 0;
    v11 = &v7;
    v7 = SpatialAudioLicenseGracePeriodInMs;
    v12 = 4;
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)&dword_1801CD2B8,
      (unsigned __int8 *)dword_180198CFF,
      0LL,
      0LL,
      3u,
      &v10);
  }
  pftDueTime = (struct _FILETIME)(-10000LL * SpatialAudioLicenseGracePeriodInMs);
  SetThreadpoolTimer(*((PTP_TIMER *)pv + 26), &pftDueTime, 0, 0);
  if ( (unsigned int)dword_1801CD2B8 > 5 )
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)&dword_1801CD2B8,
      (unsigned __int8 *)dword_180199045,
      0LL,
      0LL,
      2u,
      &v10);
  if ( v1 )
    LeaveCriticalSection(v1);
}
