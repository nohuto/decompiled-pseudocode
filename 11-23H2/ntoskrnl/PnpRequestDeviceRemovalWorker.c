/*
 * XREFs of PnpRequestDeviceRemovalWorker @ 0x1408691E0
 * Callers:
 *     PnpRequestDeviceRemoval @ 0x1408675FC (PnpRequestDeviceRemoval.c)
 *     PnpRequestDeviceRemovalWorker @ 0x1408691E0 (PnpRequestDeviceRemovalWorker.c)
 * Callees:
 *     PipSetDevNodeState @ 0x14022AF94 (PipSetDevNodeState.c)
 *     PipIsDevNodeDNStarted @ 0x14022B290 (PipIsDevNodeDNStarted.c)
 *     PipRestoreDevNodeState @ 0x1403B7168 (PipRestoreDevNodeState.c)
 *     PiGetDependentList @ 0x14079C508 (PiGetDependentList.c)
 *     PiEnumerateDependentListEntry @ 0x140838614 (PiEnumerateDependentListEntry.c)
 *     PnpRequestDeviceRemovalWorker @ 0x1408691E0 (PnpRequestDeviceRemovalWorker.c)
 */

char __fastcall PnpRequestDeviceRemovalWorker(int a1, __int64 a2, char a3, int a4, char a5)
{
  char v9; // r8
  __int64 *DependentList; // rax
  int v11; // r8d
  _QWORD *i; // rdi
  __int64 *v13; // rdi
  __int64 *j; // rbx

  if ( a4 != 2 && !a5 )
  {
    LOBYTE(DependentList) = PipIsDevNodeDNStarted(a2);
    goto LABEL_5;
  }
  v9 = 1;
  if ( *(_DWORD *)(a2 + 300) == 784 )
    goto LABEL_10;
  if ( *(_DWORD *)(a2 + 300) == 785 )
  {
    if ( a3 )
    {
      PipRestoreDevNodeState(a2);
      PipSetDevNodeState(a2, 784);
    }
LABEL_10:
    v9 = 0;
  }
  LOBYTE(DependentList) = v9;
LABEL_5:
  if ( (_BYTE)DependentList )
  {
    PipSetDevNodeState(a2, 785 - (a3 != 0));
    for ( i = *(_QWORD **)(a2 + 8); i; i = (_QWORD *)*i )
    {
      LOBYTE(v11) = 1;
      PnpRequestDeviceRemovalWorker(a1, (_DWORD)i, v11, a4, 1);
    }
    DependentList = PiGetDependentList(*(_QWORD *)(a2 + 32));
    v13 = DependentList;
    for ( j = (__int64 *)*DependentList; j != v13; j = (__int64 *)*j )
    {
      PiEnumerateDependentListEntry((__int64)j);
      LOBYTE(DependentList) = 0;
    }
  }
  return (char)DependentList;
}
