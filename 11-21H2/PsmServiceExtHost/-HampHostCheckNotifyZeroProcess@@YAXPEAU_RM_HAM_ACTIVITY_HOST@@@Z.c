/*
 * XREFs of ?HampHostCheckNotifyZeroProcess@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180003CD0
 * Callers:
 *     ?OnApplicationTerminated@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_PSM_HOST_INFO@@@Z @ 0x180002D00 (-OnApplicationTerminated@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_PSM_HOST_INFO@@@Z.c)
 * Callees:
 *     ?RmpActivityHostGetManagerType@@YAKPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800044C8 (-RmpActivityHostGetManagerType@@YAKPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostStartProcessPresenceChange@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800044EC (-HampHostStartProcessPresenceChange@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostNotifyZeroProcess@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@KPEAK@Z @ 0x18000C5D8 (-HampHostNotifyZeroProcess@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINAT.c)
 *     CempLockTrackerMarkAcquired @ 0x18000E390 (CempLockTrackerMarkAcquired.c)
 *     CempLockTrackerMarkReleased @ 0x180010300 (CempLockTrackerMarkReleased.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180010950 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x1800109D0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800398D0 (-RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     __security_check_cookie @ 0x18004E310 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180050280 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall HampHostCheckNotifyZeroProcess(struct _RM_HAM_ACTIVITY_HOST *a1)
{
  DWORD v2; // esi
  unsigned int v3; // r14d
  _QWORD *Value; // rbx
  int v5; // esi
  __int64 v6; // rdx
  unsigned int ManagerType; // eax
  __int64 *v8; // rax
  __int64 v9; // rcx
  bool v10; // zf
  const unsigned __int16 *v11; // rcx
  __int64 v12; // rax
  int v13; // edx
  int v14; // [rsp+58h] [rbp-B0h] BYREF
  unsigned int v15; // [rsp+5Ch] [rbp-ACh] BYREF
  __int64 v16; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v17; // [rsp+68h] [rbp-A0h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+70h] [rbp-98h] BYREF
  EVENT_DESCRIPTOR v19; // [rsp+80h] [rbp-88h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+90h] [rbp-78h] BYREF
  void *v21; // [rsp+A0h] [rbp-68h]
  int v22; // [rsp+A8h] [rbp-60h]
  int v23; // [rsp+ACh] [rbp-5Ch]
  struct _EVENT_DATA_DESCRIPTOR v24; // [rsp+B8h] [rbp-50h] BYREF
  void *v25; // [rsp+C8h] [rbp-40h]
  int v26; // [rsp+D0h] [rbp-38h]
  int v27; // [rsp+D4h] [rbp-34h]
  const unsigned __int16 *v28; // [rsp+D8h] [rbp-30h]
  int v29; // [rsp+E0h] [rbp-28h]
  int v30; // [rsp+E4h] [rbp-24h]
  __int64 *v31; // [rsp+E8h] [rbp-20h]
  __int64 v32; // [rsp+F0h] [rbp-18h]
  int *v33; // [rsp+F8h] [rbp-10h]
  __int64 v34; // [rsp+100h] [rbp-8h]

  if ( (unsigned int)dword_1800DC218 > 4 && (qword_1800DC228 & 0x40) != 0 && (qword_1800DC230 & 0x40) == qword_1800DC230 )
  {
    *(_DWORD *)&EventDescriptor.Level = 260;
    UserData.Ptr = (ULONGLONG)off_1800DC220;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 64LL;
    UserData.Size = *(unsigned __int16 *)off_1800DC220;
    v21 = &unk_1800C0DAF;
    UserData.Reserved = 2;
    v22 = 27;
    v23 = 1;
    v15 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(qword_1800DC238, &EventDescriptor, 0LL, 0LL, 2u, &UserData);
  }
  v2 = HampLockTrackerId;
  v3 = 0;
  v15 = 0;
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
  if ( (*((_QWORD *)a1 + 83) & 0x800000000LL) != 0 )
  {
    v5 = 1;
  }
  else
  {
    v5 = 0;
    HampHostStartProcessPresenceChange(a1);
    if ( (*((_QWORD *)a1 + 83) & 0x2000000000000LL) != 0 )
    {
      CempLockTrackerMarkReleased(HampLockTrackerId, v6, 1LL);
      *((_DWORD *)a1 + 2) = 0;
      RtlReleaseSRWLockExclusive(a1);
      LODWORD(v16) = 0;
      ManagerType = RmpActivityHostGetManagerType((struct _RM_HAM_ACTIVITY_HOST *)((char *)a1 - 64));
      (*(void (__fastcall **)(char *, _QWORD, char *, _QWORD, _QWORD, unsigned int, _QWORD, __int64 *))(*(_QWORD *)(*((_QWORD *)a1 - 2) + 40LL) + 72LL))(
        (char *)a1 + 488,
        *((unsigned int *)a1 + 139),
        (char *)a1 + 24,
        *((unsigned int *)a1 + 140),
        *((_QWORD *)a1 - 4),
        ManagerType,
        0LL,
        &v16);
      if ( (_DWORD)v16 )
      {
        CempLockTrackerMarkAcquired(HampLockTrackerId);
        RtlAcquireSRWLockExclusive(a1);
        *((_DWORD *)a1 + 2) = GetCurrentThreadId();
      }
      else
      {
        HampHostNotifyZeroProcess(a1, 0LL, 0LL, 0LL, &v15);
        v3 = v15;
      }
    }
    *((_QWORD *)a1 + 83) &= ~0x1000000000000uLL;
    RtlWakeAllConditionVariable((char *)a1 + 696);
  }
  if ( HampLockTrackerId != -1 )
  {
    v8 = (__int64 *)TlsGetValue(HampLockTrackerId);
    v9 = *v8;
    if ( (*v8 & 2) == 0 )
      __int2c();
    v10 = v8[2]-- == 1;
    if ( v10 )
      *v8 = v9 & 0xFFFFFFFFFFFFFFFDuLL;
  }
  *((_DWORD *)a1 + 2) = 0;
  RtlReleaseSRWLockExclusive(a1);
  if ( v5 )
    RtlWakeAllConditionVariable((char *)a1 + 696);
  if ( v3 )
  {
    RmpAcquireGlobalLock();
    v10 = (*((_QWORD *)a1 + 75))-- == 1LL;
    if ( v10 )
      RmpActivityHostCheckQueueDelete((struct _RM_HAM_ACTIVITY_HOST *)((char *)a1 - 64));
    RmpReleaseGlobalLock();
  }
  if ( (unsigned int)dword_1800DC218 > 4 && (qword_1800DC228 & 8) != 0 && (qword_1800DC230 & 8) == qword_1800DC230 )
  {
    v11 = (const unsigned __int16 *)((char *)a1 + 24);
    LOBYTE(v14) = *((_BYTE *)a1 + 560);
    v17 = *((_QWORD *)a1 - 4);
    v33 = &v14;
    v31 = &v17;
    v34 = 1LL;
    v32 = 8LL;
    if ( a1 == (struct _RM_HAM_ACTIVITY_HOST *)-24LL )
    {
      v11 = &word_1800B7A9C;
      v13 = 2;
    }
    else
    {
      v12 = -1LL;
      do
        v10 = v11[++v12] == 0;
      while ( !v10 );
      v13 = 2 * v12 + 2;
    }
    *(_DWORD *)&v19.Level = 516;
    v24.Ptr = (ULONGLONG)off_1800DC220;
    v28 = v11;
    v29 = v13;
    v30 = 0;
    *(_DWORD *)&v19.Id = 184549376;
    v19.Keyword = 8LL;
    v24.Size = *(unsigned __int16 *)off_1800DC220;
    v25 = &unk_1800C0C7B;
    v24.Reserved = 2;
    v26 = 53;
    v27 = 1;
    v15 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(qword_1800DC238, &v19, 0LL, 0LL, 5u, &v24);
  }
}
