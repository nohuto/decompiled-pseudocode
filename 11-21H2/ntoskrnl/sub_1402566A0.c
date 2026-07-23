/*
 * XREFs of sub_1402566A0 @ 0x1402566A0
 * Callers:
 *     <none>
 * Callees:
 *     KeAcquireSpinLockAtDpcLevel @ 0x140211E00 (KeAcquireSpinLockAtDpcLevel.c)
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     KeSetCoalescableTimer @ 0x1402E2C60 (KeSetCoalescableTimer.c)
 *     KeInsertQueueApc @ 0x1402ED9E0 (KeInsertQueueApc.c)
 *     _local_unwind @ 0x1403E0F50 (_local_unwind.c)
 *     sub_1403FAD10 @ 0x1403FAD10 (sub_1403FAD10.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_14042C2D0 @ 0x14042C2D0 (sub_14042C2D0.c)
 *     memset @ 0x140435E00 (memset.c)
 */

void __fastcall sub_1402566A0(
        struct _KDPC *Dpc,
        __int64 DeferredContext,
        unsigned __int64 SystemArgument1,
        unsigned __int64 SystemArgument2)
{
  int v8; // esi
  __int64 v9; // [rsp+0h] [rbp-1B8h] BYREF
  int v10; // [rsp+34h] [rbp-184h]
  _BYTE v11[89]; // [rsp+120h] [rbp-98h] BYREF
  __int64 *v12; // [rsp+190h] [rbp-28h]

  v12 = &v9;
  memset(v11, 0, sizeof(v11));
  if ( (unsigned __int64)((DeferredContext >> 47) + 1) > 1 )
  {
    v10 = 0;
    Dpc->Type = 0;
    Dpc->DeferredContext = (PVOID)(SystemArgument2 >> 8);
    *(_QWORD *)&v11[81] = SystemArgument1;
    *(_QWORD *)&v11[1] = __ROL8__(DeferredContext, SystemArgument1);
    *(_QWORD *)&v11[73] = __ROR8__(Dpc, SystemArgument1);
    Dpc->SystemArgument1 = (PVOID)((unsigned __int64)Dpc->SystemArgument1 ^ SystemArgument2);
    Dpc->SystemArgument2 = (PVOID)((unsigned __int64)Dpc->SystemArgument2 ^ SystemArgument1);
    sub_14042C2D0(DeferredContext);
  }
  v8 = 0;
  KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(DeferredContext + 64));
  if ( (*(_BYTE *)(DeferredContext + 304) & 1) != 0 )
  {
    v8 = (unsigned __int8)KeInsertQueueApc(
                            DeferredContext + 72,
                            MEMORY[0xFFFFF78000000014],
                            HIDWORD(MEMORY[0xFFFFF78000000014]),
                            0LL) == 0;
    if ( *(_DWORD *)(DeferredContext + 240) )
    {
      if ( --v8 < 0 )
      {
        ObfReferenceObjectWithTag((PVOID)DeferredContext, 0x746C6644u);
        v8 = 0;
      }
      if ( (*(_BYTE *)(DeferredContext + 304) & 2) == 0
        && KeSetCoalescableTimer(
             (PKTIMER)DeferredContext,
             (LARGE_INTEGER)(-10000LL * *(int *)(DeferredContext + 240)),
             0,
             *(_DWORD *)(DeferredContext + 320),
             Dpc) )
      {
        ++v8;
      }
    }
  }
  KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(DeferredContext + 64));
  if ( v8 )
    ObfDereferenceObjectWithTag((PVOID)DeferredContext, 0x746C6644u);
}
