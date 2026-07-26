/*
 * XREFs of NdisSetCoalescableTimerObject @ 0x1C00409E0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qqill @ 0x1C0040B30 (WPP_RECORDER_SF_qqill.c)
 */

BOOLEAN __stdcall NdisSetCoalescableTimerObject(
        NDIS_HANDLE TimerObject,
        LARGE_INTEGER DueTime,
        LONG MillisecondsPeriod,
        PVOID FunctionContext,
        ULONG Tolerance)
{
  _QWORD *v6; // rsi
  KIRQL v10; // al
  _QWORD *v11; // r8
  _QWORD *v12; // rdx

  v6 = (_QWORD *)*((_QWORD *)TimerObject + 24);
  if ( **((_BYTE **)TimerObject + 3) == 17 && !v6 )
    return 0;
  if ( !FunctionContext )
    FunctionContext = (PVOID)*((_QWORD *)TimerObject + 22);
  *((_QWORD *)TimerObject + 23) = FunctionContext;
  if ( v6 )
  {
    if ( (*(_BYTE *)(v6[470] + 26LL) & 2) != 0 )
    {
      v10 = KeAcquireSpinLockRaiseToDpc(v6 + 235);
      v11 = (_QWORD *)v6[70];
      v12 = v11;
      if ( v11 )
      {
        while ( v12 != TimerObject )
        {
          v12 = (_QWORD *)*v12;
          if ( !v12 )
            goto LABEL_11;
        }
      }
      else
      {
LABEL_11:
        *(_QWORD *)TimerObject = v11;
        v6[70] = TimerObject;
      }
      KeReleaseSpinLock(v6 + 235, v10);
    }
  }
  else
  {
    *((_QWORD *)TimerObject + 16) = FunctionContext;
  }
  if ( MillisecondsPeriod )
    *((_BYTE *)TimerObject + 200) = 1;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqill(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      DueTime.QuadPart >> 63,
      MillisecondsPeriod,
      (_DWORD)FunctionContext);
  return KeSetCoalescableTimer(
           (PKTIMER)((char *)TimerObject + 32),
           DueTime,
           MillisecondsPeriod,
           Tolerance,
           (PKDPC)((char *)TimerObject + 96));
}
