/*
 * XREFs of ndisIPsecPktInfoToNBLInfo @ 0x1C007323C
 * Callers:
 *     ?ndisCopyPacketInfoToNBL@@YAXPEAU_NDIS_PACKET@@PEAU_NET_BUFFER_LIST@@W4_NDIS_XLATE_TYPE@@@Z @ 0x1C00730D8 (-ndisCopyPacketInfoToNBL@@YAXPEAU_NDIS_PACKET@@PEAU_NET_BUFFER_LIST@@W4_NDIS_XLATE_TYPE@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisIPsecPktInfoToNBLInfo(_WORD *a1, int a2, _WORD *a3)
{
  __int64 result; // rax
  __int16 v5; // cx

  if ( a1 )
  {
    if ( a2 )
    {
      if ( a2 == 2 )
      {
        *a3 ^= (*a3 ^ *a1) & 1;
        v5 = *a3 ^ (*a3 ^ (2 * (*(_DWORD *)a1 >> 1))) & 2;
        *a3 = v5;
        *a3 = v5 ^ ((unsigned __int8)v5 ^ *(_DWORD *)a1 & 0xFC) & 4;
        result = (unsigned __int16)a1[2];
        a3[1] = result;
      }
    }
    else
    {
      result = *(_QWORD *)a1;
      *(_QWORD *)a3 = *(_QWORD *)a1;
    }
  }
  return result;
}
