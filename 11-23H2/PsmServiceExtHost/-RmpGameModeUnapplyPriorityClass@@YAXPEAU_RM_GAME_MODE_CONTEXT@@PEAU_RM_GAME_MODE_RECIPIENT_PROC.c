/*
 * XREFs of ?RmpGameModeUnapplyPriorityClass@@YAXPEAU_RM_GAME_MODE_CONTEXT@@PEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x18008A1D0
 * Callers:
 *     <none>
 * Callees:
 *     _tlgKeywordOn @ 0x180028870 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapperByVal@$00@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapperByVal@$00@@4@Z @ 0x180087B54 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapperByVal@$00@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgs @ 0x18008F744 (MicrosoftTelemetryAssertTriggeredNoArgs.c)
 */

void __fastcall RmpGameModeUnapplyPriorityClass(struct _RM_GAME_MODE_CONTEXT *a1, HANDLE *a2)
{
  char *v3; // rdi
  NTSTATUS v4; // esi
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  NTSTATUS v8[10]; // [rsp+40h] [rbp-28h] BYREF
  char v9; // [rsp+78h] [rbp+10h] BYREF
  char v10; // [rsp+80h] [rbp+18h] BYREF
  int v11; // [rsp+88h] [rbp+20h] BYREF

  v3 = (char *)(a2 + 21);
  v4 = NtSetInformationProcess(a2[5], ProcessPriorityClass, a2 + 21, 2u);
  if ( v4 < 0 )
    MicrosoftTelemetryAssertTriggeredNoArgs();
  if ( (unsigned int)dword_1800DB1E0 > 4 && tlgKeywordOn((__int64)&dword_1800DB1E0, 1LL) )
  {
    v9 = *((_BYTE *)a2 + 169);
    v10 = *v3;
    v11 = *((_DWORD *)a2 + 27);
    v8[0] = v4;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>>(
      v5,
      byte_1800C4E33,
      v6,
      v7,
      (__int64)v8,
      (__int64)&v11,
      (__int64)&v10,
      (__int64)&v9);
  }
}
