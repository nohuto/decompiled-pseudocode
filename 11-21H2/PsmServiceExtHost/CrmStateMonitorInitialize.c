/*
 * XREFs of CrmStateMonitorInitialize @ 0x18003C84C
 * Callers:
 *     CrmActivityStart @ 0x180030D90 (CrmActivityStart.c)
 *     CrmRegisterToStateMonitor @ 0x18003C628 (CrmRegisterToStateMonitor.c)
 * Callees:
 *     memset_0 @ 0x18005023A (memset_0.c)
 */

__int64 (__fastcall *__fastcall CrmStateMonitorInitialize(__int64 a1, int a2))()
{
  __int64 (__fastcall *result)(); // rax
  int v5; // esi
  int v6; // esi
  int v7; // esi
  int v8; // esi
  __int64 (__fastcall *v9)(); // rcx
  int v10; // esi
  __int64 (__fastcall *v11)(); // rcx
  _QWORD *v12; // rax

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
  if ( a2 <= 25 )
  {
    if ( a2 == 25 )
    {
      memset_0((void *)(a1 + 56), 0, 0x40uLL);
      *(_QWORD *)(a1 + 80) = a1 + 72;
      *(_QWORD *)(a1 + 72) = a1 + 72;
      result = CrmStateMonitorSystemDiskUsageCSCallback;
      goto LABEL_9;
    }
    if ( a2 > 17 )
    {
      switch ( a2 )
      {
        case 18:
          goto LABEL_24;
        case 19:
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
        case 20:
          memset_0((void *)(a1 + 56), 0, 0x88uLL);
          *(_QWORD *)(a1 + 80) = a1 + 72;
          *(_QWORD *)(a1 + 72) = a1 + 72;
          *(_QWORD *)(a1 + 64) = CrmStateMonitorPostResumeSuspendCallback;
          *(_QWORD *)(a1 + 104) = 0LL;
          *(_QWORD *)(a1 + 112) = 0LL;
          *(_QWORD *)(a1 + 112) = a1 + 104;
          *(_QWORD *)(a1 + 104) = a1 + 104;
          result = (__int64 (__fastcall *)())(a1 + 128);
          *(_QWORD *)(a1 + 96) = CrmStateMonitorPostResumeUsageCallback;
          *(_QWORD *)(a1 + 128) = 0LL;
          *(_QWORD *)(a1 + 136) = 0LL;
          *(_QWORD *)(a1 + 136) = a1 + 128;
          *(_QWORD *)(a1 + 128) = a1 + 128;
          *(_QWORD *)(a1 + 120) = CrmStateMonitorPostResumeUsageCallback;
          return result;
      }
      if ( a2 != 21 )
      {
        if ( a2 > 23 )
        {
          memset_0((void *)(a1 + 56), 0, 0x40uLL);
          *(_QWORD *)(a1 + 80) = a1 + 72;
          *(_QWORD *)(a1 + 72) = a1 + 72;
          result = CrmStateMonitorCPUUsageCSCallback;
          goto LABEL_9;
        }
        goto LABEL_24;
      }
      *(_QWORD *)(a1 + 56) = 0LL;
      v11 = CrmStateMonitorPowerConstrainedCallback;
      *(_QWORD *)(a1 + 64) = 0LL;
      v12 = (_QWORD *)(a1 + 80);
      *(_QWORD *)(a1 + 80) = 0LL;
      *(_QWORD *)(a1 + 88) = 0LL;
      *(_QWORD *)(a1 + 72) = CrmStateMonitorPowerConstrainedCallback;
    }
    else
    {
      if ( a2 >= 13 )
        goto LABEL_24;
      if ( a2 < 0 )
        return result;
      if ( a2 <= 1 )
      {
        *(_QWORD *)(a1 + 56) = 0LL;
        *(_QWORD *)(a1 + 64) = 0LL;
        return result;
      }
      if ( a2 != 2 )
      {
        if ( a2 <= 8 )
        {
          *(_OWORD *)(a1 + 56) = 0LL;
          return result;
        }
        if ( a2 == 10 )
        {
          result = 0LL;
          *(_QWORD *)(a1 + 56) = 0LL;
          return result;
        }
        goto LABEL_24;
      }
      *(_QWORD *)(a1 + 56) = 0LL;
      v11 = CrmStateMonitorCompositeTestCallback;
      *(_QWORD *)(a1 + 88) = 0LL;
      v12 = (_QWORD *)(a1 + 72);
      *(_QWORD *)(a1 + 120) = 0LL;
      *(_QWORD *)(a1 + 72) = 0LL;
      *(_QWORD *)(a1 + 80) = 0LL;
      *(_QWORD *)(a1 + 64) = CrmStateMonitorCompositeTestCallback;
    }
    *v12 = v12;
    v12[1] = v12;
    result = (__int64 (__fastcall *)())(a1 + 104);
    *(_QWORD *)(a1 + 104) = 0LL;
    *(_QWORD *)(a1 + 112) = 0LL;
    *(_QWORD *)(a1 + 112) = a1 + 104;
    *(_QWORD *)(a1 + 104) = a1 + 104;
    *(_QWORD *)(a1 + 96) = v11;
    return result;
  }
  if ( a2 > 32 )
  {
    switch ( a2 )
    {
      case '#':
        v9 = CrmStateMonitorAcDcDisplayCallback;
        break;
      case '$':
        v9 = CrmStateMonitorAcDcBatteryCallback;
        break;
      case '!':
        *(_QWORD *)(a1 + 56) = 0LL;
        *(_QWORD *)(a1 + 88) = 0LL;
        *(_QWORD *)(a1 + 72) = 0LL;
        *(_QWORD *)(a1 + 80) = 0LL;
        *(_QWORD *)(a1 + 80) = a1 + 72;
        *(_QWORD *)(a1 + 72) = a1 + 72;
        result = CrmStateMonitorDelayedCsCallback;
        goto LABEL_9;
      default:
        if ( a2 != 34 )
        {
          if ( a2 == 37 )
          {
            *(_QWORD *)(a1 + 56) = 0LL;
            *(_QWORD *)(a1 + 88) = 0LL;
            *(_QWORD *)(a1 + 72) = 0LL;
            *(_QWORD *)(a1 + 80) = 0LL;
            *(_QWORD *)(a1 + 80) = a1 + 72;
            *(_QWORD *)(a1 + 72) = a1 + 72;
            result = CrmStateMonitorDelayedInternetLossCallback;
            goto LABEL_9;
          }
          if ( a2 > 39 )
            return result;
        }
LABEL_24:
        result = 0LL;
        *(_OWORD *)(a1 + 56) = 0LL;
        *(_QWORD *)(a1 + 72) = 0LL;
        return result;
    }
LABEL_35:
    *(_QWORD *)(a1 + 56) = 0LL;
LABEL_36:
    *(_QWORD *)(a1 + 72) = 0LL;
    *(_QWORD *)(a1 + 80) = 0LL;
    *(_QWORD *)(a1 + 72) = a1 + 72;
    *(_QWORD *)(a1 + 80) = a1 + 72;
    result = (__int64 (__fastcall *)())(a1 + 96);
    *(_QWORD *)(a1 + 64) = v9;
    *(_QWORD *)(a1 + 96) = 0LL;
    *(_QWORD *)(a1 + 104) = 0LL;
    *(_QWORD *)(a1 + 104) = a1 + 96;
    *(_QWORD *)(a1 + 96) = a1 + 96;
    *(_QWORD *)(a1 + 88) = v9;
    return result;
  }
  if ( a2 == 32 )
    goto LABEL_24;
  v5 = a2 - 26;
  if ( !v5 )
  {
    v9 = CrmStateMonitorCsAcDcCallback;
    goto LABEL_35;
  }
  v6 = v5 - 1;
  if ( !v6 )
  {
    *(_QWORD *)(a1 + 56) = 0LL;
    *(_QWORD *)(a1 + 88) = 0LL;
    *(_QWORD *)(a1 + 72) = 0LL;
    *(_QWORD *)(a1 + 80) = 0LL;
    *(_QWORD *)(a1 + 80) = a1 + 72;
    *(_QWORD *)(a1 + 72) = a1 + 72;
    result = CrmStateMonitorDelayedAcCallback;
    goto LABEL_9;
  }
  v7 = v6 - 1;
  if ( !v7 )
    return result;
  v8 = v7 - 1;
  if ( !v8 )
  {
    *(_QWORD *)(a1 + 56) = 0LL;
    *(_QWORD *)(a1 + 88) = 0LL;
    *(_QWORD *)(a1 + 96) = 0LL;
    *(_QWORD *)(a1 + 104) = 0LL;
    *(_QWORD *)(a1 + 72) = 0LL;
    *(_QWORD *)(a1 + 80) = 0LL;
    *(_QWORD *)(a1 + 80) = a1 + 72;
    *(_QWORD *)(a1 + 72) = a1 + 72;
    result = (__int64 (__fastcall *)())CrmStateMonitorGPUUsageCSCallback;
LABEL_9:
    *(_QWORD *)(a1 + 64) = result;
    return result;
  }
  v10 = v8 - 1;
  if ( !v10 )
    goto LABEL_24;
  if ( v10 == 1 )
  {
    *(_QWORD *)(a1 + 56) = 0LL;
    v9 = CrmStateMonitorDisconnectedStandbyCallback;
    *(_QWORD *)(a1 + 112) = 0LL;
    goto LABEL_36;
  }
  return result;
}
