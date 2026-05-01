/*
 * XREFs of ?RmpActivityHostApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS@@K@Z @ 0x18001CC20
 * Callers:
 *     ?HampHostCheckUpdateEnforcementSettings@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180014A10 (-HampHostCheckUpdateEnforcementSettings@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpActivityHostCommitUseUpdateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18001BE00 (-RmpActivityHostCommitUseUpdateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     ?RmpActivityHostComputeAndApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180029970 (-RmpActivityHostComputeAndApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     ?RmpActivityHostApplyExecutionSpeed@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS@@@Z @ 0x180004164 (-RmpActivityHostApplyExecutionSpeed@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS@@@Z.c)
 *     ?RmHamHostActOnProcesses@@YAJPEAU_RM_ACTIVITY_HOST@@KKP6AJ0PEAXK1@Z1@Z @ 0x18002D37C (-RmHamHostActOnProcesses@@YAJPEAU_RM_ACTIVITY_HOST@@KKP6AJ0PEAXK1@Z1@Z.c)
 *     ?RmpQoSEnableDisableForHost@@YAJPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x180044DC0 (-RmpQoSEnableDisableForHost@@YAJPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 *     __security_check_cookie @ 0x18004E310 (__security_check_cookie.c)
 *     memcmp_0 @ 0x180050216 (memcmp_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180050280 (_guard_xfg_dispatch_icall_nop.c)
 *     ?RmpGpuMonitorDisableForHost@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800902EC (-RmpGpuMonitorDisableForHost@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpGpuMonitorEnableForHost@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180090464 (-RmpGpuMonitorEnableForHost@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 */

__int64 __fastcall RmpActivityHostApplyEnforcementSettings(char *P, struct _RM_ENFORCEMENT_SETTINGS *a2, int a3)
{
  char *v4; // rdi
  char v5; // r13
  char *v7; // r15
  unsigned __int8 v8; // dl
  DWORD v9; // r12d
  _QWORD *Value; // r14
  DWORD CurrentThreadId; // eax
  DWORD v12; // ecx
  __int64 *v13; // rax
  __int64 v14; // rcx
  bool v15; // zf
  unsigned int v16; // ecx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rax
  int v21; // r9d
  __int64 v22; // r13
  __int64 *v23; // r8
  __int64 v24; // r11
  char v25; // al
  int v26; // ecx
  int v27; // r12d
  DWORD v28; // r13d
  _QWORD *v29; // r12
  DWORD v30; // eax
  DWORD v31; // ecx
  __int64 *v32; // rax
  __int64 v33; // rcx
  int v34; // r13d
  unsigned __int64 v35; // rdx
  char v36; // cl
  bool v37; // dl
  bool v38; // al
  int v39; // eax
  const unsigned __int16 *v40; // rsi
  __int64 v41; // rax
  unsigned int v42; // ecx
  unsigned __int8 v44; // cl
  char v45; // al
  int v46; // eax
  char v47; // [rsp+60h] [rbp-A0h] BYREF
  char v48; // [rsp+61h] [rbp-9Fh] BYREF
  char v49; // [rsp+62h] [rbp-9Eh] BYREF
  int v50; // [rsp+64h] [rbp-9Ch] BYREF
  unsigned int v51; // [rsp+68h] [rbp-98h] BYREF
  __int64 v52; // [rsp+70h] [rbp-90h] BYREF
  __int64 v53; // [rsp+78h] [rbp-88h] BYREF
  __int64 v54; // [rsp+80h] [rbp-80h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+88h] [rbp-78h] BYREF
  EVENT_DESCRIPTOR v56; // [rsp+98h] [rbp-68h] BYREF
  __int64 v57; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v58; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v59; // [rsp+B8h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+C0h] [rbp-40h] BYREF
  void *v61; // [rsp+D0h] [rbp-30h]
  int v62; // [rsp+D8h] [rbp-28h]
  int v63; // [rsp+DCh] [rbp-24h]
  unsigned int *v64; // [rsp+E0h] [rbp-20h]
  __int64 v65; // [rsp+E8h] [rbp-18h]
  const unsigned __int16 *v66; // [rsp+F0h] [rbp-10h]
  __int64 v67; // [rsp+F8h] [rbp-8h]
  char *v68; // [rsp+100h] [rbp+0h]
  __int64 v69; // [rsp+108h] [rbp+8h]
  __int64 *v70; // [rsp+110h] [rbp+10h]
  __int64 v71; // [rsp+118h] [rbp+18h]
  EVENT_DESCRIPTOR *p_EventDescriptor; // [rsp+120h] [rbp+20h]
  __int64 v73; // [rsp+128h] [rbp+28h]
  EVENT_DESCRIPTOR *v74; // [rsp+130h] [rbp+30h]
  __int64 v75; // [rsp+138h] [rbp+38h]
  char *v76; // [rsp+140h] [rbp+40h]
  __int64 v77; // [rsp+148h] [rbp+48h]
  __int64 *v78; // [rsp+150h] [rbp+50h]
  __int64 v79; // [rsp+158h] [rbp+58h]
  __int64 *v80; // [rsp+160h] [rbp+60h]
  __int64 v81; // [rsp+168h] [rbp+68h]
  char *v82; // [rsp+170h] [rbp+70h]
  __int64 v83; // [rsp+178h] [rbp+78h]
  char *v84; // [rsp+180h] [rbp+80h]
  __int64 v85; // [rsp+188h] [rbp+88h]

  v50 = a3;
  v4 = P + 1184;
  v5 = a3;
  v7 = P + 64;
  if ( !memcmp_0(a2, P + 1184, 0x20uLL) && (v5 & 3) == 0 )
    return 0LL;
  v8 = *((_BYTE *)a2 + 28);
  if ( (!(v4[28] & 1) & v8) != 0 )
  {
    RmpGpuMonitorEnableForHost((struct _RM_ACTIVITY_HOST *)P);
  }
  else if ( (v4[28] & 1) != 0 && (v8 & 1) == 0 )
  {
    RmpGpuMonitorDisableForHost((struct _RM_ACTIVITY_HOST *)P);
  }
  v9 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    Value = TlsGetValue(HampLockTrackerId);
    if ( (*(_QWORD *)TlsGetValue(v9) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
      __int2c();
    *Value |= 2uLL;
    ++Value[2];
  }
  RtlAcquireSRWLockExclusive(v7);
  CurrentThreadId = GetCurrentThreadId();
  v12 = HampLockTrackerId;
  *((_DWORD *)v7 + 2) = CurrentThreadId;
  v4[28] ^= (*((_BYTE *)a2 + 28) ^ v4[28]) & 1;
  if ( v12 != -1 )
  {
    v13 = (__int64 *)TlsGetValue(v12);
    v14 = *v13;
    if ( (*v13 & 2) == 0 )
      __int2c();
    v15 = v13[2]-- == 1;
    if ( v15 )
      *v13 = v14 & 0xFFFFFFFFFFFFFFFDuLL;
  }
  *((_DWORD *)v7 + 2) = 0;
  RtlReleaseSRWLockExclusive(v7);
  v16 = *((unsigned __int8 *)a2 + 28);
  if ( (((unsigned __int8)v16 ^ (unsigned __int8)v4[28]) & 4) != 0 )
  {
    v46 = RmpQoSEnableDisableForHost(P, (v16 >> 2) & 1);
    v27 = v46;
    if ( v46 == -1073741822 )
    {
      v4[28] ^= (*((_BYTE *)a2 + 28) ^ v4[28]) & 4;
    }
    else if ( v46 < 0 )
    {
      goto LABEL_48;
    }
  }
  v17 = *((_QWORD *)a2 + 2);
  if ( *((_QWORD *)v4 + 2) != v17
    || (v18 = *((_QWORD *)a2 + 1), *((_QWORD *)v4 + 1) != v18)
    || (v19 = *(_QWORD *)a2, *(_QWORD *)v4 != *(_QWORD *)a2)
    || *((_DWORD *)v4 + 6) != *((_DWORD *)a2 + 6)
    || ((*((_BYTE *)a2 + 28) ^ (unsigned __int8)v4[28]) & 2) != 0 )
  {
    v18 = *((_QWORD *)a2 + 1);
    v19 = *(_QWORD *)a2;
LABEL_24:
    v20 = *((_QWORD *)P + 6);
    v21 = *((_DWORD *)P + 156);
    v22 = *((_QWORD *)P + 4);
    *(_QWORD *)&EventDescriptor.Id = v19;
    v23 = &v52;
    v24 = *(_QWORD *)(v20 + 40);
    if ( !v17 )
      v23 = 0LL;
    v25 = P[656];
    v52 = v17;
    v54 = v18;
    if ( v25 )
    {
      v26 = 8;
      if ( v25 == 1 )
        v26 = 4;
    }
    else
    {
      v26 = 0;
    }
    v7 = P + 64;
    v27 = (*(__int64 (__fastcall **)(__int64, char *, char *, _QWORD, int, __int64, int, __int64 *, EVENT_DESCRIPTOR *, __int64 *, _QWORD))(*(_QWORD *)v24 + 32LL))(
            v24,
            P + 88,
            P + 552,
            *((unsigned int *)P + 155),
            v21,
            v22,
            v26,
            v23,
            &EventDescriptor,
            &v54,
            0LL);
    if ( v27 < 0 )
      goto LABEL_48;
    v28 = HampLockTrackerId;
    if ( HampLockTrackerId != -1 )
    {
      v29 = TlsGetValue(HampLockTrackerId);
      if ( (*(_QWORD *)TlsGetValue(v28) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
        __int2c();
      *v29 |= 2uLL;
      ++v29[2];
    }
    RtlAcquireSRWLockExclusive(P + 64);
    v30 = GetCurrentThreadId();
    v31 = HampLockTrackerId;
    *((_DWORD *)P + 18) = v30;
    *(_QWORD *)v4 = *(_QWORD *)a2;
    *((_QWORD *)v4 + 1) = *((_QWORD *)a2 + 1);
    *((_QWORD *)v4 + 2) = *((_QWORD *)a2 + 2);
    if ( v31 != -1 )
    {
      v32 = (__int64 *)TlsGetValue(v31);
      v33 = *v32;
      if ( (*v32 & 2) == 0 )
        __int2c();
      v15 = v32[2]-- == 1;
      if ( v15 )
        *v32 = v33 & 0xFFFFFFFFFFFFFFFDuLL;
    }
    *((_DWORD *)P + 18) = 0;
    RtlReleaseSRWLockExclusive(P + 64);
    if ( *((_DWORD *)v4 + 6) != *((_DWORD *)a2 + 6) || ((*((_BYTE *)a2 + 28) ^ (unsigned __int8)v4[28]) & 2) != 0 )
    {
      v27 = RmpActivityHostApplyExecutionSpeed((struct _RM_ACTIVITY_HOST *)P, a2);
      if ( v27 < 0 )
        goto LABEL_48;
    }
    v5 = v50;
    goto LABEL_42;
  }
  if ( (v5 & 1) != 0 )
    goto LABEL_24;
LABEL_42:
  v34 = v5 & 2;
  if ( *((int *)a2 + 6) >= 2 && (*((_BYTE *)a2 + 28) & 2) != 0 && v34 )
    RmHamHostActOnProcesses((struct _RM_ACTIVITY_HOST *)P, 0x2000u, 1u, RmpEnforcementApplyForegroundBoost, (void *)1);
  v35 = *((unsigned __int8 *)a2 + 28);
  v36 = v4[28];
  if ( (((unsigned __int8)v36 ^ (unsigned __int8)v35) & 0x70) != 0 || v34 )
  {
    v45 = v4[28];
    if ( (*(_BYTE *)(*((_QWORD *)P + 6) + 508LL) & 0x10) != 0 )
    {
      RmHamHostActOnProcesses(
        (struct _RM_ACTIVITY_HOST *)P,
        0x2000u,
        1u,
        (int (*)(struct _RM_ACTIVITY_HOST *, void *, unsigned int, void *))HampSystemSetBamWindowStateProcess,
        (void *)((v35 >> 4) & 7));
      LOBYTE(v35) = *((_BYTE *)a2 + 28);
      v45 = v4[28];
    }
    v36 = v45 ^ (v45 ^ v35) & 0x70;
    v4[28] = v36;
    LOBYTE(v35) = *((_BYTE *)a2 + 28);
  }
  v37 = (v35 & 8) != 0;
  if ( ((v36 & 8) != 0) != v37 || v34 )
  {
    if ( v37 )
    {
      v27 = RmHamHostActOnProcesses(
              (struct _RM_ACTIVITY_HOST *)P,
              0x2000u,
              1u,
              (int (*)(struct _RM_ACTIVITY_HOST *, void *, unsigned int, void *))RmpActivityHostSetStoreHighMemoryPriorityProcessCallback,
              0LL);
      if ( v27 < 0 )
        goto LABEL_48;
    }
    v4[28] ^= (*((_BYTE *)a2 + 28) ^ v4[28]) & 8;
  }
  v27 = 0;
LABEL_48:
  if ( (P[852] & 1) != 0 )
  {
    if ( (unsigned int)dword_1800DC218 > 4 && (qword_1800DC228 & 8) != 0 && (qword_1800DC230 & 8) == qword_1800DC230 )
    {
      v44 = v4[28];
      v50 = v27;
      v49 = (v44 >> 4) & 7;
      v48 = v4[24];
      *(_QWORD *)&EventDescriptor.Id = *((_QWORD *)v4 + 1);
      v54 = *(_QWORD *)v4;
      v52 = *((_QWORD *)v4 + 2);
      v53 = *((_QWORD *)v7 - 4);
      v78 = (__int64 *)&v49;
      v76 = &v47;
      v74 = (EVENT_DESCRIPTOR *)&v48;
      p_EventDescriptor = &EventDescriptor;
      v70 = &v54;
      v68 = (char *)&v52;
      v66 = (const unsigned __int16 *)&v53;
      v64 = (unsigned int *)&v50;
      UserData.Ptr = (ULONGLONG)off_1800DC220;
      v47 = (v44 & 2) != 0;
      v79 = 1LL;
      v77 = 1LL;
      v75 = 1LL;
      v73 = 8LL;
      v71 = 8LL;
      v69 = 8LL;
      v67 = 8LL;
      v65 = 4LL;
      *(_QWORD *)&v56.Id = 0x40B000000LL;
      v56.Keyword = 8LL;
      UserData.Size = *(unsigned __int16 *)off_1800DC220;
      v61 = &unk_1800C34E8;
      UserData.Reserved = 2;
      v62 = 151;
      v63 = 1;
      v51 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
      EventWriteTransfer(qword_1800DC238, &v56, 0LL, 0LL, 0xAu, &UserData);
    }
  }
  else if ( (unsigned int)dword_1800DC1E0 > 4 && (byte_1800DC1F0 & 9) != 0 && (qword_1800DC1F8 & 9) == qword_1800DC1F8 )
  {
    v38 = (v4[28] & 2) != 0;
    v51 = v27;
    v48 = v38;
    v47 = v4[24];
    v57 = *((_QWORD *)v4 + 1);
    v58 = *(_QWORD *)v4;
    v59 = *((_QWORD *)v4 + 2);
    *(_QWORD *)&v56.Id = *((_QWORD *)P + 4);
    v50 = *((_DWORD *)P + 156);
    LODWORD(v53) = *((_DWORD *)P + 155);
    v84 = &v48;
    v82 = &v47;
    v80 = &v57;
    v78 = &v58;
    v76 = (char *)&v59;
    v74 = &v56;
    p_EventDescriptor = (EVENT_DESCRIPTOR *)&v50;
    v70 = &v53;
    v85 = 1LL;
    v83 = 1LL;
    v81 = 8LL;
    v79 = 8LL;
    v77 = 8LL;
    v75 = 8LL;
    v73 = 4LL;
    v71 = 4LL;
    v39 = (unsigned __int8)P[553];
    v68 = P + 552;
    v69 = (unsigned int)(4 * v39 + 8);
    v40 = (const unsigned __int16 *)(P + 88);
    if ( v40 )
    {
      v41 = -1LL;
      do
        v15 = v40[++v41] == 0;
      while ( !v15 );
      v42 = 2 * v41 + 2;
    }
    else
    {
      v40 = &word_1800B7A9C;
      v42 = 2;
    }
    v67 = v42;
    v64 = &v51;
    *(_DWORD *)&EventDescriptor.Level = 4;
    UserData.Ptr = (ULONGLONG)off_1800DC1E8;
    v66 = v40;
    v65 = 4LL;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 9LL;
    UserData.Size = *(unsigned __int16 *)off_1800DC1E8;
    v61 = &unk_1800C3397;
    UserData.Reserved = 2;
    v62 = 222;
    v63 = 1;
    LODWORD(v52) = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 0xDu, &UserData);
  }
  return (unsigned int)v27;
}
