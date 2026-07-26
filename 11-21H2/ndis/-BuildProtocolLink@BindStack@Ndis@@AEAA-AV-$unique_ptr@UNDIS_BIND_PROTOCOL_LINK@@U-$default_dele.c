/*
 * XREFs of ?BuildProtocolLink@BindStack@Ndis@@AEAA?AV?$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U?$default_delete@UNDIS_BIND_PROTOCOL_LINK@@@wistd@@@wistd@@PEAU_UNICODE_STRING@@@Z @ 0x1C010F7A8
 * Callers:
 *     ?AddStaticProtocolBinding@BindStack@Ndis@@QEAAJPEB_W@Z @ 0x1C010F678 (-AddStaticProtocolBinding@BindStack@Ndis@@QEAAJPEB_W@Z.c)
 * Callees:
 *     ?BuildProtocolLink@BindStack@Ndis@@AEAA?AV?$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U?$default_delete@UNDIS_BIND_PROTOCOL_LINK@@@wistd@@@wistd@@AEAV?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@@Z @ 0x1C010F814 (-BuildProtocolLink@BindStack@Ndis@@AEAA-AV-$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U-_ea_1C010F814.c)
 *     ?ndisBindGetProtocolDriver@@YA?AV?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@PEAU_UNICODE_STRING@@_N1@Z @ 0x1C010FA40 (-ndisBindGetProtocolDriver@@YA-AV-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@PEAU_UNICODE_STRING@@_N1@Z.c)
 *     ??1NDIS_BIND_PROTOCOL_DRIVER@@QEAA@XZ @ 0x1C0121C44 (--1NDIS_BIND_PROTOCOL_DRIVER@@QEAA@XZ.c)
 */

_QWORD *__fastcall Ndis::BindStack::BuildProtocolLink(void *a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rcx
  volatile signed __int32 *v6; // rbx
  PVOID P; // [rsp+30h] [rbp+8h] BYREF

  P = a1;
  LOBYTE(a4) = 1;
  ndisBindGetProtocolDriver(&P, a3, 0LL, a4);
  v6 = (volatile signed __int32 *)P;
  if ( P )
  {
    Ndis::BindStack::BuildProtocolLink(v5, a2, &P);
    if ( _InterlockedExchangeAdd(v6 + 12, 0xFFFFFFFF) == 1 )
    {
      NDIS_BIND_PROTOCOL_DRIVER::~NDIS_BIND_PROTOCOL_DRIVER((NDIS_BIND_PROTOCOL_DRIVER *)P);
      ExFreePoolWithTag(P, 0x44745042u);
    }
  }
  else
  {
    *a2 = 0LL;
  }
  return a2;
}
