/*
 * XREFs of SdbpOpenDatabaseInMemory @ 0x140695260
 * Callers:
 *     SdbInitDatabaseInMemory @ 0x1406951D8 (SdbInitDatabaseInMemory.c)
 *     SdbpOpenCompressedDatabase @ 0x140A534B8 (SdbpOpenCompressedDatabase.c)
 * Callees:
 *     SdbpValidateAndApplyCompatFlags @ 0x140695304 (SdbpValidateAndApplyCompatFlags.c)
 *     AslLogCallPrintf @ 0x1406956FC (AslLogCallPrintf.c)
 *     SdbpReadMappedData @ 0x140742A7C (SdbpReadMappedData.c)
 *     AslAlloc @ 0x140758688 (AslAlloc.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

void *__fastcall SdbpOpenDatabaseInMemory(__int64 a1, int a2, unsigned int a3)
{
  __int64 v6; // rax
  void *v7; // rbx
  __int64 v9; // [rsp+20h] [rbp-18h] BYREF
  int v10; // [rsp+28h] [rbp-10h]

  v9 = 0LL;
  v10 = 0;
  v6 = AslAlloc(a1, 2688LL);
  v7 = (void *)v6;
  if ( v6 )
  {
    *(_DWORD *)(v6 + 16) = 0;
    *(_DWORD *)(v6 + 24) |= 1u;
    *(_QWORD *)v6 = 0LL;
    *(_QWORD *)(v6 + 8) = a1;
    *(_DWORD *)(v6 + 20) = a2;
    if ( (unsigned int)((__int64 (__fastcall *)(__int64, _QWORD, __int64 *, __int64))SdbpReadMappedData)(
                         v6,
                         0LL,
                         &v9,
                         12LL) )
    {
      if ( (unsigned int)SdbpValidateAndApplyCompatFlags(v7, &v9, a3) )
        return v7;
    }
    else
    {
      AslLogCallPrintf(1, (unsigned int)"SdbpOpenDatabaseInMemory", 1960, (unsigned int)"Can't read database header");
    }
    ExFreePoolWithTag(v7, 0x74705041u);
  }
  else
  {
    AslLogCallPrintf(1, (unsigned int)"SdbpOpenDatabaseInMemory", 1949, (unsigned int)"Failed to allocate DB structure");
  }
  return 0LL;
}
