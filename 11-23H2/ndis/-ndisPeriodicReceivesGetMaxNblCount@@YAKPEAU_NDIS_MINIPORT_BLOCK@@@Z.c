/*
 * XREFs of ?ndisPeriodicReceivesGetMaxNblCount@@YAKPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C003E820
 * Callers:
 *     ndisMiniportDpc @ 0x1C003D030 (ndisMiniportDpc.c)
 *     ndisGetMiniportIndicateList @ 0x1C003E4A0 (ndisGetMiniportIndicateList.c)
 *     ?ndisMIndicateReceiveNblsWithThrottling@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1C003E590 (-ndisMIndicateReceiveNblsWithThrottling@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisPeriodicReceivesGetMaxNblCount(struct _NDIS_MINIPORT_BLOCK *a1)
{
  __int64 result; // rax

  if ( !byte_1C00F5201 )
    return 0xFFFFFFFFLL;
  if ( dword_1C00F520C )
    return (unsigned int)dword_1C00F5204;
  result = (unsigned int)ndisPeriodicReceivesNblCounts[*(unsigned int *)((char *)a1->PeriodicReceivesNblCountIndex
                                                                       + (KeGetPcr()->Prcb.Number << 12))];
  if ( dword_1C00F5204 < (unsigned int)result )
    return (unsigned int)dword_1C00F5204;
  return result;
}
