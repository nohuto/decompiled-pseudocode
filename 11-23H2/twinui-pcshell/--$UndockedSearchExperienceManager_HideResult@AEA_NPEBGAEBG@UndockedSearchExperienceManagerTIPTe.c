/*
 * XREFs of ??$UndockedSearchExperienceManager_HideResult@AEA_NPEBGAEBG@UndockedSearchExperienceManagerTIPTelemetry@@SAXAEA_N$$QEAPEBGAEBG@Z @ 0x1801E6A68
 * Callers:
 *     ?on_result@_tip_SearchHideTest@@QEAAXAEBUTipReportingInfo@@@Z @ 0x1801F0FE8 (-on_result@_tip_SearchHideTest@@QEAAXAEBUTipReportingInfo@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$00@@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$00@@AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1800011D0 (--$Write@U-$_tlgWrapperByVal@$00@@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@.c)
 *     ?Provider@SearchAppLauncherLogging@@SAQEBU_tlgProvider_t@@XZ @ 0x18008EEB8 (-Provider@SearchAppLauncherLogging@@SAQEBU_tlgProvider_t@@XZ.c)
 *     _tlgKeywordOn @ 0x1800C3AF4 (_tlgKeywordOn.c)
 */

char __fastcall UndockedSearchExperienceManagerTIPTelemetry::UndockedSearchExperienceManager_HideResult<bool &,unsigned short const *,unsigned short const &>(
        _BYTE *a1,
        __int64 *a2,
        unsigned __int16 *a3)
{
  const struct _tlgProvider_t *v6; // rax
  __int64 v7; // r8
  __int64 v8; // r9
  int v9; // ecx
  __int64 v11; // [rsp+40h] [rbp-28h] BYREF
  __int64 v12; // [rsp+48h] [rbp-20h] BYREF
  __int64 v13; // [rsp+50h] [rbp-18h] BYREF
  __int64 v14; // [rsp+88h] [rbp+20h] BYREF

  v6 = SearchAppLauncherLogging::Provider((__int64)a1);
  if ( *(_DWORD *)v6 > 5u )
  {
    LOBYTE(v6) = tlgKeywordOn((__int64)v6, 0x400000000000LL);
    if ( (_BYTE)v6 )
    {
      v9 = *a3;
      v13 = *a2;
      LOBYTE(v14) = *a1;
      LODWORD(v11) = v9;
      v12 = 0x1000000LL;
      LOBYTE(v6) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<1>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
                     v8,
                     (int)&dword_1808528C4,
                     v7,
                     v8,
                     (__int64)&v14,
                     (const WCHAR **)&v13,
                     (__int64)&v11,
                     (__int64)&v12);
    }
  }
  return (char)v6;
}
