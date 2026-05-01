/*
 * XREFs of ?HampSrvTraceActivityCreateStop@@YAXJ_KPEAU_HAM_CLIENT_CONTEXT@@PEBGKPEAT_RM_SID@@0PEAU_HAM_ACTIVITY_PROPERTIES@@KKE@Z @ 0x180002910
 * Callers:
 *     ?HamSrvCreateActivityForProcess@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAXPEAU_HAM_ACTIVITY_PROPERTIES@@PEA_K@Z @ 0x18000241C (-HamSrvCreateActivityForProcess@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAXPEAU_HAM_ACTIVITY_PROPERTIES@@P.c)
 *     ?HamSrvCreateActivityInternal@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KPEAU_HAM_ACTIVITY_PROPERTIES@@PEA_K@Z @ 0x18007187C (-HamSrvCreateActivityInternal@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KPEAU_HAM_ACTIVITY_PROPERTIES@@PEA_K.c)
 *     ?HamSrvCreateExtendedExecution@@YAJPEAU_HAM_CLIENT_CONTEXT@@W4_HAM_EXTENDED_EXECUTION_REASON@@PEBGPEA_K@Z @ 0x180071A2C (-HamSrvCreateExtendedExecution@@YAJPEAU_HAM_CLIENT_CONTEXT@@W4_HAM_EXTENDED_EXECUTION_REASON@@PE.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@G@@U1@U2@U3@U3@U1@U2@U1@U1@U?$_tlgWrapperByVal@$00@@U?$_tlgWrapSid@U_SID@@@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@G@@34553433AEBU?$_tlgWrapperByVal@$00@@AEBU?$_tlgWrapSid@U_SID@@@@@Z @ 0x1800015E8 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@G@@U1@U2@U3@U3@U1@U2@U1.c)
 *     _tlgKeywordOn @ 0x180028870 (_tlgKeywordOn.c)
 */

void __fastcall HampSrvTraceActivityCreateStop(
        int a1,
        __int64 a2,
        struct _HAM_CLIENT_CONTEXT *a3,
        const unsigned __int16 *a4,
        unsigned int a5,
        union _RM_SID *a6,
        unsigned __int64 a7,
        struct _HAM_ACTIVITY_PROPERTIES *a8,
        unsigned int a9,
        unsigned int a10,
        char a11)
{
  __int64 v13; // r8
  const unsigned __int16 *v14; // r9
  __int64 v15; // r10
  __int64 v16; // r11
  unsigned int v17; // [rsp+90h] [rbp-31h] BYREF
  unsigned int v18; // [rsp+94h] [rbp-2Dh] BYREF
  int v19; // [rsp+98h] [rbp-29h] BYREF
  unsigned int v20; // [rsp+9Ch] [rbp-25h] BYREF
  int v21; // [rsp+A0h] [rbp-21h] BYREF
  __int64 v22; // [rsp+A8h] [rbp-19h] BYREF
  __int64 v23; // [rsp+B0h] [rbp-11h] BYREF
  const unsigned __int16 *v24; // [rsp+B8h] [rbp-9h] BYREF
  const unsigned __int16 *v25; // [rsp+C0h] [rbp-1h] BYREF
  unsigned __int64 v26; // [rsp+C8h] [rbp+7h] BYREF
  const unsigned __int16 *v27; // [rsp+D0h] [rbp+Fh] BYREF
  __int64 v28; // [rsp+D8h] [rbp+17h] BYREF

  if ( (unsigned int)dword_1800DB218 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1800DB218, 8LL) )
  {
    LOBYTE(a6) = a11;
    v17 = a10;
    v18 = a9;
    v22 = v16;
    if ( v13 )
      v15 = *(_QWORD *)(v13 + 152);
    v23 = v15;
    v27 = v14;
    v28 = a2;
    v19 = *(_DWORD *)a8;
    v24 = (const unsigned __int16 *)((char *)a8 + 140);
    v25 = (const unsigned __int16 *)((char *)a8 + 12);
    v26 = a7;
    v20 = a5;
    v21 = a1;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapSid<_SID>>(
      (__int64)a8,
      (int)&unk_1800C0FEC,
      v13,
      (__int64)v14,
      (__int64)&v21,
      (__int64)&v28,
      &v27,
      (__int64)&v20,
      (__int64)&v26,
      &v25,
      &v24,
      (__int64)&v19,
      (__int64)&v23,
      (__int64)&v18,
      (__int64)&v17,
      (__int64)&a6,
      &v22);
  }
}
