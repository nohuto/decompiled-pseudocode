/*
 * XREFs of ?RmpProcEntryTrimCompressionStore@@YAXPEAU_RM_PROC_ENTRY@@_K@Z @ 0x180014C10
 * Callers:
 *     ?RmpProcContextRemediatePhysical@@YA?AW4_RM_PROC_REMEDIATION_RESULT@@PEAU_RM_PROCESS_MANAGEMENT_CONTEXT@@PEAU_RM_PROC_METRICS_BUFFER@@PEA_K@Z @ 0x180013820 (-RmpProcContextRemediatePhysical@@YA-AW4_RM_PROC_REMEDIATION_RESULT@@PEAU_RM_PROCESS_MANAGEMENT_.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1800010E0 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@3@Z @ 0x18000134C (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     CempLockAcquireExclusive @ 0x18001E644 (CempLockAcquireExclusive.c)
 */

void __fastcall RmpProcEntryTrimCompressionStore(struct _RM_PROC_ENTRY *a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  int v9; // [rsp+60h] [rbp+8h] BYREF
  int v10; // [rsp+70h] [rbp+18h] BYREF
  __int64 v11; // [rsp+78h] [rbp+20h] BYREF

  CempLockAcquireExclusive((char *)a1 + 64, a2, a3);
  *((_DWORD *)a1 + 26) &= ~0x40u;
  *((_DWORD *)a1 + 18) = 0;
  RtlReleaseSRWLockExclusive((char *)a1 + 64);
  v5 = (unsigned int)MemUtilEmptyProcess(*((_QWORD *)a1 + 5), 8LL, 0LL);
  if ( (unsigned int)dword_180032000 > 4 && tlgKeywordOn(v5, 3LL) )
  {
    v10 = *((_DWORD *)a1 + 20);
    v9 = v6;
    v11 = a2;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
      v6,
      byte_18002B49B,
      v7,
      v8,
      (__int64)&v10,
      (__int64)&v11,
      (__int64)&v9);
  }
}
