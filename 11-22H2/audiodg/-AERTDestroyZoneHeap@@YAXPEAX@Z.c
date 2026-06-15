/*
 * XREFs of ?AERTDestroyZoneHeap@@YAXPEAX@Z @ 0x140002BF4
 * Callers:
 *     ??1CCrossProcessBaseEndpoint@@UEAA@XZ @ 0x140002C34 (--1CCrossProcessBaseEndpoint@@UEAA@XZ.c)
 *     wil::details::lambda_call__lambda_ab3a1a58e061494ef8b3c62d1c039716___::_lambda_call__lambda_ab3a1a58e061494ef8b3c62d1c039716___ @ 0x140095154 (wil--details--lambda_call__lambda_ab3a1a58e061494ef8b3c62d1c039716___--_lambda_call__lambda_ab3a.c)
 *     ??1CSpatialCrossProcessBaseEndpoint@@UEAA@XZ @ 0x1400996DC (--1CSpatialCrossProcessBaseEndpoint@@UEAA@XZ.c)
 *     ??1CSpatialCrossProcessClientEndpoint@@UEAA@XZ @ 0x1400997C8 (--1CSpatialCrossProcessClientEndpoint@@UEAA@XZ.c)
 *     ??1CSpatialCrossProcessServerEndpoint@@UEAA@XZ @ 0x14009984C (--1CSpatialCrossProcessServerEndpoint@@UEAA@XZ.c)
 *     ?SetMapSize@CSparseIndexMapRT@@QEAAJI@Z @ 0x14009F5D4 (-SetMapSize@CSparseIndexMapRT@@QEAAJI@Z.c)
 *     wil::details::lambda_call__lambda_add5652c2373d1431c22ec933018652d___::_lambda_call__lambda_add5652c2373d1431c22ec933018652d___ @ 0x1400A0470 (wil--details--lambda_call__lambda_add5652c2373d1431c22ec933018652d___--_lambda_call__lambda_add5.c)
 * Callees:
 *     McTemplateU0pqpqqqqqq_EventWriteTransfer @ 0x14007B1B4 (McTemplateU0pqpqqqqqq_EventWriteTransfer.c)
 */

void __fastcall AERTDestroyZoneHeap(void *a1, int a2, int a3)
{
  char v3; // bl

  v3 = (char)a1;
  if ( a1 )
    RtlDestroyMemoryZone();
  if ( (byte_1400CF981 & 4) != 0 )
    McTemplateU0pqpqqqqqq_EventWriteTransfer((_DWORD)a1, a2, a3, 4, v3, 0, 0, 0);
}
