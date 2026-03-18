/*
 * XREFs of ?WriteDxgDiagnosticsEvent_MONITOR_MGR@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C001E898
 * Callers:
 *     ?WriteDxgDiagnosticsEvent@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C00126E0 (-WriteDxgDiagnosticsEvent@@YAXPEAU_DXGK_DIAG_HEADER@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U_tlgWrapperBinary@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3AEBU_tlgWrapperBinary@@@Z @ 0x1C00015A8 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U_tlgWrapperBinary@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProv.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     _tlgKeywordOn @ 0x1C0012AB4 (_tlgKeywordOn.c)
 */

void __fastcall WriteDxgDiagnosticsEvent_MONITOR_MGR(struct _DXGK_DIAG_HEADER *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  void *v6; // rdx
  __int64 v7; // rdx
  struct _DXGK_DIAG_HEADER *v8; // [rsp+40h] [rbp-10h] BYREF
  __int16 v9; // [rsp+48h] [rbp-8h]
  int v10; // [rsp+68h] [rbp+18h] BYREF
  int v11; // [rsp+70h] [rbp+20h] BYREF

  if ( *((_BYTE *)DXGGLOBAL_GetGlobal() + 304512) )
  {
    if ( (unsigned int)dword_1C012F8E0 > 1
      && tlgKeywordOn((__int64)&dword_1C012F8E0, 0x200000000020LL)
      && tlgKeywordOn((__int64)&dword_1C012F8E0, v2) )
    {
      v6 = &unk_1C00989C7;
LABEL_10:
      v9 = *((_WORD *)a1 + 2);
      v10 = *((_DWORD *)a1 + 10);
      v8 = a1;
      v11 = 8;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperBinary>(
        v3,
        (int)v6,
        v4,
        v5,
        (__int64)&v11,
        (__int64)&v10,
        (__int64 *)&v8);
    }
  }
  else if ( (unsigned int)dword_1C012F8E0 > 4
         && tlgKeywordOn((__int64)&dword_1C012F8E0, 0x200000000020LL)
         && tlgKeywordOn((__int64)&dword_1C012F8E0, v7) )
  {
    v6 = &unk_1C0098993;
    goto LABEL_10;
  }
}
