/*
 * XREFs of sub_1406AC2DC @ 0x1406AC2DC
 * Callers:
 *     FsRtlNotifyCleanup @ 0x1406AB5E0 (FsRtlNotifyCleanup.c)
 *     FsRtlNotifyCleanupAll @ 0x14092FFC0 (FsRtlNotifyCleanupAll.c)
 * Callees:
 *     PsReturnProcessPagedPoolQuota @ 0x1402331E0 (PsReturnProcessPagedPoolQuota.c)
 *     sub_1406ABBF4 @ 0x1406ABBF4 (sub_1406ABBF4.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_1406AC2DC(char *P, _QWORD *a2)
{
  char **v4; // rcx
  PVOID *v5; // rdx
  __int64 v6; // rdi

  *((_WORD *)P + 36) |= 4u;
  if ( *((char **)P + 6) != P + 48 )
    sub_1406ABBF4((__int64)P, 267);
  v4 = (char **)*((_QWORD *)P + 4);
  if ( v4[1] != P + 32 || (v5 = (PVOID *)*((_QWORD *)P + 5), *v5 != P + 32) )
    __fastfail(3u);
  *v5 = v4;
  v6 = 0LL;
  v4[1] = (char *)v5;
  _InterlockedDecrement((volatile signed __int32 *)P + 28);
  if ( !*((_DWORD *)P + 28) )
  {
    if ( *((_QWORD *)P + 10) )
    {
      PsReturnProcessPagedPoolQuota(*((_QWORD *)P + 15), *((unsigned int *)P + 25));
      ExFreePoolWithTag(*((PVOID *)P + 10), 0);
    }
    if ( (P[72] & 0x40) != 0 || *((_QWORD *)P + 17) )
      v6 = *((_QWORD *)P + 3);
    *a2 = v6;
    ExFreePoolWithTag(P, 0);
  }
}
