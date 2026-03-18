/*
 * XREFs of ?WriteDxgDiagnosticsEvent_DRV_CDS@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C001EC6C
 * Callers:
 *     ?WriteDxgDiagnosticsEvent@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C00126E0 (-WriteDxgDiagnosticsEvent@@YAXPEAU_DXGK_DIAG_HEADER@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U_tlgWrapperBinary@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3AEBU_tlgWrapperBinary@@@Z @ 0x1C00015A8 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U_tlgWrapperBinary@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProv.c)
 *     _tlgKeywordOn @ 0x1C0012AB4 (_tlgKeywordOn.c)
 */

void __fastcall WriteDxgDiagnosticsEvent_DRV_CDS(struct _DXGK_DIAG_HEADER *a1)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // [rsp+40h] [rbp-18h] BYREF
  __int16 v6; // [rsp+48h] [rbp-10h]
  int v7; // [rsp+68h] [rbp+10h] BYREF
  int v8; // [rsp+70h] [rbp+18h] BYREF

  if ( (unsigned int)dword_1C012F8E0 > 4 && tlgKeywordOn((__int64)&dword_1C012F8E0, 0x200000000008LL) )
  {
    if ( tlgKeywordOn((__int64)&dword_1C012F8E0, v1) )
    {
      v6 = *(_WORD *)(v4 + 4);
      v7 = *(_DWORD *)(v4 + 40);
      v5 = v4;
      v8 = 8;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperBinary>(
        v2,
        (int)&unk_1C0098E9B,
        v3,
        v4,
        (__int64)&v8,
        (__int64)&v7,
        &v5);
    }
  }
}
