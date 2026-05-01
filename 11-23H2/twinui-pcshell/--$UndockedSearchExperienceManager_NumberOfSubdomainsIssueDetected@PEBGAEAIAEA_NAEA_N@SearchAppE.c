/*
 * XREFs of ??$UndockedSearchExperienceManager_NumberOfSubdomainsIssueDetected@PEBGAEAIAEA_NAEA_N@SearchAppExperienceManagerTelemetry@@SAX$$QEAPEBGAEAIAEA_N2@Z @ 0x1801E6B18
 * Callers:
 *     ?DetectAndMitigateSpartanSubdomainIssue@UndockedSearchAppExperienceManager@@AEAAJXZ @ 0x1801EACB8 (-DetectAndMitigateSpartanSubdomainIssue@UndockedSearchAppExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$00@@U3@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$00@@5AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x180001008 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$00@@U3@U-$_tlgWrapperByV.c)
 *     ?Provider@SearchAppLauncherLogging@@SAQEBU_tlgProvider_t@@XZ @ 0x18008EEB8 (-Provider@SearchAppLauncherLogging@@SAQEBU_tlgProvider_t@@XZ.c)
 *     _tlgKeywordOn @ 0x1800C3AF4 (_tlgKeywordOn.c)
 */

char __fastcall SearchAppExperienceManagerTelemetry::UndockedSearchExperienceManager_NumberOfSubdomainsIssueDetected<unsigned short const *,unsigned int &,bool &,bool &>(
        __int64 *a1,
        int *a2,
        char *a3,
        char *a4)
{
  const struct _tlgProvider_t *v8; // rax
  __int64 v9; // r8
  __int64 v10; // r9
  int v11; // r10d
  char v12; // cl
  char v14; // [rsp+50h] [rbp-28h] BYREF
  char v15; // [rsp+51h] [rbp-27h] BYREF
  int v16; // [rsp+54h] [rbp-24h] BYREF
  __int64 v17; // [rsp+58h] [rbp-20h] BYREF
  __int64 v18; // [rsp+60h] [rbp-18h] BYREF

  v8 = SearchAppLauncherLogging::Provider((__int64)a1);
  if ( *(_DWORD *)v8 > 5u )
  {
    LOBYTE(v8) = tlgKeywordOn((__int64)v8, 0x800000000000LL);
    if ( (_BYTE)v8 )
    {
      v12 = *a4;
      v15 = *a3;
      v16 = *a2;
      v18 = *a1;
      v14 = v12;
      v17 = 0x1000000LL;
      LOBYTE(v8) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<8>>(
                     v11,
                     (int)&dword_180852728,
                     v9,
                     v10,
                     (const WCHAR **)&v18,
                     (__int64)&v16,
                     (__int64)&v15,
                     (__int64)&v14,
                     (__int64)&v17);
    }
  }
  return (char)v8;
}
