/*
 * XREFs of TlgUnregisterAggregateProvider @ 0x1C010A5E8
 * Callers:
 *     ?DeInitGlobals@VIDMM_GLOBAL@@SAXXZ @ 0x1C00E100C (-DeInitGlobals@VIDMM_GLOBAL@@SAXXZ.c)
 * Callees:
 *     LookUpTableFlushComplete @ 0x1C00C31CC (LookUpTableFlushComplete.c)
 *     CancelTimerCallbacksAndDeleteTimer @ 0x1C010A310 (CancelTimerCallbacksAndDeleteTimer.c)
 *     DestroyAggregateSession @ 0x1C010A3A0 (DestroyAggregateSession.c)
 */

void TlgUnregisterAggregateProvider()
{
  _QWORD *v0; // rdi
  __int64 v1; // rcx
  __int64 *v2; // rdx
  __int64 *v3; // rax
  REGHANDLE v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // r8
  REGHANDLE v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // r8
  REGHANDLE v10; // rcx

  if ( (void (__fastcall *)(const struct _GUID *, __int64, char, __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, _QWORD *))qword_1C0076070 == TlgAggregateInternalRegisteredProviderEtwCallback )
  {
    v0 = 0LL;
    ExAcquirePushLockExclusiveEx(&unk_1C0076758, 0LL);
    v1 = qword_1C0076948;
    v2 = &qword_1C0076948;
    while ( v1 )
    {
      v3 = (__int64 *)(v1 + 352);
      if ( *(int **)(v1 + 344) == &dword_1C0076048 )
      {
        v0 = (_QWORD *)v1;
        *v2 = *v3;
        LookUpTableFlushComplete(v1);
        if ( !qword_1C0076948 )
        {
          v4 = qword_1C00760A0;
          qword_1C00760A0 = 0LL;
          dword_1C0076080 = 0;
          EtwUnregister(v4);
        }
        break;
      }
      v1 = *v3;
      v2 = v3;
    }
    ExReleasePushLockExclusiveEx(&unk_1C0076758, 0LL);
    if ( v0 )
      CancelTimerCallbacksAndDeleteTimer((__int64)v0, v5, v6);
    v7 = RegHandle;
    RegHandle = 0LL;
    dword_1C0076048 = 0;
    EtwUnregister(v7);
    qword_1C0076070 = 0LL;
    DestroyAggregateSession(v0, v8, v9);
  }
  else
  {
    v10 = RegHandle;
    RegHandle = 0LL;
    dword_1C0076048 = 0;
    EtwUnregister(v10);
  }
}
