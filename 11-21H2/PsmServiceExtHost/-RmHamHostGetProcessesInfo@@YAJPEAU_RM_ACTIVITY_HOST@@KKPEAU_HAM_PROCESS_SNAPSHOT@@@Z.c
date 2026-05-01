/*
 * XREFs of ?RmHamHostGetProcessesInfo@@YAJPEAU_RM_ACTIVITY_HOST@@KKPEAU_HAM_PROCESS_SNAPSHOT@@@Z @ 0x18002A6D0
 * Callers:
 *     ?HampHostTerminateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18000F550 (-HampHostTerminateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     ?HampHostQueryIsDebugEnabled@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAK@Z @ 0x1800297F8 (-HampHostQueryIsDebugEnabled@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAK@Z.c)
 *     ?RmpActivityHostQueryCommitDebt@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K@Z @ 0x18002A59C (-RmpActivityHostQueryCommitDebt@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K@Z.c)
 *     ?RmHamHostActOnProcesses@@YAJPEAU_RM_ACTIVITY_HOST@@KKP6AJ0PEAXK1@Z1@Z @ 0x18002D37C (-RmHamHostActOnProcesses@@YAJPEAU_RM_ACTIVITY_HOST@@KKP6AJ0PEAXK1@Z1@Z.c)
 *     ?HampHostCollectErrorReport@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800798AC (-HampHostCollectErrorReport@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostPlmServiceDesktopBridgeHost@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18007A220 (-HampHostPlmServiceDesktopBridgeHost@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     memset_0 @ 0x18005023A (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180050280 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall RmHamHostGetProcessesInfo(
        struct _RM_ACTIVITY_HOST *a1,
        int a2,
        char a3,
        struct _HAM_PROCESS_SNAPSHOT *a4)
{
  PVOID Heap; // rdi
  unsigned int v8; // ebp
  char *v9; // r8
  char *v10; // rsi
  char v11; // al
  int v12; // edx
  int v13; // esi
  unsigned int v14; // esi
  unsigned int v15; // ebp
  PVOID v16; // rax
  PVOID v17; // rax
  ACCESS_MASK v18; // r13d
  unsigned int v19; // r15d
  unsigned int *v20; // r12
  NTSTATUS v21; // eax
  char v22; // al
  int v23; // edx
  __int64 v24; // rdx
  PVOID v26; // rax
  unsigned int v27; // [rsp+50h] [rbp-78h] BYREF
  unsigned int v28; // [rsp+54h] [rbp-74h]
  void *ProcessHandle; // [rsp+58h] [rbp-70h] BYREF
  struct _CLIENT_ID ClientId; // [rsp+60h] [rbp-68h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp-58h] BYREF

  v27 = 1;
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 8uLL);
  if ( !Heap )
    return 3221225495LL;
  v8 = 0;
  v9 = (char *)a1 + 88;
  v10 = (char *)a1 + 552;
  while ( 1 )
  {
    v11 = *((_BYTE *)a1 + 656);
    if ( v11 )
    {
      v12 = 8;
      if ( v11 == 1 )
        v12 = 4;
    }
    else
    {
      v12 = 0;
    }
    v13 = (*(__int64 (__fastcall **)(char *, _QWORD, char *, _QWORD, _QWORD, int, PVOID, unsigned int *))(*(_QWORD *)(*((_QWORD *)a1 + 6) + 40LL) + 72LL))(
            v10,
            *((unsigned int *)a1 + 155),
            v9,
            *((unsigned int *)a1 + 156),
            *((_QWORD *)a1 + 4),
            v12,
            Heap,
            &v27);
    if ( v13 >= 0 )
      break;
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
    if ( v13 != -2147483643 )
      return (unsigned int)v13;
    v26 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 8LL * v27);
    v9 = (char *)a1 + 88;
    v10 = (char *)a1 + 552;
    Heap = v26;
    if ( !v26 )
      return 3221225495LL;
  }
  v14 = v27;
  if ( v27 )
  {
    v15 = 8 * v27;
    v16 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 8 * v27);
    *(_QWORD *)a4 = v16;
    if ( v16 )
    {
      memset_0(v16, 0, v15);
      v17 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 4 * v14);
      *((_QWORD *)a4 + 1) = v17;
      if ( v17 )
      {
        memset_0(v17, 0, 4 * v14);
        v18 = a2 | 0x1000;
        ProcessHandle = 0LL;
        v19 = 0;
        v20 = (unsigned int *)Heap;
        while ( 1 )
        {
          v28 = *v20;
          ClientId.UniqueProcess = (HANDLE)v28;
          ClientId.UniqueThread = 0LL;
          ObjectAttributes.Length = 48;
          *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
          memset(&ObjectAttributes.RootDirectory, 0, 20);
          v21 = NtOpenProcess(&ProcessHandle, v18, &ObjectAttributes, &ClientId);
          v8 = v21;
          if ( v21 < 0 )
          {
            if ( (a3 & 1) == 0 && v21 != -1073741813 )
              goto LABEL_17;
            v8 = 0;
          }
          else
          {
            v22 = *((_BYTE *)a1 + 656);
            if ( v22 )
            {
              v23 = 8;
              if ( v22 == 1 )
                v23 = 4;
              v8 = 0;
            }
            else
            {
              v8 = 0;
              v23 = 0;
            }
            if ( (*(unsigned __int8 (__fastcall **)(char *, _QWORD, char *, _QWORD, _QWORD, int, void *))(*(_QWORD *)(*((_QWORD *)a1 + 6) + 40LL) + 80LL))(
                   (char *)a1 + 552,
                   *((unsigned int *)a1 + 155),
                   (char *)a1 + 88,
                   *((unsigned int *)a1 + 156),
                   *((_QWORD *)a1 + 4),
                   v23,
                   ProcessHandle) )
            {
              v24 = *((unsigned int *)a4 + 4);
              *(_QWORD *)(*(_QWORD *)a4 + 8 * v24) = ProcessHandle;
              *(_DWORD *)(*((_QWORD *)a4 + 1) + 4 * v24) = v28;
              *((_DWORD *)a4 + 4) = v24 + 1;
            }
            else
            {
              NtClose(ProcessHandle);
            }
          }
          ++v19;
          v20 += 2;
          if ( v19 >= v14 )
            goto LABEL_17;
        }
      }
      v8 = -1073741801;
    }
    else
    {
      v8 = -1073741801;
    }
  }
  else
  {
    ProcessHandle = 0LL;
  }
LABEL_17:
  if ( Heap )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
  return v8;
}
