/*
 * XREFs of PspValidateJobAssignmentMemoryPartition @ 0x14068214C
 * Callers:
 *     PspImplicitAssignProcessToJob @ 0x140682900 (PspImplicitAssignProcessToJob.c)
 *     PspAssignProcessToJob @ 0x1406879B8 (PspAssignProcessToJob.c)
 * Callees:
 *     <none>
 */

char __fastcall PspValidateJobAssignmentMemoryPartition(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v5; // rcx

  if ( a4 == 4 )
  {
    if ( *(_QWORD *)(a1 + 1248) == a1 + 1248
      && !*(_QWORD *)(a1 + 1752)
      && *(_QWORD *)(a3 + 1296)
      && *(_QWORD *)(*(_QWORD *)(a3 + 1296) + 1752LL)
      && *(_QWORD *)(*(_QWORD *)(a3 + 1296) + 1752LL) != -1LL
      && *(_QWORD *)(*(_QWORD *)(a3 + 1296) + 1752LL) != *(_QWORD *)(a3 + 2520) )
    {
      return 0;
    }
  }
  else if ( (unsigned int)(a4 - 6) <= 1 )
  {
LABEL_5:
    if ( a4 != 7 )
      return 1;
    return !*(_QWORD *)(a1 + 1752) || !*(_QWORD *)(a2 + 1752);
  }
  v5 = *(_QWORD *)(a1 + 1752);
  if ( (unsigned __int64)(v5 - 1) <= 0xFFFFFFFFFFFFFFFDuLL
    && *(_QWORD *)(a3 + 2520) != v5
    && a3 != *(_QWORD *)(v5 + 104) )
  {
    return 0;
  }
  if ( (unsigned int)(a4 - 4) > 1 )
    goto LABEL_5;
  return !*(_QWORD *)(a1 + 1752) || !*(_QWORD *)(a2 + 1752);
}
