/*
 * XREFs of PsAssignProcessToJobObject @ 0x14069FF70
 * Callers:
 *     NtAssignProcessToJobObject @ 0x14069FE70 (NtAssignProcessToJobObject.c)
 *     PsCreateMinimalProcess @ 0x1408531AC (PsCreateMinimalProcess.c)
 *     PspAssignProcessToJobList @ 0x1409B10B0 (PspAssignProcessToJobList.c)
 *     PspSetJobMemoryPartition @ 0x1409B2E24 (PspSetJobMemoryPartition.c)
 * Callees:
 *     PspAssignProcessToJob @ 0x14069FFF0 (PspAssignProcessToJob.c)
 *     PspGetJobAssignmentDisposition @ 0x1406A05A0 (PspGetJobAssignmentDisposition.c)
 */

__int64 __fastcall PsAssignProcessToJobObject(PVOID Object, PVOID a2, __int64 a3)
{
  unsigned int i; // ebx
  __int64 result; // rax
  int v8; // [rsp+48h] [rbp+20h] BYREF

  v8 = 0;
  for ( i = 0; i <= 0xA; ++i )
  {
    if ( (int)PspGetJobAssignmentDisposition(Object, a2, a3, &v8) < 0 )
      return 3221225506LL;
    result = PspAssignProcessToJob(Object, a2);
    if ( (_DWORD)result != -1073741267 )
      return result;
  }
  return 3221225473LL;
}
