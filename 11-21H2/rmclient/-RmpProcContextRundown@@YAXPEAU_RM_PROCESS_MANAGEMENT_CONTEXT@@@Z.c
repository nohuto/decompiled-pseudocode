/*
 * XREFs of ?RmpProcContextRundown@@YAXPEAU_RM_PROCESS_MANAGEMENT_CONTEXT@@@Z @ 0x180013ACC
 * Callers:
 *     RmDisconnectProcessManager @ 0x18001B670 (RmDisconnectProcessManager.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1800010E0 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18000110C (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x18000B040 (__security_check_cookie.c)
 *     ?RmpProcContextGetFirst@@YAPEAU_RM_PROC_ENTRY@@PEAU_RM_PROCESS_MANAGEMENT_CONTEXT@@@Z @ 0x180013434 (-RmpProcContextGetFirst@@YAPEAU_RM_PROC_ENTRY@@PEAU_RM_PROCESS_MANAGEMENT_CONTEXT@@@Z.c)
 *     ?RmpProcEntrySetLevel@@YAJPEAU_RM_PROC_ENTRY@@W4_RM_PROC_MANAGEMENT_LEVEL@@PEAU_RM_PROC_PROPERTIES@@PEAW42@@Z @ 0x1800147C4 (-RmpProcEntrySetLevel@@YAJPEAU_RM_PROC_ENTRY@@W4_RM_PROC_MANAGEMENT_LEVEL@@PEAU_RM_PROC_PROPERTI.c)
 *     CemRcTableGetNext @ 0x180015364 (CemRcTableGetNext.c)
 *     CempLockAcquireExclusive @ 0x18001E644 (CempLockAcquireExclusive.c)
 */

void __fastcall RmpProcContextRundown(struct _RM_PROCESS_MANAGEMENT_CONTEXT *a1)
{
  char *v1; // r14
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // r8
  struct _RM_PROC_ENTRY *i; // rax
  __int64 v7; // rcx
  int v8; // edi
  int v9; // ecx
  struct _RM_PROC_ENTRY *v10; // rbx
  __int64 v11; // rcx
  char v12; // [rsp+30h] [rbp-39h] BYREF
  char v13[4]; // [rsp+34h] [rbp-35h] BYREF
  int v14; // [rsp+38h] [rbp-31h] BYREF
  int v15; // [rsp+3Ch] [rbp-2Dh] BYREF
  _QWORD v16[2]; // [rsp+40h] [rbp-29h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v17; // [rsp+50h] [rbp-19h] BYREF
  int *v18; // [rsp+70h] [rbp+7h]
  int v19; // [rsp+78h] [rbp+Fh]
  int v20; // [rsp+7Ch] [rbp+13h]
  char *v21; // [rsp+80h] [rbp+17h]
  int v22; // [rsp+88h] [rbp+1Fh]
  int v23; // [rsp+8Ch] [rbp+23h]
  int *v24; // [rsp+90h] [rbp+27h]
  int v25; // [rsp+98h] [rbp+2Fh]
  int v26; // [rsp+9Ch] [rbp+33h]

  v1 = (char *)a1 + 16;
  RtlAcquireSRWLockExclusive((char *)a1 + 16);
  v3 = *((_QWORD *)a1 + 5);
  if ( (v3 & 1) != 0 )
    __int2c();
  *((_QWORD *)a1 + 5) = v3 | 1;
  RtlReleaseSRWLockExclusive(v1);
  CempLockAcquireExclusive((char *)a1 + 48, v4, v5);
  *((_DWORD *)a1 + 24) |= 1u;
  *((_DWORD *)a1 + 14) = 0;
  RtlReleaseSRWLockExclusive((char *)a1 + 48);
  RtlWakeAddressAll((char *)a1 + 96);
  if ( *((_QWORD *)a1 + 9) )
    RtlUnsubscribeWnfNotificationWaitForCompletion();
  for ( i = RmpProcContextGetFirst((unsigned __int64)a1); ; i = (struct _RM_PROC_ENTRY *)CemRcTableGetNext(v10) )
  {
    v10 = i;
    if ( !i )
      break;
    RtlAcquireSRWLockShared((char *)i + 64);
    if ( (*((_BYTE *)v10 + 104) & 8) != 0 )
      __int2c();
    RtlReleaseSRWLockShared((char *)v10 + 64);
    v16[1] = 0LL;
    v16[0] = 33554442LL;
    v8 = RmpProcEntrySetLevel(v10, 0LL, v16, v13);
    if ( (unsigned int)dword_180032000 > 4 && tlgKeywordOn(v7, 2LL) )
    {
      v26 = 0;
      v23 = 0;
      v20 = 0;
      v24 = &v14;
      v21 = &v12;
      v12 = v13[0];
      v9 = *((_DWORD *)v10 + 20);
      v18 = &v15;
      v15 = v9;
      v14 = v8;
      v25 = 4;
      v22 = 1;
      v19 = 4;
      tlgWriteTransfer_EventWriteTransfer(
        (__int64)&dword_180032000,
        (unsigned __int8 *)dword_18002B5A5,
        0LL,
        0LL,
        5u,
        &v17);
    }
    if ( v8 < 0 )
      __int2c();
  }
  RtlAcquireSRWLockExclusive(v1);
  if ( (*((_BYTE *)a1 + 40) & 1) == 0 )
    __int2c();
  while ( *((_QWORD *)a1 + 5) >= 2uLL )
    RtlSleepConditionVariableSRW((char *)a1 + 32, v1, 0LL, 0LL);
  RtlReleaseSRWLockExclusive(v1);
  v11 = *((_QWORD *)a1 + 8);
  if ( v11 )
    TpWaitForWork(v11, 0LL);
}
