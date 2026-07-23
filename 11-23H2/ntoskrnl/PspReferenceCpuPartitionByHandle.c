/*
 * XREFs of PspReferenceCpuPartitionByHandle @ 0x1409B1834
 * Callers:
 *     NtQueryInformationCpuPartition @ 0x1409B07D0 (NtQueryInformationCpuPartition.c)
 *     PspAssignCpuPartitionsToProcess @ 0x1409B0F64 (PspAssignCpuPartitionsToProcess.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     SeCreateAccessState @ 0x1406C2E90 (SeCreateAccessState.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1406E6330 (ObpReferenceObjectByHandleWithTag.c)
 *     ObCheckObjectAccess @ 0x1407B6540 (ObCheckObjectAccess.c)
 */

__int64 __fastcall PspReferenceCpuPartitionByHandle(
        ULONG_PTR BugCheckParameter1,
        int a2,
        char a3,
        __int64 a4,
        _QWORD *a5)
{
  unsigned int v8; // ecx
  NTSTATUS v10[4]; // [rsp+40h] [rbp-1B8h] BYREF
  struct _ACCESS_STATE AccessState; // [rsp+50h] [rbp-1A8h] BYREF
  _BYTE v12[224]; // [rsp+F0h] [rbp-108h] BYREF

  memset(&AccessState, 0, sizeof(AccessState));
  memset(v12, 0, sizeof(v12));
  if ( BugCheckParameter1 == -1LL )
  {
    v10[0] = SeCreateAccessState((int)&AccessState, (int)v12, a2, PsCpuPartitionType + 76);
    v8 = v10[0];
    if ( v10[0] >= 0 )
    {
      if ( ObCheckObjectAccess((char *)PspSystemCpuPartition, &AccessState, 0LL, a3, v10) )
      {
        v8 = 0;
        *a5 = PspSystemCpuPartition;
      }
      else
      {
        return (unsigned int)v10[0];
      }
    }
  }
  else
  {
    return (unsigned int)ObpReferenceObjectByHandleWithTag(
                           BugCheckParameter1,
                           a2,
                           PsCpuPartitionType,
                           a3,
                           0x50707350u,
                           a5,
                           0LL,
                           0LL);
  }
  return v8;
}
