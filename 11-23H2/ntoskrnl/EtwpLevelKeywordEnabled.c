/*
 * XREFs of EtwpLevelKeywordEnabled @ 0x140258520
 * Callers:
 *     EtwWriteEx @ 0x1402581E0 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x140258420 (EtwEventEnabled.c)
 *     EtwTraceThreadWorkOnBehalfUpdate @ 0x1402584B0 (EtwTraceThreadWorkOnBehalfUpdate.c)
 *     KeInsertQueueApc @ 0x1402CC640 (KeInsertQueueApc.c)
 *     EtwProviderEnabled @ 0x140304190 (EtwProviderEnabled.c)
 *     EtwpFailLogging @ 0x1403664CC (EtwpFailLogging.c)
 *     EtwpDiskProvTraceDisk @ 0x1405FDA48 (EtwpDiskProvTraceDisk.c)
 *     EtwWriteString @ 0x1405FEE40 (EtwWriteString.c)
 * Callees:
 *     <none>
 */

bool __fastcall EtwpLevelKeywordEnabled(__int64 a1, unsigned __int8 a2, __int64 a3)
{
  unsigned __int8 v3; // al

  if ( !*(_DWORD *)a1 )
    return 0;
  v3 = *(_BYTE *)(a1 + 4);
  if ( a2 > v3 )
  {
    if ( v3 )
      return 0;
  }
  if ( (*(_DWORD *)(a1 + 8) & 0x40) != 0 && !a3 )
    return 1;
  if ( (a3 & *(_QWORD *)(a1 + 16)) == 0 )
    return 0;
  return (a3 & *(_QWORD *)(a1 + 24)) == *(_QWORD *)(a1 + 24);
}
