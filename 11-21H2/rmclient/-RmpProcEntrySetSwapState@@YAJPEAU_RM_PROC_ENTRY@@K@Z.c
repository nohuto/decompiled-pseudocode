/*
 * XREFs of ?RmpProcEntrySetSwapState@@YAJPEAU_RM_PROC_ENTRY@@K@Z @ 0x180014A40
 * Callers:
 *     ?RmpProcEntryDecreaseLevel@@YAXPEAU_RM_PROC_ENTRY@@W4_RM_PROC_MANAGEMENT_LEVEL@@1@Z @ 0x180013F44 (-RmpProcEntryDecreaseLevel@@YAXPEAU_RM_PROC_ENTRY@@W4_RM_PROC_MANAGEMENT_LEVEL@@1@Z.c)
 *     ?RmpProcEntryIncreaseLevel@@YAXPEAU_RM_PROC_ENTRY@@W4_RM_PROC_MANAGEMENT_LEVEL@@1K@Z @ 0x180014264 (-RmpProcEntryIncreaseLevel@@YAXPEAU_RM_PROC_ENTRY@@W4_RM_PROC_MANAGEMENT_LEVEL@@1K@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1800010E0 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33@Z @ 0x1800011F8 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_.c)
 *     __security_check_cookie @ 0x18000B040 (__security_check_cookie.c)
 *     CempLockAcquireExclusive @ 0x18001E644 (CempLockAcquireExclusive.c)
 */

__int64 __fastcall RmpProcEntrySetSwapState(struct _RM_PROC_ENTRY *a1, int a2)
{
  int v4; // ebx
  void *v5; // rcx
  __int64 v6; // rdx
  NTSTATUS v7; // edi
  __int64 v8; // r8
  int v9; // ecx
  unsigned int v10; // ecx
  __int64 v11; // rcx
  unsigned int v12; // ebx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rcx
  unsigned int v17; // [rsp+40h] [rbp-48h] BYREF
  int v18; // [rsp+44h] [rbp-44h] BYREF
  int v19; // [rsp+48h] [rbp-40h] BYREF
  __int128 v20; // [rsp+50h] [rbp-38h] BYREF

  v20 = 0LL;
  LODWORD(v20) = 4;
  v4 = a2 & 1;
  v5 = (void *)*((_QWORD *)a1 + 6);
  BYTE5(v20) = v4 != 0;
  v7 = NtSetInformationJobObject(v5, (JOBOBJECTINFOCLASS)18, &v20, 0x10u);
  if ( v7 == 262 )
    v7 = -1073741671;
  CempLockAcquireExclusive((char *)a1 + 64, v6, v8);
  v9 = *((_DWORD *)a1 + 26);
  if ( v7 >= 0 )
  {
    v10 = v9 & 0xFFFFFFEF;
  }
  else
  {
    v10 = v9 | 0x10;
    if ( !v4 )
      v10 = *((_DWORD *)a1 + 26) & 0xFFFFFFEF;
    v7 &= -(v4 != 0);
  }
  *((_DWORD *)a1 + 26) = v10;
  *((_DWORD *)a1 + 18) = 0;
  RtlReleaseSRWLockExclusive((char *)a1 + 64);
  v12 = 0;
  if ( v7 < 0 )
    v12 = v7;
  if ( (unsigned int)dword_180032000 > 4 && tlgKeywordOn(v11, 3LL) )
  {
    v15 = *((unsigned int *)a1 + 20);
    v17 = v12;
    v18 = a2;
    v19 = v15;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v15,
      byte_18002B613,
      v13,
      v14,
      (__int64)&v19,
      (__int64)&v18,
      (__int64)&v17);
  }
  return v12;
}
