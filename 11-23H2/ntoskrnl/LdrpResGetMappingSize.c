/*
 * XREFs of LdrpResGetMappingSize @ 0x14075A008
 * Callers:
 *     LdrpResSearchResourceMappedFile @ 0x1402F7FA8 (LdrpResSearchResourceMappedFile.c)
 *     LdrResSearchResource @ 0x140759C40 (LdrResSearchResource.c)
 *     LdrResGetRCConfig @ 0x1407E1914 (LdrResGetRCConfig.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x140214B60 (RtlImageNtHeaderEx.c)
 *     LdrpKrnGetDataTableEntry @ 0x1402F7214 (LdrpKrnGetDataTableEntry.c)
 *     ZwQueryVirtualMemory @ 0x14041B1C0 (ZwQueryVirtualMemory.c)
 */

int __fastcall LdrpResGetMappingSize(unsigned __int64 a1, unsigned __int64 *a2, int a3)
{
  unsigned __int64 v5; // r15
  unsigned __int64 v6; // rbx
  int result; // eax
  bool v8; // r14
  __int16 v9; // dx
  unsigned __int64 v10; // rdi
  PVOID *DataTableEntry; // rax
  __int128 MemoryInformation; // [rsp+40h] [rbp-58h] BYREF
  __int128 v13; // [rsp+50h] [rbp-48h]
  __int128 v14; // [rsp+60h] [rbp-38h]
  __int64 v15; // [rsp+A0h] [rbp+8h] BYREF

  v15 = 0LL;
  MemoryInformation = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  if ( !a1 || !a2 )
    return -1073741811;
  v5 = 0LL;
  if ( (a3 & 0x80000) != 0 )
  {
    v6 = *a2;
LABEL_5:
    result = 0;
LABEL_29:
    if ( v5 && v5 < v6 )
      return -1073741793;
    *a2 = v6;
    return result;
  }
  if ( (a3 & 0x20000) != 0 )
    v5 = *a2;
  *a2 = 0LL;
  v6 = 0LL;
  v8 = 0;
  if ( (a3 & 0x100) != 0 )
    v8 = (a1 & 1) == 0;
  result = RtlImageNtHeaderEx(1, a1 & 0xFFFFFFFFFFFFFFFCuLL, 0LL, &v15);
  if ( result >= 0 )
  {
    v9 = *(_WORD *)(v15 + 24);
    if ( v9 == 267 || v9 == 523 )
    {
      v10 = *(unsigned int *)(v15 + 80);
    }
    else
    {
      v10 = 0LL;
      result = -1073741701;
    }
    if ( result >= 0 )
    {
      if ( v8 && v10 )
      {
        v6 = v10;
        goto LABEL_5;
      }
      DataTableEntry = LdrpKrnGetDataTableEntry(a1);
      if ( DataTableEntry )
        v6 = *((unsigned int *)DataTableEntry + 16);
      if ( v6 )
      {
        result = 0;
      }
      else
      {
        result = ZwQueryVirtualMemory(
                   (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                   (PVOID)(a1 & 0xFFFFFFFFFFFFFFFCuLL),
                   (MEMORY_INFORMATION_CLASS)3,
                   &MemoryInformation,
                   0x30uLL,
                   0LL);
        if ( result >= 0 )
          v6 = v13;
      }
      if ( !v6 && v10 )
      {
        v6 = v10;
        result = 0;
      }
      if ( result >= 0 )
        goto LABEL_29;
    }
  }
  return result;
}
