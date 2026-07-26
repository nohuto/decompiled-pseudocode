/*
 * XREFs of NdisQueryPacket @ 0x1C00C6D04
 * Callers:
 *     ndisMIsLoopbackPacket @ 0x1C00C67E0 (ndisMIsLoopbackPacket.c)
 *     ?ndisMCopyFromPacketToBuffer@@YAXPEAU_NDIS_PACKET@@IIPEAEPEAI@Z @ 0x1C00C6DB0 (-ndisMCopyFromPacketToBuffer@@YAXPEAU_NDIS_PACKET@@IIPEAEPEAI@Z.c)
 *     ?ndisMAllocSGList@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z @ 0x1C00C7BA8 (-ndisMAllocSGList@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z.c)
 *     ?ndisMAllocSGListS@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z @ 0x1C00C7FC4 (-ndisMAllocSGListS@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z.c)
 * Callees:
 *     <none>
 */

void __stdcall NdisQueryPacket(
        PNDIS_PACKET Packet,
        PUINT PhysicalBufferCount,
        PUINT BufferCount,
        PNDIS_BUFFER *FirstBuffer,
        PUINT TotalPacketLength)
{
  _MDL *Head; // r8
  unsigned int v7; // r11d
  unsigned int v8; // ebx
  unsigned int v9; // edi
  __int64 ByteCount; // rax
  unsigned __int64 v11; // rax

  if ( FirstBuffer )
    *FirstBuffer = Packet->Private.Head;
  if ( TotalPacketLength || BufferCount )
  {
    if ( !Packet->Private.ValidCounts )
    {
      Head = Packet->Private.Head;
      v7 = 0;
      v8 = 0;
      v9 = 0;
      while ( Head )
      {
        ByteCount = Head->ByteCount;
        v7 += ByteCount;
        if ( (_DWORD)ByteCount )
          v11 = ((unsigned __int64)((LODWORD(Head->StartVa) + Head->ByteOffset) & 0xFFF) + ByteCount + 4095) >> 12;
        else
          LODWORD(v11) = 1;
        Head = Head->Next;
        v8 += v11;
        ++v9;
      }
      Packet->Private.Count = v9;
      Packet->Private.TotalLength = v7;
      Packet->Private.PhysicalCount = v8;
      Packet->Private.ValidCounts = 1;
    }
    if ( BufferCount )
      *BufferCount = Packet->Private.Count;
    if ( TotalPacketLength )
      *TotalPacketLength = Packet->Private.TotalLength;
  }
}
