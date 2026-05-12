/*
 * XREFs of StorSetIoGatewayNotBusy @ 0x1C0059814
 * Callers:
 *     RaidAdapterDeferredRoutine @ 0x1C00028C0 (RaidAdapterDeferredRoutine.c)
 *     StorRemoveIoGatewayItem @ 0x1C0008220 (StorRemoveIoGatewayItem.c)
 *     StorSetIoGatewayBusy @ 0x1C0059678 (StorSetIoGatewayBusy.c)
 * Callees:
 *     StorSetAllIoGatewayNotBusy @ 0x1C005960C (StorSetAllIoGatewayNotBusy.c)
 */

__int64 __fastcall StorSetIoGatewayNotBusy(__int64 a1, char a2)
{
  __int64 result; // rax

  if ( a1 )
  {
    result = *(_QWORD *)(a1 + 48);
    if ( *(_DWORD *)(result + 840) > 1u && a2 )
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
