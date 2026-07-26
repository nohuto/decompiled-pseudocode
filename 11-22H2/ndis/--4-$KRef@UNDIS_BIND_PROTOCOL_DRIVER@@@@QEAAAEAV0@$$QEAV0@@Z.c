/*
 * XREFs of ??4?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@QEAAAEAV0@$$QEAV0@@Z @ 0x1C011CCC4
 * Callers:
 *     NdisRegisterProtocolDriver @ 0x1C002FA30 (NdisRegisterProtocolDriver.c)
 *     NdisRegisterProtocol @ 0x1C009D830 (NdisRegisterProtocol.c)
 * Callees:
 *     ??1NDIS_BIND_PROTOCOL_DRIVER@@QEAA@XZ @ 0x1C012D704 (--1NDIS_BIND_PROTOCOL_DRIVER@@QEAA@XZ.c)
 */

__int64 *__fastcall KRef<NDIS_BIND_PROTOCOL_DRIVER>::operator=(__int64 *a1, __int64 *a2)
{
  __int64 v3; // rsi
  __int64 v4; // rdi

  if ( a1 != a2 )
  {
    v3 = *a2;
    *a2 = 0LL;
    v4 = *a1;
    if ( *a1 && _InterlockedExchangeAdd((volatile signed __int32 *)(v4 + 48), 0xFFFFFFFF) == 1 )
    {
      NDIS_BIND_PROTOCOL_DRIVER::~NDIS_BIND_PROTOCOL_DRIVER((NDIS_BIND_PROTOCOL_DRIVER *)v4);
      ExFreePoolWithTag((PVOID)v4, 0x44745042u);
    }
    *a1 = v3;
  }
  return a1;
}
