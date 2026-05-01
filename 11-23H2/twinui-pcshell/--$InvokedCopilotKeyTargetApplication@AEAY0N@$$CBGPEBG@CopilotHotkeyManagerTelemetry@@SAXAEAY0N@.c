/*
 * XREFs of ??$InvokedCopilotKeyTargetApplication@AEAY0N@$$CBGPEBG@CopilotHotkeyManagerTelemetry@@SAXAEAY0N@$$CBG$$QEAPEBG@Z @ 0x18025DC30
 * Callers:
 *     CopilotHotkeyManager::CancelHoldAsync$_ResumeCoro$1 @ 0x180261610 (CopilotHotkeyManager--CancelHoldAsync$_ResumeCoro$1.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1800C3AF4 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U1@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@3AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x180509684 (--$Write@U-$_tlgWrapSz@G@@U1@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
 *     ?Provider@CopilotHotkeyManagerTelemetry@@SAQEBU_tlgProvider_t@@XZ @ 0x1806FDC50 (-Provider@CopilotHotkeyManagerTelemetry@@SAQEBU_tlgProvider_t@@XZ.c)
 */

char __fastcall CopilotHotkeyManagerTelemetry::InvokedCopilotKeyTargetApplication<unsigned short const (&)[13],unsigned short const *>(
        __int64 a1,
        __int64 *a2)
{
  const struct _tlgProvider_t *v3; // rax
  int v4; // r9d
  __int64 v5; // rcx
  __int64 v7; // [rsp+50h] [rbp+8h] BYREF
  __int64 v8; // [rsp+60h] [rbp+18h] BYREF
  __int64 v9; // [rsp+68h] [rbp+20h] BYREF

  v7 = a1;
  v3 = CopilotHotkeyManagerTelemetry::Provider();
  if ( *(_DWORD *)v3 > 5u )
  {
    LOBYTE(v3) = tlgKeywordOn((__int64)v3, 0x400000000000LL);
    if ( (_BYTE)v3 )
    {
      v5 = *a2;
      v9 = (__int64)L"PressAndHold";
      v8 = v5;
      v7 = 0x2000000LL;
      LOBYTE(v3) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>>(
                     v4,
                     (int)&dword_18087BD0D,
                     (__int64)&v9,
                     (__int64)&v8,
                     (__int64)&v7);
    }
  }
  return (char)v3;
}
