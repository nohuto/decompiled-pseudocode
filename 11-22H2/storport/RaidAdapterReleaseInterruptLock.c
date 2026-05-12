/*
 * XREFs of RaidAdapterReleaseInterruptLock @ 0x1C0008708
 * Callers:
 *     RaidAdapterReleaseStartIoLock @ 0x1C0007568 (RaidAdapterReleaseStartIoLock.c)
 *     RaidAdapterFindUnit @ 0x1C0008004 (RaidAdapterFindUnit.c)
 *     RaidAdapterPostScatterGatherExecute @ 0x1C0009EC0 (RaidAdapterPostScatterGatherExecute.c)
 *     StorPortNotification @ 0x1C000E120 (StorPortNotification.c)
 *     RaidAdapterStopAdapter @ 0x1C00111C8 (RaidAdapterStopAdapter.c)
 *     RaidAdapterRestartAdapter @ 0x1C001142C (RaidAdapterRestartAdapter.c)
 *     RaidAdapterInsertUnit @ 0x1C0017E28 (RaidAdapterInsertUnit.c)
 *     RaidAdapterRemoveUnit @ 0x1C0017F88 (RaidAdapterRemoveUnit.c)
 *     RaidAdapterGetFirstUnit @ 0x1C0035AAC (RaidAdapterGetFirstUnit.c)
 *     RaidAdapterReInitialize @ 0x1C003715C (RaidAdapterReInitialize.c)
 *     RaidAdapterRemoveNormalChildren @ 0x1C00375F4 (RaidAdapterRemoveNormalChildren.c)
 *     RaidAdapterStartMiniport @ 0x1C0039A7C (RaidAdapterStartMiniport.c)
 *     StorPortSynchronizeAccess @ 0x1C0046FC0 (StorPortSynchronizeAccess.c)
 * Callees:
 *     <none>
 */

void __fastcall RaidAdapterReleaseInterruptLock(__int64 a1, KIRQL a2)
{
  KIRQL v2; // si
  struct _KINTERRUPT *v3; // rcx
  __int64 v4; // rdi
  unsigned int v5; // ebx
  PKINTERRUPT *v6; // r14

  v2 = a2;
  if ( *(_BYTE *)(a1 + 4305) )
  {
    v4 = *(_QWORD *)(a1 + 4288);
    if ( *(_DWORD *)(a1 + 4272) == 2 )
    {
      v5 = *(_DWORD *)(v4 + 4) - 1;
      if ( *(_DWORD *)(v4 + 4) != 1 )
      {
        v6 = (PKINTERRUPT *)(48LL * v5 + v4 + 24);
        do
        {
          KeReleaseInterruptSpinLock(*v6, *(_BYTE *)v4);
          v6 -= 6;
          --v5;
        }
        while ( v5 );
      }
    }
    v3 = *(struct _KINTERRUPT **)(v4 + 24);
    a2 = v2;
    goto LABEL_7;
  }
  v3 = *(struct _KINTERRUPT **)(a1 + 728);
  if ( v3 )
LABEL_7:
    KeReleaseInterruptSpinLock(v3, a2);
}
