/*
 * XREFs of ?NdisTraceLoggingNDKCapabilities@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAT_NDIS_MINIPORT_ADAPTER_ATTRIBUTES@@@Z @ 0x1C008B22C
 * Callers:
 *     NdisMSetMiniportAttributes @ 0x1C0018430 (NdisMSetMiniportAttributes.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C0023508 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$00@@U?$_tlgWrapperByVal@$03@@U3@U3@U3@U3@U3@U3@U3@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$00@@AEBU?$_tlgWrapperByVal@$03@@5555555AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1C0089208 (--$Write@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapperByVal@$00@@U-$_tlgWrapperByVal@$03@@U3@U3@U3@U.c)
 */

void __fastcall NdisTraceLoggingNDKCapabilities(
        struct _NDIS_MINIPORT_BLOCK *a1,
        union _NDIS_MINIPORT_ADAPTER_ATTRIBUTES *a2)
{
  int v2; // ebx
  int v3; // edi
  int v4; // esi
  int v5; // r14d
  int v6; // r15d
  int v7; // r12d
  __int64 v8; // r13
  _DWORD *MiniportAddDeviceContext; // rax
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  int v13; // r10d
  int v14; // r11d
  int v15; // [rsp+80h] [rbp-9h] BYREF
  int v16; // [rsp+84h] [rbp-5h] BYREF
  int v17; // [rsp+88h] [rbp-1h] BYREF
  int v18; // [rsp+8Ch] [rbp+3h] BYREF
  int v19; // [rsp+90h] [rbp+7h] BYREF
  int v20; // [rsp+94h] [rbp+Bh] BYREF
  int v21; // [rsp+98h] [rbp+Fh] BYREF
  _QWORD v22[8]; // [rsp+A0h] [rbp+17h] BYREF
  struct _NDIS_MINIPORT_BLOCK *v23; // [rsp+F0h] [rbp+67h] BYREF
  char v24; // [rsp+100h] [rbp+77h] BYREF
  int v25; // [rsp+108h] [rbp+7Fh] BYREF

  v23 = a1;
  v2 = 0;
  v3 = 0;
  v4 = 0;
  v5 = 0;
  v6 = 0;
  v7 = 0;
  v8 = 0LL;
  if ( a1 )
  {
    if ( a2 )
    {
      if ( a2->NDKAttributes.Enabled )
      {
        MiniportAddDeviceContext = a2->AddDeviceRegistrationAttributes.MiniportAddDeviceContext;
        if ( MiniportAddDeviceContext )
        {
          v2 = MiniportAddDeviceContext[4];
          v3 = MiniportAddDeviceContext[5];
          v4 = MiniportAddDeviceContext[6];
          v5 = MiniportAddDeviceContext[7];
          v6 = MiniportAddDeviceContext[8];
          v7 = MiniportAddDeviceContext[9];
          v8 = *((_QWORD *)MiniportAddDeviceContext + 5);
        }
      }
    }
  }
  if ( (unsigned int)dword_1C00F4210 > 5 )
  {
    if ( tlgKeywordOn((__int64)&dword_1C00F4210, 0x200000000000LL) )
    {
      v23 = (struct _NDIS_MINIPORT_BLOCK *)((char *)v23 + 4008);
      v22[0] = v8;
      v25 = v7;
      v15 = v6;
      v16 = v5;
      v17 = v4;
      v18 = v3;
      v19 = v2;
      v20 = v14;
      v21 = v13;
      v24 = v12;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<16>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
        v10,
        byte_1C00DD8B5,
        v11,
        v12,
        (__int64 *)&v23,
        (__int64)&v24,
        (__int64)&v21,
        (__int64)&v20,
        (__int64)&v19,
        (__int64)&v18,
        (__int64)&v17,
        (__int64)&v16,
        (__int64)&v15,
        (__int64)&v25,
        (__int64)v22);
    }
  }
}
