/*
 * XREFs of ?RmpActivityHostCommitUseUpdateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18001BE00
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x180005DD8 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 *     ?RmpSystemMemoryMetricsQuery@@YAXPEAU_RM_PARTITION@@PEAU_RM_SYSTEM_MEMORY_METRICS@@@Z @ 0x18000E970 (-RmpSystemMemoryMetricsQuery@@YAXPEAU_RM_PARTITION@@PEAU_RM_SYSTEM_MEMORY_METRICS@@@Z.c)
 *     ?HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180016A20 (-HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpPolicyComputeUsageLimits@@YAXPEAU_RM_USAGE_LIMIT_SETTINGS@@PEAU_RM_REMEDIATION_ACTIONS@@PEAU_RM_SYSTEM_MEMORY_METRICS@@_KPEAU_RM_RESOURCE_USAGE_LIMITS@@@Z @ 0x18001B960 (-RmpPolicyComputeUsageLimits@@YAXPEAU_RM_USAGE_LIMIT_SETTINGS@@PEAU_RM_REMEDIATION_ACTIONS@@PEAU.c)
 *     ?RmpActivityHostCanDelete@@YAKPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18001CAB0 (-RmpActivityHostCanDelete@@YAKPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpActivityHostComputeCommitEstimate@@YAX_K0PEA_K1@Z @ 0x18001CB40 (-RmpActivityHostComputeCommitEstimate@@YAX_K0PEA_K1@Z.c)
 *     ?RmpActivityHostApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS@@K@Z @ 0x18001CC20 (-RmpActivityHostApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS.c)
 *     ?RmpActivityHostUpdateCommitUseState@@YAXPEAU_RM_ACTIVITY_HOST@@_KW4_RM_COMMIT_LEVEL@@@Z @ 0x18001D450 (-RmpActivityHostUpdateCommitUseState@@YAXPEAU_RM_ACTIVITY_HOST@@_KW4_RM_COMMIT_LEVEL@@@Z.c)
 *     ?RmpPartitionRelease@@YAXPEAU_RM_PARTITION@@@Z @ 0x180024940 (-RmpPartitionRelease@@YAXPEAU_RM_PARTITION@@@Z.c)
 *     _tlgKeywordOn @ 0x18002D67C (_tlgKeywordOn.c)
 *     ?HampHostCleanup@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800362DC (-HampHostCleanup@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpEmptyWorkerCleanup@@YAXPEAU_RM_EMPTY_WORKER_CONTEXT@@@Z @ 0x1800363B8 (-RmpEmptyWorkerCleanup@@YAXPEAU_RM_EMPTY_WORKER_CONTEXT@@@Z.c)
 *     ?RmpActivityHostCommitDebtCallback@@YAJPEAU_RM_ACTIVITY_HOST@@PEAXK1@Z @ 0x18003A2D4 (-RmpActivityHostCommitDebtCallback@@YAJPEAU_RM_ACTIVITY_HOST@@PEAXK1@Z.c)
 *     __security_check_cookie @ 0x18004E310 (__security_check_cookie.c)
 *     memset_0 @ 0x18005023A (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180050280 (_guard_xfg_dispatch_icall_nop.c)
 *     ?RmpPolicyGenerateReclaimListForCommit@@YAEPEAU_RM_PARTITION@@PEAU_RM_POLICY_WORK_BUFFER@@PEAU_RM_ACTIVITY_HOST@@_KW4Enum@Priority@ExecutionModel@@W4_RM_REVOKE_POLICY@@@Z @ 0x18008D3D4 (-RmpPolicyGenerateReclaimListForCommit@@YAEPEAU_RM_PARTITION@@PEAU_RM_POLICY_WORK_BUFFER@@PEAU_R.c)
 *     ?RmpPolicyPopulateActivityHostMetrics@@YAXPEAU_RM_PARTITION@@W4Enum@Priority@ExecutionModel@@PEAU_RM_POLICY_WORK_BUFFER@@GP6AEPEAU_RM_ACTIVITY_HOST@@PEAX@Z4@Z @ 0x18008D9B0 (-RmpPolicyPopulateActivityHostMetrics@@YAXPEAU_RM_PARTITION@@W4Enum@Priority@ExecutionModel@@PEA.c)
 *     ?RmpPolicyReclaimHostList@@YAXPEAU_RM_POLICY_WORK_BUFFER@@W4_RM_REVOKE_POLICY@@W4_RM_REVOKE_REASON_INTERNAL@@PEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY_HOST_REMEDIATION_GROUP@@@Z @ 0x18008DB9C (-RmpPolicyReclaimHostList@@YAXPEAU_RM_POLICY_WORK_BUFFER@@W4_RM_REVOKE_POLICY@@W4_RM_REVOKE_REAS.c)
 */

void __fastcall RmpActivityHostCommitUseUpdateWorker(struct _TP_CALLBACK_INSTANCE *a1, char *a2, struct _TP_WORK *a3)
{
  DWORD v4; // edi
  int v5; // edi
  unsigned __int64 v6; // rsi
  DWORD v7; // r14d
  _QWORD *Value; // rdi
  __int64 v9; // rcx
  __int128 v10; // xmm1
  __int64 v11; // rax
  char v12; // al
  __int64 v13; // r14
  __int64 v14; // r15
  unsigned int v15; // r12d
  unsigned int v16; // r13d
  int v17; // eax
  __int64 v18; // r8
  int v19; // eax
  __int64 v20; // r8
  unsigned __int64 v21; // r12
  int v22; // eax
  unsigned __int64 v23; // r14
  __int64 v24; // r8
  __int64 v25; // r9
  unsigned int *Heap; // r15
  char v27; // al
  int v28; // eax
  int v29; // eax
  int v30; // esi
  __int64 v31; // rdi
  unsigned int v32; // esi
  PVOID v33; // rax
  PVOID v34; // rax
  unsigned int *v35; // rsi
  int v36; // r13d
  char v37; // al
  int v38; // eax
  __int64 v39; // rdx
  void **v40; // rdi
  __int64 v41; // r15
  unsigned int *v42; // rsi
  HANDLE *v43; // rdi
  __int64 v44; // r15
  unsigned __int64 v45; // rdx
  unsigned __int64 v46; // rax
  unsigned __int64 v47; // rcx
  unsigned __int64 v48; // r8
  unsigned __int64 v49; // rdi
  unsigned __int64 v50; // r15
  unsigned __int64 v51; // r12
  unsigned __int64 v52; // r14
  __int64 v53; // r8
  DWORD v54; // r15d
  _QWORD *v55; // rdi
  __int64 *v56; // rax
  __int64 v57; // rdx
  bool v58; // zf
  __int64 *v59; // rax
  __int64 v60; // rcx
  signed __int64 v61; // r13
  bool v62; // cc
  signed __int64 v63; // r13
  DWORD v64; // ebx
  const unsigned __int16 *v65; // rcx
  __int64 v66; // rax
  int v67; // edx
  __int64 v68; // r15
  __int64 v69; // rdi
  __int128 v70; // xmm2
  __int64 v71; // rdi
  __int64 v72; // r14
  __int128 v73; // xmm1
  __int128 v74; // xmm0
  __int64 v75; // rdi
  __int64 v76; // r8
  __int64 v77; // r9
  __int64 v78; // r8
  __int64 v79; // r9
  PVOID ProcessHeap; // rcx
  __int64 v81; // r8
  __int64 v82; // r9
  int v83; // ecx
  int v84; // ecx
  void *v85; // rcx
  struct _RM_PARTITION *v86; // rcx
  unsigned int v87; // [rsp+58h] [rbp-A8h] BYREF
  PVOID P[2]; // [rsp+60h] [rbp-A0h]
  __int64 v89; // [rsp+70h] [rbp-90h]
  void *ProcessHandle; // [rsp+78h] [rbp-88h] BYREF
  int v91; // [rsp+80h] [rbp-80h] BYREF
  int v92; // [rsp+84h] [rbp-7Ch] BYREF
  int v93; // [rsp+88h] [rbp-78h] BYREF
  int v94; // [rsp+8Ch] [rbp-74h] BYREF
  unsigned __int64 v95; // [rsp+90h] [rbp-70h] BYREF
  unsigned __int64 v96; // [rsp+98h] [rbp-68h] BYREF
  __int64 v97; // [rsp+A0h] [rbp-60h] BYREF
  unsigned __int64 v98; // [rsp+A8h] [rbp-58h] BYREF
  unsigned __int64 v99; // [rsp+B8h] [rbp-48h]
  __int64 v100; // [rsp+C0h] [rbp-40h] BYREF
  unsigned __int64 v101; // [rsp+C8h] [rbp-38h] BYREF
  unsigned __int64 v102; // [rsp+D0h] [rbp-30h] BYREF
  unsigned __int64 v103; // [rsp+D8h] [rbp-28h] BYREF
  unsigned __int64 v104; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v105; // [rsp+E8h] [rbp-18h] BYREF
  unsigned __int64 v106; // [rsp+F0h] [rbp-10h] BYREF
  unsigned __int64 v107; // [rsp+F8h] [rbp-8h] BYREF
  unsigned __int64 v108; // [rsp+100h] [rbp+0h] BYREF
  __int64 v109; // [rsp+108h] [rbp+8h] BYREF
  EVENT_DESCRIPTOR v110; // [rsp+110h] [rbp+10h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+120h] [rbp+20h] BYREF
  EVENT_DESCRIPTOR v112; // [rsp+130h] [rbp+30h] BYREF
  __int64 v113; // [rsp+140h] [rbp+40h] BYREF
  struct _CLIENT_ID ClientId; // [rsp+148h] [rbp+48h] BYREF
  __int64 v115; // [rsp+158h] [rbp+58h]
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+160h] [rbp+60h] BYREF
  __int128 v117; // [rsp+190h] [rbp+90h]
  __int128 v118; // [rsp+1A0h] [rbp+A0h]
  __int128 v119; // [rsp+1B0h] [rbp+B0h]
  __int128 v120; // [rsp+1C0h] [rbp+C0h]
  __int128 v121; // [rsp+1D0h] [rbp+D0h]
  _BYTE v122[48]; // [rsp+1E0h] [rbp+E0h] BYREF
  __int64 v123; // [rsp+210h] [rbp+110h]
  _OWORD v124[2]; // [rsp+260h] [rbp+160h] BYREF
  unsigned __int64 v125[2]; // [rsp+280h] [rbp+180h] BYREF
  __int128 v126; // [rsp+290h] [rbp+190h]
  __int128 v127; // [rsp+2A0h] [rbp+1A0h]
  __int128 v128; // [rsp+2B0h] [rbp+1B0h]
  __int128 v129; // [rsp+2C0h] [rbp+1C0h]
  _BYTE TlsValue[144]; // [rsp+2D0h] [rbp+1D0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v131; // [rsp+360h] [rbp+260h] BYREF
  void *v132; // [rsp+370h] [rbp+270h]
  int v133; // [rsp+378h] [rbp+278h]
  int v134; // [rsp+37Ch] [rbp+27Ch]
  struct _EVENT_DATA_DESCRIPTOR v135; // [rsp+380h] [rbp+280h] BYREF
  void *v136; // [rsp+390h] [rbp+290h]
  int v137; // [rsp+398h] [rbp+298h]
  int v138; // [rsp+39Ch] [rbp+29Ch]
  __int64 *v139; // [rsp+3A0h] [rbp+2A0h]
  __int64 v140; // [rsp+3A8h] [rbp+2A8h]
  unsigned __int64 *v141; // [rsp+3B0h] [rbp+2B0h]
  __int64 v142; // [rsp+3B8h] [rbp+2B8h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+3C0h] [rbp+2C0h] BYREF
  void *v144; // [rsp+3D0h] [rbp+2D0h]
  int v145; // [rsp+3D8h] [rbp+2D8h]
  int v146; // [rsp+3DCh] [rbp+2DCh]
  __int64 *v147; // [rsp+3E0h] [rbp+2E0h]
  __int64 v148; // [rsp+3E8h] [rbp+2E8h]
  const unsigned __int16 *v149; // [rsp+3F0h] [rbp+2F0h]
  int v150; // [rsp+3F8h] [rbp+2F8h]
  int v151; // [rsp+3FCh] [rbp+2FCh]
  int *v152; // [rsp+400h] [rbp+300h]
  __int64 v153; // [rsp+408h] [rbp+308h]
  unsigned __int64 *v154; // [rsp+410h] [rbp+310h]
  __int64 v155; // [rsp+418h] [rbp+318h]
  __int64 *v156; // [rsp+420h] [rbp+320h]
  __int64 v157; // [rsp+428h] [rbp+328h]
  unsigned __int64 *v158; // [rsp+430h] [rbp+330h]
  __int64 v159; // [rsp+438h] [rbp+338h]
  __int64 *v160; // [rsp+440h] [rbp+340h]
  __int64 v161; // [rsp+448h] [rbp+348h]

  memset_0(TlsValue, 0, 0x88uLL);
  v4 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v4, TlsValue);
  }
  v5 = 0;
  v6 = 0LL;
  if ( (unsigned int)dword_1800DC1E0 > 4 && (byte_1800DC1F0 & 1) != 0 && (qword_1800DC1F8 & 1) == qword_1800DC1F8 )
  {
    *(_DWORD *)&v110.Level = 260;
    v131.Ptr = (ULONGLONG)off_1800DC1E8;
    *(_DWORD *)&v110.Id = 184549376;
    v110.Keyword = 1LL;
    v131.Size = *(unsigned __int16 *)off_1800DC1E8;
    v132 = &unk_1800C38FB;
    v131.Reserved = 2;
    v133 = 32;
    v134 = 1;
    EventWriteTransfer(RegHandle, &v110, 0LL, 0LL, 2u, &v131);
  }
  v7 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    Value = TlsGetValue(HampLockTrackerId);
    if ( *(_QWORD *)TlsGetValue(v7) )
      __int2c();
    *Value |= 1uLL;
    ++Value[1];
    v5 = 0;
  }
  RtlAcquireSRWLockExclusive(&RmpGlobalLock);
  dword_1800DD4E8 = GetCurrentThreadId();
  *((_DWORD *)a2 + 372) &= ~1u;
  if ( *((_DWORD *)a2 + 292) )
  {
    v9 = *((_QWORD *)a2 + 6);
    if ( (*(_BYTE *)(v9 + 3224) & 1) == 0 )
    {
      v10 = *((_OWORD *)a2 + 75);
      v11 = *((_QWORD *)a2 + 150);
      v124[0] = *((_OWORD *)a2 + 74);
      v124[1] = v10;
      if ( v11 )
      {
        v12 = a2[656];
        v13 = *(_QWORD *)(v9 + 40);
        if ( v12 )
        {
          v5 = 8;
          if ( v12 == 1 )
            v5 = 4;
        }
        v14 = *((_QWORD *)a2 + 4);
        v15 = *((_DWORD *)a2 + 156);
        v16 = *((_DWORD *)a2 + 155);
        v17 = (*(__int64 (__fastcall **)(char *, _QWORD, char *, _QWORD, __int64, int, unsigned __int64 *, _QWORD))(v13 + 24))(
                a2 + 552,
                v16,
                a2 + 88,
                v15,
                v14,
                v5,
                &v98,
                0LL);
        if ( v17 < 0 )
        {
          if ( (unsigned int)dword_1800DC1E0 > 4
            && (unsigned __int8)tlgKeywordOn(&dword_1800DC1E0, 1LL, v18, (unsigned int)v17) )
          {
            v113 = v14;
            v91 = v77;
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
              (int)&dword_1800DC1E0,
              (int)&unk_1800C1ED3,
              v76,
              v77,
              (__int64)&v91,
              (__int64)&v113);
          }
        }
        else
        {
          v19 = (*(__int64 (__fastcall **)(char *, _QWORD, char *, _QWORD, __int64, int, unsigned __int64 *))(v13 + 96))(
                  a2 + 552,
                  v16,
                  a2 + 88,
                  v15,
                  v14,
                  v5,
                  &v95);
          if ( v19 >= 0 )
          {
            v115 = (v95 * (unsigned __int128)0x1000uLL) >> 64;
            v21 = v95 << 12;
            if ( is_mul_ok(v95, 0x1000uLL) )
            {
              v95 <<= 12;
              v22 = 0;
            }
            else
            {
              v95 = -1LL;
              v22 = -1073741675;
              v21 = -1LL;
            }
            v23 = v98;
            if ( v22 < 0 )
              goto LABEL_76;
            v87 = 1;
            v96 = 0LL;
            v89 = 0LL;
            *(_OWORD *)P = 0LL;
            Heap = (unsigned int *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 8uLL);
            if ( !Heap )
            {
              v30 = -1073741801;
LABEL_46:
              if ( (_DWORD)v89 )
              {
                v43 = (HANDLE *)P[0];
                v44 = (unsigned int)v89;
                do
                {
                  NtClose(*v43++);
                  --v44;
                }
                while ( v44 );
              }
              if ( P[0] )
                RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, P[0]);
              if ( P[1] )
                RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, P[1]);
              if ( v30 < 0 )
              {
                if ( (unsigned int)dword_1800DC1E0 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1800DC1E0, 1LL, v24, v25) )
                {
                  v100 = *((_QWORD *)a2 + 4);
                  v93 = v30;
                  _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
                    (int)&dword_1800DC1E0,
                    (int)&unk_1800C644E,
                    v81,
                    v82,
                    (__int64)&v93,
                    (__int64)&v100);
                }
                v45 = 0LL;
                v96 = 0LL;
              }
              else
              {
                v45 = v96;
              }
              v46 = v23;
              if ( v45 < v23 )
                v46 = v45;
              v47 = v23 - v46;
              if ( v23 && v47 <= 1 )
                v47 = 1LL;
              v48 = v47 + v21;
              if ( (unsigned int)dword_1800DC1E0 > 4
                && (byte_1800DC1F0 & 1) != 0
                && (qword_1800DC1F8 & 1) == qword_1800DC1F8 )
              {
                v65 = (const unsigned __int16 *)(a2 + 88);
                v94 = *((_DWORD *)a2 + 156);
                v105 = *((_QWORD *)a2 + 4);
                v160 = (__int64 *)&v101;
                v158 = &v102;
                v156 = (__int64 *)&v103;
                v154 = &v104;
                v152 = &v94;
                v101 = v45;
                v102 = v21;
                v103 = v23;
                v104 = v48;
                v161 = 8LL;
                v159 = 8LL;
                v157 = 8LL;
                v155 = 8LL;
                v153 = 4LL;
                if ( a2 == (char *)-88LL )
                {
                  v65 = &word_1800B7A9C;
                  v67 = 2;
                }
                else
                {
                  v66 = -1LL;
                  do
                    v58 = v65[++v66] == 0;
                  while ( !v58 );
                  v67 = 2 * v66 + 2;
                }
                v149 = v65;
                v147 = &v105;
                *(_DWORD *)&EventDescriptor.Level = 4;
                UserData.Ptr = (ULONGLONG)off_1800DC1E8;
                v151 = 0;
                v150 = v67;
                v148 = 8LL;
                *(_DWORD *)&EventDescriptor.Id = 184549376;
                EventDescriptor.Keyword = 1LL;
                UserData.Size = *(unsigned __int16 *)off_1800DC1E8;
                v144 = &unk_1800C3A4A;
                UserData.Reserved = 2;
                v145 = 150;
                v146 = 1;
                EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 9u, &UserData);
              }
              v6 = v23 + v21;
              v49 = *((_QWORD *)a2 + 168);
              v50 = *((_QWORD *)a2 + 171);
              if ( v23 + v21 < v49 )
              {
                v51 = 0LL;
              }
              else if ( v6 < *((_QWORD *)a2 + 169) )
              {
                v51 = *((_QWORD *)a2 + 168);
                v49 = *((_QWORD *)a2 + 169);
              }
              else if ( v6 < *((_QWORD *)a2 + 170) )
              {
                v49 = *((_QWORD *)a2 + 170);
                v51 = *((_QWORD *)a2 + 169);
              }
              else
              {
                v51 = *((_QWORD *)a2 + 170);
                v49 = -1LL;
              }
              RmpActivityHostComputeCommitEstimate(v6, *((_QWORD *)a2 + 171), &v106, &v107);
              if ( v51 <= v106 )
                v51 = v106;
              v52 = v107;
              if ( v6 <= v50 && v49 >= v107 )
                v49 = v107;
              *(_QWORD *)&v124[0] = v51;
              *((_QWORD *)&v124[0] + 1) = v49;
              if ( v6 < *((_QWORD *)a2 + 168) )
              {
                v53 = 1LL;
              }
              else if ( v6 < *((_QWORD *)a2 + 169) )
              {
                v53 = 2LL;
              }
              else
              {
                v53 = 4 - (unsigned int)(v6 < *((_QWORD *)a2 + 170));
              }
              RmpActivityHostUpdateCommitUseState(a2, v6, v53);
              if ( v6 > *((_QWORD *)a2 + 149) && v6 < v52 )
              {
                v68 = *((_QWORD *)a2 + 7);
                v69 = *((_QWORD *)a2 + 6);
                memset_0(v122, 0, 0x80uLL);
                RmpSystemMemoryMetricsQuery((struct _RM_PARTITION *)v68, (struct _RM_SYSTEM_MEMORY_METRICS *)v125);
                RmpPolicyComputeUsageLimits(
                  (struct _RM_USAGE_LIMIT_SETTINGS *)(v69 + 400),
                  (struct _RM_REMEDIATION_ACTIONS *)(v69 + 456),
                  (struct _RM_SYSTEM_MEMORY_METRICS *)v125,
                  v125[0],
                  (struct _RM_RESOURCE_USAGE_LIMITS *)v122);
                v70 = v126;
                v71 = v123;
                v72 = v52 - v6 + 1;
                v73 = v128;
                v117 = *(_OWORD *)v125;
                v74 = v127;
                *(_WORD *)(v68 + 204) = 0;
                v119 = v74;
                v75 = v71 - v70;
                v121 = v129;
                v118 = v70;
                v120 = v73;
                if ( v75 < v72 )
                {
                  RmpPolicyPopulateActivityHostMetrics(
                    v68,
                    0LL,
                    v68 + 160,
                    67LL,
                    RmpPolicyFilterActivityHostWithFlags,
                    2LL);
                  RmpPolicyGenerateReclaimListForCommit(v68, v68 + 160, 0LL, v72 - v75, 0, 2);
                  if ( *(_DWORD *)(v68 + 200) )
                    RmpPolicyReclaimHostList(v68 + 160, 2LL, 8LL, 0LL, 0LL);
                }
              }
              RmpActivityHostApplyEnforcementSettings(a2, (struct _RM_ENFORCEMENT_SETTINGS *)v124, 1u);
              goto LABEL_76;
            }
            while ( 1 )
            {
              v27 = a2[656];
              if ( v27 )
                v28 = v27 == 1 ? 4 : 8;
              else
                v28 = 0;
              v29 = (*(__int64 (__fastcall **)(char *, _QWORD, char *, _QWORD, _QWORD, int, unsigned int *, unsigned int *))(*(_QWORD *)(*((_QWORD *)a2 + 6) + 40LL) + 72LL))(
                      a2 + 552,
                      *((unsigned int *)a2 + 155),
                      a2 + 88,
                      *((unsigned int *)a2 + 156),
                      *((_QWORD *)a2 + 4),
                      v28,
                      Heap,
                      &v87);
              v30 = v29;
              if ( v29 >= 0 )
                break;
              ProcessHeap = NtCurrentPeb()->ProcessHeap;
              if ( v29 != -2147483643 )
              {
                RtlFreeHeap(ProcessHeap, 0, Heap);
                goto LABEL_46;
              }
              RtlFreeHeap(ProcessHeap, 0, Heap);
              Heap = (unsigned int *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 8LL * v87);
              if ( !Heap )
              {
                v30 = -1073741801;
                goto LABEL_46;
              }
            }
            v31 = v87;
            if ( v87 )
            {
              v32 = 8 * v87;
              v33 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 8 * v87);
              P[0] = v33;
              if ( v33 )
              {
                memset_0(v33, 0, v32);
                v34 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, (unsigned int)(4 * v31));
                P[1] = v34;
                if ( v34 )
                {
                  memset_0(v34, 0, (unsigned int)(4 * v31));
                  ProcessHandle = 0LL;
                  if ( (_DWORD)v31 )
                  {
                    v35 = Heap;
                    v99 = v21;
                    do
                    {
                      v36 = *v35;
                      ClientId.UniqueProcess = (HANDLE)*v35;
                      ClientId.UniqueThread = 0LL;
                      ObjectAttributes.Length = 48;
                      memset(&ObjectAttributes.RootDirectory, 0, 20);
                      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
                      if ( NtOpenProcess(&ProcessHandle, 0x1000u, &ObjectAttributes, &ClientId) >= 0 )
                      {
                        v37 = a2[656];
                        if ( v37 )
                        {
                          if ( v37 == 1 )
                            v38 = 4;
                          else
                            v38 = 8;
                        }
                        else
                        {
                          v38 = 0;
                        }
                        if ( (*(unsigned __int8 (__fastcall **)(char *, _QWORD, char *, _QWORD, _QWORD, int, void *))(*(_QWORD *)(*((_QWORD *)a2 + 6) + 40LL) + 80LL))(
                               a2 + 552,
                               *((unsigned int *)a2 + 155),
                               a2 + 88,
                               *((unsigned int *)a2 + 156),
                               *((_QWORD *)a2 + 4),
                               v38,
                               ProcessHandle) )
                        {
                          v39 = (unsigned int)v89;
                          LODWORD(v89) = v89 + 1;
                          *((_QWORD *)P[0] + v39) = ProcessHandle;
                          *((_DWORD *)P[1] + v39) = v36;
                        }
                        else
                        {
                          NtClose(ProcessHandle);
                        }
                      }
                      v35 += 2;
                      --v31;
                    }
                    while ( v31 );
                    v21 = v99;
                  }
                  goto LABEL_40;
                }
                v30 = -1073741801;
              }
              else
              {
                v30 = -1073741801;
              }
LABEL_41:
              RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
              if ( v30 >= 0 )
              {
                if ( (_DWORD)v89 )
                {
                  v40 = (void **)P[0];
                  v41 = (unsigned int)v89;
                  v42 = (unsigned int *)P[1];
                  do
                  {
                    RmpActivityHostCommitDebtCallback((struct _RM_ACTIVITY_HOST *)a2, *v40++, *v42++, &v96);
                    --v41;
                  }
                  while ( v41 );
                }
                v30 = 0;
              }
              goto LABEL_46;
            }
            ProcessHandle = 0LL;
LABEL_40:
            v30 = 0;
            goto LABEL_41;
          }
          if ( (unsigned int)dword_1800DC1E0 > 4
            && (unsigned __int8)tlgKeywordOn(&dword_1800DC1E0, 1LL, v20, (unsigned int)v19) )
          {
            v97 = v14;
            v92 = v79;
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
              (int)&dword_1800DC1E0,
              (int)&unk_1800C1F1B,
              v78,
              v79,
              (__int64)&v92,
              (__int64)&v97);
          }
        }
      }
    }
  }
LABEL_76:
  v54 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    v55 = TlsGetValue(HampLockTrackerId);
    if ( (*(_QWORD *)TlsGetValue(v54) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
      __int2c();
    *v55 |= 2uLL;
    ++v55[2];
  }
  RtlAcquireSRWLockExclusive(a2 + 64);
  *((_DWORD *)a2 + 18) = GetCurrentThreadId();
  if ( RmpActivityHostCanDelete((struct _RM_ACTIVITY_HOST *)a2) )
    HampHostCheckQueueStateWorker((struct _RM_HAM_ACTIVITY_HOST *)(a2 + 64), 1);
  if ( HampLockTrackerId != -1 )
  {
    v56 = (__int64 *)TlsGetValue(HampLockTrackerId);
    v57 = *v56;
    if ( (*v56 & 2) == 0 )
      __int2c();
    v58 = v56[2]-- == 1;
    if ( v58 )
      *v56 = v57 & 0xFFFFFFFFFFFFFFFDuLL;
  }
  *((_DWORD *)a2 + 18) = 0;
  RtlReleaseSRWLockExclusive(a2 + 64);
  dword_1800DD4E8 = 0;
  RtlReleaseSRWLockExclusive(&RmpGlobalLock);
  if ( HampLockTrackerId != -1 )
  {
    v59 = (__int64 *)TlsGetValue(HampLockTrackerId);
    v60 = *v59;
    if ( (*v59 & 1) == 0 )
      __int2c();
    v58 = v59[1]-- == 1;
    if ( v58 )
      *v59 = v60 & 0xFFFFFFFFFFFFFFFEuLL;
  }
  if ( (unsigned int)dword_1800DC1E0 > 4 && (byte_1800DC1F0 & 1) != 0 && (qword_1800DC1F8 & 1) == qword_1800DC1F8 )
  {
    v109 = *((_QWORD *)a2 + 4);
    v108 = v6;
    v141 = &v108;
    v139 = &v109;
    *(_DWORD *)&v112.Level = 516;
    v135.Ptr = (ULONGLONG)off_1800DC1E8;
    v142 = 8LL;
    v140 = 8LL;
    *(_DWORD *)&v112.Id = 184549376;
    v112.Keyword = 1LL;
    v135.Size = *(unsigned __int16 *)off_1800DC1E8;
    v136 = &unk_1800C3AEC;
    v135.Reserved = 2;
    v137 = 51;
    v138 = 1;
    EventWriteTransfer(RegHandle, &v112, 0LL, 0LL, 4u, &v135);
  }
  v61 = _InterlockedExchangeAdd64((volatile signed __int64 *)a2 + 2, 0xFFFFFFFFFFFFFFFFuLL);
  v62 = v61 <= 1;
  v63 = v61 - 1;
  if ( v62 )
  {
    if ( v63 )
      __fastfail(0xEu);
    v83 = *((_DWORD *)a2 + 10);
    if ( v83 )
    {
      v84 = v83 - 1;
      if ( v84 )
      {
        if ( v84 == 1 && !*((_DWORD *)a2 + 24) && !*((_DWORD *)a2 + 25) )
          NtDeleteWnfStateName(a2 + 96);
      }
      else
      {
        RmpPartitionRelease(*((struct _RM_PARTITION **)a2 + 8));
        v85 = (void *)*((_QWORD *)a2 + 9);
        if ( v85 )
          NtClose(v85);
      }
    }
    else
    {
      RmpEmptyWorkerCleanup((struct _RM_EMPTY_WORKER_CONTEXT *)(a2 + 1312));
      v86 = (struct _RM_PARTITION *)*((_QWORD *)a2 + 7);
      if ( v86 )
        RmpPartitionRelease(v86);
      HampHostCleanup((struct _RM_HAM_ACTIVITY_HOST *)(a2 + 64));
    }
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, a2);
  }
  v64 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v64, 0LL);
  }
}
