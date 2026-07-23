/*
 * XREFs of PopFxNextParentRelationSafe @ 0x140351C78
 * Callers:
 *     PopFxNotifyPreDIrpIssue @ 0x14028E148 (PopFxNotifyPreDIrpIssue.c)
 *     PopFxNotifyPostDIrpCompletion @ 0x14028E2C8 (PopFxNotifyPostDIrpCompletion.c)
 *     PopFxActivateComponentDependencies @ 0x140312804 (PopFxActivateComponentDependencies.c)
 *     PopFxDeactivateComponentDependencies @ 0x140313470 (PopFxDeactivateComponentDependencies.c)
 *     PoFxRemoveComponentRelation @ 0x140588600 (PoFxRemoveComponentRelation.c)
 *     PoFxRemoveDeviceRelation @ 0x1405889F0 (PoFxRemoveDeviceRelation.c)
 *     PopFxComponentRelationsCleanup @ 0x140589E04 (PopFxComponentRelationsCleanup.c)
 *     PopFxDeviceRelationsCleanup @ 0x14058A2C8 (PopFxDeviceRelationsCleanup.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1402505D0 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x140251670 (KxAcquireSpinLock.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

char __fastcall PopFxNextParentRelationSafe(_QWORD **a1, __int64 a2, _QWORD *a3)
{
  char v3; // si
  _QWORD **v7; // r14
  _QWORD *v8; // rbx
  _QWORD *v10; // rdi
  __int64 v11; // rcx
  _QWORD *v12; // rax

  v3 = 0;
  if ( a2 )
  {
    KxReleaseSpinLock((volatile signed __int64 *)(a2 + 8));
    v7 = (_QWORD **)(a2 + 56);
  }
  else
  {
    v7 = a1;
  }
  while ( 1 )
  {
    v8 = *v7;
    if ( *v7 == a1 )
      break;
    v10 = v8 - 7;
    KxAcquireSpinLock(v8 - 6);
    if ( (*(_DWORD *)(v8 - 5) & 4) != 0 )
    {
      *a3 = v10;
      return 1;
    }
    KxReleaseSpinLock(v10 + 1);
    *((_DWORD *)v10 + 4) &= ~8u;
    v10[6] = 0LL;
    v11 = *v8;
    if ( *(_QWORD **)(*v8 + 8LL) != v8 || (v12 = (_QWORD *)v8[1], (_QWORD *)*v12 != v8) )
      __fastfail(3u);
    *v12 = v11;
    *(_QWORD *)(v11 + 8) = v12;
    ExFreePoolWithTag(v8 - 7, 0x4D584650u);
  }
  return v3;
}
