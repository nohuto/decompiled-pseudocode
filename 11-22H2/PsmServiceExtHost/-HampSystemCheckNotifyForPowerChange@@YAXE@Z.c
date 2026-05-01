/*
 * XREFs of ?HampSystemCheckNotifyForPowerChange@@YAXE@Z @ 0x18008E500
 * Callers:
 *     ?HampPdcDamExitWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18007E1F0 (-HampPdcDamExitWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     ?HampPdcEnterDamPhase@@YAXPEAU_HAM_PDC_CONTEXT@@@Z @ 0x18007E5BC (-HampPdcEnterDamPhase@@YAXPEAU_HAM_PDC_CONTEXT@@@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x180028870 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x180049550 (__security_check_cookie.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$00@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$00@@4@Z @ 0x18008BDBC (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$00@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 */

void __fastcall HampSystemCheckNotifyForPowerChange(char a1)
{
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 v4; // r8
  __int64 v5; // r9
  char v6; // [rsp+40h] [rbp-30h] BYREF
  _BYTE v7[3]; // [rsp+41h] [rbp-2Fh] BYREF
  ULONG v8; // [rsp+44h] [rbp-2Ch] BYREF
  _DWORD InputBuffer[3]; // [rsp+48h] [rbp-28h] BYREF
  int v10; // [rsp+54h] [rbp-1Ch]
  int v11; // [rsp+58h] [rbp-18h]

  InputBuffer[1] = 0;
  v11 = -1;
  InputBuffer[0] = 90;
  InputBuffer[2] = 2;
  v10 = a1 == 0;
  NtPowerInformation(SystemPowerStateLogging|0x40, InputBuffer, 0x14u, 0LL, 0);
  if ( (unsigned int)dword_1800DB218 > 4 && tlgKeywordOn((__int64)&dword_1800DB218, 8LL) )
  {
    v6 = a1;
    v7[0] = 0;
    v8 = v2;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>>(
      (__int64)&dword_1800DB218,
      byte_1800C68C7,
      v2,
      v3,
      (__int64)&v8,
      (__int64)v7,
      (__int64)&v6);
  }
  if ( !a1 )
  {
    v10 = 2;
    NtPowerInformation(SystemPowerStateLogging|0x40, InputBuffer, 0x14u, 0LL, 0);
    if ( (unsigned int)dword_1800DB218 > 4 && tlgKeywordOn((__int64)&dword_1800DB218, 8LL) )
    {
      v7[0] = 0;
      v6 = 1;
      v8 = v4;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>>(
        (__int64)&dword_1800DB218,
        byte_1800C68C7,
        v4,
        v5,
        (__int64)&v8,
        (__int64)&v6,
        (__int64)v7);
    }
  }
}
