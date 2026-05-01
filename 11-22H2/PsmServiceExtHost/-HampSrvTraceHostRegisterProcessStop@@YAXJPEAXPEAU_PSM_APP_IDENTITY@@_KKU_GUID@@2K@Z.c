/*
 * XREFs of ?HampSrvTraceHostRegisterProcessStop@@YAXJPEAXPEAU_PSM_APP_IDENTITY@@_KKU_GUID@@2K@Z @ 0x18004CCCC
 * Callers:
 *     ?HamSrvRegisterDesktopBridgeProcess@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAXK1@Z @ 0x180001F1C (-HamSrvRegisterDesktopBridgeProcess@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAXK1@Z.c)
 *     ?HamSrvRegisterProcess@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAX1PEAU_PSM_APP_IDENTITY@@_KK1@Z @ 0x18002D700 (-HamSrvRegisterProcess@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAX1PEAU_PSM_APP_IDENTITY@@_KK1@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapSid@U_SID@@@@U1@U?$_tlgWrapperByRef@$0BA@@@U3@U1@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapSid@U_SID@@@@3AEBU?$_tlgWrapperByRef@$0BA@@@535@Z @ 0x18000120C (--$Write@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapSid.c)
 *     _tlgKeywordOn @ 0x180028870 (_tlgKeywordOn.c)
 */

void __fastcall HampSrvTraceHostRegisterProcessStop(
        int a1,
        void *a2,
        struct _PSM_APP_IDENTITY *a3,
        __int64 a4,
        unsigned int a5,
        struct _GUID *a6,
        unsigned __int64 a7,
        unsigned int a8)
{
  int *v9; // r8
  __int64 v10; // r9
  void *v11; // r10
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned int v15; // [rsp+80h] [rbp-19h] BYREF
  unsigned int v16; // [rsp+84h] [rbp-15h] BYREF
  int v17; // [rsp+88h] [rbp-11h] BYREF
  DWORD ProcessId; // [rsp+8Ch] [rbp-Dh] BYREF
  int v19; // [rsp+90h] [rbp-9h] BYREF
  __int64 v20; // [rsp+98h] [rbp-1h] BYREF
  unsigned __int64 v21; // [rsp+A0h] [rbp+7h] BYREF
  struct _GUID *v22; // [rsp+A8h] [rbp+Fh] BYREF
  int *v23; // [rsp+B0h] [rbp+17h] BYREF
  __int64 v24; // [rsp+B8h] [rbp+1Fh] BYREF
  const unsigned __int16 *v25; // [rsp+C0h] [rbp+27h] BYREF

  if ( (unsigned int)dword_1800DB218 > 4 && tlgKeywordOn((__int64)&dword_1800DB218, 0x400000000008LL) )
  {
    v15 = a8;
    v21 = a7;
    v22 = a6;
    v16 = a5;
    v23 = v9 + 118;
    v17 = *v9;
    v25 = (const unsigned __int16 *)(v9 + 2);
    v20 = 0x1000000LL;
    v24 = v10;
    v19 = a1;
    ProcessId = GetProcessId(v11);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSid<_SID>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
      v12,
      (int)&unk_1800C1B36,
      v13,
      v14,
      (__int64)&v19,
      (__int64)&ProcessId,
      &v25,
      (__int64)&v24,
      (__int64)&v17,
      (__int64 *)&v23,
      (__int64)&v16,
      (__int64 *)&v22,
      (__int64)&v21,
      (__int64)&v15,
      (__int64)&v20);
  }
}
