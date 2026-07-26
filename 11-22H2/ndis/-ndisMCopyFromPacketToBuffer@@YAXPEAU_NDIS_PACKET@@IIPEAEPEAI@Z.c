/*
 * XREFs of ?ndisMCopyFromPacketToBuffer@@YAXPEAU_NDIS_PACKET@@IIPEAEPEAI@Z @ 0x1C00CBA20
 * Callers:
 *     ndisMIsLoopbackPacket @ 0x1C00CB440 (ndisMIsLoopbackPacket.c)
 *     ?ndisMAllocSGList@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z @ 0x1C00CC948 (-ndisMAllocSGList@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z.c)
 *     ?ndisMAllocSGListS@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z @ 0x1C00CCD0C (-ndisMAllocSGListS@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z.c)
 * Callees:
 *     memmove @ 0x1C0038280 (memmove.c)
 *     NdisQueryPacket @ 0x1C00CB974 (NdisQueryPacket.c)
 */

void __fastcall ndisMCopyFromPacketToBuffer(
        struct _NDIS_PACKET *a1,
        unsigned int *a2,
        unsigned int a3,
        unsigned __int8 *a4,
        unsigned int *a5)
{
  unsigned int *v5; // r13
  unsigned int v7; // r15d
  PMDL v8; // rdi
  char *v9; // rbp
  unsigned int ByteCount; // esi
  char *v11; // r13
  unsigned int v12; // eax
  __int64 v13; // rbx
  PMDL MemoryDescriptorList; // [rsp+30h] [rbp-48h] BYREF
  unsigned int v15; // [rsp+88h] [rbp+10h] BYREF
  void *v16; // [rsp+98h] [rbp+20h]

  v16 = a4;
  v5 = a5;
  v15 = 0;
  MemoryDescriptorList = 0LL;
  v7 = 0;
  *a5 = 0;
  if ( !a3 )
    return;
  NdisQueryPacket(a1, a2, &v15, &MemoryDescriptorList, 0LL);
  if ( !v15 )
    return;
  v8 = MemoryDescriptorList;
  v9 = (char *)((MemoryDescriptorList->MdlFlags & 5) != 0
              ? MemoryDescriptorList->MappedSystemVa
              : MmMapLockedPagesSpecifyCache(MemoryDescriptorList, 0, MmCached, 0LL, 0, 0x40000010u));
  ByteCount = v8->ByteCount;
  if ( !v9 )
    return;
  if ( !a3 )
    goto LABEL_21;
  v11 = (char *)v16;
  do
  {
    if ( ByteCount )
    {
      v12 = ByteCount;
      if ( ByteCount > a3 - v7 )
        v12 = a3 - v7;
      v13 = v12;
      memmove(v11, v9, v12);
      v11 += v13;
      v9 += v13;
      v7 += v13;
      ByteCount -= v13;
      continue;
    }
    v8 = v8->Next;
    if ( !v8 )
      break;
    v9 = (char *)((v8->MdlFlags & 5) != 0
                ? v8->MappedSystemVa
                : MmMapLockedPagesSpecifyCache(v8, 0, MmCached, 0LL, 0, 0x40000010u));
    if ( !v9 )
      break;
    ByteCount = v8->ByteCount;
  }
  while ( v7 < a3 );
  v5 = a5;
LABEL_21:
  *v5 = v7;
}
