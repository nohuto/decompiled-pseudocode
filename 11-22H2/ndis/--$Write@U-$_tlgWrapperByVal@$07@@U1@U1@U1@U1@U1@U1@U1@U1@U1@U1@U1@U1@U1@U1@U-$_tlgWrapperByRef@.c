/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$07@@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$03@@U3@U_tlgWrapperPtrSize@@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBX1IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteAgg@@YAJ011I2@ZPEBX@@SAJPEBU_tlgProvider_t@@PEBX1AEBU?$_tlgWrapperByVal@$07@@22222222222222AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$03@@4AEBU_tlgWrapperPtrSize@@4@Z @ 0x1C00CED70
 * Callers:
 *     ??$AggregateEvent@$01@NdisAllocateSharedMemoryTelemetry@@AEBAXXZ @ 0x1C00CE8CC (--$AggregateEvent@$01@NdisAllocateSharedMemoryTelemetry@@AEBAXXZ.c)
 *     ??$AggregateEvent@$03@NdisAllocateSharedMemoryTelemetry@@AEBAXXZ @ 0x1C00CEAB0 (--$AggregateEvent@$03@NdisAllocateSharedMemoryTelemetry@@AEBAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0035EF0 (__security_check_cookie.c)
 *     ExtractAggregateFieldTypes @ 0x1C00D3DD0 (ExtractAggregateFieldTypes.c)
 *     InsertEventEntryInLookUpTable @ 0x1C00D3F84 (InsertEventEntryInLookUpTable.c)
 */

NTSTATUS __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteAgg(_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),void const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperPtrSize,_tlgWrapperByVal<4>>(
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
        __int64 a16,
        __int64 a17,
        __int64 a18,
        __int64 *a19,
        __int64 a20,
        __int64 a21,
        __int64 *a22,
        __int64 a23)
{
  __int64 v23; // rcx
  int v24; // eax
  NTSTATUS result; // eax
  char v26; // al
  int v27; // r8d
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v29; // [rsp+40h] [rbp-C0h]
  _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int8 *v31; // [rsp+60h] [rbp-A0h]
  int v32; // [rsp+68h] [rbp-98h]
  int v33; // [rsp+6Ch] [rbp-94h]
  __int64 v34; // [rsp+70h] [rbp-90h]
  __int64 v35; // [rsp+78h] [rbp-88h]
  __int64 v36; // [rsp+80h] [rbp-80h]
  __int64 v37; // [rsp+88h] [rbp-78h]
  __int64 v38; // [rsp+90h] [rbp-70h]
  __int64 v39; // [rsp+98h] [rbp-68h]
  __int64 v40; // [rsp+A0h] [rbp-60h]
  __int64 v41; // [rsp+A8h] [rbp-58h]
  __int64 v42; // [rsp+B0h] [rbp-50h]
  __int64 v43; // [rsp+B8h] [rbp-48h]
  __int64 v44; // [rsp+C0h] [rbp-40h]
  __int64 v45; // [rsp+C8h] [rbp-38h]
  __int64 v46; // [rsp+D0h] [rbp-30h]
  __int64 v47; // [rsp+D8h] [rbp-28h]
  __int64 v48; // [rsp+E0h] [rbp-20h]
  __int64 v49; // [rsp+E8h] [rbp-18h]
  __int64 v50; // [rsp+F0h] [rbp-10h]
  __int64 v51; // [rsp+F8h] [rbp-8h]
  __int64 v52; // [rsp+100h] [rbp+0h]
  __int64 v53; // [rsp+108h] [rbp+8h]
  __int64 v54; // [rsp+110h] [rbp+10h]
  __int64 v55; // [rsp+118h] [rbp+18h]
  __int64 v56; // [rsp+120h] [rbp+20h]
  __int64 v57; // [rsp+128h] [rbp+28h]
  __int64 v58; // [rsp+130h] [rbp+30h]
  __int64 v59; // [rsp+138h] [rbp+38h]
  __int64 v60; // [rsp+140h] [rbp+40h]
  __int64 v61; // [rsp+148h] [rbp+48h]
  __int64 v62; // [rsp+150h] [rbp+50h]
  __int64 v63; // [rsp+158h] [rbp+58h]
  __int64 v64; // [rsp+160h] [rbp+60h]
  __int64 v65; // [rsp+168h] [rbp+68h]
  __int64 v66; // [rsp+170h] [rbp+70h]
  __int64 v67; // [rsp+178h] [rbp+78h]
  __int64 v68; // [rsp+180h] [rbp+80h]
  __int64 v69; // [rsp+188h] [rbp+88h]
  __int64 v70; // [rsp+190h] [rbp+90h]
  int v71; // [rsp+198h] [rbp+98h]
  int v72; // [rsp+19Ch] [rbp+9Ch]
  __int64 v73; // [rsp+1A0h] [rbp+A0h]
  __int64 v74; // [rsp+1A8h] [rbp+A8h]

  v73 = a23;
  v74 = 4LL;
  v70 = *a22;
  v71 = *((_DWORD *)a22 + 2);
  v68 = a21;
  v66 = a20;
  v72 = 0;
  v69 = 4LL;
  v67 = 4LL;
  v23 = *a19;
  v62 = a18;
  v60 = a17;
  v58 = a16;
  v56 = a15;
  v54 = a14;
  v52 = a13;
  v50 = a12;
  v48 = a11;
  v46 = a10;
  v44 = a9;
  v42 = a8;
  v40 = a7;
  v38 = a6;
  v36 = a5;
  v24 = *a2 << 24;
  v64 = v23;
  *(_DWORD *)&EventDescriptor.Id = v24;
  *(_DWORD *)&EventDescriptor.Level = *(unsigned __int16 *)(a2 + 1);
  v65 = 16LL;
  v63 = 8LL;
  EventDescriptor.Keyword = *(_QWORD *)(a2 + 3);
  v61 = 8LL;
  v59 = 8LL;
  v57 = 8LL;
  v55 = 8LL;
  v53 = 8LL;
  v51 = 8LL;
  v49 = 8LL;
  v47 = 8LL;
  v45 = 8LL;
  v43 = 8LL;
  v41 = 8LL;
  v39 = 8LL;
  v37 = 8LL;
  v34 = a4;
  v35 = 8LL;
  UserData.Ptr = (unsigned __int64)off_1C00F41E0;
  UserData.Size = *(unsigned __int16 *)off_1C00F41E0;
  UserData.Reserved = 2;
  v31 = a2 + 11;
  v32 = *(unsigned __int16 *)(a2 + 11);
  v33 = 1;
  v29 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
  result = -1073741811;
  if ( (void (__fastcall *)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *))qword_1C00F4200 == TlgAggregateInternalRegisteredProviderEtwCallback )
  {
    v26 = ExtractAggregateFieldTypes(TlgAggregateInternalRegisteredProviderEtwCallback, &UserData);
    if ( v26 )
    {
      LOBYTE(v27) = 22;
      return InsertEventEntryInLookUpTable(
               (unsigned int)&dword_1C00F41D8,
               (unsigned int)&EventDescriptor,
               v27,
               (unsigned int)&UserData,
               v26);
    }
    else
    {
      return EtwWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 0x16u, &UserData);
    }
  }
  return result;
}
