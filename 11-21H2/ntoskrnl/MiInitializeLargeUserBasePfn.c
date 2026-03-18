/*
 * XREFs of MiInitializeLargeUserBasePfn @ 0x1405C27C8
 * Callers:
 *     MiCommitExistingVad @ 0x14032C1B0 (MiCommitExistingVad.c)
 *     MiMapUserLargePages @ 0x1405C2A4C (MiMapUserLargePages.c)
 * Callees:
 *     MiLockPageInline @ 0x1402F2700 (MiLockPageInline.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiInitializeLargeUserBasePfn(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  unsigned __int8 v6; // al
  unsigned __int64 v7; // rbp
  char v8; // cl
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v12; // zf

  v6 = MiLockPageInline(a1);
  *(_QWORD *)a1 = 0LL;
  v7 = v6;
  v8 = *(_BYTE *)(a1 + 34) & 0xFE;
  *(_QWORD *)(a1 + 8) = a2;
  *(_QWORD *)a1 = (a3 >> 3) & 0xFFFFFFFFFFELL;
  *(_BYTE *)(a1 + 34) = v8 | 6;
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  result = (unsigned int)KiIrqlFlags;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v7 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
        v12 = ((unsigned int)result & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= result;
        if ( v12 )
          result = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v7);
  return result;
}
