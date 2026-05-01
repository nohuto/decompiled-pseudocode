/*
 * XREFs of ?HampHostQueryIsDebugEnabled@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAK@Z @ 0x1800297F8
 * Callers:
 *     ?HampHostUpdateQuiesceState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K1@Z @ 0x1800294D4 (-HampHostUpdateQuiesceState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K1@Z.c)
 *     ?HamSrvIsHostBeingDebugged@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGPEAEKKK_K2@Z @ 0x180070178 (-HamSrvIsHostBeingDebugged@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGPEAEKKK_K2@Z.c)
 *     ?HampHostTryEnterConnectedStandby@@YA?AW4_HAM_PDC_BLOCK_TYPE@@PEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18007A998 (-HampHostTryEnterConnectedStandby@@YA-AW4_HAM_PDC_BLOCK_TYPE@@PEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 * Callees:
 *     ?HampProcessSnapshotCleanup@@YAXPEAU_HAM_PROCESS_SNAPSHOT@@@Z @ 0x18002A648 (-HampProcessSnapshotCleanup@@YAXPEAU_HAM_PROCESS_SNAPSHOT@@@Z.c)
 *     ?RmHamHostGetProcessesInfo@@YAJPEAU_RM_ACTIVITY_HOST@@KKPEAU_HAM_PROCESS_SNAPSHOT@@@Z @ 0x18002A6D0 (-RmHamHostGetProcessesInfo@@YAJPEAU_RM_ACTIVITY_HOST@@KKPEAU_HAM_PROCESS_SNAPSHOT@@@Z.c)
 *     ?HampHostQueryProcessDebuggedCallback@@YAJPEAU_RM_ACTIVITY_HOST@@PEAXK1@Z @ 0x18003AEC4 (-HampHostQueryProcessDebuggedCallback@@YAJPEAU_RM_ACTIVITY_HOST@@PEAXK1@Z.c)
 */

__int64 __fastcall HampHostQueryIsDebugEnabled(struct _RM_HAM_ACTIVITY_HOST *a1, unsigned int *a2)
{
  DWORD v2; // edi
  __int64 v5; // rsi
  _QWORD *Value; // rbx
  bool v7; // bl
  __int64 *v8; // rax
  __int64 v9; // rdx
  int ProcessesInfo; // ebx
  unsigned int v12; // esi
  __int64 v13; // rdi
  __int64 v14; // r15
  __int64 v15; // r12
  __int128 v17; // [rsp+20h] [rbp-48h] BYREF
  __int64 v18; // [rsp+30h] [rbp-38h]
  unsigned int v19; // [rsp+70h] [rbp+8h] BYREF

  v2 = HampLockTrackerId;
  v5 = *(_QWORD *)(*((_QWORD *)a1 + 99) + 88LL);
  if ( HampLockTrackerId != -1 )
  {
    Value = TlsGetValue(HampLockTrackerId);
    if ( (*(_QWORD *)TlsGetValue(v2) & 0xFFFFFFFFFFFFFFC0uLL) != 0 )
      __int2c();
    *Value |= 0x40uLL;
    ++Value[7];
  }
  RtlAcquireSRWLockShared(v5 + 304);
  v7 = (*(_DWORD *)(v5 + 340) & 2) != 0;
  if ( HampLockTrackerId != -1 )
  {
    v8 = (__int64 *)TlsGetValue(HampLockTrackerId);
    v9 = *v8;
    if ( (*v8 & 0x40) == 0 )
      __int2c();
    if ( v8[7]-- == 1 )
      *v8 = v9 & 0xFFFFFFFFFFFFFFBFuLL;
  }
  RtlReleaseSRWLockShared(v5 + 304);
  if ( v7 )
  {
    *a2 = 1;
    return 0;
  }
  v19 = 0;
  v18 = 0LL;
  v17 = 0LL;
  ProcessesInfo = RmHamHostGetProcessesInfo(
                    (struct _RM_HAM_ACTIVITY_HOST *)((char *)a1 - 64),
                    0x400u,
                    0,
                    (struct _HAM_PROCESS_SNAPSHOT *)&v17);
  if ( ProcessesInfo >= 0 )
  {
    v12 = v18;
    v13 = 0LL;
    if ( (_DWORD)v18 )
    {
      v14 = *((_QWORD *)&v17 + 1);
      v15 = v17;
      while ( 1 )
      {
        ProcessesInfo = HampHostQueryProcessDebuggedCallback(
                          (struct _RM_HAM_ACTIVITY_HOST *)((char *)a1 - 64),
                          *(void **)(v15 + 8 * v13),
                          *(_DWORD *)(v14 + 4 * v13),
                          &v19);
        if ( ProcessesInfo < 0 )
          break;
        v13 = (unsigned int)(v13 + 1);
        if ( (unsigned int)v13 >= v12 )
          goto LABEL_16;
      }
    }
    else
    {
LABEL_16:
      ProcessesInfo = 0;
    }
  }
  HampProcessSnapshotCleanup((struct _HAM_PROCESS_SNAPSHOT *)&v17);
  if ( ProcessesInfo >= 0 )
  {
    *a2 = v19;
    return 0;
  }
  return (unsigned int)ProcessesInfo;
}
