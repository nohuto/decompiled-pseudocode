/*
 * XREFs of RtlPcToFileHeader @ 0x180076C90
 * Callers:
 *     <none>
 * Callees:
 *     RtlpxLookupFunctionTable @ 0x180020B00 (RtlpxLookupFunctionTable.c)
 */

PVOID __stdcall RtlPcToFileHeader(PVOID PcValue, PVOID *BaseOfImage)
{
  PVOID result; // rax
  __int128 v4; // [rsp+20h] [rbp-28h] BYREF

  if ( (unsigned __int64)PcValue < *((_QWORD *)&xmmword_18019C530 + 1)
    || (unsigned __int64)PcValue >= *((_QWORD *)&xmmword_18019C530 + 1)
                                  + (unsigned __int64)(unsigned int)qword_18019C540 )
  {
    RtlpxLookupFunctionTable(PcValue, (__int64 *)&v4);
  }
  else
  {
    v4 = xmmword_18019C530;
  }
  result = (PVOID)*((_QWORD *)&v4 + 1);
  *BaseOfImage = (PVOID)*((_QWORD *)&v4 + 1);
  return result;
}
