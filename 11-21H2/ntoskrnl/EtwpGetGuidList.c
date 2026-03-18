/*
 * XREFs of EtwpGetGuidList @ 0x140883086
 * Callers:
 *     NtTraceControl @ 0x1407954F0 (NtTraceControl.c)
 *     EtwpGetTraceGuidList @ 0x1409E4C24 (EtwpGetTraceGuidList.c)
 * Callees:
 *     EtwpGetNextGuidEntry @ 0x1407969D0 (EtwpGetNextGuidEntry.c)
 */

__int64 __fastcall EtwpGetGuidList(__int64 a1, int a2, __int64 a3, unsigned int a4, unsigned int *a5)
{
  unsigned int v7; // ebx
  unsigned int v10; // edi
  signed __int64 *NextGuidEntry; // r10
  signed __int64 v12; // rax
  unsigned int v13; // eax

  v7 = 0;
  v10 = 0;
  NextGuidEntry = EtwpGetNextGuidEntry(a1, 0LL, a2);
  if ( NextGuidEntry )
  {
    while ( 1 )
    {
      if ( a2 )
        goto LABEL_6;
      v12 = NextGuidEntry[5] - PrivateLoggerNotificationGuid;
      if ( !v12 )
        v12 = NextGuidEntry[6] - *((_QWORD *)&PrivateLoggerNotificationGuid + 1);
      if ( v12 )
      {
LABEL_6:
        if ( ++v10 > 0xFFFFFFF )
        {
          v7 = -2147483643;
          *a5 = v10;
          return v7;
        }
        if ( v10 <= a4 )
          *(_OWORD *)(a3 + 16LL * (v10 - 1)) = *(_OWORD *)(NextGuidEntry + 5);
      }
      NextGuidEntry = EtwpGetNextGuidEntry(a1, (signed __int64 **)NextGuidEntry, a2);
      if ( !NextGuidEntry )
      {
        v13 = v10;
        goto LABEL_13;
      }
    }
  }
  v13 = 0;
LABEL_13:
  *a5 = v13;
  if ( v10 > a4 )
    return (unsigned int)-1073741789;
  return v7;
}
