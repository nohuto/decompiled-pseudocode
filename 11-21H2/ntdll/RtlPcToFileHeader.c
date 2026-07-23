/*
 * XREFs of RtlPcToFileHeader @ 0x18007AE70
 * Callers:
 *     <none>
 * Callees:
 *     RtlpxLookupFunctionTable @ 0x18003A100 (RtlpxLookupFunctionTable.c)
 */

PVOID __stdcall RtlPcToFileHeader(PVOID PcValue, PVOID *BaseOfImage)
{
  PVOID result; // rax
  __int128 v4; // [rsp+20h] [rbp-28h] BYREF

  if ( (unsigned __int64)PcValue < *((_QWORD *)&xmmword_18018F510 + 1)
    || (unsigned __int64)PcValue >= *((_QWORD *)&xmmword_18018F510 + 1)
                                  + (unsigned __int64)(unsigned int)qword_18018F520 )
  {
    RtlpxLookupFunctionTable(PcValue, (__int64 *)&v4);
  }
  else
  {
    v4 = xmmword_18018F510;
  }
  result = (PVOID)*((_QWORD *)&v4 + 1);
  *BaseOfImage = (PVOID)*((_QWORD *)&v4 + 1);
  return result;
}
