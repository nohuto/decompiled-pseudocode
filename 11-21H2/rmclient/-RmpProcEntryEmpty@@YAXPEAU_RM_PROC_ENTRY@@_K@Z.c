/*
 * XREFs of ?RmpProcEntryEmpty@@YAXPEAU_RM_PROC_ENTRY@@_K@Z @ 0x180014088
 * Callers:
 *     ?RmpProcContextEmptyWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180012E00 (-RmpProcContextEmptyWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     ?RmpProcContextRemediatePhysical@@YA?AW4_RM_PROC_REMEDIATION_RESULT@@PEAU_RM_PROCESS_MANAGEMENT_CONTEXT@@PEAU_RM_PROC_METRICS_BUFFER@@PEA_K@Z @ 0x180013820 (-RmpProcContextRemediatePhysical@@YA-AW4_RM_PROC_REMEDIATION_RESULT@@PEAU_RM_PROCESS_MANAGEMENT_.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1800010E0 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18000110C (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@3@Z @ 0x18000134C (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     __security_check_cookie @ 0x18000B040 (__security_check_cookie.c)
 *     ?RmpProcEntryIssueCallback@@YA?AW4_RM_PROC_CALLBACK_RESULT@@PEAU_RM_PROC_ENTRY@@W4_RM_PROC_REQUEST@@@Z @ 0x1800144F4 (-RmpProcEntryIssueCallback@@YA-AW4_RM_PROC_CALLBACK_RESULT@@PEAU_RM_PROC_ENTRY@@W4_RM_PROC_REQUE.c)
 *     CempLockAcquireExclusive @ 0x18001E644 (CempLockAcquireExclusive.c)
 */

void __fastcall RmpProcEntryEmpty(struct _RM_PROC_ENTRY *a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v5; // rsi
  __int64 v6; // rsi
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rcx
  int v12; // ecx
  int v13; // eax
  int v14; // [rsp+40h] [rbp-19h] BYREF
  int v15; // [rsp+44h] [rbp-15h] BYREF
  __int64 v16; // [rsp+48h] [rbp-11h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v17; // [rsp+50h] [rbp-9h] BYREF
  int *v18; // [rsp+70h] [rbp+17h]
  int v19; // [rsp+78h] [rbp+1Fh]
  int v20; // [rsp+7Ch] [rbp+23h]
  int *v21; // [rsp+80h] [rbp+27h]
  int v22; // [rsp+88h] [rbp+2Fh]
  int v23; // [rsp+8Ch] [rbp+33h]

  CempLockAcquireExclusive((char *)a1 + 64, a2, a3);
  v5 = *((unsigned int *)a1 + 28);
  *((_DWORD *)a1 + 26) &= ~0x20u;
  *((_DWORD *)a1 + 18) = 0;
  v6 = (v5 >> 9) & 1;
  RtlReleaseSRWLockExclusive((char *)a1 + 64);
  v7 = (unsigned int)MemUtilEmptyProcess(*((_QWORD *)a1 + 5), 0LL, 0LL);
  if ( (unsigned int)dword_180032000 > 4 && tlgKeywordOn(v7, 3LL) )
  {
    v15 = *((_DWORD *)a1 + 20);
    v14 = v8;
    v16 = a2;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
      v8,
      byte_18002B3F6,
      v9,
      v10,
      (__int64)&v15,
      (__int64)&v16,
      (__int64)&v14);
  }
  if ( (_DWORD)v6 )
  {
    v11 = (unsigned int)MemUtilEmptyProcess(*((_QWORD *)a1 + 5), 1LL, 0LL);
    if ( (unsigned int)dword_180032000 > 4 && tlgKeywordOn(v11, 3LL) )
    {
      v13 = *((_DWORD *)a1 + 20);
      v23 = 0;
      v20 = 0;
      v14 = v13;
      v21 = &v15;
      v18 = &v14;
      v15 = v12;
      v22 = 4;
      v19 = 4;
      tlgWriteTransfer_EventWriteTransfer(
        (__int64)&dword_180032000,
        (unsigned __int8 *)dword_18002B4D6,
        0LL,
        0LL,
        4u,
        &v17);
    }
  }
  RmpProcEntryIssueCallback(a1);
}
