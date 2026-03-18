/*
 * XREFs of PipEnumerateCompleted @ 0x14076F8AC
 * Callers:
 *     PipProcessDevNodeTree @ 0x140777578 (PipProcessDevNodeTree.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     PipSetDevNodeState @ 0x1402DE844 (PipSetDevNodeState.c)
 *     PiSwGetChildPdo @ 0x1406E32E4 (PiSwGetChildPdo.c)
 *     PnpRequestDeviceRemoval @ 0x140765430 (PnpRequestDeviceRemoval.c)
 *     PiSwFindChildren @ 0x14076E82C (PiSwFindChildren.c)
 *     PipProcessEnumeratedChildDevice @ 0x14076FAB0 (PipProcessEnumeratedChildDevice.c)
 *     PipSetDevNodeFlags @ 0x14076FB70 (PipSetDevNodeFlags.c)
 *     PipClearDevNodeFlags @ 0x14076FBEC (PipClearDevNodeFlags.c)
 *     _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x140772044 (_PnpRaiseNtPlugPlayDevicePropertyChangeEvent.c)
 *     PiPnpRtlEndOperation @ 0x140779A50 (PiPnpRtlEndOperation.c)
 *     PiPnpRtlBeginOperation @ 0x140779DC4 (PiPnpRtlBeginOperation.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PipEnumerateCompleted(__int64 a1)
{
  _QWORD *v2; // rbx
  _DWORD *v3; // rcx
  __int64 i; // rbx
  struct _KTHREAD *CurrentThread; // rax
  _QWORD **Children; // rax
  __int64 v7; // r8
  _QWORD *v8; // rsi
  __int64 v9; // rbx
  char v10; // bp
  unsigned int v11; // ebx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v15; // rsi
  _QWORD *j; // rbx
  PDEVICE_OBJECT ChildPdo; // rax
  PVOID P; // [rsp+30h] [rbp+8h] BYREF

  P = 0LL;
  v2 = *(_QWORD **)(a1 + 8);
  if ( *(_QWORD *)(a1 + 528) )
  {
    while ( v2 )
    {
      PipClearDevNodeFlags(v2, 16LL);
      v2 = (_QWORD *)*v2;
    }
  }
  else
  {
    while ( v2 )
    {
      if ( *(PDRIVER_OBJECT *)(v2[4] + 8LL) == PiSwDeviceDriverObject )
        PipClearDevNodeFlags(v2, 16LL);
      v2 = (_QWORD *)*v2;
    }
  }
  v3 = *(_DWORD **)(a1 + 528);
  if ( v3 )
  {
    for ( i = 0LL; (unsigned int)i < *v3; i = (unsigned int)(i + 1) )
    {
      PipProcessEnumeratedChildDevice(a1, *(_QWORD *)(*(_QWORD *)(a1 + 528) + 8 * i + 8));
      v3 = *(_DWORD **)(a1 + 528);
    }
    ExFreePoolWithTag(v3, 0);
    *(_QWORD *)(a1 + 528) = 0LL;
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&PiSwLockObj, 1u);
  Children = (_QWORD **)PiSwFindChildren();
  v8 = Children;
  if ( Children )
  {
    for ( j = *Children; j != v8; j = (_QWORD *)*j )
    {
      ChildPdo = PiSwGetChildPdo(*(PDEVICE_OBJECT *)(a1 + 32), (__int64)j, v7);
      if ( ChildPdo )
        PipProcessEnumeratedChildDevice(a1, ChildPdo);
    }
  }
  ExReleaseResourceLite(&PiSwLockObj);
  KeLeaveCriticalRegion();
  v9 = *(_QWORD *)(a1 + 8);
  v10 = 0;
  if ( v9 )
  {
    do
    {
      v15 = *(_QWORD *)v9;
      if ( (*(_DWORD *)(v9 + 396) & 0x10010) == 0 )
      {
        PipSetDevNodeFlags(v9, 0x10000LL);
        PnpRequestDeviceRemoval(v9, 1, 24, 0);
        v10 = 1;
      }
      v9 = v15;
    }
    while ( v15 );
  }
  PipSetDevNodeState(a1, 778);
  if ( !v10 || (PVOID)a1 == IopRootDeviceNode )
    v11 = 0;
  else
    v11 = -1073741106;
  PiPnpRtlBeginOperation(&P);
  PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v12, *((_QWORD *)IopRootDeviceNode + 6), 15LL);
  PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v13, *((_QWORD *)IopRootDeviceNode + 6), 20LL);
  if ( P )
    PiPnpRtlEndOperation(P);
  return v11;
}
