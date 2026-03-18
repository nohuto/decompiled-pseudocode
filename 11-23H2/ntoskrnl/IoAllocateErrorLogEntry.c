/*
 * XREFs of IoAllocateErrorLogEntry @ 0x1403C70E0
 * Callers:
 *     IopDisassociateThreadIrp @ 0x140555134 (IopDisassociateThreadIrp.c)
 *     FsRtlLogCcFlushError @ 0x14093D0E0 (FsRtlLogCcFlushError.c)
 * Callees:
 *     IopAllocateErrorLogEntry @ 0x1403C711C (IopAllocateErrorLogEntry.c)
 */

PVOID __stdcall IoAllocateErrorLogEntry(PVOID IoObject, UCHAR EntrySize)
{
  PVOID v2; // rdx

  if ( IoObject )
  {
    if ( *(_WORD *)IoObject == 3 )
    {
      v2 = (PVOID)*((_QWORD *)IoObject + 1);
      return (PVOID)IopAllocateErrorLogEntry(IoObject, v2);
    }
    if ( *(_WORD *)IoObject == 4 )
    {
      v2 = IoObject;
      IoObject = 0LL;
      return (PVOID)IopAllocateErrorLogEntry(IoObject, v2);
    }
  }
  return 0LL;
}
