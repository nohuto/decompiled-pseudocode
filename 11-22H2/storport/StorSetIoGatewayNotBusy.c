/*
 * XREFs of StorSetIoGatewayNotBusy @ 0x1C0066798
 * Callers:
 *     StorRemoveIoGatewayItem @ 0x1C0003010 (StorRemoveIoGatewayItem.c)
 *     RaidAdapterDeferredRoutine @ 0x1C0014550 (RaidAdapterDeferredRoutine.c)
 *     StorSetIoGatewayBusy @ 0x1C0066604 (StorSetIoGatewayBusy.c)
 * Callees:
 *     StorSetAllIoGatewayNotBusy @ 0x1C0066598 (StorSetAllIoGatewayNotBusy.c)
 */

__int64 __fastcall StorSetIoGatewayNotBusy(__int64 a1, char a2)
{
  __int64 result; // rax

  if ( a1 )
  {
    result = *(_QWORD *)(a1 + 48);
    if ( *(_DWORD *)(result + 904) > 1u && a2 )
    {
      return StorSetAllIoGatewayNotBusy(*(_QWORD *)(a1 + 48));
    }
    else if ( *(_DWORD *)(a1 + 40) )
    {
      result = *(unsigned int *)(a1 + 28);
      *(_DWORD *)(a1 + 40) = 0;
      *(_DWORD *)(a1 + 32) = result;
    }
  }
  return result;
}
