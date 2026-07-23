/*
 * XREFs of PopDiagTraceIrpFinishTelemetry @ 0x14028E824
 * Callers:
 *     PopDiagTraceIrpFinish @ 0x14028E7A4 (PopDiagTraceIrpFinish.c)
 * Callees:
 *     _tlgKeywordOn @ 0x140212E64 (_tlgKeywordOn.c)
 *     KxReleaseSpinLock @ 0x1402505D0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140250F40 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopComputeWatchdogTimeout @ 0x14028F088 (PopComputeWatchdogTimeout.c)
 *     KiQueryUnbiasedInterruptTime @ 0x1402E76F4 (KiQueryUnbiasedInterruptTime.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402F6DB4 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgCreate1Sz_wchar_t @ 0x1402F6E74 (_tlgCreate1Sz_wchar_t.c)
 *     IoFindDeviceThatFailedIrp @ 0x140367F44 (IoFindDeviceThatFailedIrp.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 *     PopDiagGetDriverName @ 0x140591DB4 (PopDiagGetDriverName.c)
 */

char __fastcall PopDiagTraceIrpFinishTelemetry(__int64 a1)
{
  int v2; // r13d
  __int64 v3; // rbx
  unsigned __int64 v4; // rsi
  __int64 v5; // rcx
  __int64 UnbiasedInterruptTime; // rax
  int v7; // r11d
  __int64 v8; // r8
  char v9; // di
  unsigned __int64 v10; // r12
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // r8
  _DWORD *SchedulerAssist; // r9
  struct _KPRCB *CurrentPrcb; // r10
  bool v16; // zf
  int *v17; // rdi
  __int64 DeviceThatFailedIrp; // rax
  int DriverName; // eax
  const size_t *v20; // r9
  __int64 v21; // r9
  int v22; // r10d
  int v23; // r11d
  int v25; // [rsp+38h] [rbp-D0h] BYREF
  int v26; // [rsp+3Ch] [rbp-CCh] BYREF
  int v27; // [rsp+40h] [rbp-C8h] BYREF
  int v28; // [rsp+44h] [rbp-C4h] BYREF
  __int64 v29; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v30; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v31; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v32; // [rsp+60h] [rbp-A8h] BYREF
  char v33[32]; // [rsp+68h] [rbp-A0h] BYREF
  int *v34; // [rsp+88h] [rbp-80h]
  __int64 v35; // [rsp+90h] [rbp-78h]
  __int64 *v36; // [rsp+98h] [rbp-70h]
  __int64 v37; // [rsp+A0h] [rbp-68h]
  __int64 *v38; // [rsp+A8h] [rbp-60h]
  __int64 v39; // [rsp+B0h] [rbp-58h]
  char v40[16]; // [rsp+B8h] [rbp-50h] BYREF
  int *v41; // [rsp+C8h] [rbp-40h]
  __int64 v42; // [rsp+D0h] [rbp-38h]
  int *v43; // [rsp+D8h] [rbp-30h]
  __int64 v44; // [rsp+E0h] [rbp-28h]
  int *v45; // [rsp+E8h] [rbp-20h]
  __int64 v46; // [rsp+F0h] [rbp-18h]
  __int64 *v47; // [rsp+F8h] [rbp-10h]
  __int64 v48; // [rsp+100h] [rbp-8h]
  __int64 *v49; // [rsp+108h] [rbp+0h]
  __int64 v50; // [rsp+110h] [rbp+8h]
  _BYTE v51[128]; // [rsp+118h] [rbp+10h] BYREF

  v2 = *(_DWORD *)(a1 + 48);
  v3 = *(_QWORD *)(a1 + 72LL * *(char *)(a1 + 66) + 200);
  v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v3 + 288));
  LOBYTE(v5) = 1;
  UnbiasedInterruptTime = KiQueryUnbiasedInterruptTime(v5);
  v8 = *(_QWORD *)(v3 + 48);
  v29 = UnbiasedInterruptTime;
  v9 = 0;
  v10 = (UnbiasedInterruptTime - v8) / 0x2710uLL;
  if ( v8 )
  {
    if ( *(_DWORD *)(v3 + 296) == v7 )
    {
      v9 = 0;
      if ( (unsigned int)v10 >= 0x1388 )
        v9 = v7;
    }
  }
  LOBYTE(v11) = KxReleaseSpinLock((volatile signed __int64 *)(v3 + 288));
  if ( (_DWORD)KiIrqlFlags )
  {
    LOBYTE(v11) = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
      && (unsigned __int8)v11 <= 0xFu
      && (unsigned __int8)v4 <= 0xFu
      && (unsigned __int8)v11 >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v12 = -1LL << ((unsigned __int8)v4 + 1);
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v11 = ~(unsigned __int16)v12;
      v16 = (v11 & SchedulerAssist[5]) == 0;
      v13 = (unsigned int)v11 & SchedulerAssist[5];
      SchedulerAssist[5] = v13;
      if ( v16 )
        LOBYTE(v11) = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(v4);
  if ( v9 )
  {
    if ( v2 < 0 )
    {
      v17 = (int *)(v3 + 188);
      if ( !*(_DWORD *)(v3 + 188) )
      {
        DeviceThatFailedIrp = IoFindDeviceThatFailedIrp(a1, v12, v13, SchedulerAssist);
        DriverName = PopDiagGetDriverName(DeviceThatFailedIrp, v51);
        v20 = (const size_t *)v51;
        if ( DriverName >= 0 )
        {
LABEL_19:
          LOBYTE(v11) = PopComputeWatchdogTimeout(v3, v12, v13, v20);
          if ( (unsigned int)dword_140C03950 > 5 )
          {
            LOBYTE(v11) = tlgKeywordOn((__int64)&dword_140C03950, 0x400000000000LL);
            if ( (_BYTE)v11 )
            {
              v25 = v10;
              v34 = &v25;
              v30 = *(_QWORD *)(v3 + 48);
              v36 = &v30;
              v31 = v29;
              v38 = &v31;
              v35 = 4LL;
              v37 = 8LL;
              v39 = 8LL;
              tlgCreate1Sz_wchar_t(v40, v21);
              v26 = v22;
              v41 = &v26;
              v27 = *v17;
              v42 = 4LL;
              v43 = &v27;
              v44 = 4LL;
              v45 = &v28;
              v47 = &v29;
              v49 = &v32;
              v28 = v23;
              v46 = 4LL;
              LODWORD(v29) = v2;
              v48 = 4LL;
              v32 = 0x1000000LL;
              v50 = 8LL;
              LOBYTE(v11) = tlgWriteTransfer_EtwWriteTransfer(&dword_140C03950, byte_14002FD91, 0LL, 0LL, 11, v33);
            }
          }
          return v11;
        }
      }
    }
    else
    {
      v17 = (int *)(v3 + 188);
    }
    v20 = &cchOriginalDestLength;
    goto LABEL_19;
  }
  return v11;
}
