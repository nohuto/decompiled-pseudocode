/*
 * XREFs of ?HampSystemCheckNotifyForPowerChange@@YAXE@Z @ 0x180092AFC
 * Callers:
 *     ?HampPdcDamExitWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18007EF80 (-HampPdcDamExitWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     ?HampPdcEnterDamPhase@@YAXPEAU_HAM_PDC_CONTEXT@@@Z @ 0x18007F34C (-HampPdcEnterDamPhase@@YAXPEAU_HAM_PDC_CONTEXT@@@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x18002D67C (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$00@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$00@@4@Z @ 0x18008FE40 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$00@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 */

void __fastcall HampSystemCheckNotifyForPowerChange(char a1)
{
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 v4; // r8
  __int64 v5; // r9
  _QWORD InputBuffer[2]; // [rsp+40h] [rbp-10h] BYREF
  char v7; // [rsp+78h] [rbp+28h] BYREF
  char v8; // [rsp+80h] [rbp+30h] BYREF
  ULONG v9; // [rsp+88h] [rbp+38h] BYREF

  if ( !(unsigned __int8)RtlIsMultiSessionSku() )
  {
    InputBuffer[0] = 0x10000000000LL;
    BYTE4(InputBuffer[0]) = a1;
    ZwPowerInformation(ProcessorStateHandler|0x40, InputBuffer, 8u, 0LL, 0);
    if ( (unsigned int)dword_1800DC218 > 4 && tlgKeywordOn((__int64)&dword_1800DC218, 8LL) )
    {
      v7 = a1;
      v8 = 0;
      v9 = v3;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>>(
        (__int64)&dword_1800DC218,
        byte_1800C5F90,
        v2,
        v3,
        (__int64)&v9,
        (__int64)&v8,
        (__int64)&v7);
    }
    if ( !a1 )
    {
      BYTE6(InputBuffer[0]) = 1;
      ZwPowerInformation(ProcessorStateHandler|0x40, InputBuffer, 8u, 0LL, 0);
      if ( (unsigned int)dword_1800DC218 > 4 )
      {
        if ( tlgKeywordOn((__int64)&dword_1800DC218, 8LL) )
        {
          v7 = 0;
          v8 = 1;
          v9 = v5;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>>(
            (__int64)&dword_1800DC218,
            byte_1800C5F90,
            v4,
            v5,
            (__int64)&v9,
            (__int64)&v8,
            (__int64)&v7);
        }
      }
    }
  }
}
