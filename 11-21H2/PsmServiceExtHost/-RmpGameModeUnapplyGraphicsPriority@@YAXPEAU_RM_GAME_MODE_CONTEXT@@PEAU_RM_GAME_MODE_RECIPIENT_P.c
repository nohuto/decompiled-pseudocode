/*
 * XREFs of ?RmpGameModeUnapplyGraphicsPriority@@YAXPEAU_RM_GAME_MODE_CONTEXT@@PEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x18008C6E0
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33@Z @ 0x180006418 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_.c)
 *     _tlgKeywordOn @ 0x18002D67C (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x18004E310 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgs @ 0x180094414 (MicrosoftTelemetryAssertTriggeredNoArgs.c)
 */

void __fastcall RmpGameModeUnapplyGraphicsPriority(
        struct _RM_GAME_MODE_CONTEXT *a1,
        struct _RM_GAME_MODE_RECIPIENT_PROCESS *a2)
{
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // ecx
  __int64 v7; // r8
  __int64 v8; // r9
  int v9; // [rsp+40h] [rbp-30h] BYREF
  int v10; // [rsp+44h] [rbp-2Ch] BYREF
  int v11; // [rsp+48h] [rbp-28h] BYREF
  int v12; // [rsp+50h] [rbp-20h] BYREF
  int v13; // [rsp+54h] [rbp-1Ch]
  int v14; // [rsp+58h] [rbp-18h]
  int v15; // [rsp+5Ch] [rbp-14h]

  if ( (*((_BYTE *)a1 + 149) & 1) == 0 )
  {
    v3 = *((_DWORD *)a1 + 12);
    v13 = 0;
    v15 = v3;
    v4 = *((_DWORD *)a1 + 15);
    v12 = 16;
    v14 = v4;
    if ( (int)D3DKMTSetYieldPercentage(&v12) < 0 )
      MicrosoftTelemetryAssertTriggeredNoArgs();
    v5 = *((_DWORD *)a1 + 13);
    v13 = 0;
    v14 = v5;
    v15 = *((_DWORD *)a1 + 14);
    v12 = 16;
    if ( (int)D3DKMTSetMemoryBudgetTarget(&v12) < 0 )
      MicrosoftTelemetryAssertTriggeredNoArgs();
    if ( (unsigned int)dword_1800DC1E0 > 4 )
    {
      if ( tlgKeywordOn((__int64)&dword_1800DC1E0, 1LL) )
      {
        v9 = *((_DWORD *)a1 + 14);
        v10 = *((_DWORD *)a1 + 13);
        v11 = *((_DWORD *)a1 + 12);
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
          v6,
          (int)&unk_1800C43E4,
          v7,
          v8,
          (__int64)&v11,
          (__int64)&v10,
          (__int64)&v9);
      }
    }
  }
}
