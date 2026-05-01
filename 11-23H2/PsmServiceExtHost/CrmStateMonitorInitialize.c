/*
 * XREFs of CrmStateMonitorInitialize @ 0x18000ADF4
 * Callers:
 *     CrmRegisterToStateMonitor @ 0x180009414 (CrmRegisterToStateMonitor.c)
 *     CrmActivityStart @ 0x18002B870 (CrmActivityStart.c)
 * Callees:
 *     memset_0 @ 0x1800534BA (memset_0.c)
 */

__int64 (__fastcall *__fastcall CrmStateMonitorInitialize(__int64 a1, int a2))()
{
  __int64 (__fastcall *result)(); // rax
  int v5; // edi
  int v6; // edi
  int v7; // edi
  int v8; // edi
  int v9; // edi
  int v10; // edi
  int v11; // edi
  int v12; // edi
  int v13; // edi
  int v14; // edi
  int v15; // edi
  __int64 (__fastcall *v16)(); // rcx
  int v17; // edi
  int v18; // edi
  int v19; // edi
  int v20; // edi
  __int64 (__fastcall *v21)(); // rcx
  int v22; // edi
  int v23; // edi
  int v24; // edi
  int v25; // edi
  int v26; // edi
  int v27; // edi
  int v28; // edi
  int v29; // edi
  int v30; // edi

  *(_OWORD *)a1 = 0LL;
  *(_OWORD *)(a1 + 16) = 0LL;
  *(_OWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  RtlInitializeSRWLock(a1 + 8);
  result = (__int64 (__fastcall *)())(a1 + 24);
  *(_DWORD *)(a1 + 16) = 0;
  *(_DWORD *)a1 = a2;
  *(_QWORD *)(a1 + 32) = a1 + 24;
  *(_QWORD *)(a1 + 24) = a1 + 24;
  if ( a2 > 21 )
  {
    if ( a2 <= 32 )
    {
      if ( a2 == 32 )
        goto LABEL_24;
      if ( a2 > 27 )
      {
        v22 = a2 - 28;
        if ( !v22 )
          return result;
        v23 = v22 - 1;
        if ( v23 )
        {
          v24 = v23 - 1;
          if ( !v24 )
            goto LABEL_24;
          if ( v24 != 1 )
            return result;
          *(_QWORD *)(a1 + 56) = 0LL;
          v21 = CrmStateMonitorDisconnectedStandbyCallback;
          *(_QWORD *)(a1 + 112) = 0LL;
LABEL_46:
          *(_QWORD *)(a1 + 72) = 0LL;
          *(_QWORD *)(a1 + 80) = 0LL;
          *(_QWORD *)(a1 + 72) = a1 + 72;
          *(_QWORD *)(a1 + 80) = a1 + 72;
          result = (__int64 (__fastcall *)())(a1 + 96);
          *(_QWORD *)(a1 + 64) = v21;
          *(_QWORD *)(a1 + 96) = 0LL;
          *(_QWORD *)(a1 + 104) = 0LL;
          *(_QWORD *)(a1 + 104) = a1 + 96;
          *(_QWORD *)(a1 + 96) = a1 + 96;
          *(_QWORD *)(a1 + 88) = v21;
          return result;
        }
        *(_QWORD *)(a1 + 56) = 0LL;
        *(_QWORD *)(a1 + 88) = 0LL;
        *(_QWORD *)(a1 + 96) = 0LL;
        *(_QWORD *)(a1 + 104) = 0LL;
        *(_QWORD *)(a1 + 72) = 0LL;
        *(_QWORD *)(a1 + 80) = 0LL;
        *(_QWORD *)(a1 + 80) = a1 + 72;
        *(_QWORD *)(a1 + 72) = a1 + 72;
        result = CrmStateMonitorGPUUsageCSCallback;
      }
      else if ( a2 == 27 )
      {
        *(_QWORD *)(a1 + 56) = 0LL;
        *(_QWORD *)(a1 + 88) = 0LL;
        *(_QWORD *)(a1 + 72) = 0LL;
        *(_QWORD *)(a1 + 80) = 0LL;
        *(_QWORD *)(a1 + 80) = a1 + 72;
        *(_QWORD *)(a1 + 72) = a1 + 72;
        result = CrmStateMonitorDelayedAcCallback;
      }
      else
      {
        v17 = a2 - 22;
        if ( !v17 )
          goto LABEL_24;
        v18 = v17 - 1;
        if ( !v18 )
          goto LABEL_24;
        v19 = v18 - 1;
        if ( v19 )
        {
          v20 = v19 - 1;
          if ( v20 )
          {
            if ( v20 != 1 )
              return result;
            v21 = CrmStateMonitorCsAcDcCallback;
            goto LABEL_45;
          }
          memset_0((void *)(a1 + 56), 0, 0x40uLL);
          *(_QWORD *)(a1 + 80) = a1 + 72;
          *(_QWORD *)(a1 + 72) = a1 + 72;
          result = CrmStateMonitorSystemDiskUsageCSCallback;
        }
        else
        {
          memset_0((void *)(a1 + 56), 0, 0x40uLL);
          *(_QWORD *)(a1 + 80) = a1 + 72;
          *(_QWORD *)(a1 + 72) = a1 + 72;
          result = CrmStateMonitorCPUUsageCSCallback;
        }
      }
LABEL_71:
      *(_QWORD *)(a1 + 64) = result;
      return result;
    }
    v25 = a2 - 33;
    if ( !v25 )
    {
      *(_QWORD *)(a1 + 56) = 0LL;
      *(_QWORD *)(a1 + 88) = 0LL;
      *(_QWORD *)(a1 + 72) = 0LL;
      *(_QWORD *)(a1 + 80) = 0LL;
      *(_QWORD *)(a1 + 80) = a1 + 72;
      *(_QWORD *)(a1 + 72) = a1 + 72;
      result = CrmStateMonitorDelayedCsCallback;
      goto LABEL_71;
    }
    v26 = v25 - 1;
    if ( !v26 )
      goto LABEL_24;
    v27 = v26 - 1;
    if ( v27 )
    {
      v28 = v27 - 1;
      if ( v28 )
      {
        v29 = v28 - 1;
        if ( v29 )
        {
          v30 = v29 - 1;
          if ( !v30 )
            goto LABEL_24;
          v12 = v30 - 1;
          if ( !v12 )
          {
            memset_0((void *)(a1 + 56), 0, 0x68uLL);
            *(_QWORD *)(a1 + 104) = a1 + 96;
            *(_QWORD *)(a1 + 96) = a1 + 96;
            result = CrmStateMonitorFanNoiseHysteresisCallback;
            goto LABEL_25;
          }
LABEL_63:
          v9 = v12 - 1;
          if ( v9 )
          {
LABEL_64:
            if ( v9 != 1 )
              return result;
          }
LABEL_24:
          result = 0LL;
          *(_OWORD *)(a1 + 56) = 0LL;
          *(_OWORD *)(a1 + 72) = 0LL;
LABEL_25:
          *(_QWORD *)(a1 + 88) = result;
          return result;
        }
        *(_QWORD *)(a1 + 56) = 0LL;
        *(_QWORD *)(a1 + 88) = 0LL;
        *(_QWORD *)(a1 + 72) = 0LL;
        *(_QWORD *)(a1 + 80) = 0LL;
        *(_QWORD *)(a1 + 80) = a1 + 72;
        *(_QWORD *)(a1 + 72) = a1 + 72;
        result = CrmStateMonitorDelayedInternetLossCallback;
        goto LABEL_71;
      }
      v21 = CrmStateMonitorAcDcBatteryCallback;
    }
    else
    {
      v21 = CrmStateMonitorAcDcDisplayCallback;
    }
LABEL_45:
    *(_QWORD *)(a1 + 56) = 0LL;
    goto LABEL_46;
  }
  if ( a2 == 21 )
  {
    memset_0((void *)(a1 + 56), 0, 0x58uLL);
    v16 = CrmStateMonitorPowerConstrainedCallback;
    goto LABEL_31;
  }
  if ( a2 > 10 )
  {
    if ( a2 <= 16 )
    {
      if ( a2 == 16 )
        goto LABEL_24;
      v10 = a2 - 11;
      if ( v10 )
      {
        v11 = v10 - 1;
        if ( v11 )
        {
          v12 = v11 - 1;
          if ( !v12 )
            goto LABEL_24;
          goto LABEL_63;
        }
      }
LABEL_33:
      result = 0LL;
      *(_OWORD *)(a1 + 56) = 0LL;
      *(_QWORD *)(a1 + 72) = 0LL;
      return result;
    }
    v13 = a2 - 17;
    if ( !v13 )
      goto LABEL_24;
    v14 = v13 - 1;
    if ( !v14 )
      goto LABEL_33;
    v15 = v14 - 1;
    if ( !v15 )
    {
      memset_0((void *)(a1 + 56), 0, 0x80uLL);
      *(_QWORD *)(a1 + 80) = a1 + 72;
      *(_QWORD *)(a1 + 72) = a1 + 72;
      *(_QWORD *)(a1 + 64) = CrmStateMonitorPostShellReadyTimeSinceLogonCallback;
      *(_QWORD *)(a1 + 96) = 0LL;
      *(_QWORD *)(a1 + 104) = 0LL;
      *(_QWORD *)(a1 + 104) = a1 + 96;
      *(_QWORD *)(a1 + 96) = a1 + 96;
      result = (__int64 (__fastcall *)())(a1 + 120);
      *(_QWORD *)(a1 + 88) = CrmStateMonitorPostShellReadyUsageCallback;
      *(_QWORD *)(a1 + 120) = 0LL;
      *(_QWORD *)(a1 + 128) = 0LL;
      *(_QWORD *)(a1 + 128) = a1 + 120;
      *(_QWORD *)(a1 + 120) = a1 + 120;
      *(_QWORD *)(a1 + 112) = CrmStateMonitorPostShellReadyUsageCallback;
      return result;
    }
    if ( v15 != 1 )
      return result;
    memset_0((void *)(a1 + 56), 0, 0x88uLL);
    *(_QWORD *)(a1 + 80) = a1 + 72;
    v16 = CrmStateMonitorPostResumeUsageCallback;
    *(_QWORD *)(a1 + 72) = a1 + 72;
    *(_QWORD *)(a1 + 64) = CrmStateMonitorPostResumeSuspendCallback;
    *(_QWORD *)(a1 + 104) = 0LL;
    *(_QWORD *)(a1 + 112) = 0LL;
LABEL_31:
    *(_QWORD *)(a1 + 104) = a1 + 104;
    *(_QWORD *)(a1 + 112) = a1 + 104;
    result = (__int64 (__fastcall *)())(a1 + 128);
    *(_QWORD *)(a1 + 96) = v16;
    *(_QWORD *)(a1 + 128) = 0LL;
    *(_QWORD *)(a1 + 136) = 0LL;
    *(_QWORD *)(a1 + 136) = a1 + 128;
    *(_QWORD *)(a1 + 128) = a1 + 128;
    *(_QWORD *)(a1 + 120) = v16;
    return result;
  }
  if ( a2 == 10 )
  {
    result = 0LL;
    *(_QWORD *)(a1 + 56) = 0LL;
    return result;
  }
  if ( a2 > 5 )
  {
    v7 = a2 - 6;
    if ( !v7 || (v8 = v7 - 1) == 0 || (v9 = v8 - 1) == 0 )
    {
LABEL_17:
      *(_OWORD *)(a1 + 56) = 0LL;
      return result;
    }
    goto LABEL_64;
  }
  if ( a2 == 5 )
    goto LABEL_17;
  if ( !a2 || (v5 = a2 - 1) == 0 )
  {
    *(_QWORD *)(a1 + 56) = 0LL;
    *(_QWORD *)(a1 + 64) = 0LL;
    return result;
  }
  v6 = v5 - 1;
  if ( !v6 )
  {
    *(_QWORD *)(a1 + 56) = 0LL;
    *(_QWORD *)(a1 + 88) = 0LL;
    *(_QWORD *)(a1 + 120) = 0LL;
    *(_QWORD *)(a1 + 72) = 0LL;
    *(_QWORD *)(a1 + 80) = 0LL;
    *(_QWORD *)(a1 + 80) = a1 + 72;
    *(_QWORD *)(a1 + 72) = a1 + 72;
    result = (__int64 (__fastcall *)())(a1 + 104);
    *(_QWORD *)(a1 + 64) = CrmStateMonitorCompositeTestCallback;
    *(_QWORD *)(a1 + 104) = 0LL;
    *(_QWORD *)(a1 + 112) = 0LL;
    *(_QWORD *)(a1 + 112) = a1 + 104;
    *(_QWORD *)(a1 + 104) = a1 + 104;
    *(_QWORD *)(a1 + 96) = CrmStateMonitorCompositeTestCallback;
    return result;
  }
  if ( (unsigned int)(v6 - 1) < 2 )
    goto LABEL_17;
  return result;
}
