/*
 * XREFs of ?Glitch@CCrossProcessEndpointTraceLogger@@QEAAXW4CpGlitchEvent@@PEBDI@Z @ 0x140002FF4
 * Callers:
 *     ?GetInputDataPointer@CCrossProcessServerInputEndpoint@@UEAAXPEAUAPO_CONNECTION_PROPERTY@@PEAUAE_CURRENT_POSITION@@@Z @ 0x14001E050 (-GetInputDataPointer@CCrossProcessServerInputEndpoint@@UEAAXPEAUAPO_CONNECTION_PROPERTY@@PEAUAE_.c)
 *     ?GetInputDataPointer@CCrossProcessClientInputEndpoint@@UEAAXPEAUAPO_CONNECTION_PROPERTY@@PEAUAE_CURRENT_POSITION@@@Z @ 0x140089EE0 (-GetInputDataPointer@CCrossProcessClientInputEndpoint@@UEAAXPEAUAPO_CONNECTION_PROPERTY@@PEAUAE_.c)
 *     ?GetOutputDataPointer@CCrossProcessClientOutputEndpoint@@UEAA_KIPEAUAE_CURRENT_POSITION@@@Z @ 0x14008A790 (-GetOutputDataPointer@CCrossProcessClientOutputEndpoint@@UEAA_KIPEAUAE_CURRENT_POSITION@@@Z.c)
 *     ?GetOutputDataPointer@CCrossProcessServerOutputEndpoint@@UEAA_KIPEAUAE_CURRENT_POSITION@@@Z @ 0x14008BE30 (-GetOutputDataPointer@CCrossProcessServerOutputEndpoint@@UEAA_KIPEAUAE_CURRENT_POSITION@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@4@Z @ 0x140089920 (--$Write@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@@-$_tlgWriteTem.c)
 */

__int64 __fastcall CCrossProcessEndpointTraceLogger::Glitch(__int64 a1, unsigned int a2, __int64 a3, int a4)
{
  int v7; // [rsp+40h] [rbp-28h] BYREF
  __int64 v8; // [rsp+48h] [rbp-20h] BYREF
  _QWORD v9[3]; // [rsp+50h] [rbp-18h] BYREF
  unsigned int v10; // [rsp+70h] [rbp+8h] BYREF
  int v11; // [rsp+88h] [rbp+20h] BYREF

  v11 = a4;
  v7 = 1;
  if ( (unsigned int)dword_1400C0010 > 5 && (byte_1400C0020 & 2) != 0 && (qword_1400C0028 & 2) == qword_1400C0028 )
  {
    v11 = 1;
    v9[0] = a1 + 8;
    v8 = a3;
    v10 = a2;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<16>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
      1,
      (unsigned int)&unk_1400A717A,
      a3,
      a4,
      (__int64)v9,
      (__int64)&v10,
      (__int64)&v8,
      (__int64)&v11);
  }
  (**(void (__fastcall ***)(__int64, _QWORD, int *))(a1 + 104))(a1 + 104, 0LL, &v7);
  return (**(__int64 (__fastcall ***)(__int64, _QWORD, int *))(a1 + 104))(a1 + 104, a2, &v7);
}
