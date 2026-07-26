/*
 * XREFs of ??$TraceLoggingWriteOidRequestCompletedActivity@$01@@YAXPEBU_NDIS_REQ_TRACKER@@@Z @ 0x1C00D03E4
 * Callers:
 *     ?ndisOidRequestComplete@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0009560 (-ndisOidRequestComplete@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C0023508 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C0036080 (__security_check_cookie.c)
 *     ??$Write@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$03@@44444AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@44@Z @ 0x1C00D0F54 (--$Write@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U-$_tlg_ea_1C00D0F54.c)
 *     ?GetRequestFlags@@YAKPEBU_NDIS_OID_REQUEST@@@Z @ 0x1C00D11A4 (-GetRequestFlags@@YAKPEBU_NDIS_OID_REQUEST@@@Z.c)
 *     ?GetRequestSwitchID@@YAKPEBU_NDIS_OID_REQUEST@@@Z @ 0x1C00D1240 (-GetRequestSwitchID@@YAKPEBU_NDIS_OID_REQUEST@@@Z.c)
 *     ?GetRequestVPortID@@YAKPEBU_NDIS_OID_REQUEST@@@Z @ 0x1C00D1264 (-GetRequestVPortID@@YAKPEBU_NDIS_OID_REQUEST@@@Z.c)
 */

char __fastcall TraceLoggingWriteOidRequestCompletedActivity<2>(__int64 *a1)
{
  __int64 v1; // rax
  __int64 v2; // rcx
  __int64 v3; // r9
  __int64 v4; // r10
  __int64 v5; // rcx
  const struct _NDIS_OID_REQUEST *v6; // rcx
  const struct _NDIS_OID_REQUEST *v7; // rcx
  __int64 v8; // rcx
  int v9; // r9d
  int v11; // [rsp+70h] [rbp+7h] BYREF
  int v12; // [rsp+74h] [rbp+Bh] BYREF
  int v13; // [rsp+78h] [rbp+Fh] BYREF
  unsigned int RequestFlags; // [rsp+7Ch] [rbp+13h] BYREF
  unsigned int RequestVPortID; // [rsp+80h] [rbp+17h] BYREF
  unsigned int RequestSwitchID; // [rsp+84h] [rbp+1Bh] BYREF
  int v17; // [rsp+88h] [rbp+1Fh] BYREF
  int v18; // [rsp+8Ch] [rbp+23h] BYREF
  __int64 v19; // [rsp+90h] [rbp+27h] BYREF
  __int128 *v20; // [rsp+98h] [rbp+2Fh] BYREF
  __int128 v21; // [rsp+A0h] [rbp+37h] BYREF

  v1 = *a1;
  v21 = 0LL;
  if ( v1 )
  {
    v21 = *(_OWORD *)(v1 + 4008);
  }
  else
  {
    v2 = a1[2];
    if ( v2 )
    {
      v1 = *(_QWORD *)(v2 + 32);
      v21 = *(_OWORD *)(v1 + 4008);
    }
  }
  if ( (unsigned int)dword_1C00F41D8 > 4 )
  {
    LOBYTE(v1) = tlgKeywordOn((__int64)&dword_1C00F41D8, 1024LL);
    if ( (_BYTE)v1 )
    {
      v5 = *(_QWORD *)(v3 + 32);
      v11 = *(_DWORD *)(v3 + 44);
      v12 = *(_DWORD *)(v3 + 40);
      v13 = *(_DWORD *)(v5 + 88);
      v19 = v4;
      RequestFlags = GetRequestFlags((const struct _NDIS_OID_REQUEST *)v5);
      RequestVPortID = GetRequestVPortID(v6);
      RequestSwitchID = GetRequestSwitchID(v7);
      v17 = *(_DWORD *)(v8 + 32);
      v18 = *(_DWORD *)(v8 + 4);
      v20 = &v21;
      LOBYTE(v1) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<16>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
                     v8,
                     (unsigned int)&unk_1C00DF544,
                     (int)v8 + 168,
                     v9,
                     (__int64)&v20,
                     (__int64)&v18,
                     (__int64)&v17,
                     (__int64)&RequestSwitchID,
                     (__int64)&RequestVPortID,
                     (__int64)&RequestFlags,
                     (__int64)&v13,
                     (__int64)&v19,
                     (__int64)&v12,
                     (__int64)&v11);
    }
  }
  return v1;
}
