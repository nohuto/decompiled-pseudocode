/*
 * XREFs of ?HampAppSaveTerminateReason@@YAXPEAU_HAM_APPLICATION@@W4_HAM_TERMINATE_REASON@@@Z @ 0x180041F2C
 * Callers:
 *     ?HampHostNotifyZeroProcess@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@KPEAK@Z @ 0x180034730 (-HampHostNotifyZeroProcess@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINAT.c)
 * Callees:
 *     _tlgKeywordOn @ 0x180028870 (_tlgKeywordOn.c)
 *     ?HampUtilSaveRegistryTerminateReason@@YAJPEBGPEAXW4_HAM_TERMINATE_REASON@@@Z @ 0x180041FDC (-HampUtilSaveRegistryTerminateReason@@YAJPEBGPEAXW4_HAM_TERMINATE_REASON@@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapSz@G@@U?$_tlgWrapSid@U_SID@@@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapSid@U_SID@@@@@Z @ 0x1800420E8 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$01@@U-$_tlgWrapSz@G@@U-$_tlgWrapSid@U_SID.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@U?$_tlgWrapSid@U_SID@@@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapSid@U_SID@@@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x18007F010 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@U-$_tlgWrapSid@U_SID@@@@U-$_tlgWrapperByVal@$.c)
 */

void __fastcall HampAppSaveTerminateReason(__int64 a1, unsigned int a2)
{
  int v3; // eax
  __int64 v4; // rcx

  if ( (*(_DWORD *)(a1 + 616) & 0x10000) == 0 )
  {
    v3 = HampUtilSaveRegistryTerminateReason(a1 + 96, *(_QWORD *)(a1 + 88) + 228LL, a2);
    if ( v3 < 0 )
    {
      if ( (unsigned int)dword_1800DB218 > 4 && tlgKeywordOn((__int64)&dword_1800DB218, 0x400000000008LL) )
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSid<_SID>,_tlgWrapperByVal<8>>(
          v4,
          &unk_1800C29E0);
    }
    else if ( (unsigned int)dword_1800DB218 > 5 )
    {
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapSz<unsigned short>,_tlgWrapSid<_SID>>(
        *(unsigned __int16 *)(a1 + 616),
        &unk_1800C28E0,
        (unsigned int)v3);
    }
  }
}
