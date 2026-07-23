/*
 * XREFs of MiCopyHeaderIfResident @ 0x14020ECD0
 * Callers:
 *     MiCreateImageFileMap @ 0x1406A8928 (MiCreateImageFileMap.c)
 * Callees:
 *     MiLockSectionControlArea @ 0x1402100E8 (MiLockSectionControlArea.c)
 *     MiIsPageOnBadList @ 0x1402186E0 (MiIsPageOnBadList.c)
 *     MiStandbyPageContentsIntact @ 0x140218710 (MiStandbyPageContentsIntact.c)
 *     MiTryLockProtoPoolPageAtDpc @ 0x14021C86C (MiTryLockProtoPoolPageAtDpc.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402711D0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiCopyPage @ 0x140283CF0 (MiCopyPage.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402893A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiUnlockProtoPoolPage @ 0x1402DAEF0 (MiUnlockProtoPoolPage.c)
 *     MiUpdatePageAttributeStamp @ 0x140334AD8 (MiUpdatePageAttributeStamp.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiCopyHeaderIfResident(__int64 a1, ULONG_PTR a2)
{
  __int64 v2; // rcx
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rbx
  __int64 v8; // rsi
  __int64 v9; // rdi
  unsigned __int64 v10; // rax
  int v11; // esi
  ULONG_PTR v12; // rax
  __int64 v13; // rdi
  __int64 v14; // rdx
  unsigned __int8 v15; // di
  unsigned __int8 v16; // al
  struct _KPRCB *v17; // rcx
  _DWORD *v18; // rdx
  bool v19; // zf
  __int64 v20; // rdx
  unsigned __int8 v21; // al
  struct _KPRCB *v22; // rcx
  _DWORD *v23; // rdx
  unsigned __int8 v24; // al
  struct _KPRCB *v25; // rcx
  _DWORD *v26; // rdx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r8
  int v30; // eax
  unsigned __int64 v31; // [rsp+20h] [rbp-10h] BYREF
  unsigned __int8 v32; // [rsp+60h] [rbp+30h] BYREF
  __int64 v33; // [rsp+70h] [rbp+40h] BYREF
  __int64 v34; // [rsp+78h] [rbp+48h] BYREF

  v2 = *(_QWORD *)(a1 + 40);
  v32 = 0;
  v4 = MiLockSectionControlArea(v2, 1LL, &v32);
  v6 = v4;
  if ( !v4 )
    return 0LL;
  if ( (*(_DWORD *)(v4 + 56) & 3) != 0
    || (v8 = *(_QWORD *)(v4 + 136)) == 0
    || (v33 = 0LL, v34 = 0LL, (int)MiTryLockProtoPoolPageAtDpc(v8, v5, &v34, &v33) < 0) )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v6 + 72));
    if ( (_DWORD)KiIrqlFlags
      && (CurrentIrql = KeGetCurrentIrql(), ((unsigned __int8)KiIrqlFlags & 1) != 0)
      && CurrentIrql <= 0xFu )
    {
      v15 = v32;
      if ( v32 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v15 = v32;
        v30 = ~(unsigned __int16)(-1LL << (v32 + 1));
        v19 = (v30 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v30;
        if ( v19 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    else
    {
      v15 = v32;
    }
    __writecr8(v15);
    return 0LL;
  }
  v9 = v33;
  if ( (*(_BYTE *)(v33 + 34) & 0xC0) != 0x40
    || (*(_BYTE *)(v33 + 35) & 0x40) != 0
    || (unsigned int)MiIsPageOnBadList(v33)
    || !(unsigned int)MiStandbyPageContentsIntact(v9) )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v6 + 72));
    if ( (_DWORD)KiIrqlFlags )
    {
      v24 = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && (unsigned __int8)(v24 - 2) <= 0xDu )
      {
        v25 = KeGetCurrentPrcb();
        v26 = v25->SchedulerAssist;
        v19 = (v26[5] & 0xFFFF0007) == 0;
        v26[5] &= 0xFFFF0007;
        if ( v19 )
          KiRemoveSystemWorkPriorityKick(v25);
        v9 = v33;
      }
    }
    __writecr8(2uLL);
    v20 = 0x7FFFFFFFFFFFFFFFLL;
    _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    goto LABEL_33;
  }
  v10 = MI_READ_PTE_LOCK_FREE(v8);
  v31 = v10;
  if ( (v10 & 1) != 0 )
  {
    v10 = MI_READ_PTE_LOCK_FREE(&v31);
    v11 = 0;
  }
  else
  {
    if ( qword_140C65C40 )
    {
      if ( (v10 & 0x10) != 0 )
        v10 &= ~0x10uLL;
      else
        v10 &= ~qword_140C65C40;
    }
    v11 = 1;
  }
  v12 = (v10 >> 12) & 0xFFFFFFFFFFLL;
  v13 = 48 * a2 - 0x220000000000LL;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v13 + 24), 0x3FuLL) )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v6 + 72));
    if ( (_DWORD)KiIrqlFlags )
    {
      v16 = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && (unsigned __int8)(v16 - 2) <= 0xDu )
      {
        v17 = KeGetCurrentPrcb();
        v18 = v17->SchedulerAssist;
        v19 = (v18[5] & 0xFFFF0007) == 0;
        v18[5] &= 0xFFFF0007;
        if ( v19 )
          KiRemoveSystemWorkPriorityKick(v17);
      }
    }
    __writecr8(2uLL);
    v20 = 0x7FFFFFFFFFFFFFFFLL;
    _InterlockedAnd64((volatile signed __int64 *)(v33 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_33:
    LOBYTE(v20) = v32;
    MiUnlockProtoPoolPage(v34, v20);
    return 0LL;
  }
  MiCopyPage(a2, v12);
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v6 + 72));
  if ( (_DWORD)KiIrqlFlags )
  {
    v21 = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && (unsigned __int8)(v21 - 2) <= 0xDu )
    {
      v22 = KeGetCurrentPrcb();
      v23 = v22->SchedulerAssist;
      v19 = (v23[5] & 0xFFFF0007) == 0;
      v23[5] &= 0xFFFF0007;
      if ( v19 )
        KiRemoveSystemWorkPriorityKick(v22);
    }
  }
  __writecr8(2uLL);
  if ( v11 )
    MiUpdatePageAttributeStamp(v33);
  v14 = 0x7FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  _InterlockedAnd64((volatile signed __int64 *)(v33 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  LOBYTE(v14) = v32;
  MiUnlockProtoPoolPage(v34, v14);
  return 1LL;
}
