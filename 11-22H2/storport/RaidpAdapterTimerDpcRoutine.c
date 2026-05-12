/*
 * XREFs of RaidpAdapterTimerDpcRoutine @ 0x1C0007490
 * Callers:
 *     <none>
 * Callees:
 *     RaidAcquireAdapterRemoveLock @ 0x1C0007534 (RaidAcquireAdapterRemoveLock.c)
 *     RaidAdapterReleaseStartIoLock @ 0x1C0007568 (RaidAdapterReleaseStartIoLock.c)
 *     RaidAdapterAcquireStartIoLock @ 0x1C000759C (RaidAdapterAcquireStartIoLock.c)
 *     _guard_dispatch_icall_nop @ 0x1C00235E0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_qdd @ 0x1C003EA3C (WPP_SF_qdd.c)
 */

void __fastcall RaidpAdapterTimerDpcRoutine(
        struct _KDPC *Dpc,
        _QWORD *DeferredContext,
        unsigned __int64 SystemArgument1,
        PVOID SystemArgument2)
{
  __int64 v4; // rbx
  void (__fastcall *v5)(__int64); // rdi
  __int64 v6; // rdx
  struct _DEVICE_OBJECT *v7; // rcx
  __int128 v8; // [rsp+30h] [rbp-28h] BYREF
  __int64 v9; // [rsp+40h] [rbp-18h]

  v4 = DeferredContext[8];
  v9 = 0LL;
  v8 = 0LL;
  v5 = (void (__fastcall *)(__int64))_InterlockedExchange64((volatile __int64 *)(v4 + 1776), 0LL);
  if ( v5 )
  {
    v6 = *(unsigned int *)(v4 + 304);
    if ( (int)v6 < 6 || (SystemArgument1 = *(unsigned int *)(v4 + 308), (int)SystemArgument1 < 4) )
    {
      if ( (int)RaidAcquireAdapterRemoveLock(v4, v6, SystemArgument1, SystemArgument2) >= 0 )
      {
        RaidAdapterAcquireStartIoLock(v4, &v8);
        v5(*(_QWORD *)(v4 + 576) + 16LL);
        RaidAdapterReleaseStartIoLock(v4, &v8);
        ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v4 + 296));
        if ( *(_BYTE *)(v4 + 105) )
        {
          v7 = *(struct _DEVICE_OBJECT **)(v4 + 32);
          *(_BYTE *)(v4 + 105) = 0;
          IoInvalidateDeviceRelations(v7, BusRelations);
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
        SystemArgument1,
        v4,
        v6,
        *(_DWORD *)(v4 + 308),
        v8,
        *((_QWORD *)&v8 + 1),
        v9);
    }
  }
}
