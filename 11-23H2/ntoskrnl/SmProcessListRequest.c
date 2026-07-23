/*
 * XREFs of SmProcessListRequest @ 0x1409D6FAC
 * Callers:
 *     SmQueryStoreInformation @ 0x14084134C (SmQueryStoreInformation.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140208C40 (CmSiFreeMemory.c)
 *     PsDereferencePartition @ 0x1402F9EDC (PsDereferencePartition.c)
 *     SSHSupportAllocateNonPaged @ 0x14032D5E4 (SSHSupportAllocateNonPaged.c)
 *     SmpGetProcessPartition @ 0x140344D10 (SmpGetProcessPartition.c)
 *     memmove @ 0x140435B00 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     ProbeForWrite @ 0x140729580 (ProbeForWrite.c)
 *     PsReferencePartitionByHandle @ 0x14076022C (PsReferencePartitionByHandle.c)
 *     SmProcessListRequestExtended @ 0x1409D71F8 (SmProcessListRequestExtended.c)
 *     SmKmGetStoreList @ 0x1409D8EA0 (SmKmGetStoreList.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A00DF0 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall SmProcessListRequest(_OWORD *a1, unsigned int a2, unsigned int *a3, char a4)
{
  int v8; // ebx
  void *NonPaged; // rax
  void *v10; // rdi
  int StoreList; // ebx
  __int64 v12; // rcx
  ULONG_PTR v13; // rcx
  __int64 ProcessPartition; // rsi
  unsigned int Size; // [rsp+30h] [rbp-38h]
  __int64 v17[3]; // [rsp+38h] [rbp-30h] BYREF

  v17[0] = 0LL;
  v8 = 4240;
  NonPaged = (void *)SSHSupportAllocateNonPaged(4240LL, 0x524C6D73u);
  v10 = NonPaged;
  v17[1] = (__int64)NonPaged;
  if ( !NonPaged )
  {
    StoreList = -1073740716;
    goto LABEL_28;
  }
  memset(NonPaged, 0, 0x1090uLL);
  if ( a2 < 0x90 )
    goto LABEL_4;
  if ( a4 )
  {
    if ( ((unsigned __int8)a1 & 7) != 0 )
      ExRaiseDatatypeMisalignment();
    v12 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a1 < 0x7FFFFFFF0000LL )
      v12 = (__int64)a1;
    *(_BYTE *)v12 = *(_BYTE *)v12;
    *(_BYTE *)(v12 + 143) = *(_BYTE *)(v12 + 143);
  }
  *(_OWORD *)v10 = *a1;
  *((_OWORD *)v10 + 1) = a1[1];
  *((_OWORD *)v10 + 2) = a1[2];
  *((_OWORD *)v10 + 3) = a1[3];
  *((_OWORD *)v10 + 4) = a1[4];
  *((_OWORD *)v10 + 5) = a1[5];
  *((_OWORD *)v10 + 6) = a1[6];
  *((_OWORD *)v10 + 7) = a1[7];
  *((_OWORD *)v10 + 8) = a1[8];
  if ( (*(_DWORD *)v10 & 0x10000) != 0 )
  {
    if ( a4 )
      ProbeForWrite(a1, 0x1090uLL, 8u);
  }
  else
  {
    v8 = 144;
  }
  Size = v8;
  if ( a2 != v8 )
  {
LABEL_4:
    StoreList = -1073741306;
    goto LABEL_28;
  }
  if ( __PAIR16__(*((_BYTE *)v10 + 1), *(_DWORD *)v10) == 3 && *(_DWORD *)v10 < 0x20000u )
  {
    v13 = *((_QWORD *)v10 + 1);
    if ( v13 )
    {
      StoreList = PsReferencePartitionByHandle(v13, 1, a4, 0x4C516D53u, v17);
      if ( StoreList < 0 )
        goto LABEL_28;
      ProcessPartition = *(_QWORD *)(v17[0] + 24);
      if ( !ProcessPartition )
      {
        StoreList = -1073741399;
        goto LABEL_28;
      }
    }
    else
    {
      ProcessPartition = SmpGetProcessPartition((__int64)KeGetCurrentThread()->ApcState.Process);
    }
    StoreList = SmKmGetStoreList(ProcessPartition, v10);
    if ( StoreList >= 0 )
    {
      if ( (*(_DWORD *)v10 & 0x10000) == 0
        || (StoreList = SmProcessListRequestExtended(ProcessPartition, v10), StoreList >= 0) )
      {
        memmove(a1, v10, Size);
        *a3 = Size;
      }
    }
  }
  else
  {
    StoreList = -1073741811;
  }
LABEL_28:
  if ( v10 )
    CmSiFreeMemory((PPRIVILEGE_SET)v10);
  if ( v17[0] )
    PsDereferencePartition(v17[0]);
  return (unsigned int)StoreList;
}
