/*
 * XREFs of IoAllocateErrorLogEntry @ 0x1403A70E0
 * Callers:
 *     sub_1405566C0 @ 0x1405566C0 (sub_1405566C0.c)
 *     FsRtlLogCcFlushError @ 0x14092D830 (FsRtlLogCcFlushError.c)
 * Callees:
 *     sub_1403A711C @ 0x1403A711C (sub_1403A711C.c)
 */

PVOID __stdcall IoAllocateErrorLogEntry(PVOID IoObject, UCHAR EntrySize)
{
  PVOID v2; // rdx

  if ( IoObject )
  {
    if ( *(_WORD *)IoObject == 3 )
    {
      v2 = (PVOID)*((_QWORD *)IoObject + 1);
      return (PVOID)sub_1403A711C(IoObject, v2);
    }
    if ( *(_WORD *)IoObject == 4 )
    {
      v2 = IoObject;
      IoObject = 0LL;
      return (PVOID)sub_1403A711C(IoObject, v2);
    }
  }
  return 0LL;
}
