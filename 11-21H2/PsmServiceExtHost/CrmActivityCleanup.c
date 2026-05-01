/*
 * XREFs of CrmActivityCleanup @ 0x180035860
 * Callers:
 *     CrmRpcSrvActivityAllocate @ 0x1800308F0 (CrmRpcSrvActivityAllocate.c)
 *     CrmSrvActivityStart @ 0x180033A50 (CrmSrvActivityStart.c)
 *     CrmSrvActivityFree @ 0x180035698 (CrmSrvActivityFree.c)
 *     CrmSrvActivityStop @ 0x180039FD8 (CrmSrvActivityStop.c)
 *     CrmActivityDereference @ 0x18003B650 (CrmActivityDereference.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800095C0 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x18002D67C (_tlgKeywordOn.c)
 *     CrmLogActivityStop @ 0x180035CE8 (CrmLogActivityStop.c)
 *     CrmStateMonitorCleanup @ 0x180035E7C (CrmStateMonitorCleanup.c)
 *     __security_check_cookie @ 0x18004E310 (__security_check_cookie.c)
 *     CempLockReleaseExclusive @ 0x18009CCBC (CempLockReleaseExclusive.c)
 */

__int64 __fastcall CrmActivityCleanup(__int64 a1)
{
  unsigned int v1; // r13d
  int v3; // r12d
  __int64 v4; // rbx
  int *v5; // rdi
  __int64 v6; // r15
  _QWORD *v7; // rbx
  __int64 v8; // rcx
  _QWORD *v9; // rax
  _QWORD *v10; // rbx
  bool v11; // zf
  bool v12; // dl
  _QWORD *v13; // r15
  __int64 v14; // rax
  void *v16; // r8
  __int64 v17; // rbx
  _QWORD *v18; // rax
  __int64 v19; // rcx
  _QWORD *v20; // rdx
  void *v21; // r8
  void *v22; // r8
  bool v24; // [rsp+30h] [rbp-79h] BYREF
  BOOL v25; // [rsp+34h] [rbp-75h]
  __int64 v26; // [rsp+38h] [rbp-71h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v27; // [rsp+40h] [rbp-69h] BYREF
  UUID *v28; // [rsp+60h] [rbp-49h]
  __int64 v29; // [rsp+68h] [rbp-41h]
  __int64 *v30; // [rsp+70h] [rbp-39h]
  __int64 v31; // [rsp+78h] [rbp-31h]
  bool *v32; // [rsp+80h] [rbp-29h]
  __int64 v33; // [rsp+88h] [rbp-21h]
  struct _EVENT_DATA_DESCRIPTOR v34; // [rsp+90h] [rbp-19h] BYREF
  UUID *v35; // [rsp+B0h] [rbp+7h]
  __int64 v36; // [rsp+B8h] [rbp+Fh]
  __int64 *v37; // [rsp+C0h] [rbp+17h]
  __int64 v38; // [rsp+C8h] [rbp+1Fh]

  v1 = 0;
  if ( *(_DWORD *)(a1 + 96) )
  {
    while ( 1 )
    {
      v3 = 1;
      v4 = *(_QWORD *)(a1 + 104) + 56LL * v1;
      v5 = (int *)*((_QWORD *)&CrmGlobals + *(unsigned int *)(v4 + 32) + 2);
      v6 = *v5;
      LODWORD(v26) = *v5;
      RtlAcquireSRWLockExclusive(v5 + 2);
      v7 = (_QWORD *)(v4 + 8);
      v5[4] = GetCurrentThreadId();
      v8 = *v7;
      if ( *(_QWORD **)(*v7 + 8LL) != v7 )
        goto LABEL_44;
      v9 = (_QWORD *)v7[1];
      if ( (_QWORD *)*v9 != v7 )
        goto LABEL_44;
      *v9 = v8;
      *(_QWORD *)(v8 + 8) = v9;
      v7[1] = v7;
      *v7 = v7;
      v10 = v5 + 6;
      v11 = *v10 == (_QWORD)v10;
      v12 = v11;
      v25 = v11;
      if ( v11 )
        break;
LABEL_14:
      if ( (unsigned int)dword_1800DC250 > 5 && (qword_1800DC260 & 8) != 0 && (qword_1800DC268 & 8) == qword_1800DC268 )
      {
        v24 = v12;
        v28 = &Uuid;
        v29 = 16LL;
        v30 = &v26;
        LODWORD(v26) = v6;
        v32 = &v24;
        v31 = 4LL;
        v33 = 1LL;
        tlgWriteTransfer_EventWriteTransfer(
          (__int64)&dword_1800DC250,
          (unsigned __int8 *)dword_1800BE2B8,
          0LL,
          0LL,
          5u,
          &v27);
      }
      if ( v3 )
        CempLockReleaseExclusive(v5 + 2);
      if ( ++v1 >= *(_DWORD *)(a1 + 96) )
        goto LABEL_24;
    }
    CempLockReleaseExclusive(v5 + 2);
    v3 = 0;
    RtlAcquireSRWLockExclusive(&CrmGlobals);
    dword_1800DD028 = GetCurrentThreadId();
    if ( *((int **)&CrmGlobals + v6 + 2) != v5 )
    {
      CempLockReleaseExclusive(&CrmGlobals);
      v5 = 0LL;
LABEL_13:
      v12 = v25;
      goto LABEL_14;
    }
    RtlAcquireSRWLockExclusive(v5 + 2);
    v5[4] = GetCurrentThreadId();
    v13 = (_QWORD *)*v10;
    v11 = *v10 == (_QWORD)v10;
    v25 = v11;
    if ( v11 && (v14 = *v5, *((int **)&CrmGlobals + v14 + 2) == v5) )
    {
      *((_QWORD *)&CrmGlobals + v14 + 2) = 0LL;
      CempLockReleaseExclusive(v5 + 2);
      CempLockReleaseExclusive(&CrmGlobals);
    }
    else
    {
      CempLockReleaseExclusive(v5 + 2);
      v3 = 0;
      CempLockReleaseExclusive(&CrmGlobals);
      if ( v13 != v10 )
      {
LABEL_12:
        LODWORD(v6) = v26;
        goto LABEL_13;
      }
    }
    CrmStateMonitorCleanup(v5);
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v5);
    v3 = 0;
    goto LABEL_12;
  }
LABEL_24:
  v16 = *(void **)(a1 + 104);
  if ( v16 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v16);
  v17 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 16LL);
  RtlAcquireSRWLockExclusive(&unk_1800DD1A0);
  dword_1800DD1A8 = GetCurrentThreadId();
  v18 = (_QWORD *)(a1 + 24);
  v19 = *(_QWORD *)(a1 + 24);
  if ( v19 == a1 + 24 )
  {
    *(_QWORD *)(a1 + 32) = a1 + 24;
    *v18 = v18;
    dword_1800DD1A8 = 0;
    RtlReleaseSRWLockExclusive(&unk_1800DD1A0);
  }
  else
  {
    if ( *(_QWORD **)(v19 + 8) != v18 || (v20 = *(_QWORD **)(a1 + 32), (_QWORD *)*v20 != v18) )
LABEL_44:
      __fastfail(3u);
    *v20 = v19;
    *(_QWORD *)(v19 + 8) = v20;
    *(_QWORD *)(a1 + 32) = a1 + 24;
    *v18 = v18;
    dword_1800DD1A8 = 0;
    RtlReleaseSRWLockExclusive(&unk_1800DD1A0);
    if ( (unsigned int)dword_1800DC250 > 5 && tlgKeywordOn((__int64)&dword_1800DC250, 1LL) )
    {
      v35 = &Uuid;
      v37 = &v26;
      v36 = 16LL;
      v26 = v17;
      v38 = 8LL;
      tlgWriteTransfer_EventWriteTransfer(
        (__int64)&dword_1800DC250,
        (unsigned __int8 *)dword_1800BD678,
        0LL,
        0LL,
        4u,
        &v34);
    }
  }
  if ( *(_DWORD *)(a1 + 128) || *(_DWORD *)(a1 + 132) )
    NtDeleteWnfStateName(a1 + 128);
  if ( *(_DWORD *)(a1 + 120) || *(_DWORD *)(a1 + 124) )
    NtDeleteWnfStateName(a1 + 120);
  v21 = *(void **)(a1 + 200);
  if ( v21 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v21);
  v22 = *(void **)(a1 + 208);
  if ( v22 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v22);
  return CrmLogActivityStop(a1);
}
