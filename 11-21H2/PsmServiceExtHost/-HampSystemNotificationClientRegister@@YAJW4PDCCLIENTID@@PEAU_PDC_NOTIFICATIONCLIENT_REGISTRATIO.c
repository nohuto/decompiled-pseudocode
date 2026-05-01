/*
 * XREFs of ?HampSystemNotificationClientRegister@@YAJW4PDCCLIENTID@@PEAU_PDC_NOTIFICATIONCLIENT_REGISTRATION@@PEAXPEAPEAX@Z @ 0x1800498A0
 * Callers:
 *     ?HampPdcStart@@YAJPEAU_HAM_PDC_CONTEXT@@@Z @ 0x1800497F4 (-HampPdcStart@@YAJPEAU_HAM_PDC_CONTEXT@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x180005DD8 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 *     _tlgKeywordOn @ 0x18002D67C (_tlgKeywordOn.c)
 */

__int64 __fastcall HampSystemNotificationClientRegister(__int64 a1, __int64 a2, __int64 a3, __int64 *a4)
{
  unsigned int v5; // ebx
  int v6; // ecx
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned int v10; // [rsp+30h] [rbp-18h] BYREF
  __int64 v11; // [rsp+38h] [rbp-10h] BYREF

  v5 = PdcNotificationClientRegister();
  if ( (unsigned int)dword_1800DC218 > 4 && tlgKeywordOn((__int64)&dword_1800DC218, 8LL) )
  {
    v11 = *a4;
    v10 = v5;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
      v6,
      (int)&unk_1800C620D,
      v7,
      v8,
      (__int64)&v10,
      (__int64)&v11);
  }
  return v5;
}
