/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$07@@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$03@@U3@U_tlgWrapperPtrSize@@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBX1IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteAgg@@YAJ011I2@ZPEBX@@SAJPEBU_tlgProvider_t@@PEBX1AEBU?$_tlgWrapperByVal@$07@@22222222222AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$03@@4AEBU_tlgWrapperPtrSize@@4@Z @ 0x1C00CEFF0
 * Callers:
 *     ?AggregateEvent@NdisFreeSharedMemoryTelemetry@@AEBAXXZ @ 0x1C00CF9A0 (-AggregateEvent@NdisFreeSharedMemoryTelemetry@@AEBAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0035EF0 (__security_check_cookie.c)
 *     ExtractAggregateFieldTypes @ 0x1C00D3DD0 (ExtractAggregateFieldTypes.c)
 *     InsertEventEntryInLookUpTable @ 0x1C00D3F84 (InsertEventEntryInLookUpTable.c)
 */

NTSTATUS __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteAgg(_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),void const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperPtrSize,_tlgWrapperByVal<4>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14,
        __int64 a15,
        __int64 *a16,
        __int64 a17,
        __int64 a18,
        __int64 *a19,
        __int64 a20)
{
  __int64 v20; // rcx
  NTSTATUS result; // eax
  char v22; // al
  int v23; // r8d
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v25; // [rsp+40h] [rbp-C0h]
  _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int8 *v27; // [rsp+60h] [rbp-A0h]
  int v28; // [rsp+68h] [rbp-98h]
  int v29; // [rsp+6Ch] [rbp-94h]
  __int64 v30; // [rsp+70h] [rbp-90h]
  __int64 v31; // [rsp+78h] [rbp-88h]
  __int64 v32; // [rsp+80h] [rbp-80h]
  __int64 v33; // [rsp+88h] [rbp-78h]
  __int64 v34; // [rsp+90h] [rbp-70h]
  __int64 v35; // [rsp+98h] [rbp-68h]
  __int64 v36; // [rsp+A0h] [rbp-60h]
  __int64 v37; // [rsp+A8h] [rbp-58h]
  __int64 v38; // [rsp+B0h] [rbp-50h]
  __int64 v39; // [rsp+B8h] [rbp-48h]
  __int64 v40; // [rsp+C0h] [rbp-40h]
  __int64 v41; // [rsp+C8h] [rbp-38h]
  __int64 v42; // [rsp+D0h] [rbp-30h]
  __int64 v43; // [rsp+D8h] [rbp-28h]
  __int64 v44; // [rsp+E0h] [rbp-20h]
  __int64 v45; // [rsp+E8h] [rbp-18h]
  __int64 v46; // [rsp+F0h] [rbp-10h]
  __int64 v47; // [rsp+F8h] [rbp-8h]
  __int64 v48; // [rsp+100h] [rbp+0h]
  __int64 v49; // [rsp+108h] [rbp+8h]
  __int64 v50; // [rsp+110h] [rbp+10h]
  __int64 v51; // [rsp+118h] [rbp+18h]
  __int64 v52; // [rsp+120h] [rbp+20h]
  __int64 v53; // [rsp+128h] [rbp+28h]
  __int64 v54; // [rsp+130h] [rbp+30h]
  __int64 v55; // [rsp+138h] [rbp+38h]
  __int64 v56; // [rsp+140h] [rbp+40h]
  __int64 v57; // [rsp+148h] [rbp+48h]
  __int64 v58; // [rsp+150h] [rbp+50h]
  __int64 v59; // [rsp+158h] [rbp+58h]
  __int64 v60; // [rsp+160h] [rbp+60h]
  int v61; // [rsp+168h] [rbp+68h]
  int v62; // [rsp+16Ch] [rbp+6Ch]
  __int64 v63; // [rsp+170h] [rbp+70h]
  __int64 v64; // [rsp+178h] [rbp+78h]

  v63 = a20;
  v64 = 4LL;
  v60 = *a19;
  v61 = *((_DWORD *)a19 + 2);
  v58 = a18;
  v56 = a17;
  v62 = 0;
  v59 = 4LL;
  v57 = 4LL;
  v20 = *a16;
  v52 = a15;
  v50 = a14;
  v48 = a13;
  v46 = a12;
  v44 = a11;
  v42 = a10;
  v40 = a9;
  v38 = a8;
  v36 = a7;
  v34 = a6;
  v32 = a5;
  *(_DWORD *)&EventDescriptor.Id = *a2 << 24;
  v54 = v20;
  *(_DWORD *)&EventDescriptor.Level = *(unsigned __int16 *)(a2 + 1);
  v55 = 16LL;
  v53 = 8LL;
  EventDescriptor.Keyword = *(_QWORD *)(a2 + 3);
  UserData.Ptr = (unsigned __int64)off_1C00F41E0;
  v51 = 8LL;
  v49 = 8LL;
  v47 = 8LL;
  v45 = 8LL;
  v43 = 8LL;
  v41 = 8LL;
  v39 = 8LL;
  v37 = 8LL;
  v35 = 8LL;
  v33 = 8LL;
  v30 = a4;
  v31 = 8LL;
  UserData.Size = *(unsigned __int16 *)off_1C00F41E0;
  v28 = *(unsigned __int16 *)(a2 + 11);
  v27 = a2 + 11;
  UserData.Reserved = 2;
  v29 = 1;
  v25 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
  result = -1073741811;
  if ( (void (__fastcall *)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *))qword_1C00F4200 == TlgAggregateInternalRegisteredProviderEtwCallback )
  {
    v22 = ExtractAggregateFieldTypes(TlgAggregateInternalRegisteredProviderEtwCallback, &UserData);
    if ( v22 )
    {
      LOBYTE(v23) = 19;
      return InsertEventEntryInLookUpTable(
               (unsigned int)&dword_1C00F41D8,
               (unsigned int)&EventDescriptor,
               v23,
               (unsigned int)&UserData,
               v22);
    }
    else
    {
      return EtwWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 0x13u, &UserData);
    }
  }
  return result;
}
