/*
 * XREFs of NdisCancelTimerObject @ 0x1C0016DC0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C000CCD0 (WPP_RECORDER_SF_qq.c)
 */

BOOLEAN __stdcall NdisCancelTimerObject(NDIS_HANDLE TimerObject)
{
  __int64 v2; // rax
  BOOLEAN v3; // di
  __int64 v5; // rax
  KIRQL v6; // r8
  _QWORD **v7; // rdx
  _QWORD *v8; // rcx

  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xCu,
      0xCu,
      (struct _GUID *)&WPP_1199be12e998382f89b5427f6f01d2c3_Traceguids,
      *((_QWORD *)TimerObject + 3),
      TimerObject);
  v2 = *((_QWORD *)TimerObject + 24);
  if ( v2 )
  {
    if ( (*(_DWORD *)(v2 + 3688) & 8) != 0 )
      return 0;
    v3 = KeCancelTimer((PKTIMER)((char *)TimerObject + 32));
    v5 = *((_QWORD *)TimerObject + 24);
    if ( (*(_BYTE *)(*(_QWORD *)(v5 + 3760) + 26LL) & 2) != 0 && v3 )
    {
      v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v5 + 1880));
      v7 = (_QWORD **)(*((_QWORD *)TimerObject + 24) + 560LL);
      v8 = *v7;
      if ( *v7 )
      {
        while ( v8 != TimerObject )
        {
          v7 = (_QWORD **)v8;
          v8 = (_QWORD *)*v8;
          if ( !v8 )
            goto LABEL_17;
        }
        *v7 = *(_QWORD **)TimerObject;
      }
LABEL_17:
      KeReleaseSpinLock((PKSPIN_LOCK)(*((_QWORD *)TimerObject + 24) + 1880LL), v6);
    }
  }
  else
  {
    v3 = KeCancelTimer((PKTIMER)((char *)TimerObject + 32));
  }
  if ( *((_BYTE *)TimerObject + 200) )
    KeFlushQueuedDpcs();
  return v3;
}
