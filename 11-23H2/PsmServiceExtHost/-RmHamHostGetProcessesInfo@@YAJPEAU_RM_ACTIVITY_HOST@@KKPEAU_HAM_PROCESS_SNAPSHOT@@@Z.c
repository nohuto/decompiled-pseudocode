/*
 * XREFs of ?RmHamHostGetProcessesInfo@@YAJPEAU_RM_ACTIVITY_HOST@@KKPEAU_HAM_PROCESS_SNAPSHOT@@@Z @ 0x1800326A0
 * Callers:
 *     ?HampHostTerminateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18001BB50 (-HampHostTerminateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     ?RmHamHostActOnProcesses@@YAJPEAU_RM_ACTIVITY_HOST@@KKP6AJ0PEAXK1@Z1@Z @ 0x1800325CC (-RmHamHostActOnProcesses@@YAJPEAU_RM_ACTIVITY_HOST@@KKP6AJ0PEAXK1@Z1@Z.c)
 *     ?HampPkgPopulateHostSnapshot@@YAJPEAU_HAM_PACKAGE@@PEAU_HAM_HOST_SNAPSHOT@@PEAU_HAM_PROCESS_SNAPSHOT@@@Z @ 0x18004D994 (-HampPkgPopulateHostSnapshot@@YAJPEAU_HAM_PACKAGE@@PEAU_HAM_HOST_SNAPSHOT@@PEAU_HAM_PROCESS_SNAP.c)
 *     ?HampHostCollectErrorReport@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18006EE3C (-HampHostCollectErrorReport@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostPlmServiceDesktopBridgeHost@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18006F6E0 (-HampHostPlmServiceDesktopBridgeHost@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     ?HampProcessSnapshotEnsureAdditionalCapacity@@YAJPEAU_HAM_PROCESS_SNAPSHOT@@K@Z @ 0x18004C264 (-HampProcessSnapshotEnsureAdditionalCapacity@@YAJPEAU_HAM_PROCESS_SNAPSHOT@@K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180053500 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall RmHamHostGetProcessesInfo(
        struct _RM_ACTIVITY_HOST *a1,
        int a2,
        char a3,
        struct _HAM_PROCESS_SNAPSHOT *a4)
{
  unsigned int *Heap; // rbx
  int v8; // edi
  unsigned int v9; // r13d
  unsigned int *v10; // rsi
  ACCESS_MASK v11; // ecx
  unsigned int v12; // ebp
  void *v13; // r12
  NTSTATUS v14; // eax
  __int64 v15; // rdx
  unsigned int v16; // [rsp+50h] [rbp-98h] BYREF
  void *ProcessHandle; // [rsp+58h] [rbp-90h] BYREF
  unsigned int *v18; // [rsp+60h] [rbp-88h]
  struct _CLIENT_ID ClientId; // [rsp+68h] [rbp-80h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+78h] [rbp-70h] BYREF
  int v22; // [rsp+F8h] [rbp+10h]

  v16 = 1;
  Heap = (unsigned int *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 8uLL);
  if ( !Heap )
    return 3221225495LL;
  while ( 1 )
  {
    v8 = (*(__int64 (__fastcall **)(char *, _QWORD, char *, _QWORD, _QWORD, int, unsigned int *, unsigned int *))(*(_QWORD *)(*((_QWORD *)a1 + 6) + 40LL) + 72LL))(
           (char *)a1 + 552,
           *((unsigned int *)a1 + 155),
           (char *)a1 + 88,
           *((unsigned int *)a1 + 156),
           *((_QWORD *)a1 + 4),
           *((_BYTE *)a1 + 656) != 0 ? 4 : 0,
           Heap,
           &v16);
    if ( v8 >= 0 )
      break;
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
    if ( v8 != -2147483643 )
      return (unsigned int)v8;
    Heap = (unsigned int *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 8LL * v16);
    if ( !Heap )
      return 3221225495LL;
  }
  v9 = v16;
  v8 = HampProcessSnapshotEnsureAdditionalCapacity(a4, v16);
  v10 = Heap;
  if ( v8 >= 0 )
  {
    v11 = a2 | 0x1000;
    v22 = a2 | 0x1000;
    v12 = 0;
    ProcessHandle = 0LL;
    if ( v9 )
    {
      v18 = Heap;
      do
      {
        v13 = (void *)*Heap;
        ClientId.UniqueThread = 0LL;
        memset(&ObjectAttributes.RootDirectory, 0, 20);
        ClientId.UniqueProcess = v13;
        ObjectAttributes.Length = 48;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        v14 = NtOpenProcess(&ProcessHandle, v11, &ObjectAttributes, &ClientId);
        v8 = v14;
        if ( v14 >= 0 )
        {
          if ( (*(unsigned __int8 (__fastcall **)(char *, _QWORD, char *, _QWORD, _QWORD, int, void *))(*(_QWORD *)(*((_QWORD *)a1 + 6) + 40LL) + 80LL))(
                 (char *)a1 + 552,
                 *((unsigned int *)a1 + 155),
                 (char *)a1 + 88,
                 *((unsigned int *)a1 + 156),
                 *((_QWORD *)a1 + 4),
                 *((_BYTE *)a1 + 656) != 0 ? 4 : 0,
                 ProcessHandle) )
          {
            v15 = *((unsigned int *)a4 + 4);
            *(_QWORD *)(*(_QWORD *)a4 + 8 * v15) = ProcessHandle;
            *(_DWORD *)(*((_QWORD *)a4 + 1) + 4 * v15) = (_DWORD)v13;
            ++*((_DWORD *)a4 + 4);
          }
          else
          {
            NtClose(ProcessHandle);
          }
        }
        else if ( (a3 & 1) == 0 && v14 != -1073741813 )
        {
          v10 = v18;
          goto LABEL_14;
        }
        v11 = v22;
        ++v12;
        Heap += 2;
      }
      while ( v12 < v9 );
      v10 = v18;
    }
    v8 = 0;
  }
LABEL_14:
  if ( v10 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v10);
  return (unsigned int)v8;
}
