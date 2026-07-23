/*
 * XREFs of MiTrimWorkingSetEPTCallback @ 0x140635A20
 * Callers:
 *     <none>
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140271580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiTrimmedEnough @ 0x1402E3AA4 (MiTrimmedEnough.c)
 *     MiTrimPteWorker @ 0x1402E3B68 (MiTrimPteWorker.c)
 */

__int64 __fastcall MiTrimWorkingSetEPTCallback(
        __int64 a1,
        _QWORD *a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        __int64 a5)
{
  __int64 v5; // r14
  __int64 v11; // rbx
  unsigned __int8 v12; // bl
  unsigned __int64 v13; // rax

  v5 = a5;
  if ( MiTrimmedEnough(*(_QWORD *)(a1 + 24), a5) )
    return 1LL;
  v11 = MI_READ_PTE_LOCK_FREE(a3);
  a5 = v11;
  if ( (*a2 & 2) != 0 )
    v12 = (v11 & 0x20) != 0;
  else
    v12 = (*a2 & 1) != 0;
  v13 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&a5);
  return MiTrimPteWorker(a1, a3, a4, 48 * ((v13 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL, v5, v12, 0LL);
}
