/*
 * XREFs of ?NdisTraceLoggingRssConfiguration@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CONFIGURATION_PARAMETER@@H@Z @ 0x1C00344C8
 * Callers:
 *     ?ndisReadRssKeywords@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0034254 (-ndisReadRssKeywords@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C0023378 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x1C0034560 (--$Write@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_.c)
 */

void __fastcall NdisTraceLoggingRssConfiguration(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_CONFIGURATION_PARAMETER *a2)
{
  char v3; // al
  int v4; // ecx
  int v5; // r8d
  int v6; // r10d
  __int64 v7; // r11
  int v8; // r9d
  int v9; // eax
  int v10; // [rsp+40h] [rbp-18h] BYREF
  _GUID *p_InterfaceGuid; // [rsp+48h] [rbp-10h] BYREF
  int v12; // [rsp+78h] [rbp+20h] BYREF

  if ( (unsigned int)dword_1C00F4210 > 5 )
  {
    v3 = tlgKeywordOn((__int64)&dword_1C00F4210, 0x200000000000LL);
    v8 = 0;
    if ( v3 )
    {
      if ( v6 )
        v9 = 0;
      else
        v9 = *(_DWORD *)(v7 + 8);
      v12 = v9;
      p_InterfaceGuid = &a1->InterfaceGuid;
      LOBYTE(v8) = v6 == 0;
      v10 = v8;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<16>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v4,
        (unsigned int)&unk_1C00DE50F,
        v5,
        v8,
        (__int64)&p_InterfaceGuid,
        (__int64)&v10,
        (__int64)&v12);
    }
  }
}
