/*
 * XREFs of DifKeReleaseInStackQueuedSpinLockWrapper @ 0x1405E4B40
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseQueuedSpinLock @ 0x140260240 (KxReleaseQueuedSpinLock.c)
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 *     DifGetAPIThunkContextById @ 0x140465E5E (DifGetAPIThunkContextById.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 *     DifGetReturnAddressForWrappers @ 0x1405F8954 (DifGetReturnAddressForWrappers.c)
 */

void __fastcall DifKeReleaseInStackQueuedSpinLockWrapper(__int64 a1)
{
  __int64 *APIThunkContextById; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 *v7; // rdi
  int v8; // eax
  __int64 ReturnAddressForWrappers; // rax
  __int64 *i; // rbx
  unsigned __int64 v11; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v15; // eax
  bool v16; // zf
  _QWORD **v17; // rdi
  _QWORD *j; // rbx
  __int128 v19; // [rsp+20h] [rbp-18h] BYREF
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  v19 = 0LL;
  APIThunkContextById = DifGetAPIThunkContextById(288);
  v7 = APIThunkContextById;
  if ( !APIThunkContextById )
    goto LABEL_17;
  if ( ViVerifierEnabled && (VfRuleClasses & 0xFF217644) != 0
    || (v4 = HIDWORD(VfRuleClasses), (VfRuleClasses & 0x800000000LL) == 0) )
  {
    if ( (*((_DWORD *)APIThunkContextById + 3) & 0x20) != 0 )
      goto LABEL_12;
    goto LABEL_10;
  }
  v8 = *((_DWORD *)APIThunkContextById + 3);
  if ( (v8 & 0x18) == 0 )
  {
    if ( (v8 & 4) == 0 )
      goto LABEL_12;
LABEL_10:
    ReturnAddressForWrappers = DifGetReturnAddressForWrappers(v4, v3, v5, v6);
    goto LABEL_11;
  }
  ReturnAddressForWrappers = retaddr;
LABEL_11:
  *(_QWORD *)&v19 = ReturnAddressForWrappers;
LABEL_12:
  *((_QWORD *)&v19 + 1) = a1;
  for ( i = (__int64 *)v7[4]; i != v7 + 4; i = (__int64 *)*i )
  {
    if ( i != (__int64 *)16 )
      ((void (__fastcall *)(__int128 *))*(i - 1))(&v19);
  }
LABEL_17:
  KxReleaseQueuedSpinLock((volatile signed __int64 **)a1);
  v11 = *(unsigned __int8 *)(a1 + 16);
  if ( (_DWORD)KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
      && CurrentIrql <= 0xFu
      && (unsigned __int8)v11 <= 0xFu
      && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v15 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v11 + 1));
      v16 = (v15 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v15;
      if ( v16 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  __writecr8(v11);
  if ( v7 )
  {
    v17 = (_QWORD **)(v7 + 6);
    for ( j = *v17; j != v17; j = (_QWORD *)*j )
    {
      if ( j != (_QWORD *)16 )
        ((void (__fastcall *)(__int128 *))*(j - 1))(&v19);
    }
  }
}
