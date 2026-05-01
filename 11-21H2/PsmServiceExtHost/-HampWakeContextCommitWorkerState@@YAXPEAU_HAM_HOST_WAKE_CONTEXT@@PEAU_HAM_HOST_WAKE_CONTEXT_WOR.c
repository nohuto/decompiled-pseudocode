/*
 * XREFs of ?HampWakeContextCommitWorkerState@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@PEAU_HAM_HOST_WAKE_CONTEXT_WORKER_STATE@@@Z @ 0x1800342EC
 * Callers:
 *     ?HampWakeContextWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180033FF0 (-HampWakeContextWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     ?HampWakeContextReleaseLockExclusive@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@@Z @ 0x1800348BC (-HampWakeContextReleaseLockExclusive@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@@Z.c)
 *     ?HampWakeContextAcquireLockExclusive@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@@Z @ 0x1800348F8 (-HampWakeContextAcquireLockExclusive@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@@Z.c)
 *     CemRcObjectDereference @ 0x180036410 (CemRcObjectDereference.c)
 */

void __fastcall HampWakeContextCommitWorkerState(
        struct _HAM_HOST_WAKE_CONTEXT *a1,
        struct _HAM_HOST_WAKE_CONTEXT_WORKER_STATE *a2)
{
  unsigned __int64 v3; // rdi
  __int128 v4; // xmm1
  __int64 v5; // xmm0_8
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rax
  DWORD v9; // ebp
  _QWORD *Value; // rsi
  DWORD CurrentThreadId; // eax
  DWORD v12; // ecx
  char v13; // bp
  __int64 *v14; // rax
  __int64 v15; // rdx
  unsigned __int64 v17; // [rsp+30h] [rbp+8h] BYREF

  v3 = -1LL;
  v4 = *((_OWORD *)a2 + 1);
  *((_OWORD *)a1 + 8) = *(_OWORD *)a2;
  v5 = *((_QWORD *)a2 + 4);
  *((_OWORD *)a1 + 9) = v4;
  *((_QWORD *)a1 + 20) = v5;
  v6 = *((_QWORD *)a1 + 17);
  v7 = *((_QWORD *)a1 + 18);
  if ( v6 < v7 && v7 != -1LL )
    v3 = *((_QWORD *)a1 + 18);
  v8 = *((_QWORD *)a1 + 19);
  if ( v6 < v8 && v8 < v3 )
    v3 = *((_QWORD *)a1 + 19);
  TpWaitForTimer(*((_QWORD *)a1 + 13), 1LL);
  v9 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    Value = TlsGetValue(HampLockTrackerId);
    if ( (*(_QWORD *)TlsGetValue(v9) & 0xFFFFFFFFFFFFF800uLL) != 0 )
      __int2c();
    *Value |= 0x800uLL;
    ++Value[12];
  }
  RtlAcquireSRWLockExclusive((char *)a1 + 40);
  CurrentThreadId = GetCurrentThreadId();
  v12 = HampLockTrackerId;
  *((_DWORD *)a1 + 12) = CurrentThreadId;
  v13 = *((_BYTE *)a1 + 184);
  *((_BYTE *)a1 + 184) = v13 & 0xFB;
  if ( v12 != -1 )
  {
    v14 = (__int64 *)TlsGetValue(v12);
    v15 = *v14;
    if ( (*v14 & 0x800) == 0 )
      __int2c();
    if ( v14[12]-- == 1 )
      *v14 = v15 & 0xFFFFFFFFFFFFF7FFuLL;
  }
  *((_DWORD *)a1 + 12) = 0;
  RtlReleaseSRWLockExclusive((char *)a1 + 40);
  if ( (v13 & 4) != 0 )
    CemRcObjectDereference(a1);
  if ( v3 != -1LL )
  {
    v17 = *((_QWORD *)a1 + 17) - v3;
    HampWakeContextAcquireLockExclusive(a1);
    *((_BYTE *)a1 + 184) |= 4u;
    if ( _InterlockedIncrement64((volatile signed __int64 *)a1 + 3) <= 1 )
      __fastfail(0xEu);
    HampWakeContextReleaseLockExclusive(a1);
    TpSetTimerEx(*((_QWORD *)a1 + 13), &v17, 0LL, 0LL);
  }
}
