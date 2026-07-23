/*
 * XREFs of ObFastReferenceObjectLocked @ 0x140582FA0
 * Callers:
 *     ObpLookupObjectName @ 0x1406ED750 (ObpLookupObjectName.c)
 *     PspReferenceSystemDll @ 0x1407A3694 (PspReferenceSystemDll.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x1402B6B50 (ObfReferenceObjectWithTag.c)
 */

unsigned __int64 __fastcall ObFastReferenceObjectLocked(_QWORD *a1, ULONG a2)
{
  unsigned __int64 v2; // rbx

  v2 = *a1 & 0xFFFFFFFFFFFFFFF0uLL;
  if ( v2 )
    ObfReferenceObjectWithTag((PVOID)(*a1 & 0xFFFFFFFFFFFFFFF0uLL), a2);
  return v2;
}
