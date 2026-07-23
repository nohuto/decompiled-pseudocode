/*
 * XREFs of MmQueryMemoryListInformation @ 0x1402F8BE8
 * Callers:
 *     PfpMemoryListQuery @ 0x1403D5184 (PfpMemoryListQuery.c)
 *     EtwpLogMemInfo @ 0x1405FE394 (EtwpLogMemInfo.c)
 *     PfpVolumePrefetchMetadata @ 0x140684C04 (PfpVolumePrefetchMetadata.c)
 *     ExpQuerySystemInformation @ 0x140726A50 (ExpQuerySystemInformation.c)
 *     PfSnCheckActionsNeeded @ 0x14074E1E8 (PfSnCheckActionsNeeded.c)
 *     PfpPrefetchFilesTrickle @ 0x14075D680 (PfpPrefetchFilesTrickle.c)
 *     PfpUpdateRepurposedByPrefetch @ 0x14075D9D0 (PfpUpdateRepurposedByPrefetch.c)
 *     PfpPfnPrioRequest @ 0x14075DF38 (PfpPfnPrioRequest.c)
 *     PfpPrefetchDirectoryStream @ 0x1407D7DDC (PfpPrefetchDirectoryStream.c)
 *     PfpPrefetchPrivatePages @ 0x14097E468 (PfpPrefetchPrivatePages.c)
 * Callees:
 *     MiPartitionObjectToPartition @ 0x1402F8D34 (MiPartitionObjectToPartition.c)
 *     MiQueryMemoryListInformation @ 0x1402F8DD0 (MiQueryMemoryListInformation.c)
 *     PsDereferencePartition @ 0x1402F9EDC (PsDereferencePartition.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall MmQueryMemoryListInformation(
        ULONG_PTR BugCheckParameter2,
        _OWORD *a2,
        unsigned int a3,
        __int64 a4,
        _DWORD *a5)
{
  __int64 v8; // rax
  _OWORD *v9; // r14
  _OWORD v11[11]; // [rsp+40h] [rbp-D8h] BYREF

  memset(v11, 0, sizeof(v11));
  *a5 = 0;
  if ( a3 < 0xB0 )
  {
    *a5 = 176;
    return 3221225476LL;
  }
  else
  {
    v8 = MiPartitionObjectToPartition(BugCheckParameter2);
    if ( v8 )
    {
      MiQueryMemoryListInformation(v8, v11);
      *a2 = v11[0];
      a2[1] = v11[1];
      a2[2] = v11[2];
      a2[3] = v11[3];
      a2[4] = v11[4];
      a2[5] = v11[5];
      a2[6] = v11[6];
      v9 = a2 + 8;
      *(v9 - 1) = v11[7];
      *v9 = v11[8];
      v9[1] = v11[9];
      v9[2] = v11[10];
      *a5 = 176;
      return 0LL;
    }
    else
    {
      return 3221226656LL;
    }
  }
}
