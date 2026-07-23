/*
 * XREFs of MiGetPageInHugePageBadStatus @ 0x14061FF7C
 * Callers:
 *     MiUpdateBadPfnIdentity @ 0x14062B35C (MiUpdateBadPfnIdentity.c)
 *     MmGetPageBadStatus @ 0x14062B500 (MmGetPageBadStatus.c)
 * Callees:
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x14025ABF0 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402A7AE0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MiIsPageInHugePfn @ 0x140336C0C (MiIsPageInHugePfn.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 *     MiLockHugePfn @ 0x140621464 (MiLockHugePfn.c)
 */

__int64 __fastcall MiGetPageInHugePageBadStatus(unsigned __int64 a1, __int64 a2, _DWORD *a3)
{
  int v5; // eax
  int v6; // r9d
  unsigned __int64 v8; // rbx
  unsigned int v9; // esi
  _QWORD *v10; // rdi
  unsigned __int8 v11; // bp
  int v12; // eax
  __int64 v13; // rcx
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // r14
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v19; // edx
  bool v20; // zf

  *a3 = 0;
  LOBYTE(v5) = MiIsPageInHugePfn(a1);
  if ( !v5 )
    return 3221225711LL;
  v8 = (a1 >> 18) & 0x3FFFFF;
  v9 = 0;
  v10 = (_QWORD *)(qword_140C67EF0 + 8 * v8);
  if ( v6 )
    v11 = 17;
  else
    v11 = MiLockHugePfn(qword_140C67EF0 + 8 * v8);
  ExAcquireSpinLockSharedAtDpcLevel(&dword_140C67410);
  LOBYTE(v12) = MiIsPageInHugePfn(a1);
  if ( v12 )
  {
    if ( (*v10 & 8) != 0 )
    {
      v13 = qword_140C67460;
      while ( v13 )
      {
        v14 = *(_QWORD *)(v13 + 24) & 0x3FFFFFLL;
        if ( v8 <= v14 )
        {
          if ( v8 >= v14 )
            break;
          v13 = *(_QWORD *)v13;
        }
        else
        {
          v13 = *(_QWORD *)(v13 + 8);
        }
      }
      v15 = a1 & 0x3FFFF;
      if ( _bittest64(*(const signed __int64 **)(v13 + 32), v15) )
      {
        v9 = -1073740023;
        if ( (*v10 & 7) != 4 )
          v9 = 259;
        if ( _bittest64((const signed __int64 *)(*(_QWORD *)(v13 + 32) + 0x8000LL), v15) )
          *a3 = 1;
      }
    }
  }
  else
  {
    v9 = -1073741585;
  }
  ExReleaseSpinLockSharedFromDpcLevel(&dword_140C67410);
  if ( v11 != 17 )
  {
    _InterlockedAnd(
      (volatile signed __int32 *)(qword_140C67EF8 + 4 * (((((__int64)v10 - qword_140C67EF0) >> 3) & 0x3FFFFFuLL) >> 5)),
      ~(1 << ((((__int64)v10 - qword_140C67EF0) >> 3) & 0x1F)));
    if ( (_DWORD)KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && v11 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v19 = ~(unsigned __int16)(-1LL << (v11 + 1));
        v20 = (v19 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v19;
        if ( v20 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
    __writecr8(v11);
  }
  return v9;
}
