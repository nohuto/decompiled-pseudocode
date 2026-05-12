/*
 * XREFs of RaidpAdapterTimerDpcRoutine @ 0x1C000BAC0
 * Callers:
 *     <none>
 * Callees:
 *     RaidAcquireAdapterRemoveLock @ 0x1C000BA44 (RaidAcquireAdapterRemoveLock.c)
 *     RaidAdapterReleaseStartIoLock @ 0x1C000BBF0 (RaidAdapterReleaseStartIoLock.c)
 *     RaidAdapterAcquireStartIoLock @ 0x1C000BC24 (RaidAdapterAcquireStartIoLock.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024050 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_qdd @ 0x1C003C6A8 (WPP_SF_qdd.c)
 */

void __fastcall RaidpAdapterTimerDpcRoutine(
        struct _KDPC *Dpc,
        _QWORD *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  __int64 v4; // rbx
  void (__fastcall *v5)(__int64); // rdi
  __int64 v6; // rdx
  __int64 v7; // r8
  struct _DEVICE_OBJECT *v8; // rcx
  __int128 v9; // [rsp+30h] [rbp-28h] BYREF
  __int64 v10; // [rsp+40h] [rbp-18h]

  v4 = DeferredContext[8];
  v10 = 0LL;
  v9 = 0LL;
  v5 = (void (__fastcall *)(__int64))_InterlockedExchange64((volatile __int64 *)(v4 + 1712), 0LL);
  if ( v5 )
  {
    v6 = *(unsigned int *)(v4 + 304);
    if ( (int)v6 < 6 || (v7 = *(unsigned int *)(v4 + 308), (int)v7 < 4) )
    {
      if ( (int)RaidAcquireAdapterRemoveLock(v4) >= 0 )
      {
        RaidAdapterAcquireStartIoLock(v4, &v9);
        v5(*(_QWORD *)(v4 + 576) + 16LL);
        RaidAdapterReleaseStartIoLock(v4, &v9);
        ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v4 + 296));
        if ( *(_BYTE *)(v4 + 105) )
        {
          v8 = *(struct _DEVICE_OBJECT **)(v4 + 32);
          *(_BYTE *)(v4 + 105) = 0;
          IoInvalidateDeviceRelations(v8, BusRelations);
        }
      }
    }
    else if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
           && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80u) != 0
           && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u )
    {
      WPP_SF_qdd(
        WPP_GLOBAL_Control->AttachedDevice,
        v6,
        v7,
        v4,
        v6,
        *(_DWORD *)(v4 + 308),
        v9,
        *((_QWORD *)&v9 + 1),
        v10);
    }
  }
}
