/*
 * XREFs of ?ndisCopyPacketInfoToNBL@@YAXPEAU_NDIS_PACKET@@PEAU_NET_BUFFER_LIST@@W4_NDIS_XLATE_TYPE@@@Z @ 0x1C006DD40
 * Callers:
 *     ?ndisXlateRecvPacketArrayToNetBufferLists@@YAEPEAU_NDIS_PKT_ARRAY_TO_NBLS@@@Z @ 0x1C006E218 (-ndisXlateRecvPacketArrayToNetBufferLists@@YAEPEAU_NDIS_PKT_ARRAY_TO_NBLS@@@Z.c)
 *     ?ndisXlateReturnPacketToNetBufferList@@YAPEAU_NET_BUFFER_LIST@@PEAU_NDIS_PACKET@@@Z @ 0x1C006E568 (-ndisXlateReturnPacketToNetBufferList@@YAPEAU_NET_BUFFER_LIST@@PEAU_NDIS_PACKET@@@Z.c)
 *     ?ndisXlateSendCompletePacketToNetBufferList@@YAPEAU_NET_BUFFER_LIST@@PEAU_NDIS_PACKET@@H@Z @ 0x1C006E698 (-ndisXlateSendCompletePacketToNetBufferList@@YAPEAU_NET_BUFFER_LIST@@PEAU_NDIS_PACKET@@H@Z.c)
 *     ?ndisXlateSendPacketArrayToNetBufferLists@@YAEPEAU_NDIS_PKT_ARRAY_TO_NBLS@@@Z @ 0x1C006EBA0 (-ndisXlateSendPacketArrayToNetBufferLists@@YAEPEAU_NDIS_PKT_ARRAY_TO_NBLS@@@Z.c)
 * Callees:
 *     ndisIPsecPktInfoToNBLInfo @ 0x1C006DEA4 (ndisIPsecPktInfoToNBLInfo.c)
 */

__int64 __fastcall ndisCopyPacketInfoToNBL(__int64 a1, _QWORD *a2, unsigned int a3)
{
  __int64 result; // rax
  __int64 v4; // rcx

  a2[18] = *(_QWORD *)(*(unsigned __int16 *)(a1 + 42) + a1 + 40);
  a2[20] = *(_QWORD *)(*(unsigned __int16 *)(a1 + 42) + a1 + 56);
  a2[21] = *(_QWORD *)(*(unsigned __int16 *)(a1 + 42) + a1 + 64);
  a2[22] = *(_QWORD *)(*(unsigned __int16 *)(a1 + 42) + a1 + 88);
  result = *(unsigned __int16 *)(a1 + 42);
  a2[23] = *(_QWORD *)(result + a1 + 104);
  if ( (a3 & 0xFFFFFFFD) == 0 )
  {
    result = *(unsigned __int16 *)(a1 + 42);
    v4 = *(_QWORD *)(result + a1 + 48);
    if ( v4 )
      return ndisIPsecPktInfoToNBLInfo(v4, a3, a2 + 19);
  }
  return result;
}
