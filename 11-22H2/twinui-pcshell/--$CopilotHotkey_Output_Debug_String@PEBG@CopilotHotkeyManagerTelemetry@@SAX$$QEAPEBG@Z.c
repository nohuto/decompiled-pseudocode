/*
 * XREFs of ??$CopilotHotkey_Output_Debug_String@PEBG@CopilotHotkeyManagerTelemetry@@SAX$$QEAPEBG@Z @ 0x18025DAF4
 * Callers:
 *     CopilotHotkeyManager::TrySendingCopilotHardwareKeyLongPressSignal$_ResumeCoro$1 @ 0x180274070 (CopilotHotkeyManager--TrySendingCopilotHardwareKeyLongPressSignal$_ResumeCoro$1.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@@Z @ 0x1800B49D8 (--$Write@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 *     ?Provider@CopilotHotkeyManagerTelemetry@@SAQEBU_tlgProvider_t@@XZ @ 0x1806FDC50 (-Provider@CopilotHotkeyManagerTelemetry@@SAQEBU_tlgProvider_t@@XZ.c)
 */

const struct _tlgProvider_t *__fastcall CopilotHotkeyManagerTelemetry::CopilotHotkey_Output_Debug_String<unsigned short const *>(
        __int64 *a1)
{
  const struct _tlgProvider_t *result; // rax
  __int64 v3; // r9
  __int64 v4; // [rsp+48h] [rbp+10h] BYREF

  result = CopilotHotkeyManagerTelemetry::Provider();
  if ( *(_DWORD *)result > 5u )
  {
    v4 = *a1;
    return (const struct _tlgProvider_t *)_tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>>(
                                            (int)result,
                                            (int)&dword_18087BCCF,
                                            0,
                                            v3,
                                            (const WCHAR **)&v4);
  }
  return result;
}
