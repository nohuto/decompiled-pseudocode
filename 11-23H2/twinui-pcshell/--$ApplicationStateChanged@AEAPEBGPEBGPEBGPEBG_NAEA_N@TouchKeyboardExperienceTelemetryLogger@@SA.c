/*
 * XREFs of ??$ApplicationStateChanged@AEAPEBGPEBGPEBGPEBG_NAEA_N@TouchKeyboardExperienceTelemetryLogger@@SAXAEAPEBG$$QEAPEBG11$$QEA_NAEA_N@Z @ 0x180204D6C
 * Callers:
 *     ?OnApplicationStateChanged_Old@TouchKeyboardExperienceManager@@AEAAJPEBGW4PLM_STATE_CHANGE@@@Z @ 0x18020AA5C (-OnApplicationStateChanged_Old@TouchKeyboardExperienceManager@@AEAAJPEBGW4PLM_STATE_CHANGE@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@G@@U1@U1@U1@U?$_tlgWrapperByVal@$00@@U2@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@333AEBU?$_tlgWrapperByVal@$00@@4AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x180001680 (--$Write@U-$_tlgWrapSz@G@@U1@U1@U1@U-$_tlgWrapperByVal@$00@@U2@U-$_tlgWrapperByVal@$07@@@-$_tlgW.c)
 *     ?Provider@TouchKeyboardExperienceTraceLogging@@SAQEBU_tlgProvider_t@@XZ @ 0x1800C386C (-Provider@TouchKeyboardExperienceTraceLogging@@SAQEBU_tlgProvider_t@@XZ.c)
 *     _tlgKeywordOn @ 0x1800C3AF4 (_tlgKeywordOn.c)
 */

char __fastcall TouchKeyboardExperienceTelemetryLogger::ApplicationStateChanged<unsigned short const * &,unsigned short const *,unsigned short const *,unsigned short const *,bool,bool &>(
        __int64 *a1,
        __int64 *a2,
        __int64 *a3,
        __int64 *a4,
        char *a5,
        char *a6)
{
  const struct _tlgProvider_t *v10; // rax
  __int64 v11; // r8
  __int64 v12; // r9
  int v13; // r10d
  char v14; // dl
  char v15; // cl
  char v17; // [rsp+68h] [rbp+17h] BYREF
  char v18; // [rsp+69h] [rbp+18h] BYREF
  __int64 v19; // [rsp+70h] [rbp+1Fh] BYREF
  __int64 v20; // [rsp+78h] [rbp+27h] BYREF
  __int64 v21; // [rsp+80h] [rbp+2Fh] BYREF
  __int64 v22; // [rsp+88h] [rbp+37h] BYREF
  __int64 v23; // [rsp+90h] [rbp+3Fh] BYREF

  v10 = TouchKeyboardExperienceTraceLogging::Provider((__int64)a1);
  if ( *(_DWORD *)v10 > 5u )
  {
    LOBYTE(v10) = tlgKeywordOn((__int64)v10, 0x400000000000LL);
    if ( (_BYTE)v10 )
    {
      v19 = 0x1000000LL;
      v14 = *a6;
      v15 = *a5;
      v20 = *a4;
      v21 = *a3;
      v22 = *a2;
      v23 = *a1;
      v17 = v14;
      v18 = v15;
      LOBYTE(v10) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<8>>(
                      v13,
                      (int)&dword_18085CEE8,
                      v11,
                      v12,
                      (const WCHAR **)&v23,
                      (const WCHAR **)&v22,
                      (const WCHAR **)&v21,
                      (const WCHAR **)&v20,
                      (__int64)&v18,
                      (__int64)&v17,
                      (__int64)&v19);
    }
  }
  return (char)v10;
}
