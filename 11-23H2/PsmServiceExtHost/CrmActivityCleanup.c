/*
 * XREFs of CrmActivityCleanup @ 0x18002CF40
 * Callers:
 *     CrmRpcSrvActivityStop @ 0x180003EE0 (CrmRpcSrvActivityStop.c)
 *     CrmActivityDereference @ 0x180004AA8 (CrmActivityDereference.c)
 *     CrmSrvActivityStart @ 0x180008200 (CrmSrvActivityStart.c)
 *     CrmRpcSrvActivityAllocate @ 0x18002C280 (CrmRpcSrvActivityAllocate.c)
 *     CrmSrvActivityFree @ 0x18002CD08 (CrmSrvActivityFree.c)
 * Callees:
 *     CrmStateMonitorCleanup @ 0x180008C9C (CrmStateMonitorCleanup.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180028480 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x180028870 (_tlgKeywordOn.c)
 *     CrmLogActivityStop @ 0x18002D530 (CrmLogActivityStop.c)
 *     __security_check_cookie @ 0x1800494C0 (__security_check_cookie.c)
 *     CempLockReleaseExclusive @ 0x180052FA4 (CempLockReleaseExclusive.c)
 *     CempRbNodeIsInserted @ 0x1800975E0 (CempRbNodeIsInserted.c)
 *     CempRbNodeRemove @ 0x1800975F4 (CempRbNodeRemove.c)
 */

__int64 __fastcall CrmActivityCleanup(__int64 a1)
{
  PVOID *v2; // rcx
  unsigned int v3; // r13d
  int v4; // r12d
  __int64 v5; // rbx
  int *v6; // rdi
  __int64 v7; // r15
  _QWORD *v8; // rbx
  __int64 v9; // rcx
  _QWORD *v10; // rax
  _QWORD *v11; // rbx
  bool v12; // zf
  bool v13; // dl
  _QWORD *v14; // r15
  __int64 v15; // rax
  __int64 v17; // rbx
  __int64 v18; // rcx
  void *v19; // r8
  void *v20; // r8
  bool v22; // [rsp+30h] [rbp-79h] BYREF
  BOOL v23; // [rsp+34h] [rbp-75h]
  __int64 v24; // [rsp+38h] [rbp-71h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v25; // [rsp+40h] [rbp-69h] BYREF
  UUID *v26; // [rsp+60h] [rbp-49h]
  __int64 v27; // [rsp+68h] [rbp-41h]
  __int64 *v28; // [rsp+70h] [rbp-39h]
  __int64 v29; // [rsp+78h] [rbp-31h]
  bool *v30; // [rsp+80h] [rbp-29h]
  __int64 v31; // [rsp+88h] [rbp-21h]
  struct _EVENT_DATA_DESCRIPTOR v32; // [rsp+90h] [rbp-19h] BYREF
  UUID *v33; // [rsp+B0h] [rbp+7h]
  __int64 v34; // [rsp+B8h] [rbp+Fh]
  __int64 *v35; // [rsp+C0h] [rbp+17h]
  __int64 v36; // [rsp+C8h] [rbp+1Fh]

  v2 = (PVOID *)(a1 + 112);
  v3 = 0;
  if ( *(_DWORD *)(a1 + 108) )
  {
    while ( 1 )
    {
      v4 = 1;
      v5 = (__int64)*v2 + 56 * v3;
      v6 = (int *)*((_QWORD *)&CrmGlobals + *(unsigned int *)(v5 + 32) + 2);
      v7 = *v6;
      LODWORD(v24) = *v6;
      RtlAcquireSRWLockExclusive(v6 + 2);
      v8 = (_QWORD *)(v5 + 8);
      v6[4] = GetCurrentThreadId();
      v9 = *v8;
      if ( *(_QWORD **)(*v8 + 8LL) != v8 || (v10 = (_QWORD *)v8[1], (_QWORD *)*v10 != v8) )
        __fastfail(3u);
      *v10 = v9;
      *(_QWORD *)(v9 + 8) = v10;
      v8[1] = v8;
      *v8 = v8;
      v11 = v6 + 6;
      v12 = *v11 == (_QWORD)v11;
      v13 = v12;
      v23 = v12;
      if ( !v12 )
        goto LABEL_14;
      CempLockReleaseExclusive(v6 + 2);
      v4 = 0;
      RtlAcquireSRWLockExclusive(&CrmGlobals);
      dword_1800DC048 = GetCurrentThreadId();
      if ( *((int **)&CrmGlobals + v7 + 2) == v6 )
        break;
      CempLockReleaseExclusive(&CrmGlobals);
      v6 = 0LL;
LABEL_13:
      v13 = v23;
LABEL_14:
      if ( (unsigned int)dword_1800DB250 > 5 && (qword_1800DB260 & 8) != 0 && (qword_1800DB268 & 8) == qword_1800DB268 )
      {
        v22 = v13;
        v28 = &v24;
        v26 = &Uuid;
        v30 = &v22;
        v27 = 16LL;
        LODWORD(v24) = v7;
        v29 = 4LL;
        v31 = 1LL;
        tlgWriteTransfer_EventWriteTransfer(
          (__int64)&dword_1800DB250,
          (unsigned __int8 *)dword_1800BF1CC,
          0LL,
          0LL,
          5u,
          &v25);
      }
      if ( v4 )
        CempLockReleaseExclusive(v6 + 2);
      ++v3;
      v2 = (PVOID *)(a1 + 112);
      if ( v3 >= *(_DWORD *)(a1 + 108) )
      {
        v2 = (PVOID *)(a1 + 112);
        goto LABEL_25;
      }
    }
    RtlAcquireSRWLockExclusive(v6 + 2);
    v6[4] = GetCurrentThreadId();
    v14 = (_QWORD *)*v11;
    v12 = *v11 == (_QWORD)v11;
    v23 = v12;
    if ( v12 && (v15 = *v6, *((int **)&CrmGlobals + v15 + 2) == v6) )
    {
      *((_QWORD *)&CrmGlobals + v15 + 2) = 0LL;
      CempLockReleaseExclusive(v6 + 2);
      CempLockReleaseExclusive(&CrmGlobals);
      v4 = 0;
    }
    else
    {
      CempLockReleaseExclusive(v6 + 2);
      v4 = 0;
      CempLockReleaseExclusive(&CrmGlobals);
      if ( v14 != v11 )
      {
LABEL_12:
        LODWORD(v7) = v24;
        goto LABEL_13;
      }
    }
    CrmStateMonitorCleanup((__int64)v6);
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v6);
    goto LABEL_12;
  }
LABEL_25:
  if ( *v2 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, *v2);
  v17 = *(_QWORD *)(*(_QWORD *)(a1 + 48) + 16LL);
  RtlAcquireSRWLockExclusive(&unk_1800DC1D0);
  dword_1800DC1D8 = GetCurrentThreadId();
  if ( (unsigned int)CempRbNodeIsInserted(a1 + 24) )
  {
    CempRbNodeRemove(&xmmword_1800DC1E0, v18);
    dword_1800DC1D8 = 0;
    RtlReleaseSRWLockExclusive(&unk_1800DC1D0);
    if ( (unsigned int)dword_1800DB250 > 5 && tlgKeywordOn((__int64)&dword_1800DB250, 1LL) )
    {
      v33 = &Uuid;
      v35 = &v24;
      v34 = 16LL;
      v24 = v17;
      v36 = 8LL;
      tlgWriteTransfer_EventWriteTransfer(
        (__int64)&dword_1800DB250,
        (unsigned __int8 *)dword_1800BE528,
        0LL,
        0LL,
        4u,
        &v32);
    }
  }
  else
  {
    dword_1800DC1D8 = 0;
    RtlReleaseSRWLockExclusive(&unk_1800DC1D0);
  }
  if ( *(_DWORD *)(a1 + 152) || *(_DWORD *)(a1 + 156) )
    NtDeleteWnfStateName(a1 + 152);
  if ( *(_DWORD *)(a1 + 144) || *(_DWORD *)(a1 + 148) )
    NtDeleteWnfStateName(a1 + 144);
  v19 = *(void **)(a1 + 224);
  if ( v19 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v19);
  v20 = *(void **)(a1 + 232);
  if ( v20 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v20);
  return CrmLogActivityStop(a1);
}
