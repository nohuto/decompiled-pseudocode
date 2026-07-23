/*
 * XREFs of DifKeReleaseSpinLockWrapper @ 0x1405E5110
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x1402504E0 (KxReleaseSpinLock.c)
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 *     DifGetAPIThunkContextById @ 0x140465E5E (DifGetAPIThunkContextById.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 *     DifGetReturnAddressForWrappers @ 0x1405F8954 (DifGetReturnAddressForWrappers.c)
 */

void __fastcall DifKeReleaseSpinLockWrapper(volatile signed __int64 *a1, unsigned __int8 a2)
{
  unsigned __int64 v2; // rbp
  __int64 *APIThunkContextById; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 *v9; // rdi
  int v10; // eax
  __int64 ReturnAddressForWrappers; // rax
  __int64 *i; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v16; // eax
  bool v17; // zf
  _QWORD **v18; // rdi
  _QWORD *j; // rbx
  __int128 v20; // [rsp+20h] [rbp-28h] BYREF
  volatile signed __int64 *v21; // [rsp+30h] [rbp-18h]
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  v2 = a2;
  v20 = 0LL;
  v21 = 0LL;
  APIThunkContextById = DifGetAPIThunkContextById(296);
  v9 = APIThunkContextById;
  if ( !APIThunkContextById )
    goto LABEL_17;
  if ( ViVerifierEnabled && (VfRuleClasses & 0xFF217644) != 0
    || (v6 = HIDWORD(VfRuleClasses), (VfRuleClasses & 0x800000000LL) == 0) )
  {
    if ( (*((_DWORD *)APIThunkContextById + 3) & 0x20) != 0 )
      goto LABEL_12;
    goto LABEL_10;
  }
  v10 = *((_DWORD *)APIThunkContextById + 3);
  if ( (v10 & 0x18) == 0 )
  {
    if ( (v10 & 4) == 0 )
      goto LABEL_12;
LABEL_10:
    ReturnAddressForWrappers = DifGetReturnAddressForWrappers(v6, v5, v7, v8);
    goto LABEL_11;
  }
  ReturnAddressForWrappers = retaddr;
LABEL_11:
  *(_QWORD *)&v20 = ReturnAddressForWrappers;
LABEL_12:
  v21 = a1;
  BYTE8(v20) = v2;
  for ( i = (__int64 *)v9[4]; i != v9 + 4; i = (__int64 *)*i )
  {
    if ( i != (__int64 *)16 )
      ((void (__fastcall *)(__int128 *))*(i - 1))(&v20);
  }
LABEL_17:
  KxReleaseSpinLock(a1);
  if ( (_DWORD)KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
      && CurrentIrql <= 0xFu
      && (unsigned __int8)v2 <= 0xFu
      && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v16 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v2 + 1));
      v17 = (v16 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v16;
      if ( v17 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  __writecr8(v2);
  if ( v9 )
  {
    v18 = (_QWORD **)(v9 + 6);
    for ( j = *v18; j != v18; j = (_QWORD *)*j )
    {
      if ( j != (_QWORD *)16 )
        ((void (__fastcall *)(__int128 *))*(j - 1))(&v20);
    }
  }
}
