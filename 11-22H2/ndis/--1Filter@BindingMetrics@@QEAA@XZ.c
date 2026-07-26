/*
 * XREFs of ??1Filter@BindingMetrics@@QEAA@XZ @ 0x1C0021570
 * Callers:
 *     ?Iterate@BindEngine@Ndis@@AEAA_NAEBU_GUID@@@Z @ 0x1C01139CC (-Iterate@BindEngine@Ndis@@AEAA_NAEBU_GUID@@@Z.c)
 * Callees:
 *     ?Stop@KStopwatch@@QEAA_KXZ @ 0x1C00230B8 (-Stop@KStopwatch@@QEAA_KXZ.c)
 *     _tlgKeywordOn @ 0x1C0023378 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@U?$_tlgWrapperByRef@$0BA@@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@AEBU?$_tlgWrapperByRef@$0BA@@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1C00D1804 (--$Write@U-$_tlgWrapBuffer@U_UNICODE_STRING@@@@U-$_tlgWrapperByRef@$0BA@@@U1@U-$_tlgWrapperByVal.c)
 */

void __fastcall BindingMetrics::Filter::~Filter(BindingMetrics::Filter *this)
{
  __int64 v2; // rax
  void *v3; // rdi
  unsigned __int64 v4; // rax
  __int64 v5; // r8
  __int64 v6; // rax
  int v7; // ecx
  __int64 v8; // rax
  int v9; // r9d
  const struct _UNICODE_STRING * near *v10; // [rsp+50h] [rbp-28h] BYREF
  int v11; // [rsp+80h] [rbp+8h] BYREF
  unsigned __int64 v12; // [rsp+88h] [rbp+10h] BYREF
  void *v13; // [rsp+90h] [rbp+18h] BYREF
  __int64 v14; // [rsp+98h] [rbp+20h] BYREF

  if ( *((_BYTE *)this + 17) )
  {
    v2 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 6) + 80LL) + 56LL);
    v3 = (void *)(v2 + 112);
    if ( !v2 )
      v3 = &unk_1C00D8010;
    if ( (unsigned int)dword_1C00F41D8 > 4 )
    {
      if ( (unsigned __int8)tlgKeywordOn(&dword_1C00F41D8, 32LL) )
      {
        v4 = KStopwatch::Stop((BindingMetrics::Filter *)((char *)this + 24));
        v5 = *((_QWORD *)this + 1);
        v12 = v4;
        v6 = *((_QWORD *)this + 6);
        v13 = v3;
        v7 = *(_DWORD *)(v6 + 88);
        v8 = *(_QWORD *)this + 4008LL;
        v11 = v7;
        v14 = v8;
        v10 = (&BindingMetrics::BindingOperationNames)[*((unsigned __int8 *)this + 16)];
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapperByRef<16>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
          (unsigned int)&BindingMetrics::BindingOperationNames,
          (unsigned int)&unk_1C00DFBE0,
          v5,
          v9,
          (__int64)&v10,
          (__int64)&v14,
          (__int64)&v13,
          (__int64)&v11,
          (__int64)&v12);
      }
    }
  }
}
