/*
 * XREFs of PopFxActivateDevice @ 0x140322A80
 * Callers:
 *     PoFxActivateDevice @ 0x140322A64 (PoFxActivateDevice.c)
 *     PoFxStartDevicePowerManagement @ 0x140395E40 (PoFxStartDevicePowerManagement.c)
 *     PoFxActivateDeviceForSystemTransition @ 0x1405876E4 (PoFxActivateDeviceForSystemTransition.c)
 *     PoFxAddDeviceRelation @ 0x140587B20 (PoFxAddDeviceRelation.c)
 *     PoFxRemoveDeviceRelation @ 0x140588590 (PoFxRemoveDeviceRelation.c)
 *     PopFxActivateDevicesForSx @ 0x140588AD4 (PopFxActivateDevicesForSx.c)
 *     PopFxClearDeviceConstraints @ 0x140589310 (PopFxClearDeviceConstraints.c)
 *     PopPepPlatformStateRegistered @ 0x14059FA24 (PopPepPlatformStateRegistered.c)
 *     PopPlActivateDeviceIterator @ 0x1405A11F0 (PopPlActivateDeviceIterator.c)
 * Callees:
 *     KeSetEvent @ 0x14023C5C0 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x140243CC0 (KeWaitForSingleObject.c)
 *     ExAcquireSpinLockExclusive @ 0x14024D340 (ExAcquireSpinLockExclusive.c)
 *     PoFxActivateComponent @ 0x140287170 (PoFxActivateComponent.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402893A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     PopFxAddRefDevice @ 0x1403122C4 (PopFxAddRefDevice.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 *     PopFxBugCheck @ 0x140588C70 (PopFxBugCheck.c)
 */

void __fastcall PopFxActivateDevice(__int64 a1, char a2, char a3)
{
  __int64 v5; // rdi
  volatile LONG *v6; // rbp
  KIRQL v7; // al
  int v8; // edx
  unsigned __int64 v9; // rsi
  signed __int32 v10; // eax
  signed __int32 v11; // ett
  ULONG_PTR v12; // rbx
  signed __int32 v13; // eax
  signed __int32 v14; // ett
  unsigned int i; // edi
  __int64 j; // rbp
  ULONG_PTR v17; // rsi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  int v21; // eax
  bool v22; // zf
  unsigned __int8 v23; // al
  struct _KPRCB *v24; // r10
  _DWORD *v25; // r9
  int v26; // eax

  if ( a1 )
    v5 = *(_QWORD *)(*(_QWORD *)(a1 + 312) + 40LL);
  else
    v5 = 0LL;
  v6 = (volatile LONG *)(v5 + 88);
  v7 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v5 + 88));
  v8 = *(_DWORD *)(v5 + 120);
  v9 = v7;
  _m_prefetchw((const void *)(v5 + 296));
  v10 = *(_DWORD *)(v5 + 296);
  do
  {
    v11 = v10;
    v10 = _InterlockedCompareExchange((volatile signed __int32 *)(v5 + 296), v10, v10);
  }
  while ( v11 != v10 );
  if ( (v10 & 4) != 0 && (*(_DWORD *)(*(_QWORD *)(v5 + 80) + 824LL) & 1) != 0 )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v5 + 88));
    if ( (_DWORD)KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
        && CurrentIrql <= 0xFu
        && (unsigned __int8)v9 <= 0xFu
        && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v21 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
        v22 = (v21 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v21;
        if ( v22 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(v9);
  }
  else
  {
    *(_DWORD *)(v5 + 120) = v8 + 1;
    v12 = 0LL;
    _m_prefetchw((const void *)(v5 + 296));
    v13 = *(_DWORD *)(v5 + 296);
    do
    {
      v14 = v13;
      v13 = _InterlockedCompareExchange((volatile signed __int32 *)(v5 + 296), v13, v13);
    }
    while ( v14 != v13 );
    if ( (v13 & 4) != 0 )
    {
      v12 = *(_QWORD *)(v5 + 80);
      PopFxAddRefDevice(v12);
      for ( i = 0; i < *(_DWORD *)(v12 + 828); ++i )
        PoFxActivateComponent(v12, i, 2);
    }
    ExReleaseSpinLockExclusiveFromDpcLevel(v6);
    if ( (_DWORD)KiIrqlFlags )
    {
      v23 = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v23 <= 0xFu && (unsigned __int8)v9 <= 0xFu && v23 >= 2u )
      {
        v24 = KeGetCurrentPrcb();
        v25 = v24->SchedulerAssist;
        v26 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
        v22 = (v26 & v25[5]) == 0;
        v25[5] &= v26;
        if ( v22 )
          KiRemoveSystemWorkPriorityKick(v24);
      }
    }
    __writecr8(v9);
    if ( v12 )
    {
      for ( j = 0LL; (unsigned int)j < *(_DWORD *)(v12 + 828); j = (unsigned int)(j + 1) )
      {
        v17 = *(_QWORD *)(*(_QWORD *)(v12 + 832) + 8 * j);
        if ( (*(_DWORD *)(v17 + 88) & 0x3FFFFFFF) == 0 )
          PopFxBugCheck(0x608uLL, *(_QWORD *)(*(_QWORD *)(v12 + 832) + 8 * j), v17 + 88, 0LL);
        KeWaitForSingleObject((PVOID)(v17 + 104), Executive, 0, 0, 0LL);
        if ( *(int *)(v17 + 88) >= 0 )
          PopFxBugCheck(0x608uLL, v17, v17 + 88, 0LL);
        if ( a2 )
          _InterlockedOr((volatile signed __int32 *)(v12 + 32), 1u);
        if ( (*(_DWORD *)(v12 + 824) & 0x80u) != 0 && a3 )
          _InterlockedOr((volatile signed __int32 *)(v12 + 32), 0x800u);
      }
      KeWaitForSingleObject((PVOID)(v12 + 568), Executive, 0, 0, 0LL);
      if ( !_InterlockedDecrement((volatile signed __int32 *)(v12 + 244)) )
        KeSetEvent((PRKEVENT)(v12 + 248), 0, 0);
    }
  }
}
