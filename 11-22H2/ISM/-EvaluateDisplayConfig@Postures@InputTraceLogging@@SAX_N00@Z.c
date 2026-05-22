/*
 * XREFs of ?EvaluateDisplayConfig@Postures@InputTraceLogging@@SAX_N00@Z @ 0x18006E370
 * Callers:
 *     ?IsValidTabletDisplayConfig@DevicePostureHelpers@@YA_NXZ @ 0x18006ED90 (-IsValidTabletDisplayConfig@DevicePostureHelpers@@YA_NXZ.c)
 * Callees:
 *     ?Provider@InputTraceLogging@@SAQEBU_tlgProvider_t@@XZ @ 0x1800B4E40 (-Provider@InputTraceLogging@@SAQEBU_tlgProvider_t@@XZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$00@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$00@@33@Z @ 0x1800CD4FC (--$Write@U-$_tlgWrapperByVal@$00@@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_.c)
 */

void __fastcall InputTraceLogging::Postures::EvaluateDisplayConfig(char a1, char a2, char a3)
{
  const struct _tlgProvider_t *v6; // rax
  int v7; // r9d
  __int64 v8; // r8
  char v9; // [rsp+40h] [rbp-18h] BYREF
  _BYTE v10[23]; // [rsp+41h] [rbp-17h] BYREF
  char v11; // [rsp+78h] [rbp+20h] BYREF

  v6 = InputTraceLogging::Provider();
  if ( *(_DWORD *)v6 > 4u && (*((_BYTE *)v6 + 16) & 2) != 0 )
  {
    v8 = *((_QWORD *)v6 + 3) & 2LL;
    if ( v8 == *((_QWORD *)v6 + 3) )
    {
      v11 = a3;
      v9 = a2;
      v10[0] = a1;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>>(
        (_DWORD)v6,
        (unsigned int)&unk_1802349A8,
        v8,
        v7,
        (__int64)v10,
        (__int64)&v9,
        (__int64)&v11);
    }
  }
}
