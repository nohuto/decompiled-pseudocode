/*
 * XREFs of ?RmpProcEntryIssueCallback@@YA?AW4_RM_PROC_CALLBACK_RESULT@@PEAU_RM_PROC_ENTRY@@W4_RM_PROC_REQUEST@@@Z @ 0x1800144F4
 * Callers:
 *     ?RmpProcEntryEmpty@@YAXPEAU_RM_PROC_ENTRY@@_K@Z @ 0x180014088 (-RmpProcEntryEmpty@@YAXPEAU_RM_PROC_ENTRY@@_K@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1800010E0 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18000110C (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x1800011A8 (--$Write@$$V@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESC.c)
 *     __security_check_cookie @ 0x18000B040 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180015750 (_guard_xfg_dispatch_icall_nop.c)
 *     CempLockAcquireExclusive @ 0x18001E644 (CempLockAcquireExclusive.c)
 */

__int64 __fastcall RmpProcEntryIssueCallback(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // edi
  __int64 v5; // rcx
  unsigned __int64 v6; // r13
  int v7; // eax
  int *v8; // r12
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // rcx
  char v15; // dl
  char v17; // [rsp+38h] [rbp-39h] BYREF
  int v18; // [rsp+3Ch] [rbp-35h] BYREF
  unsigned int v19; // [rsp+40h] [rbp-31h] BYREF
  int v20; // [rsp+44h] [rbp-2Dh] BYREF
  struct _EVENT_DATA_DESCRIPTOR v21; // [rsp+48h] [rbp-29h] BYREF
  int *v22; // [rsp+68h] [rbp-9h]
  __int64 v23; // [rsp+70h] [rbp-1h]
  unsigned int *v24; // [rsp+78h] [rbp+7h]
  __int64 v25; // [rsp+80h] [rbp+Fh]
  char *v26; // [rsp+88h] [rbp+17h]
  __int64 v27; // [rsp+90h] [rbp+1Fh]

  v4 = 2;
  if ( (unsigned int)dword_180032000 > 4 && tlgKeywordOn(a1, 2LL) )
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
      v5,
      byte_18002B784);
  v6 = *(_QWORD *)(a1 + 32) & 0xFFFFFFFFFFFFFFFCuLL;
  CempLockAcquireExclusive(a1 + 64, a2, a3);
  v7 = *(_DWORD *)(a1 + 104);
  if ( (v7 & 7) != 0 )
  {
    v8 = (int *)(a1 + 104);
    while ( 1 )
    {
      v9 = a1 + 64;
      if ( (v7 & 0x88) == 0 )
        break;
      *(_DWORD *)(a1 + 72) = 0;
      v18 = v7;
      RtlReleaseSRWLockExclusive(v9);
      RtlWaitOnAddress(a1 + 104, &v18, 4LL, 0LL);
      CempLockAcquireExclusive(a1 + 64, v10, v11);
      v7 = *v8;
      if ( (*v8 & 7) == 0 )
        goto LABEL_10;
    }
    *v8 = v7 | 0x80;
    *(_DWORD *)(a1 + 72) = 0;
    RtlReleaseSRWLockExclusive(v9);
    v4 = (*(__int64 (__fastcall **)(_QWORD, __int64))(v6 + 104))(*(_QWORD *)(a1 + 56), 3LL);
    CempLockAcquireExclusive(a1 + 64, v12, v13);
    *(_DWORD *)(a1 + 104) = *v8 & 0xFFFFFF7F;
  }
LABEL_10:
  *(_DWORD *)(a1 + 72) = 0;
  RtlReleaseSRWLockExclusive(a1 + 64);
  RtlWakeAddressAll(a1 + 104);
  if ( (unsigned int)dword_180032000 > 4 && tlgKeywordOn(v14, 3LL) )
  {
    v20 = *(_DWORD *)(a1 + 80);
    v17 = v15;
    v26 = &v17;
    v19 = v4;
    v24 = &v19;
    v27 = 1LL;
    v22 = &v20;
    v25 = 4LL;
    v23 = 4LL;
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)&dword_180032000,
      (unsigned __int8 *)dword_18002B731,
      0LL,
      0LL,
      5u,
      &v21);
  }
  return v4;
}
