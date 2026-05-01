/*
 * XREFs of ?RmpProcEntrySetFreezeState@@YAXPEAU_RM_PROC_ENTRY@@K@Z @ 0x1800146E4
 * Callers:
 *     ?RmpProcEntryDecreaseLevel@@YAXPEAU_RM_PROC_ENTRY@@W4_RM_PROC_MANAGEMENT_LEVEL@@1@Z @ 0x180013F44 (-RmpProcEntryDecreaseLevel@@YAXPEAU_RM_PROC_ENTRY@@W4_RM_PROC_MANAGEMENT_LEVEL@@1@Z.c)
 *     ?RmpProcEntryIncreaseLevel@@YAXPEAU_RM_PROC_ENTRY@@W4_RM_PROC_MANAGEMENT_LEVEL@@1K@Z @ 0x180014264 (-RmpProcEntryIncreaseLevel@@YAXPEAU_RM_PROC_ENTRY@@W4_RM_PROC_MANAGEMENT_LEVEL@@1K@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1800010E0 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33@Z @ 0x1800011F8 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_.c)
 *     __security_check_cookie @ 0x18000B040 (__security_check_cookie.c)
 *     ?RmpProcEntryCheckQueueEmpty@@YAXPEAU_RM_PROC_ENTRY@@@Z @ 0x180013E7C (-RmpProcEntryCheckQueueEmpty@@YAXPEAU_RM_PROC_ENTRY@@@Z.c)
 */

void __fastcall RmpProcEntrySetFreezeState(struct _RM_PROC_ENTRY *a1, int a2)
{
  void *v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  NTSTATUS v7; // esi
  __int64 v8; // r8
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  NTSTATUS v12; // [rsp+40h] [rbp-38h] BYREF
  int v13; // [rsp+44h] [rbp-34h] BYREF
  int v14; // [rsp+48h] [rbp-30h] BYREF
  __int128 JobInformation; // [rsp+50h] [rbp-28h] BYREF

  JobInformation = 0LL;
  LODWORD(JobInformation) = 1;
  v4 = (void *)*((_QWORD *)a1 + 6);
  BYTE4(JobInformation) = a2 & 1;
  v7 = NtSetInformationJobObject(v4, (JOBOBJECTINFOCLASS)18, &JobInformation, 0x10u);
  if ( (a2 & 2) != 0 )
    RmpProcEntryCheckQueueEmpty(a1, v5, v8);
  if ( (unsigned int)dword_180032000 > 4 && tlgKeywordOn(v6, 2LL) )
  {
    v14 = *((_DWORD *)a1 + 20);
    v12 = v7;
    v13 = a2;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v9,
      byte_18002B6B9,
      v10,
      v11,
      (__int64)&v14,
      (__int64)&v13,
      (__int64)&v12);
  }
}
