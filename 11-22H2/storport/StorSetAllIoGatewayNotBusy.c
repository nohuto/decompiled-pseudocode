/*
 * XREFs of StorSetAllIoGatewayNotBusy @ 0x1C0066598
 * Callers:
 *     StorRemoveIoGatewayItem @ 0x1C0003010 (StorRemoveIoGatewayItem.c)
 *     StorSetAllIoGatewayBusy @ 0x1C006647C (StorSetAllIoGatewayBusy.c)
 *     StorSetIoGatewayNotBusy @ 0x1C0066798 (StorSetIoGatewayNotBusy.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall StorSetAllIoGatewayNotBusy(__int64 a1)
{
  _DWORD *v1; // r8
  __int64 result; // rax
  unsigned int i; // r9d

  v1 = 0LL;
  result = (unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 928), 3, 2);
  if ( (_DWORD)result == 2 )
  {
    for ( i = 0; i < *(_DWORD *)(a1 + 904); ++i )
    {
      v1 = (_DWORD *)(*(_QWORD *)(a1 + 896) + 320LL * i);
      if ( v1[10] )
      {
        v1[8] = v1[7];
        v1[10] = 0;
      }
    }
    result = (unsigned int)v1[7];
    *(_DWORD *)(a1 + 920) = result;
    _InterlockedExchange((volatile __int32 *)(a1 + 928), 0);
  }
  return result;
}
