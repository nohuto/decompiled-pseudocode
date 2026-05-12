/*
 * XREFs of RaidAdapterReleaseInterruptLock @ 0x1C0011350
 * Callers:
 *     RaidAdapterPostScatterGatherExecute @ 0x1C00050F0 (RaidAdapterPostScatterGatherExecute.c)
 *     RaidAdapterReleaseStartIoLock @ 0x1C000BBF0 (RaidAdapterReleaseStartIoLock.c)
 *     RaidAdapterFindUnit @ 0x1C000FFFC (RaidAdapterFindUnit.c)
 *     StorPortNotification @ 0x1C0010160 (StorPortNotification.c)
 *     RaidAdapterStopAdapter @ 0x1C0014FFC (RaidAdapterStopAdapter.c)
 *     RaidAdapterRemoveUnit @ 0x1C001C558 (RaidAdapterRemoveUnit.c)
 *     RaidAdapterInsertUnit @ 0x1C001C684 (RaidAdapterInsertUnit.c)
 *     RaidAdapterRestartAdapter @ 0x1C001E07C (RaidAdapterRestartAdapter.c)
 *     RaidAdapterGetFirstUnit @ 0x1C0034C40 (RaidAdapterGetFirstUnit.c)
 *     RaidAdapterReInitialize @ 0x1C0035EFC (RaidAdapterReInitialize.c)
 *     RaidAdapterRemoveNormalChildren @ 0x1C0036380 (RaidAdapterRemoveNormalChildren.c)
 *     RaidAdapterStartMiniport @ 0x1C0038568 (RaidAdapterStartMiniport.c)
 *     StorPortSynchronizeAccess @ 0x1C0043FF0 (StorPortSynchronizeAccess.c)
 * Callees:
 *     <none>
 */

void __fastcall RaidAdapterReleaseInterruptLock(__int64 a1, KIRQL a2)
{
  KIRQL v2; // si
  __int64 v3; // rdi
  unsigned int v4; // ebx
  struct _KINTERRUPT *v5; // rcx
  PKINTERRUPT *v6; // r14

  v2 = a2;
  if ( *(_BYTE *)(a1 + 4241) )
  {
    v3 = *(_QWORD *)(a1 + 4224);
    if ( *(_DWORD *)(a1 + 4208) == 2 )
    {
      v4 = *(_DWORD *)(v3 + 4) - 1;
      if ( *(_DWORD *)(v3 + 4) != 1 )
      {
        v6 = (PKINTERRUPT *)(48LL * v4 + v3 + 24);
        do
        {
          KeReleaseInterruptSpinLock(*v6, *(_BYTE *)v3);
          v6 -= 6;
          --v4;
        }
        while ( v4 );
      }
    }
    v5 = *(struct _KINTERRUPT **)(v3 + 24);
    a2 = v2;
    goto LABEL_5;
  }
  v5 = *(struct _KINTERRUPT **)(a1 + 720);
  if ( v5 )
LABEL_5:
    KeReleaseInterruptSpinLock(v5, a2);
}
