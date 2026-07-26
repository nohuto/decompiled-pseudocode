/*
 * XREFs of ?ndisNetBufferToPacket@@YAHPEAU_NET_BUFFER@@EPEAPEAU_NDIS_PACKET@@@Z @ 0x1C00732AC
 * Callers:
 *     ?ndisXlateRecvNetBufferListsToPacketArray@@YAEPEAU_NDIS_NBLS_TO_PKT_ARRAY@@@Z @ 0x1C0073400 (-ndisXlateRecvNetBufferListsToPacketArray@@YAEPEAU_NDIS_NBLS_TO_PKT_ARRAY@@@Z.c)
 *     ?ndisXlateSendNetBufferListsToPacketArray@@YAEPEAU_NDIS_NBLS_TO_PKT_ARRAY@@E@Z @ 0x1C0073B34 (-ndisXlateSendNetBufferListsToPacketArray@@YAEPEAU_NDIS_NBLS_TO_PKT_ARRAY@@E@Z.c)
 * Callees:
 *     NdisAllocatePacket @ 0x1C00313B0 (NdisAllocatePacket.c)
 */

__int64 __fastcall ndisNetBufferToPacket(struct _NET_BUFFER *a1, char a2, struct _NDIS_PACKET **a3)
{
  NDIS_HANDLE v5; // r8
  __int64 result; // rax
  PNDIS_PACKET v8; // rcx
  $0E9DF72D8A868C7526DDDDC416C26EF5 *ProtocolReserved; // r10
  _MDL *CurrentMdl; // rdx
  __int64 CurrentMdlOffset; // r8
  unsigned int DataLength; // r9d
  unsigned int v13; // r8d
  unsigned int ByteCount; // eax
  ULONG v15; // r11d
  int Status; // [rsp+38h] [rbp+10h] BYREF
  PNDIS_PACKET Packet; // [rsp+40h] [rbp+18h] BYREF

  *a3 = 0LL;
  Status = 0;
  v5 = ndisRecvPacketPool;
  if ( a2 )
    v5 = ndisSendPacketPool;
  if ( !v5 )
    return 3221225626LL;
  Packet = 0LL;
  NdisAllocatePacket(&Status, &Packet, v5);
  result = (unsigned int)Status;
  if ( !Status )
  {
    v8 = Packet;
    Packet->Private.Head = 0LL;
    ProtocolReserved = ($0E9DF72D8A868C7526DDDDC416C26EF5 *)v8->ProtocolReserved;
    if ( !a2 )
      ProtocolReserved = &v8->48;
    *(_DWORD *)ProtocolReserved->MiniportReserved = 0;
    *(_QWORD *)&ProtocolReserved->MacReserved[8] = 0LL;
    CurrentMdl = a1->CurrentMdl;
    CurrentMdlOffset = a1->CurrentMdlOffset;
    CurrentMdl->ByteOffset += CurrentMdlOffset;
    CurrentMdl->ByteCount -= CurrentMdlOffset;
    if ( (CurrentMdl->MdlFlags & 5) != 0 )
      CurrentMdl->MappedSystemVa = (char *)CurrentMdl->MappedSystemVa + CurrentMdlOffset;
    DataLength = a1->DataLength;
    v13 = 0;
    if ( DataLength )
    {
      v8->Private.Head = CurrentMdl;
      while ( CurrentMdl )
      {
        ByteCount = CurrentMdl->ByteCount;
        v15 = DataLength - v13;
        if ( ByteCount >= DataLength - v13 )
        {
          *(_DWORD *)ProtocolReserved->MiniportReserved = ByteCount;
          v13 = DataLength;
          *(_QWORD *)&ProtocolReserved->MacReserved[8] = CurrentMdl->Next;
          CurrentMdl->Next = 0LL;
          CurrentMdl->ByteCount = v15;
          break;
        }
        CurrentMdl = CurrentMdl->Next;
        v13 += ByteCount;
        if ( v13 >= DataLength )
          break;
      }
    }
    v8->Private.Head = a1->CurrentMdl;
    result = 0LL;
    v8->Private.Tail = CurrentMdl;
    v8->Private.TotalLength = v13;
    v8->Private.ValidCounts = 0;
    *a3 = v8;
  }
  return result;
}
