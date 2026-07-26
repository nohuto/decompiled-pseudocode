/*
 * XREFs of ?ndisPcwGetMiniportInstanceId@@YAKPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C01185C4
 * Callers:
 *     ?ndisPcwGetMiniportDataBlockInternal@@YAPEAU_NDIS_PCW_DATA_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0118404 (-ndisPcwGetMiniportDataBlockInternal@@YAPEAU_NDIS_PCW_DATA_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     <none>
 */

ULONG64 __fastcall ndisPcwGetMiniportInstanceId(struct _NDIS_MINIPORT_BLOCK *a1, int a2)
{
  ULONG64 result; // rax

  result = 4294967294LL;
  if ( a2 != -2 )
    return a2 & 0xFFF | ((a1->IfIndex & 0xFFF) << 12) | (a1->NetLuid.Value >> 24) & 0xFF000000;
  return result;
}
