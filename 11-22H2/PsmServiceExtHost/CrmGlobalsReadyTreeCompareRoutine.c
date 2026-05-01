/*
 * XREFs of CrmGlobalsReadyTreeCompareRoutine @ 0x18004B7C4
 * Callers:
 *     CrmRegistrationReadyQueueAdd @ 0x18002A040 (CrmRegistrationReadyQueueAdd.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CrmGlobalsReadyTreeCompareRoutine(unsigned __int64 *a1, __int64 a2)
{
  unsigned __int64 v2; // rax

  v2 = *(_QWORD *)(a2 + 104);
  if ( *a1 <= v2 )
    return (unsigned int)-(*a1 < v2);
  else
    return 1LL;
}
