/*
 * XREFs of TR_IsUrbUsingChainedMdl @ 0x1C0007484
 * Callers:
 *     Control_MapTransfer @ 0x1C00071B4 (Control_MapTransfer.c)
 *     Bulk_Stage_EstimateRequiredTrbs @ 0x1C00125B8 (Bulk_Stage_EstimateRequiredTrbs.c)
 *     Bulk_TransferData_DetermineTransferMechanism @ 0x1C00126B0 (Bulk_TransferData_DetermineTransferMechanism.c)
 * Callees:
 *     <none>
 */

bool __fastcall TR_IsUrbUsingChainedMdl(__int64 a1)
{
  _QWORD *v1; // rax

  return (*(_WORD *)(a1 + 2) == 8
       || *(_WORD *)(a1 + 2) == 9
       || *(_WORD *)(a1 + 2) == 10
       || *(_WORD *)(a1 + 2) == 50
       || *(_WORD *)(a1 + 2) == 55
       || *(_WORD *)(a1 + 2) == 56
       || (unsigned int)*(unsigned __int16 *)(a1 + 2) - 57 >= 2)
      && (v1 = *(_QWORD **)(a1 + 48)) != 0LL
      && *v1 != 0LL;
}
