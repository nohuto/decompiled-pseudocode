/*
 * XREFs of PepNotifyQueryFeedbackCounters @ 0x1C003AD70
 * Callers:
 *     InitPepPerfStates @ 0x1C003A568 (InitPepPerfStates.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0004950 (WPP_RECORDER_SF_d.c)
 *     memmove @ 0x1C000C4C0 (memmove.c)
 */

__int64 __fastcall PepNotifyQueryFeedbackCounters(__int64 a1, unsigned int a2, void *a3)
{
  __int64 v3; // rsi
  _DWORD *Pool2; // rax
  _DWORD *v7; // rdi
  int v8; // ebx

  v3 = a2;
  Pool2 = (_DWORD *)ExAllocatePool2(64LL, 8 * a2 + 4, 1919119952LL);
  v7 = Pool2;
  if ( Pool2 )
  {
    *Pool2 = v3;
    v8 = PoFxProcessorNotification(*(_QWORD *)(a1 + 1120), 9LL, Pool2);
    if ( v8 >= 0 )
    {
      memmove(a3, v7 + 1, 8 * v3);
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      WPP_RECORDER_SF_d(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        2u,
        0x1Fu,
        (__int64)&WPP_f9bd8d112b513185ab5e94a42bec474e_Traceguids,
        v8);
    }
  }
  else
  {
    v8 = -1073741670;
  }
  ExFreePoolWithTag(v7, (ULONG)1919119952);
  return (unsigned int)v8;
}
