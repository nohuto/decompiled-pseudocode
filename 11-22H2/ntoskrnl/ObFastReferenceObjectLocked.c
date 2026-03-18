/*
 * XREFs of ObFastReferenceObjectLocked @ 0x140582B40
 * Callers:
 *     ObpLookupObjectName @ 0x1406ED7D0 (ObpLookupObjectName.c)
 *     PspReferenceSystemDll @ 0x1407A39B4 (PspReferenceSystemDll.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x1402B6890 (ObfReferenceObjectWithTag.c)
 */

unsigned __int64 __fastcall ObFastReferenceObjectLocked(_QWORD *a1, ULONG a2)
{
  unsigned __int64 v2; // rbx

  v2 = *a1 & 0xFFFFFFFFFFFFFFF0uLL;
  if ( v2 )
    ObfReferenceObjectWithTag((PVOID)(*a1 & 0xFFFFFFFFFFFFFFF0uLL), a2);
  return v2;
}
