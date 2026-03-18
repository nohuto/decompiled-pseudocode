/*
 * XREFs of InitCreateUserCrit @ 0x1C02E3F18
 * Callers:
 *     Win32kBaseDriverEntry @ 0x1C02E4310 (Win32kBaseDriverEntry.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C0033A6C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     UserSetLastError @ 0x1C003CCC0 (UserSetLastError.c)
 *     ?InitDomainLocks@@YAJXZ @ 0x1C005D2E4 (-InitDomainLocks@@YAJXZ.c)
 *     CreateKernelSemaphore @ 0x1C005EA70 (CreateKernelSemaphore.c)
 *     ?CleanupDomainLocks@@YAXXZ @ 0x1C00BFD40 (-CleanupDomainLocks@@YAXXZ.c)
 *     ?UnInitialize@EnterLeaveCritMitRitHandOffHazard@@SAXXZ @ 0x1C00C5CFC (-UnInitialize@EnterLeaveCritMitRitHandOffHazard@@SAXXZ.c)
 */

__int64 InitCreateUserCrit()
{
  bool v0; // dl
  struct _ERESOURCE *Pool2; // rax
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  struct _ERESOURCE *v5; // rax
  struct _ERESOURCE *v6; // rax
  struct _ERESOURCE *v7; // rax
  struct _ERESOURCE *v8; // rax
  struct _KEVENT *v9; // rax
  int v10; // edx
  int v11; // r8d
  bool v12; // dl

  v0 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && _bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0xDu)
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( v0 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v0,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      4,
      14,
      14,
      (__int64)&WPP_6bbaa2e2a0713bd7aecc3a487024d555_Traceguids);
  Pool2 = (struct _ERESOURCE *)ExAllocatePool2(64LL, 104LL);
  gpresUser = Pool2;
  if ( !Pool2 )
    goto LABEL_56;
  if ( ExInitializeResourceLite(Pool2) < 0 )
    goto LABEL_70;
  v5 = (struct _ERESOURCE *)ExAllocatePool2(64LL, 104LL);
  gpresRender = v5;
  if ( !v5 )
    goto LABEL_56;
  if ( ExInitializeResourceLite(v5) < 0 )
    goto LABEL_67;
  v6 = (struct _ERESOURCE *)ExAllocatePool2(64LL, 104LL);
  gpresDitTouchInjection = v6;
  if ( !v6 )
    goto LABEL_59;
  if ( ExInitializeResourceLite(v6) < 0 )
    goto LABEL_58;
  v7 = (struct _ERESOURCE *)ExAllocatePool2(64LL, 104LL);
  gpresDitMouseInjectionFlush = v7;
  if ( !v7 )
    goto LABEL_56;
  if ( ExInitializeResourceLite(v7) < 0 )
    goto LABEL_61;
  v8 = (struct _ERESOURCE *)ExAllocatePool2(64LL, 104LL);
  gpresDitCompositionInputSinkQuery = v8;
  if ( !v8 )
    goto LABEL_56;
  if ( ExInitializeResourceLite(v8) < 0 )
    goto LABEL_64;
  v9 = (struct _KEVENT *)ExAllocatePool2(64LL, 56LL);
  gpHandleFlagsMutex = v9;
  if ( !v9 )
  {
LABEL_56:
    if ( !gpresDitTouchInjection )
    {
LABEL_59:
      if ( !gpresDitMouseInjectionFlush )
      {
LABEL_62:
        if ( !gpresDitCompositionInputSinkQuery )
        {
LABEL_65:
          if ( !gpresRender )
          {
LABEL_68:
            if ( !gpresUser )
            {
LABEL_71:
              UserSetLastError(8LL, v2, v3, v4);
              return 0LL;
            }
            ExDeleteResourceLite(gpresUser);
LABEL_70:
            ExFreePoolWithTag(gpresUser, 0);
            gpresUser = 0LL;
            goto LABEL_71;
          }
          ExDeleteResourceLite(gpresRender);
LABEL_67:
          ExFreePoolWithTag(gpresRender, 0);
          gpresRender = 0LL;
          goto LABEL_68;
        }
        ExDeleteResourceLite(gpresDitCompositionInputSinkQuery);
LABEL_64:
        ExFreePoolWithTag(gpresDitCompositionInputSinkQuery, 0);
        gpresDitCompositionInputSinkQuery = 0LL;
        goto LABEL_65;
      }
      ExDeleteResourceLite(gpresDitMouseInjectionFlush);
LABEL_61:
      ExFreePoolWithTag(gpresDitMouseInjectionFlush, 0);
      gpresDitMouseInjectionFlush = 0LL;
      goto LABEL_62;
    }
    ExDeleteResourceLite(gpresDitTouchInjection);
LABEL_58:
    ExFreePoolWithTag(gpresDitTouchInjection, 0);
    gpresDitTouchInjection = 0LL;
    goto LABEL_59;
  }
  v9->Header.WaitListHead.Flink = 0LL;
  LODWORD(v9->Header.WaitListHead.Blink) = 0;
  v9->Header.LockNV = 1;
  KeInitializeEvent(v9 + 1, SynchronizationEvent, 0);
  LOBYTE(v10) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
             && _bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0xDu)
             && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( (_BYTE)v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v11) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_q(
      WPP_GLOBAL_Control->AttachedDevice,
      v10,
      v11,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      4,
      14,
      15,
      (__int64)&WPP_6bbaa2e2a0713bd7aecc3a487024d555_Traceguids,
      (char)gpHandleFlagsMutex);
  }
  LOBYTE(v10) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
             && _bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0xDu)
             && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( (_BYTE)v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v11) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_q(
      WPP_GLOBAL_Control->AttachedDevice,
      v10,
      v11,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      4,
      14,
      16,
      (__int64)&WPP_6bbaa2e2a0713bd7aecc3a487024d555_Traceguids,
      (char)gpresRender);
  }
  LOBYTE(v10) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
             && _bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0xDu)
             && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( (_BYTE)v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v11) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_q(
      WPP_GLOBAL_Control->AttachedDevice,
      v10,
      v11,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      4,
      14,
      17,
      (__int64)&WPP_6bbaa2e2a0713bd7aecc3a487024d555_Traceguids,
      (char)gpresUser);
  }
  if ( (int)InitDomainLocks() < 0 )
  {
LABEL_55:
    CleanupDomainLocks();
    goto LABEL_56;
  }
  EnterLeaveCritMitRitHandOffHazard::_spkSem = (PVOID)CreateKernelSemaphore(0, 0x7FFFFFFF);
  if ( !EnterLeaveCritMitRitHandOffHazard::_spkSem )
  {
    EnterLeaveCritMitRitHandOffHazard::UnInitialize();
    goto LABEL_55;
  }
  gRotationProcessLock = 0LL;
  v12 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
     && _bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0xDu)
     && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( v12 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v12,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      4,
      14,
      18,
      (__int64)&WPP_6bbaa2e2a0713bd7aecc3a487024d555_Traceguids);
  return 1LL;
}
