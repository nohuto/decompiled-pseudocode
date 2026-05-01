/*
 * XREFs of ?HampSrvTraceActivityCreateStop@@YAXJ_KPEAU_HAM_CLIENT_CONTEXT@@PEBGKPEAT_RM_SID@@0PEAU_HAM_ACTIVITY_PROPERTIES@@KKE@Z @ 0x180002488
 * Callers:
 *     ?HamSrvCreateActivityInternal@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KPEAU_HAM_ACTIVITY_PROPERTIES@@PEA_K@Z @ 0x180001564 (-HamSrvCreateActivityInternal@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KPEAU_HAM_ACTIVITY_PROPERTIES@@PEA_K.c)
 *     ?HamSrvCreateActivityForProcess@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAXPEAU_HAM_ACTIVITY_PROPERTIES@@PEA_K@Z @ 0x18000225C (-HamSrvCreateActivityForProcess@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAXPEAU_HAM_ACTIVITY_PROPERTIES@@P.c)
 *     ?HamSrvCreateExtendedExecution@@YAJPEAU_HAM_CLIENT_CONTEXT@@W4_HAM_EXTENDED_EXECUTION_REASON@@PEBGPEA_K@Z @ 0x18006F564 (-HamSrvCreateExtendedExecution@@YAJPEAU_HAM_CLIENT_CONTEXT@@W4_HAM_EXTENDED_EXECUTION_REASON@@PE.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@G@@U1@U2@U3@U3@U1@U1@U1@U1@U?$_tlgWrapperByVal@$00@@U?$_tlgWrapSid@U_SID@@@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@G@@34553333AEBU?$_tlgWrapperByVal@$00@@AEBU?$_tlgWrapSid@U_SID@@@@@Z @ 0x180001204 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@G@@U1@U2@U3@U3@U1@U1@U1.c)
 *     _tlgKeywordOn @ 0x18002D67C (_tlgKeywordOn.c)
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
  __int64 v14; // r8
  const unsigned __int16 *v15; // r9
  int v16; // r10d
  __int64 v17; // r11
  unsigned int v18; // [rsp+98h] [rbp-31h] BYREF
  unsigned int v19; // [rsp+9Ch] [rbp-2Dh] BYREF
  int v20; // [rsp+A0h] [rbp-29h] BYREF
  int v21; // [rsp+A4h] [rbp-25h] BYREF
  unsigned int v22; // [rsp+A8h] [rbp-21h] BYREF
  int v23; // [rsp+ACh] [rbp-1Dh] BYREF
  __int64 v24; // [rsp+B0h] [rbp-19h] BYREF
  const unsigned __int16 *v25; // [rsp+B8h] [rbp-11h] BYREF
  const unsigned __int16 *v26; // [rsp+C0h] [rbp-9h] BYREF
  unsigned __int64 v27; // [rsp+C8h] [rbp-1h] BYREF
  const unsigned __int16 *v28; // [rsp+D0h] [rbp+7h] BYREF
  __int64 v29; // [rsp+D8h] [rbp+Fh] BYREF

  if ( (unsigned int)dword_1800DC218 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1800DC218, 8LL, a3, a4) )
  {
    LOBYTE(a6) = a11;
    v18 = a10;
    v19 = a9;
    v24 = v17;
    if ( a3 )
      v16 = *((_DWORD *)a3 + 37);
    v20 = v16;
    v28 = v15;
    v29 = a2;
    v21 = *(_DWORD *)a8;
    v25 = (const unsigned __int16 *)((char *)a8 + 140);
    v26 = (const unsigned __int16 *)((char *)a8 + 12);
    v27 = a7;
    v22 = a5;
    v23 = a1;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapSid<_SID>>(
      (__int64)a8,
      (int)&unk_1800BF1C4,
      v14,
      (__int64)v15,
      (__int64)&v23,
      (__int64)&v29,
      &v28,
      (__int64)&v22,
      (__int64)&v27,
      &v26,
      &v25,
      (__int64)&v21,
      (__int64)&v20,
      (__int64)&v19,
      (__int64)&v18,
      (__int64)&a6,
      &v24);
  }
}
