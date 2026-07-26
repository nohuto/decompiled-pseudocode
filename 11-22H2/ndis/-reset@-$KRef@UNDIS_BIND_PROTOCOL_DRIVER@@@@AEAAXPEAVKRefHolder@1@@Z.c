/*
 * XREFs of ?reset@?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@AEAAXPEAVKRefHolder@1@@Z @ 0x1C011E49C
 * Callers:
 *     NdisRegisterProtocol @ 0x1C009D830 (NdisRegisterProtocol.c)
 *     ?BuildProtocolLink@BindStack@Ndis@@AEAA?AV?$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U?$default_delete@UNDIS_BIND_PROTOCOL_LINK@@@wistd@@@wistd@@AEAV?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@@Z @ 0x1C011CE24 (-BuildProtocolLink@BindStack@Ndis@@AEAA-AV-$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U-_ea_1C011CE24.c)
 *     ??$allocate@$$V@?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@QEAA_NXZ @ 0x1C011E3FC (--$allocate@$$V@-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@QEAA_NXZ.c)
 * Callees:
 *     ??1NDIS_BIND_PROTOCOL_DRIVER@@QEAA@XZ @ 0x1C012D704 (--1NDIS_BIND_PROTOCOL_DRIVER@@QEAA@XZ.c)
 */

void __fastcall KRef<NDIS_BIND_PROTOCOL_DRIVER>::reset(__int64 *a1, __int64 a2)
{
  __int64 v2; // rdi

  v2 = *a1;
  if ( a2 != *a1 )
  {
    if ( v2 && _InterlockedExchangeAdd((volatile signed __int32 *)(v2 + 48), 0xFFFFFFFF) == 1 )
    {
      NDIS_BIND_PROTOCOL_DRIVER::~NDIS_BIND_PROTOCOL_DRIVER((NDIS_BIND_PROTOCOL_DRIVER *)v2);
      ExFreePoolWithTag((PVOID)v2, 0x44745042u);
    }
    *a1 = a2;
    if ( a2 )
      _InterlockedIncrement((volatile signed __int32 *)(a2 + 48));
  }
}
