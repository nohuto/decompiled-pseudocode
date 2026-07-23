/*
 * XREFs of sub_1405E22E8 @ 0x1405E22E8
 * Callers:
 *     sub_1405E1764 @ 0x1405E1764 (sub_1405E1764.c)
 * Callees:
 *     MmUnmapLockedPages @ 0x1402BB4E0 (MmUnmapLockedPages.c)
 *     MmMapLockedPagesSpecifyCache @ 0x140308CD0 (MmMapLockedPagesSpecifyCache.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_1405B1A10 @ 0x1405B1A10 (sub_1405B1A10.c)
 *     sub_1405B1D98 @ 0x1405B1D98 (sub_1405B1D98.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_1405E22E8(int a1, ULONG_PTR **a2, int a3, ULONG_PTR *a4, _DWORD *a5)
{
  ULONG_PTR *v7; // rax
  unsigned int v8; // ebx
  struct _MDL *v9; // rdi
  ULONG_PTR v11; // rax
  unsigned int v12; // r14d
  unsigned int v13; // r14d
  _DWORD *v14; // rax
  _DWORD *v15; // rsi
  struct _MDL MemoryDescriptorList; // [rsp+30h] [rbp-40h] BYREF
  ULONG_PTR v17; // [rsp+60h] [rbp-10h]

  v17 = 0LL;
  memset(&MemoryDescriptorList, 0, sizeof(MemoryDescriptorList));
  v7 = sub_1405B1A10(a2, (unsigned int)(a1 + 1), a3, 0, a5);
  v8 = 0;
  v9 = (struct _MDL *)v7;
  if ( !v7 )
    return 3221225495LL;
  if ( a1 )
  {
    v12 = *((_DWORD *)v7 + 10);
    *(_DWORD *)&MemoryDescriptorList.Size = 131128;
    MemoryDescriptorList.StartVa = 0LL;
    *(_QWORD *)&MemoryDescriptorList.ByteCount = 4096LL;
    v13 = v12 >> 12;
    v17 = v7[v13 + 5];
    v14 = MmMapLockedPagesSpecifyCache(&MemoryDescriptorList, 0, MmCached, 0LL, 0, 0x40000010u);
    v15 = v14;
    if ( !v14 )
    {
      sub_1405B1D98(v9, 0);
      v8 = -1073741670;
      goto LABEL_9;
    }
    memmove(v14, v9, 8LL * v13 + 48);
    v15[10] -= 4096;
    MmUnmapLockedPages(v15, &MemoryDescriptorList);
    v11 = v17;
  }
  else
  {
    v11 = v7[6];
  }
  *a4 = v11;
LABEL_9:
  ExFreePoolWithTag(v9, 0);
  return v8;
}
