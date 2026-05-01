/*
 * XREFs of ?HampWakeContextWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180033FF0
 * Callers:
 *     <none>
 * Callees:
 *     ?HampWakeContextCloseActivity@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@@Z @ 0x1800016AC (-HampWakeContextCloseActivity@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@@Z.c)
 *     ?HampWakeContextCommitWorkerState@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@PEAU_HAM_HOST_WAKE_CONTEXT_WORKER_STATE@@@Z @ 0x1800342EC (-HampWakeContextCommitWorkerState@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@PEAU_HAM_HOST_WAKE_CONTEXT_WOR.c)
 *     ?HampWakeContextTryUpdateActivityState@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@PEAU_HAM_HOST_WAKE_CONTEXT_WORKER_STATE@@@Z @ 0x1800344CC (-HampWakeContextTryUpdateActivityState@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@PEAU_HAM_HOST_WAKE_CONTEX.c)
 *     ?HampWakeContextComputeNextState@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@T_HAM_HOST_WAKE_CONTEXT_EVENTS@@PEAU_HAM_HOST_WAKE_CONTEXT_WORKER_STATE@@@Z @ 0x1800346F4 (-HampWakeContextComputeNextState@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@T_HAM_HOST_WAKE_CONTEXT_EVENTS@.c)
 *     ?HampWakeContextDestroy@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@@Z @ 0x180034980 (-HampWakeContextDestroy@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@@Z.c)
 *     CemRcObjectDereference @ 0x180036410 (CemRcObjectDereference.c)
 *     __security_check_cookie @ 0x18004E310 (__security_check_cookie.c)
 *     memset_0 @ 0x18005023A (memset_0.c)
 */

void __fastcall HampWakeContextWorker(struct _TP_CALLBACK_INSTANCE *a1, _DWORD *a2, struct _TP_WORK *a3)
{
  DWORD v4; // edi
  _QWORD *Value; // rsi
  DWORD CurrentThreadId; // eax
  unsigned __int8 v7; // si
  DWORD v8; // ecx
  __int64 *v9; // rax
  __int64 v10; // rcx
  bool v11; // zf
  DWORD v12; // ebp
  _QWORD *v13; // rsi
  char v14; // al
  DWORD v15; // ecx
  __int64 *v16; // rax
  __int64 v17; // rdx
  DWORD v18; // ebx
  _BYTE v19[48]; // [rsp+20h] [rbp-E8h] BYREF
  _BYTE TlsValue[144]; // [rsp+50h] [rbp-B8h] BYREF

  memset_0(TlsValue, 0, 0x88uLL);
  v4 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v4, TlsValue);
    v4 = HampLockTrackerId;
  }
  if ( *((_QWORD *)a2 + 3) )
  {
    if ( v4 != -1 )
    {
      Value = TlsGetValue(v4);
      if ( (*(_QWORD *)TlsGetValue(v4) & 0xFFFFFFFFFFFFF800uLL) != 0 )
        __int2c();
      *Value |= 0x800uLL;
      ++Value[12];
    }
    RtlAcquireSRWLockExclusive(a2 + 10);
    a2[12] = GetCurrentThreadId();
    CurrentThreadId = GetCurrentThreadId();
    v7 = *((_BYTE *)a2 + 185);
    a2[45] = CurrentThreadId;
    if ( v7 )
    {
      while ( 1 )
      {
        v8 = HampLockTrackerId;
        *((_BYTE *)a2 + 185) = 0;
        if ( v8 != -1 )
        {
          v9 = (__int64 *)TlsGetValue(v8);
          v10 = *v9;
          if ( (*v9 & 0x800) == 0 )
            __int2c();
          v11 = v9[12]-- == 1;
          if ( v11 )
            *v9 = v10 & 0xFFFFFFFFFFFFF7FFuLL;
        }
        a2[12] = 0;
        RtlReleaseSRWLockExclusive(a2 + 10);
        if ( (v7 & 4) != 0 && (a2[40] & 2) != 0 )
        {
          HampWakeContextCloseActivity((struct _HAM_HOST_WAKE_CONTEXT *)a2);
          *((_QWORD *)a2 + 16) = 0LL;
        }
        HampWakeContextComputeNextState(a2, v7, v19);
        HampWakeContextTryUpdateActivityState(
          (struct _HAM_HOST_WAKE_CONTEXT *)a2,
          (struct _HAM_HOST_WAKE_CONTEXT_WORKER_STATE *)v19);
        HampWakeContextCommitWorkerState(
          (struct _HAM_HOST_WAKE_CONTEXT *)a2,
          (struct _HAM_HOST_WAKE_CONTEXT_WORKER_STATE *)v19);
        v12 = HampLockTrackerId;
        if ( HampLockTrackerId != -1 )
        {
          v13 = TlsGetValue(HampLockTrackerId);
          if ( (*(_QWORD *)TlsGetValue(v12) & 0xFFFFFFFFFFFFF800uLL) != 0 )
            __int2c();
          *v13 |= 0x800uLL;
          ++v13[12];
        }
        RtlAcquireSRWLockExclusive(a2 + 10);
        a2[12] = GetCurrentThreadId();
        if ( (a2[40] & 1) != 0 )
          break;
        v7 = *((_BYTE *)a2 + 185);
        if ( !v7 )
          goto LABEL_23;
      }
      v14 = *((_BYTE *)a2 + 184) | 2;
    }
    else
    {
LABEL_23:
      v14 = *((_BYTE *)a2 + 184);
    }
    v15 = HampLockTrackerId;
    a2[45] = 0;
    *((_BYTE *)a2 + 184) = v14 & 0xFE;
    if ( v15 != -1 )
    {
      v16 = (__int64 *)TlsGetValue(v15);
      v17 = *v16;
      if ( (*v16 & 0x800) == 0 )
        __int2c();
      v11 = v16[12]-- == 1;
      if ( v11 )
        *v16 = v17 & 0xFFFFFFFFFFFFF7FFuLL;
    }
    a2[12] = 0;
    RtlReleaseSRWLockExclusive(a2 + 10);
    CemRcObjectDereference(a2);
  }
  else
  {
    HampWakeContextDestroy((struct _HAM_HOST_WAKE_CONTEXT *)a2);
  }
  v18 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v18, 0LL);
  }
}
