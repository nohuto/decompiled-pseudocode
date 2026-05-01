/*
 * XREFs of ?RmpActivityHostAllocateAndInitialize@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PARTITION@@PEAU_RM_PSM_HOST_INFO@@KPEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180026E70
 * Callers:
 *     ?RmpActivityHostCreateHostPsm@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PARTITION@@PEAU_RM_PSM_HOST_INFO@@KPEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180024F40 (-RmpActivityHostCreateHostPsm@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PARTITION@@PEAU_RM_PSM_HOST_I.c)
 * Callees:
 *     ?RmpSystemDereferenceHostWithPsm@@YAXPEAU_RM_ACTIVITY_HOST@@PEAX@Z @ 0x18000B438 (-RmpSystemDereferenceHostWithPsm@@YAXPEAU_RM_ACTIVITY_HOST@@PEAX@Z.c)
 *     ?RmpPolicyResizeScratchBuffers@@YAJPEAU_RM_POLICY_WORK_BUFFER@@KK@Z @ 0x18002727C (-RmpPolicyResizeScratchBuffers@@YAJPEAU_RM_POLICY_WORK_BUFFER@@KK@Z.c)
 *     ?HampHostAllocateState@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180027440 (-HampHostAllocateState@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpEnforcementInfoInitializeCommon@@YAJPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800278E0 (-RmpEnforcementInfoInitializeCommon@@YAJPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostInitialize@@YAXKPEAU_RM_PSM_HOST_INFO@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180027A10 (-HampHostInitialize@@YAXKPEAU_RM_PSM_HOST_INFO@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     __security_check_cookie @ 0x18004E310 (__security_check_cookie.c)
 *     memset_0 @ 0x18005023A (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180050280 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall RmpActivityHostAllocateAndInitialize(
        struct _RM_SERVICE_GLOBALS *a1,
        struct _RM_PARTITION *a2,
        struct _RM_PSM_HOST_INFO *a3,
        unsigned int a4,
        struct _RM_ACTIVITY_HOST **a5)
{
  char *Heap; // rax
  char *v10; // rbx
  unsigned __int64 v11; // rax
  struct _RM_PSM_HOST_INFO *v12; // rdi
  struct _RM_PSM_HOST_INFO *v13; // rdx
  unsigned int v14; // r8d
  int State; // edi
  int v16; // edx
  char v17; // al
  int v18; // r9d
  void *v20; // rdx
  int v21; // [rsp+50h] [rbp-71h] BYREF
  struct _RM_PSM_HOST_INFO *v22; // [rsp+58h] [rbp-69h]
  unsigned __int64 v23; // [rsp+60h] [rbp-61h] BYREF
  char *v24; // [rsp+68h] [rbp-59h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+70h] [rbp-51h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+80h] [rbp-41h] BYREF
  void *v27; // [rsp+90h] [rbp-31h]
  int v28; // [rsp+98h] [rbp-29h]
  int v29; // [rsp+9Ch] [rbp-25h]
  int *v30; // [rsp+A0h] [rbp-21h]
  __int64 v31; // [rsp+A8h] [rbp-19h]
  __int64 *v32; // [rsp+B0h] [rbp-11h]
  __int64 v33; // [rsp+B8h] [rbp-9h]
  char **v34; // [rsp+C0h] [rbp-1h]
  __int64 v35; // [rsp+C8h] [rbp+7h]

  v22 = a3;
  Heap = (char *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x5D8uLL);
  v10 = Heap;
  if ( !Heap )
    return 3221225495LL;
  memset_0(Heap, 0, 0x5D8uLL);
  *((_QWORD *)v10 + 6) = a1;
  if ( _InterlockedIncrement64((volatile signed __int64 *)a2) <= 1 )
    __fastfail(0xEu);
  *((_QWORD *)v10 + 7) = a2;
  *((_QWORD *)v10 + 179) = v10 + 1424;
  *((_QWORD *)v10 + 178) = v10 + 1424;
  v11 = *((_QWORD *)a3 + 68);
  *(_QWORD *)v10 = 0LL;
  *((_QWORD *)v10 + 3) = 0LL;
  *((_QWORD *)v10 + 4) = v11;
  v23 = v11;
  *((_QWORD *)v10 + 5) = 0LL;
  *((_QWORD *)v10 + 2) = 1LL;
  v12 = v22;
  v13 = v22;
  *((_QWORD *)v10 + 1) = HIBYTE(v11)
                       + 37
                       * (BYTE6(v11)
                        + 37
                        * (BYTE5(v11)
                         + 37
                         * (BYTE4(v11)
                          + 37
                          * (BYTE3(v11)
                           + 37 * (BYTE2(v11) + 37 * (BYTE1(v11) + 37 * ((unsigned __int8)v11 + 11623883LL)))))));
  HampHostInitialize(a4, v13, (struct _RM_HAM_ACTIVITY_HOST *)(v10 + 64));
  *((_QWORD *)v10 + 142) = 0LL;
  *((_QWORD *)v10 + 143) = 0LL;
  *((_QWORD *)v10 + 142) = v10 + 1128;
  *((_QWORD *)v10 + 141) = v10 + 1128;
  *((_QWORD *)v10 + 145) = 0LL;
  *((_QWORD *)v10 + 146) = 0LL;
  *((_QWORD *)v10 + 145) = v10 + 1152;
  *((_QWORD *)v10 + 144) = v10 + 1152;
  v14 = *((_DWORD *)v12 + 133);
  State = RmpPolicyResizeScratchBuffers((struct _RM_PARTITION *)((char *)a2 + 160), ++*((_DWORD *)a2 + 52), v14);
  if ( State < 0 )
    goto LABEL_24;
  State = RmpEnforcementInfoInitializeCommon((struct _RM_ACTIVITY_HOST *)v10);
  if ( State < 0 )
    goto LABEL_24;
  if ( (a4 & 1) != 0 )
    *((_DWORD *)v10 + 315) |= 0x180u;
  v16 = *((_DWORD *)v10 + 213) & 1 | 2;
  if ( (a4 & 0xA) == 0 )
    v16 = *((_DWORD *)v10 + 213) & 1;
  v17 = v10[656];
  if ( v17 )
  {
    v18 = 8;
    if ( v17 == 1 )
      v18 = 4;
  }
  else
  {
    v18 = 0;
  }
  State = (*(__int64 (__fastcall **)(char *, _QWORD, char *, _QWORD, _QWORD, int, int, char *))(*(_QWORD *)(*((_QWORD *)v10 + 6) + 40LL)
                                                                                              + 120LL))(
            v10 + 552,
            *((unsigned int *)v10 + 155),
            v10 + 88,
            *((unsigned int *)v10 + 156),
            *((_QWORD *)v10 + 4),
            v18,
            v16,
            v10 + 1216);
  if ( (unsigned int)dword_1800DC1E0 > 4 && (byte_1800DC1F0 & 1) != 0 && (qword_1800DC1F8 & 1) == qword_1800DC1F8 )
  {
    v23 = *((_QWORD *)v10 + 4);
    v24 = v10;
    v34 = &v24;
    v21 = State;
    v32 = (__int64 *)&v23;
    v35 = 8LL;
    v30 = &v21;
    *(_DWORD *)&EventDescriptor.Level = 4;
    UserData.Ptr = (ULONGLONG)off_1800DC1E8;
    v33 = 8LL;
    v31 = 4LL;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 1LL;
    UserData.Size = *(unsigned __int16 *)off_1800DC1E8;
    v27 = &unk_1800C6303;
    UserData.Reserved = 2;
    v28 = 46;
    v29 = 1;
    LODWORD(v22) = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 5u, &UserData);
  }
  if ( State < 0
    || (State = HampHostAllocateState(
                  (struct _RM_SERVICE_GLOBALS *)((char *)a1 + 2248),
                  (struct _RM_HAM_ACTIVITY_HOST *)(v10 + 64),
                  a4),
        State < 0)
    || (State = TpAllocWork(v10 + 1400, RmpActivityHostCommitUseUpdateWorker, v10, 0LL), State < 0) )
  {
LABEL_24:
    v20 = (void *)*((_QWORD *)v10 + 152);
    if ( v20 )
      RmpSystemDereferenceHostWithPsm((struct _RM_ACTIVITY_HOST *)v10, v20);
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v10);
    return (unsigned int)State;
  }
  else
  {
    *a5 = (struct _RM_ACTIVITY_HOST *)v10;
    return 0LL;
  }
}
