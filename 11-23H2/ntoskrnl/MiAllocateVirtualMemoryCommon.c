/*
 * XREFs of MiAllocateVirtualMemoryCommon @ 0x1406F6C30
 * Callers:
 *     MmAllocateUserStack @ 0x140774584 (MmAllocateUserStack.c)
 *     MmAllocateVirtualMemory @ 0x1407A3B60 (MmAllocateVirtualMemory.c)
 *     NtAllocateVirtualMemory @ 0x1407AC010 (NtAllocateVirtualMemory.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14022F6C0 (ObfDereferenceObjectWithTag.c)
 *     PsDereferencePartition @ 0x1402F9EDC (PsDereferencePartition.c)
 *     memset @ 0x140435E00 (memset.c)
 *     MiAllocateVirtualMemoryPrepare @ 0x1406F6DC0 (MiAllocateVirtualMemoryPrepare.c)
 *     MiAllocateVirtualMemory @ 0x1406F7430 (MiAllocateVirtualMemory.c)
 *     PsReferencePartitionByHandle @ 0x14076022C (PsReferencePartitionByHandle.c)
 *     MiAllocateUserStack @ 0x1407CB434 (MiAllocateUserStack.c)
 */

__int64 __fastcall MiAllocateVirtualMemoryCommon(
        int a1,
        __int64 *a2,
        int a3,
        __int64 *a4,
        int a5,
        int a6,
        __int64 a7,
        unsigned __int8 a8,
        int a9,
        int a10,
        __int64 a11)
{
  unsigned __int64 v15; // rsi
  __int64 v16; // r9
  __int64 v17; // rdx
  int VirtualMemoryPrepare; // ebx
  __int64 v19; // rcx
  int v20; // eax
  int v22; // eax
  unsigned __int64 v23; // [rsp+70h] [rbp-C8h] BYREF
  __int64 v24; // [rsp+78h] [rbp-C0h] BYREF
  PVOID Object[2]; // [rsp+80h] [rbp-B8h] BYREF
  _QWORD v26[16]; // [rsp+90h] [rbp-A8h] BYREF

  memset(v26, 0, sizeof(v26));
  v15 = 0LL;
  v16 = *a4;
  v17 = *a2;
  v24 = 0LL;
  Object[0] = 0LL;
  v23 = 0LL;
  VirtualMemoryPrepare = MiAllocateVirtualMemoryPrepare(
                           a1,
                           v17,
                           a3,
                           v16,
                           a5,
                           a6,
                           a7,
                           a8,
                           a9,
                           a10,
                           a11,
                           (__int64)v26,
                           (__int64)Object);
  if ( VirtualMemoryPrepare < 0 )
    goto LABEL_20;
  v19 = *(_QWORD *)(a7 + 24);
  if ( v19 )
  {
    if ( v19 == -3 )
    {
      v15 = 1LL;
    }
    else
    {
      v22 = PsReferencePartitionByHandle(v19, 2LL, a8, 1633054029LL, &v23);
      v15 = v23;
      VirtualMemoryPrepare = v22;
      if ( v22 < 0 )
        goto LABEL_20;
    }
  }
  if ( !*(_BYTE *)(a7 + 48) || (a5 & 0x20400000) == 0x400000 )
  {
    if ( a9 < 0 )
      v20 = MiAllocateUserStack(v26, &v24);
    else
      v20 = MiAllocateVirtualMemory(v26, v15, &v24);
    VirtualMemoryPrepare = v20;
    if ( v20 >= 0 )
    {
      *a2 = v24;
      *a4 = v26[3];
      goto LABEL_8;
    }
  }
  else
  {
    VirtualMemoryPrepare = -1073741811;
  }
LABEL_20:
  if ( v26[0] )
    ++dword_140C67FA4;
  else
    ++dword_140C67FA0;
LABEL_8:
  if ( v15 >= 2 )
    PsDereferencePartition(v15);
  if ( Object[0] )
    ObfDereferenceObjectWithTag(Object[0], 0x6D566D4Du);
  return (unsigned int)VirtualMemoryPrepare;
}
