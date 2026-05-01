/*
 * XREFs of ?RmHamHostUpdateSettings@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18002C484
 * Callers:
 *     ?HampActEndStateChange@@YAXPEAU_HAM_ACTIVITY@@K@Z @ 0x1800060A4 (-HampActEndStateChange@@YAXPEAU_HAM_ACTIVITY@@K@Z.c)
 *     ?HampActUpdateProperties@@YAJPEAU_HAM_ACTIVITY@@PEAU_HAM_ACTIVITY_DYNAMIC_PROPERTIES@@@Z @ 0x180029FCC (-HampActUpdateProperties@@YAJPEAU_HAM_ACTIVITY@@PEAU_HAM_ACTIVITY_DYNAMIC_PROPERTIES@@@Z.c)
 * Callees:
 *     ?HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180016A20 (-HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpActivityHostUpdateImportance@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x18001AD00 (-RmpActivityHostUpdateImportance@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpActivityHostUpdateDigests@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x18001D7C0 (-RmpActivityHostUpdateDigests@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpActivityHostIsRevocable@@YAKPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180020680 (-RmpActivityHostIsRevocable@@YAKPEAU_RM_ACTIVITY_HOST@@@Z.c)
 */

void __fastcall RmHamHostUpdateSettings(struct _RM_HAM_ACTIVITY_HOST *a1)
{
  DWORD v1; // esi
  char *v2; // rdi
  _QWORD *Value; // rbx
  __int64 v5; // rcx
  int v6; // eax
  DWORD v7; // edi
  _QWORD *v8; // rbx
  __int64 *v9; // rax
  __int64 v10; // rdx
  bool v11; // zf
  __int64 *v12; // rax
  __int64 v13; // rcx

  v1 = HampLockTrackerId;
  v2 = (char *)a1 - 64;
  if ( HampLockTrackerId != -1 )
  {
    Value = TlsGetValue(HampLockTrackerId);
    if ( *(_QWORD *)TlsGetValue(v1) )
      __int2c();
    *Value |= 1uLL;
    ++Value[1];
  }
  RtlAcquireSRWLockExclusive(&RmpGlobalLock);
  dword_1800DD4E8 = GetCurrentThreadId();
  RmpActivityHostUpdateDigests((struct _RM_ACTIVITY_HOST *)v2, 2);
  RmpActivityHostUpdateImportance((struct _RM_ACTIVITY_HOST *)v2, 2);
  QueryUnbiasedInterruptTime((PULONGLONG)v2 + 184);
  if ( (unsigned int)RmpActivityHostIsRevocable((struct _RM_ACTIVITY_HOST *)v2) )
    SetEvent(*(HANDLE *)(*((_QWORD *)v2 + 7) + 88LL));
  *((_QWORD *)v2 + 153) = 0LL;
  v5 = *(_QWORD *)(*((_QWORD *)v2 + 6) + 3232LL);
  v6 = *(_DWORD *)(v5 + 160);
  if ( (v6 & 3) == 0 )
  {
    *(_DWORD *)(v5 + 160) = v6 | 1;
    TpPostWork(*(_QWORD *)(v5 + 144));
  }
  v7 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    v8 = TlsGetValue(HampLockTrackerId);
    if ( (*(_QWORD *)TlsGetValue(v7) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
      __int2c();
    *v8 |= 2uLL;
    ++v8[2];
  }
  RtlAcquireSRWLockExclusive(a1);
  *((_DWORD *)a1 + 2) = GetCurrentThreadId();
  HampHostCheckQueueStateWorker(a1, 0);
  if ( HampLockTrackerId != -1 )
  {
    v9 = (__int64 *)TlsGetValue(HampLockTrackerId);
    v10 = *v9;
    if ( (*v9 & 2) == 0 )
      __int2c();
    v11 = v9[2]-- == 1;
    if ( v11 )
      *v9 = v10 & 0xFFFFFFFFFFFFFFFDuLL;
  }
  *((_DWORD *)a1 + 2) = 0;
  RtlReleaseSRWLockExclusive(a1);
  dword_1800DD4E8 = 0;
  RtlReleaseSRWLockExclusive(&RmpGlobalLock);
  if ( HampLockTrackerId != -1 )
  {
    v12 = (__int64 *)TlsGetValue(HampLockTrackerId);
    v13 = *v12;
    if ( (*v12 & 1) == 0 )
      __int2c();
    v11 = v12[1]-- == 1;
    if ( v11 )
      *v12 = v13 & 0xFFFFFFFFFFFFFFFEuLL;
  }
}
