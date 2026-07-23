/*
 * XREFs of sub_1409508E0 @ 0x1409508E0
 * Callers:
 *     sub_14065FA0C @ 0x14065FA0C (sub_14065FA0C.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x14028A160 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x1402AF9B0 (KeReleaseGuardedMutex.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_1409508E0(PVOID P)
{
  unsigned int v2; // edi
  PVOID *v3; // rax
  PVOID *v4; // rcx

  v2 = 0;
  ExAcquireFastMutex((PFAST_MUTEX)(qword_140D3B048 + 64));
  v3 = *(PVOID **)P;
  if ( *(PVOID *)P != P )
  {
    if ( v3[1] != P || (v4 = (PVOID *)*((_QWORD *)P + 1), *v4 != P) )
      __fastfail(3u);
    *v4 = v3;
    v2 = 1;
    v3[1] = v4;
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)P + 16, 0xFFFFFFFF) == 1 )
      ExFreePoolWithTag(P, 0x4B706E50u);
  }
  KeReleaseGuardedMutex((PKGUARDED_MUTEX)(qword_140D3B048 + 64));
  return v2;
}
