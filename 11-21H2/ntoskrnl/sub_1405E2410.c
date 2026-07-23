/*
 * XREFs of sub_1405E2410 @ 0x1405E2410
 * Callers:
 *     sub_1405E1764 @ 0x1405E1764 (sub_1405E1764.c)
 * Callees:
 *     MmUnmapLockedPages @ 0x1402BB4E0 (MmUnmapLockedPages.c)
 *     MmMapLockedPagesSpecifyCache @ 0x140308CD0 (MmMapLockedPagesSpecifyCache.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_14059A86C @ 0x14059A86C (sub_14059A86C.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_1405E2410(__int64 a1)
{
  int v1; // r8d
  __int64 v3; // r13
  PVOID MappedSystemVa; // r15
  __int64 v5; // rsi
  unsigned __int64 v6; // r15
  __int64 v7; // r14
  struct _MDL *PoolWithTag; // rax
  __int64 v9; // r12
  __int64 v10; // rax
  PMDL v11; // rsi
  size_t v12; // r8
  CSHORT MdlFlags; // ax
  unsigned int v14; // esi
  PMDL *v16; // r14
  PMDL v17; // rdi
  PMDL MemoryDescriptorList[2]; // [rsp+30h] [rbp-39h] BYREF
  struct _MDL v19; // [rsp+40h] [rbp-29h] BYREF
  __int64 v20; // [rsp+70h] [rbp+7h]
  _QWORD v21[3]; // [rsp+78h] [rbp+Fh]

  v1 = *(_DWORD *)(a1 + 40);
  v20 = 0LL;
  memset(&v19, 0, sizeof(v19));
  v3 = 2LL;
  *(_OWORD *)MemoryDescriptorList = 0LL;
  if ( (v1 & 0x2000) != 0 )
  {
    MappedSystemVa = 0LL;
    goto LABEL_20;
  }
  LODWORD(v5) = *(_DWORD *)(a1 + 44);
  if ( !(_DWORD)v5 )
  {
    MappedSystemVa = (PVOID)(a1 + 64);
LABEL_20:
    v14 = sub_14059A86C(*(_QWORD *)(a1 + 24), *(_QWORD *)(a1 + 32), v1, (__int64)MappedSystemVa);
LABEL_21:
    if ( (v19.MdlFlags & 1) != 0 )
      MmUnmapLockedPages(v19.MappedSystemVa, &v19);
    v16 = MemoryDescriptorList;
    do
    {
      v17 = *v16;
      if ( *v16 )
      {
        if ( (v17->MdlFlags & 1) != 0 )
          MmUnmapLockedPages(v17->MappedSystemVa, *v16);
        ExFreePoolWithTag(v17, 0);
      }
      ++v16;
      --v3;
    }
    while ( v3 );
    return v14;
  }
  v6 = *(_QWORD *)(a1 + 32) >> 12;
  v7 = 0LL;
  do
  {
    v5 = (unsigned int)(v5 - 1);
    v6 = (((8 * v6) & 0xFFF) != 0) + ((8 * v6) >> 12);
    v21[v5] = v6;
    if ( (unsigned int)v7 < 2 )
    {
      PoolWithTag = (struct _MDL *)ExAllocatePoolWithTag(NonPagedPoolNx, 8 * (v6 & 0xFFFFFFFFFFFFFLL) + 48, 0x6C644Du);
      MemoryDescriptorList[v7] = PoolWithTag;
      if ( !PoolWithTag )
      {
        v14 = -1073741670;
        goto LABEL_21;
      }
      PoolWithTag->Next = 0LL;
      PoolWithTag->StartVa = 0LL;
      PoolWithTag->ByteOffset = 0;
      PoolWithTag->ByteCount = 0;
      *(_DWORD *)&PoolWithTag->Size = 131120;
    }
    v7 = (unsigned int)(v7 + 1);
  }
  while ( (_DWORD)v5 );
  v9 = 0LL;
  MappedSystemVa = (PVOID)(a1 + 64);
  if ( !*(_DWORD *)(a1 + 44) )
  {
LABEL_16:
    v1 = *(_DWORD *)(a1 + 40);
    goto LABEL_20;
  }
  while ( 1 )
  {
    LODWORD(v7) = v7 - 1;
    v10 = v7 & 1;
    v11 = MemoryDescriptorList[v10];
    if ( (v11->MdlFlags & 1) != 0 )
      MmUnmapLockedPages(v11->MappedSystemVa, MemoryDescriptorList[v10]);
    v12 = 8LL * v21[v9];
    v11->ByteCount = LODWORD(v21[v9]) << 12;
    memmove(&v11[1], MappedSystemVa, v12);
    MdlFlags = v11->MdlFlags;
    if ( (MdlFlags & 5) == 0 )
    {
      MmMapLockedPagesSpecifyCache(v11, 0, MmCached, 0LL, 0, 0x40000010u);
      MdlFlags = v11->MdlFlags;
    }
    if ( (MdlFlags & 1) == 0 )
      return 3221225626LL;
    MappedSystemVa = v11->MappedSystemVa;
    v9 = (unsigned int)(v9 + 1);
    if ( (unsigned int)v9 >= *(_DWORD *)(a1 + 44) )
      goto LABEL_16;
  }
}
