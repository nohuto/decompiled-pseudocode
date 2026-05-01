/*
 * XREFs of ?HampHostCheckNotifyZeroProcess@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18001A040
 * Callers:
 *     ?OnApplicationTerminated@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_PSM_HOST_INFO@@@Z @ 0x18001A7B0 (-OnApplicationTerminated@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_PSM_HOST_INFO@@@Z.c)
 * Callees:
 *     CempLockSleepConditionVariableExclusive @ 0x180013B3C (CempLockSleepConditionVariableExclusive.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x18001C610 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18001C700 (-RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x18001D750 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?HampHostNotifyZeroProcess@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@KPEAK@Z @ 0x180034760 (-HampHostNotifyZeroProcess@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINAT.c)
 *     __security_check_cookie @ 0x180049550 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180053740 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall HampHostCheckNotifyZeroProcess(struct _RM_HAM_ACTIVITY_HOST *a1)
{
  DWORD v2; // esi
  unsigned int v3; // r15d
  _QWORD *Value; // rdi
  __int64 v5; // rax
  __int64 v6; // r13
  int v7; // edi
  __int64 v8; // rax
  __int64 *v9; // rax
  __int64 v10; // rcx
  bool v11; // zf
  __int64 v12; // rcx
  __int64 v13; // r11
  __int64 v14; // r9
  __int64 v15; // r8
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rsi
  char v20; // al
  __int64 v21; // rcx
  DWORD v22; // esi
  _QWORD *v23; // rdi
  __int64 *v24; // rax
  __int64 v25; // rcx
  struct _RM_ACTIVITY_HOST *v26; // rcx
  const unsigned __int16 *v27; // rbx
  __int64 v28; // rax
  int v29; // ecx
  char v30; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v31; // [rsp+54h] [rbp-ACh] BYREF
  __int64 v32; // [rsp+58h] [rbp-A8h] BYREF
  int v33; // [rsp+60h] [rbp-A0h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+68h] [rbp-98h] BYREF
  EVENT_DESCRIPTOR v35; // [rsp+78h] [rbp-88h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+88h] [rbp-78h] BYREF
  void *v37; // [rsp+98h] [rbp-68h]
  int v38; // [rsp+A0h] [rbp-60h]
  int v39; // [rsp+A4h] [rbp-5Ch]
  struct _EVENT_DATA_DESCRIPTOR v40; // [rsp+B0h] [rbp-50h] BYREF
  void *v41; // [rsp+C0h] [rbp-40h]
  int v42; // [rsp+C8h] [rbp-38h]
  int v43; // [rsp+CCh] [rbp-34h]
  const unsigned __int16 *v44; // [rsp+D0h] [rbp-30h]
  int v45; // [rsp+D8h] [rbp-28h]
  int v46; // [rsp+DCh] [rbp-24h]
  __int64 *v47; // [rsp+E0h] [rbp-20h]
  __int64 v48; // [rsp+E8h] [rbp-18h]
  char *v49; // [rsp+F0h] [rbp-10h]
  __int64 v50; // [rsp+F8h] [rbp-8h]

  if ( (unsigned int)dword_1800DB218 > 4 && (qword_1800DB228 & 0x40) != 0 && (qword_1800DB230 & 0x40) == qword_1800DB230 )
  {
    *(_DWORD *)&EventDescriptor.Level = 260;
    UserData.Ptr = (ULONGLONG)off_1800DB220;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 64LL;
    UserData.Size = *(unsigned __int16 *)off_1800DB220;
    v37 = &unk_1800BFA17;
    UserData.Reserved = 2;
    v38 = 27;
    v39 = 1;
    v31 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(qword_1800DB238, &EventDescriptor, 0LL, 0LL, 2u, &UserData);
  }
  v2 = HampLockTrackerId;
  v3 = 0;
  v31 = 0;
  if ( HampLockTrackerId != -1 )
  {
    Value = TlsGetValue(HampLockTrackerId);
    if ( (*(_QWORD *)TlsGetValue(v2) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
      __int2c();
    *Value |= 2uLL;
    ++Value[2];
  }
  RtlAcquireSRWLockExclusive(a1);
  *((_DWORD *)a1 + 2) = GetCurrentThreadId();
  v5 = *((_QWORD *)a1 + 83);
  v6 = 624LL;
  if ( (v5 & 0x800000000LL) != 0 )
  {
    v7 = 1;
  }
  else
  {
    LODWORD(v32) = 0;
    v7 = 0;
    if ( (v5 & 0x1000000000000LL) != 0 )
    {
      do
      {
        CempLockSleepConditionVariableExclusive((__int64)a1, (__int64)a1 + 696, 0LL);
        v5 = *((_QWORD *)a1 + 83);
      }
      while ( (v5 & 0x1000000000000LL) != 0 );
      v7 = 0;
    }
    v8 = v5 | 0x1000000000000LL;
    *((_QWORD *)a1 + 83) = v8;
    if ( (v8 & 0x2000000000000LL) != 0 )
    {
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
      v33 = 0;
      v12 = 48LL;
      if ( a1 )
        v12 = (__int64)a1 - 16;
      v13 = 32LL;
      v14 = 624LL;
      v15 = 88LL;
      v16 = 620LL;
      v17 = *(_QWORD *)v12;
      v18 = 656LL;
      v19 = *(_QWORD *)(v17 + 40);
      if ( a1 )
        v18 = (__int64)a1 + 592;
      v20 = *(_BYTE *)v18;
      v21 = 552LL;
      if ( a1 )
      {
        v13 = (__int64)a1 - 32;
        v14 = (__int64)a1 + 560;
        v15 = (__int64)a1 + 24;
        v16 = (__int64)a1 + 556;
        v21 = (__int64)a1 + 488;
      }
      (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD, _QWORD, int, _QWORD, int *))(v19 + 72))(
        v21,
        *(unsigned int *)v16,
        v15,
        *(unsigned int *)v14,
        *(_QWORD *)v13,
        v20 != 0 ? 4 : 0,
        0LL,
        &v33);
      if ( v33 )
      {
        v22 = HampLockTrackerId;
        if ( HampLockTrackerId != -1 )
        {
          v23 = TlsGetValue(HampLockTrackerId);
          if ( (*(_QWORD *)TlsGetValue(v22) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
            __int2c();
          *v23 |= 2uLL;
          ++v23[2];
        }
        RtlAcquireSRWLockExclusive(a1);
        *((_DWORD *)a1 + 2) = GetCurrentThreadId();
        *((_QWORD *)a1 + 83) &= ~0x1000000000000uLL;
        RtlWakeAllConditionVariable((char *)a1 + 696);
        v7 = 0;
      }
      else
      {
        HampHostNotifyZeroProcess(a1, 0LL, 0LL, 0LL, &v31);
        *((_QWORD *)a1 + 83) &= ~0x1000000000000uLL;
        RtlWakeAllConditionVariable((char *)a1 + 696);
        v3 = v31;
        v7 = v32;
      }
    }
    else
    {
      *((_QWORD *)a1 + 83) &= ~0x1000000000000uLL;
      RtlWakeAllConditionVariable((char *)a1 + 696);
    }
  }
  if ( HampLockTrackerId != -1 )
  {
    v24 = (__int64 *)TlsGetValue(HampLockTrackerId);
    v25 = *v24;
    if ( (*v24 & 2) == 0 )
      __int2c();
    v11 = v24[2]-- == 1;
    if ( v11 )
      *v24 = v25 & 0xFFFFFFFFFFFFFFFDuLL;
  }
  *((_DWORD *)a1 + 2) = 0;
  RtlReleaseSRWLockExclusive(a1);
  if ( v7 )
    RtlWakeAllConditionVariable((char *)a1 + 696);
  if ( v3 )
  {
    RmpAcquireGlobalLock();
    v11 = (*((_QWORD *)a1 + 75))-- == 1LL;
    if ( v11 )
    {
      v26 = 0LL;
      if ( a1 )
        v26 = (struct _RM_HAM_ACTIVITY_HOST *)((char *)a1 - 64);
      RmpActivityHostCheckQueueDelete(v26);
    }
    RmpReleaseGlobalLock();
  }
  if ( (unsigned int)dword_1800DB218 > 4 && (qword_1800DB228 & 8) != 0 && (qword_1800DB230 & 8) == qword_1800DB230 )
  {
    v50 = 1LL;
    v48 = 8LL;
    if ( a1 )
      v6 = (__int64)a1 + 560;
    v30 = *(_BYTE *)v6;
    v32 = *((_QWORD *)a1 - 4);
    v49 = &v30;
    v47 = &v32;
    v27 = (const unsigned __int16 *)((char *)a1 + 24);
    if ( v27 )
    {
      v28 = -1LL;
      do
        v11 = v27[++v28] == 0;
      while ( !v11 );
      v29 = 2 * v28 + 2;
    }
    else
    {
      v27 = &word_1800B66C4;
      v29 = 2;
    }
    *(_DWORD *)&v35.Level = 516;
    v40.Ptr = (ULONGLONG)off_1800DB220;
    v45 = v29;
    v44 = v27;
    v46 = 0;
    *(_DWORD *)&v35.Id = 184549376;
    v35.Keyword = 8LL;
    v40.Size = *(unsigned __int16 *)off_1800DB220;
    v41 = &unk_1800BF96E;
    v40.Reserved = 2;
    v42 = 53;
    v43 = 1;
    v31 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(qword_1800DB238, &v35, 0LL, 0LL, 5u, &v40);
  }
}
