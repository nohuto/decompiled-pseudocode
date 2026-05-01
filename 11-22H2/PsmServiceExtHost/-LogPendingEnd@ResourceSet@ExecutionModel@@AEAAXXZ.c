/*
 * XREFs of ?LogPendingEnd@ResourceSet@ExecutionModel@@AEAAXXZ @ 0x1800297E8
 * Callers:
 *     ?CompleteAcquire@ResourceSet@ExecutionModel@@QEAAXK@Z @ 0x180029AE8 (-CompleteAcquire@ResourceSet@ExecutionModel@@QEAAXK@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x180028870 (_tlgKeywordOn.c)
 *     ?RmpSystemMemoryMetricsQuery@@YAXPEAU_RM_PARTITION@@PEAU_RM_SYSTEM_MEMORY_METRICS@@@Z @ 0x180029950 (-RmpSystemMemoryMetricsQuery@@YAXPEAU_RM_PARTITION@@PEAU_RM_SYSTEM_MEMORY_METRICS@@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U1@U1@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@33444@Z @ 0x180029D88 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U1@U1@U2@U2@U2@@-$_tlgWriteTemplate@$.c)
 *     __security_check_cookie @ 0x180049550 (__security_check_cookie.c)
 */

void __fastcall ExecutionModel::ResourceSet::LogPendingEnd(ExecutionModel::ResourceSet *this)
{
  unsigned int v2; // edi
  unsigned int v3; // esi
  int v4; // r8d
  int v5; // r9d
  int v6; // ecx
  int v7; // edx
  int v8; // [rsp+68h] [rbp-39h] BYREF
  int v9; // [rsp+6Ch] [rbp-35h] BYREF
  int v10; // [rsp+70h] [rbp-31h] BYREF
  unsigned __int64 v11; // [rsp+78h] [rbp-29h] BYREF
  __int64 v12; // [rsp+80h] [rbp-21h] BYREF
  __int64 v13; // [rsp+88h] [rbp-19h] BYREF
  __int64 v14; // [rsp+90h] [rbp-11h] BYREF
  _BYTE v15[24]; // [rsp+98h] [rbp-9h] BYREF
  __int64 v16; // [rsp+B0h] [rbp+Fh]
  __int64 v17; // [rsp+C8h] [rbp+27h]

  if ( dword_1800DB1E0 )
  {
    RmpSystemMemoryMetricsQuery(
      *(struct _RM_PARTITION **)(*((_QWORD *)this + 165) + 56LL),
      (struct _RM_SYSTEM_MEMORY_METRICS *)v15);
    v2 = *((_DWORD *)this + 433);
    v3 = *((_DWORD *)this + 434);
    RtlQueryUnbiasedInterruptTime(&v11);
    if ( (unsigned int)dword_1800DB1E0 > 4 && tlgKeywordOn((__int64)&dword_1800DB1E0, 1LL) )
    {
      v6 = *((_DWORD *)this + 432);
      v8 = *((_DWORD *)this + 434) - v6;
      if ( v2 <= v3 )
        v2 = v3;
      v10 = *((_DWORD *)this + 433) - v6;
      v7 = v11 / 0x2710 - v2;
      v12 = v16;
      v13 = v17;
      LODWORD(v11) = *((_DWORD *)this + 334);
      v14 = *((_QWORD *)this + 215);
      v9 = v7;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v6,
        (unsigned int)&unk_1800C550D,
        v4,
        v5,
        (__int64)&v14,
        (__int64)&v11,
        (__int64)&v13,
        (__int64)&v12,
        (__int64)&v10,
        (__int64)&v9,
        (__int64)&v8);
    }
  }
}
