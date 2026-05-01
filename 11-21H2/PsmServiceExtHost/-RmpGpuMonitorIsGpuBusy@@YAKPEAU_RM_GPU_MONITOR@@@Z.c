/*
 * XREFs of ?RmpGpuMonitorIsGpuBusy@@YAKPEAU_RM_GPU_MONITOR@@@Z @ 0x180090574
 * Callers:
 *     ?RmpGpuMonitorTimerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x180090680 (-RmpGpuMonitorTimerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x18002D67C (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$00@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$00@@4@Z @ 0x18008FE40 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$00@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 */

_BOOL8 __fastcall RmpGpuMonitorIsGpuBusy(struct _RM_GPU_MONITOR *a1)
{
  BOOL v2; // ebx
  unsigned __int8 v3; // r9
  unsigned __int64 v4; // r8
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rcx
  unsigned __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  int v12; // r10d
  __int64 v14; // [rsp+40h] [rbp-18h] BYREF
  __int64 v15; // [rsp+48h] [rbp-10h] BYREF
  bool v16; // [rsp+68h] [rbp+10h] BYREF
  char v17; // [rsp+70h] [rbp+18h] BYREF
  int v18; // [rsp+78h] [rbp+20h] BYREF

  if ( (int)MemUtilQueryGpuUtilization(&v15) >= 0 )
  {
    RtlQueryUnbiasedInterruptTime(&v14);
    v3 = 100;
    v4 = v14 - *((_QWORD *)a1 + 3);
    if ( v14 == *((_QWORD *)a1 + 3) )
    {
      v2 = 1;
    }
    else
    {
      v5 = v15;
      v6 = v15;
      *((_QWORD *)a1 + 3) = v14;
      v7 = v6 - *((_QWORD *)a1 + 2);
      *((_QWORD *)a1 + 2) = v5;
      v8 = 100 * v7 / v4;
      if ( v8 < 0x64 )
        v3 = v8;
      v2 = v3 > *((_BYTE *)a1 + 48);
    }
  }
  else
  {
    v2 = 1;
  }
  if ( (unsigned int)dword_1800DC1E0 > 5 && tlgKeywordOn((__int64)&dword_1800DC1E0, 1LL) )
  {
    v16 = v2;
    v17 = v11;
    v18 = v12;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>>(
      v9,
      byte_1800C50FA,
      v10,
      v11,
      (__int64)&v18,
      (__int64)&v17,
      (__int64)&v16);
  }
  return v2;
}
