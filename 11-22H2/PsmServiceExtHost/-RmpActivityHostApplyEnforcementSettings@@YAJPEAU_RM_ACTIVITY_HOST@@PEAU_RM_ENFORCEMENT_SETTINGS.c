/*
 * XREFs of ?RmpActivityHostApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS@@K@Z @ 0x180027750
 * Callers:
 *     ?HampHostCheckUpdateEnforcementSettings@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_ENFORCEMENT_SETTINGS_CONTEXT@@@Z @ 0x180021270 (-HampHostCheckUpdateEnforcementSettings@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_ENFORCEMENT_SETT.c)
 * Callees:
 *     ?RmpActivityHostApplyExecutionSpeed@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS@@@Z @ 0x18000E724 (-RmpActivityHostApplyExecutionSpeed@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS@@@Z.c)
 *     ?RmpActivityHostAreExecutionSpeedsEqual@@YAKPEAU_RM_ENFORCEMENT_SETTINGS@@0@Z @ 0x180012C60 (-RmpActivityHostAreExecutionSpeedsEqual@@YAKPEAU_RM_ENFORCEMENT_SETTINGS@@0@Z.c)
 *     _tlgKeywordOn @ 0x180028870 (_tlgKeywordOn.c)
 *     ?RmHamHostActOnProcesses@@YAJPEAU_RM_ACTIVITY_HOST@@KKP6AJ0PEAXK1@Z1@Z @ 0x1800325FC (-RmHamHostActOnProcesses@@YAJPEAU_RM_ACTIVITY_HOST@@KKP6AJ0PEAXK1@Z1@Z.c)
 *     ?RmpQoSEnableDisableForHost@@YAJPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x18003DEBC (-RmpQoSEnableDisableForHost@@YAJPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 *     __security_check_cookie @ 0x180049550 (__security_check_cookie.c)
 *     memcmp_0 @ 0x1800536D6 (memcmp_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180053740 (_guard_xfg_dispatch_icall_nop.c)
 *     ?RmpGpuMonitorDisableForHost@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18008C1D4 (-RmpGpuMonitorDisableForHost@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpGpuMonitorEnableForHost@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18008C350 (-RmpGpuMonitorEnableForHost@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 */

__int64 __fastcall RmpActivityHostApplyEnforcementSettings(
        struct _RM_ACTIVITY_HOST *a1,
        struct _RM_ENFORCEMENT_SETTINGS *a2,
        int a3)
{
  char *v4; // r15
  char v5; // bl
  struct _RM_ACTIVITY_HOST *v6; // rdi
  char *v7; // rsi
  char v9; // al
  DWORD v10; // r13d
  _QWORD *Value; // r14
  DWORD CurrentThreadId; // eax
  DWORD v13; // ecx
  __int64 *v14; // rax
  __int64 v15; // rcx
  bool v16; // zf
  unsigned int v17; // ecx
  int v18; // eax
  int v19; // ebx
  __int64 v20; // r8
  __int64 v21; // rax
  __int64 *v22; // rbx
  int v23; // esi
  struct _EVENT_DATA_DESCRIPTOR *v24; // rdi
  __int64 *v25; // rcx
  __int64 v26; // rax
  DWORD v27; // esi
  _QWORD *v28; // rbx
  DWORD v29; // eax
  DWORD v30; // ecx
  __int64 *v31; // rax
  __int64 v32; // rcx
  int v33; // ebx
  unsigned __int64 v34; // r8
  char v35; // cl
  struct _RM_ACTIVITY_HOST *v36; // rcx
  ULONGLONG v37; // rdx
  unsigned __int8 v38; // cl
  bool v39; // cl
  struct _RM_ACTIVITY_HOST *v40; // rax
  PEVENT_DATA_DESCRIPTOR UserData; // [rsp+28h] [rbp-D8h]
  char v42; // [rsp+60h] [rbp-A0h] BYREF
  bool v43; // [rsp+61h] [rbp-9Fh] BYREF
  char v44; // [rsp+62h] [rbp-9Eh] BYREF
  int v45; // [rsp+64h] [rbp-9Ch] BYREF
  struct _RM_ACTIVITY_HOST *v46; // [rsp+68h] [rbp-98h]
  __int64 v47; // [rsp+70h] [rbp-90h] BYREF
  __int64 v48; // [rsp+78h] [rbp-88h] BYREF
  __int64 v49; // [rsp+80h] [rbp-80h] BYREF
  __int64 v50; // [rsp+88h] [rbp-78h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+90h] [rbp-70h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v52; // [rsp+A0h] [rbp-60h] BYREF
  void *v53; // [rsp+B0h] [rbp-50h]
  int v54; // [rsp+B8h] [rbp-48h]
  int v55; // [rsp+BCh] [rbp-44h]
  int *v56; // [rsp+C0h] [rbp-40h]
  __int64 v57; // [rsp+C8h] [rbp-38h]
  __int64 *v58; // [rsp+D0h] [rbp-30h]
  ULONGLONG v59; // [rsp+D8h] [rbp-28h]
  __int64 *v60; // [rsp+E0h] [rbp-20h]
  ULONGLONG v61; // [rsp+E8h] [rbp-18h]
  __int64 *v62; // [rsp+F0h] [rbp-10h]
  ULONGLONG v63; // [rsp+F8h] [rbp-8h]
  __int64 *v64; // [rsp+100h] [rbp+0h]
  ULONGLONG v65; // [rsp+108h] [rbp+8h]
  char *v66; // [rsp+110h] [rbp+10h]
  __int64 v67; // [rsp+118h] [rbp+18h]
  bool *v68; // [rsp+120h] [rbp+20h]
  __int64 v69; // [rsp+128h] [rbp+28h]
  char *v70; // [rsp+130h] [rbp+30h]
  __int64 v71; // [rsp+138h] [rbp+38h]

  v46 = a1;
  v4 = (char *)a1 + 1192;
  v5 = a3;
  v6 = a1;
  v45 = a3;
  v7 = (char *)a1 + 64;
  if ( !memcmp_0(a2, (char *)a1 + 1192, 0x20uLL) && (v5 & 3) == 0 )
    return 0LL;
  v9 = *((_BYTE *)a2 + 28);
  if ( (v4[28] & 1) != 0 )
  {
    if ( (v9 & 1) == 0 )
      RmpGpuMonitorDisableForHost(v6);
  }
  else if ( (v9 & 1) != 0 )
  {
    RmpGpuMonitorEnableForHost(v6);
  }
  v10 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    Value = TlsGetValue(HampLockTrackerId);
    if ( (*(_QWORD *)TlsGetValue(v10) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
      __int2c();
    *Value |= 2uLL;
    ++Value[2];
  }
  RtlAcquireSRWLockExclusive(v7);
  CurrentThreadId = GetCurrentThreadId();
  v13 = HampLockTrackerId;
  *((_DWORD *)v7 + 2) = CurrentThreadId;
  v4[28] ^= (*((_BYTE *)a2 + 28) ^ v4[28]) & 1;
  if ( v13 != -1 )
  {
    v14 = (__int64 *)TlsGetValue(v13);
    v15 = *v14;
    if ( (*v14 & 2) == 0 )
      __int2c();
    v16 = v14[2]-- == 1;
    if ( v16 )
      *v14 = v15 & 0xFFFFFFFFFFFFFFFDuLL;
  }
  *((_DWORD *)v7 + 2) = 0;
  RtlReleaseSRWLockExclusive(v7);
  v17 = *((unsigned __int8 *)a2 + 28);
  if ( (((unsigned __int8)v4[28] ^ (unsigned __int8)v17) & 4) != 0 )
  {
    v18 = RmpQoSEnableDisableForHost(v6, (v17 >> 2) & 1);
    v19 = v18;
    if ( v18 == -1073741822 )
    {
      v4[28] ^= (*((_BYTE *)a2 + 28) ^ v4[28]) & 4;
    }
    else if ( v18 < 0 )
    {
      goto LABEL_62;
    }
    v5 = v45;
  }
  v20 = *((_QWORD *)a2 + 2);
  if ( *((_QWORD *)v4 + 2) != v20
    || *((_QWORD *)v4 + 1) != *((_QWORD *)a2 + 1)
    || *(_QWORD *)v4 != *(_QWORD *)a2
    || !RmpActivityHostAreExecutionSpeedsEqual((struct _RM_ENFORCEMENT_SETTINGS *)v4, a2)
    || (v5 & 1) != 0 )
  {
    v21 = *((_QWORD *)v6 + 6);
    v22 = &v47;
    v23 = *((_DWORD *)v6 + 156);
    v24 = (struct _EVENT_DATA_DESCRIPTOR *)*((_QWORD *)v6 + 4);
    if ( !v20 )
      v22 = 0LL;
    v25 = *(__int64 **)(v21 + 40);
    v48 = *((_QWORD *)a2 + 1);
    v49 = *(_QWORD *)a2;
    v26 = *v25;
    v47 = v20;
    UserData = v24;
    v6 = v46;
    v19 = (*(__int64 (__fastcall **)(__int64 *, char *, char *, _QWORD, int, PEVENT_DATA_DESCRIPTOR, int, __int64 *, __int64 *, __int64 *, _QWORD))(v26 + 32))(
            v25,
            (char *)v46 + 88,
            (char *)v46 + 552,
            *((unsigned int *)v46 + 155),
            v23,
            UserData,
            *((_BYTE *)v46 + 656) != 0 ? 4 : 0,
            v22,
            &v49,
            &v48,
            0LL);
    if ( v19 < 0 )
    {
      v7 = (char *)v46 + 64;
      goto LABEL_62;
    }
    v27 = HampLockTrackerId;
    if ( HampLockTrackerId != -1 )
    {
      v28 = TlsGetValue(HampLockTrackerId);
      if ( (*(_QWORD *)TlsGetValue(v27) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
        __int2c();
      *v28 |= 2uLL;
      ++v28[2];
    }
    v7 = (char *)v6 + 64;
    RtlAcquireSRWLockExclusive((char *)v6 + 64);
    v29 = GetCurrentThreadId();
    v30 = HampLockTrackerId;
    *((_DWORD *)v6 + 18) = v29;
    *(_QWORD *)v4 = *(_QWORD *)a2;
    *((_QWORD *)v4 + 1) = *((_QWORD *)a2 + 1);
    *((_QWORD *)v4 + 2) = *((_QWORD *)a2 + 2);
    if ( v30 != -1 )
    {
      v31 = (__int64 *)TlsGetValue(v30);
      v32 = *v31;
      if ( (*v31 & 2) == 0 )
        __int2c();
      v16 = v31[2]-- == 1;
      if ( v16 )
        *v31 = v32 & 0xFFFFFFFFFFFFFFFDuLL;
    }
    *((_DWORD *)v6 + 18) = 0;
    RtlReleaseSRWLockExclusive((char *)v6 + 64);
    if ( *((_DWORD *)v4 + 6) != *((_DWORD *)a2 + 6) || ((*((_BYTE *)a2 + 28) ^ (unsigned __int8)v4[28]) & 2) != 0 )
    {
      v19 = RmpActivityHostApplyExecutionSpeed(v6, a2);
      if ( v19 < 0 )
        goto LABEL_62;
    }
    v5 = v45;
  }
  v33 = v5 & 2;
  if ( *((int *)a2 + 6) >= 2 && (*((_BYTE *)a2 + 28) & 2) != 0 && v33 )
    RmHamHostActOnProcesses(v6, 0x2000u, 1u, RmpEnforcementApplyForegroundBoost, (void *)1);
  v34 = *((unsigned __int8 *)a2 + 28);
  v35 = v4[28];
  if ( (((unsigned __int8)v35 ^ (unsigned __int8)v34) & 0x70) != 0 || v33 )
  {
    if ( (*(_BYTE *)(*((_QWORD *)v6 + 6) + 508LL) & 0x10) != 0 )
    {
      v36 = 0LL;
      if ( v7 )
        v36 = v6;
      RmHamHostActOnProcesses(
        v36,
        0x2000u,
        1u,
        (int (*)(struct _RM_ACTIVITY_HOST *, void *, unsigned int, void *))HampSystemSetBamWindowStateProcess,
        (void *)((v34 >> 4) & 7));
    }
    v4[28] ^= (*((_BYTE *)a2 + 28) ^ v4[28]) & 0x70;
    v35 = v4[28];
  }
  if ( ((v35 & 8) != 0) != ((*((_BYTE *)a2 + 28) & 8) != 0) || v33 )
  {
    if ( (*((_BYTE *)a2 + 28) & 8) != 0 )
    {
      v19 = RmHamHostActOnProcesses(
              v6,
              0x2000u,
              1u,
              (int (*)(struct _RM_ACTIVITY_HOST *, void *, unsigned int, void *))RmpActivityHostSetStoreHighMemoryPriorityProcessCallback,
              0LL);
      if ( v19 < 0 )
        goto LABEL_62;
    }
    v4[28] ^= (*((_BYTE *)a2 + 28) ^ v4[28]) & 8;
  }
  v19 = 0;
LABEL_62:
  if ( (unsigned int)dword_1800DB218 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1800DB218, 8LL) )
  {
    v38 = v4[28];
    v65 = v37;
    v42 = (v38 >> 4) & 7;
    v39 = (v38 & 2) != 0;
    v44 = v4[24];
    v49 = *((_QWORD *)v4 + 1);
    v48 = *(_QWORD *)v4;
    v47 = *((_QWORD *)v4 + 2);
    v40 = 0LL;
    if ( v7 )
      v40 = v6;
    v43 = v39;
    v63 = v37;
    v61 = v37;
    v59 = v37;
    v50 = *((_QWORD *)v40 + 4);
    v70 = &v42;
    v68 = &v43;
    v66 = &v44;
    v64 = &v49;
    v62 = &v48;
    v60 = &v47;
    v58 = &v50;
    v56 = &v45;
    *(_DWORD *)&EventDescriptor.Level = 4;
    v52.Ptr = (ULONGLONG)off_1800DB220;
    EventDescriptor.Keyword = v37;
    v45 = v19;
    v71 = 1LL;
    v69 = 1LL;
    v67 = 1LL;
    v57 = 4LL;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    v52.Size = *(unsigned __int16 *)off_1800DB220;
    v53 = &unk_1800C4175;
    v52.Reserved = 2;
    v54 = 151;
    v55 = 1;
    LODWORD(v46) = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(qword_1800DB238, &EventDescriptor, 0LL, 0LL, 0xAu, &v52);
  }
  return (unsigned int)v19;
}
