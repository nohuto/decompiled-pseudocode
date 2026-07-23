/*
 * XREFs of PsIsJobParentImmutable @ 0x14069EDA4
 * Callers:
 *     PspGetJobAssignmentDisposition @ 0x1406A05A0 (PspGetJobAssignmentDisposition.c)
 *     PspIsJobMovable @ 0x1409B2764 (PspIsJobMovable.c)
 *     ObCreateSiloRootDirectory @ 0x140A73DB0 (ObCreateSiloRootDirectory.c)
 * Callees:
 *     <none>
 */

char __fastcall PsIsJobParentImmutable(__int64 a1)
{
  char result; // al

  if ( (*(_DWORD *)(a1 + 1540) & 1) != 0 )
    return 1;
  result = 0;
  if ( *(_QWORD *)(a1 + 1288) )
    return 1;
  return result;
}
