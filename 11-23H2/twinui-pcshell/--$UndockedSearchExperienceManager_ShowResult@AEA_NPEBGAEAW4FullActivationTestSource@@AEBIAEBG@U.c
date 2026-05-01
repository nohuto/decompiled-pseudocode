/*
 * XREFs of ??$UndockedSearchExperienceManager_ShowResult@AEA_NPEBGAEAW4FullActivationTestSource@@AEBIAEBG@UndockedSearchExperienceManagerTIPTelemetry@@SAXAEA_N$$QEAPEBGAEAW4FullActivationTestSource@@AEBIAEBG@Z @ 0x1801E6BE0
 * Callers:
 *     ?on_result@?$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip2@@EEAAXAEBUTipReportingInfo@@@Z @ 0x18046D4C0 (-on_result@-$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip2@@EEAAXAEBUTipReporting.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$00@@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U3@U3@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$00@@AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@55AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1800010E4 (--$Write@U-$_tlgWrapperByVal@$00@@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U3@U3@U-$_tlgWrapper.c)
 *     ?Provider@SearchAppLauncherLogging@@SAQEBU_tlgProvider_t@@XZ @ 0x18008EEB8 (-Provider@SearchAppLauncherLogging@@SAQEBU_tlgProvider_t@@XZ.c)
 *     _tlgKeywordOn @ 0x1800C3AF4 (_tlgKeywordOn.c)
 */

char __fastcall UndockedSearchExperienceManagerTIPTelemetry::UndockedSearchExperienceManager_ShowResult<bool &,unsigned short const *,enum FullActivationTestSource &,unsigned int const &,unsigned short const &>(
        char *a1,
        __int64 *a2,
        int *a3,
        int *a4,
        unsigned __int16 *a5)
{
  const struct _tlgProvider_t *v9; // rax
  __int64 v10; // r8
  __int64 v11; // r9
  int v12; // r10d
  int v13; // edx
  char v15; // [rsp+50h] [rbp-20h] BYREF
  int v16; // [rsp+54h] [rbp-1Ch] BYREF
  int v17; // [rsp+58h] [rbp-18h] BYREF
  int v18; // [rsp+5Ch] [rbp-14h] BYREF
  __int64 v19; // [rsp+60h] [rbp-10h] BYREF
  __int64 v20; // [rsp+68h] [rbp-8h] BYREF

  v9 = SearchAppLauncherLogging::Provider((__int64)a1);
  if ( *(_DWORD *)v9 > 5u )
  {
    LOBYTE(v9) = tlgKeywordOn((__int64)v9, 0x400000000000LL);
    if ( (_BYTE)v9 )
    {
      v17 = *a4;
      v18 = *a3;
      v13 = *a5;
      v20 = *a2;
      v15 = *a1;
      v16 = v13;
      v19 = 0x1000000LL;
      LOBYTE(v9) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<1>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
                     v12,
                     (int)&dword_18085292B,
                     v10,
                     v11,
                     (__int64)&v15,
                     (const WCHAR **)&v20,
                     (__int64)&v18,
                     (__int64)&v17,
                     (__int64)&v16,
                     (__int64)&v19);
    }
  }
  return (char)v9;
}
