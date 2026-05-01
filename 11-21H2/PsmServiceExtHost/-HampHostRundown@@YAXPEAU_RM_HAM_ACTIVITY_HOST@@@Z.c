/*
 * XREFs of ?HampHostRundown@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18000CAF0
 * Callers:
 *     ?RmpActivityHostRemoveFromTables@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000B220 (-RmpActivityHostRemoveFromTables@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     CempListEntryIsNull @ 0x18000A004 (CempListEntryIsNull.c)
 *     CempLockTrackerMarkAcquired @ 0x18000E390 (CempLockTrackerMarkAcquired.c)
 *     CempLockTrackerMarkReleased @ 0x180010300 (CempLockTrackerMarkReleased.c)
 *     ?RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800398D0 (-RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?HampPkgReleaseLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x18003ACDC (-HampPkgReleaseLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 *     ?HampPkgAcquireLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x18003AD18 (-HampPkgAcquireLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 *     __security_check_cookie @ 0x18004E310 (__security_check_cookie.c)
 *     ?HampDepGroupInvalidateDependency@@YAXPEAU_HAM_HOST_DEPENDENCY@@@Z @ 0x180075750 (-HampDepGroupInvalidateDependency@@YAXPEAU_HAM_HOST_DEPENDENCY@@@Z.c)
 *     ?HampDepGroupRemoveHost@@YAXPEAU_HAM_DEPENDENCY_GROUP@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180075F68 (-HampDepGroupRemoveHost@@YAXPEAU_HAM_DEPENDENCY_GROUP@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 */

void __fastcall HampHostRundown(struct _RM_HAM_ACTIVITY_HOST *a1)
{
  __int64 v1; // rdi
  const unsigned __int16 *v3; // rdx
  char *v4; // rcx
  int v5; // eax
  __int64 v6; // rax
  int v7; // ecx
  DWORD CurrentThreadId; // eax
  __int64 v9; // rcx
  __int64 v10; // rdx
  struct _HAM_HOST_DEPENDENCY *v11; // rcx
  struct _HAM_DEPENDENCY_GROUP *v12; // rcx
  __int64 v13; // rsi
  DWORD v14; // r14d
  _QWORD *Value; // rsi
  __int64 v16; // rdx
  _QWORD *v17; // rcx
  _QWORD *v18; // rax
  char v19; // al
  __int64 v20; // rcx
  char v22; // [rsp+38h] [rbp-89h] BYREF
  char v23; // [rsp+39h] [rbp-88h] BYREF
  _DWORD v24[3]; // [rsp+3Ch] [rbp-85h] BYREF
  __int64 v25; // [rsp+48h] [rbp-79h] BYREF
  __int64 v26; // [rsp+50h] [rbp-71h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+58h] [rbp-69h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+68h] [rbp-59h] BYREF
  void *v29; // [rsp+78h] [rbp-49h]
  int v30; // [rsp+80h] [rbp-41h]
  int v31; // [rsp+84h] [rbp-3Dh]
  const unsigned __int16 *v32; // [rsp+88h] [rbp-39h]
  int v33; // [rsp+90h] [rbp-31h]
  int v34; // [rsp+94h] [rbp-2Dh]
  __int64 *v35; // [rsp+98h] [rbp-29h]
  __int64 v36; // [rsp+A0h] [rbp-21h]
  char *v37; // [rsp+A8h] [rbp-19h]
  __int64 v38; // [rsp+B0h] [rbp-11h]
  char *v39; // [rsp+B8h] [rbp-9h]
  __int64 v40; // [rsp+C0h] [rbp-1h]
  _DWORD *v41; // [rsp+C8h] [rbp+7h]
  __int64 v42; // [rsp+D0h] [rbp+Fh]
  char *v43; // [rsp+D8h] [rbp+17h]
  int v44; // [rsp+E0h] [rbp+1Fh]
  int v45; // [rsp+E4h] [rbp+23h]
  __int64 *v46; // [rsp+E8h] [rbp+27h]
  __int64 v47; // [rsp+F0h] [rbp+2Fh]

  v1 = *((_QWORD *)a1 + 99);
  if ( (unsigned int)dword_1800DC218 > 4 && (qword_1800DC228 & 8) != 0 && (qword_1800DC230 & 8) == qword_1800DC230 )
  {
    v3 = (const unsigned __int16 *)((char *)a1 + 24);
    v25 = *((_QWORD *)a1 + 102);
    v4 = (char *)a1 + 488;
    v24[0] = *((_DWORD *)a1 + 139);
    v22 = *((_BYTE *)a1 + 592);
    v23 = *((_BYTE *)a1 + 560);
    v26 = *((_QWORD *)a1 - 4);
    v46 = &v25;
    v47 = 8LL;
    v5 = (unsigned __int8)v4[1];
    v43 = v4;
    v45 = 0;
    v42 = 4LL;
    v40 = 1LL;
    v44 = 4 * v5 + 8;
    v41 = v24;
    v39 = &v22;
    v37 = &v23;
    v35 = &v26;
    v38 = 1LL;
    v36 = 8LL;
    if ( a1 == (struct _RM_HAM_ACTIVITY_HOST *)-24LL )
    {
      v3 = &word_1800B7A9C;
      v7 = 2;
    }
    else
    {
      v6 = -1LL;
      do
        ++v6;
      while ( v3[v6] );
      v7 = 2 * v6 + 2;
    }
    *(_DWORD *)&EventDescriptor.Level = 4;
    UserData.Ptr = (ULONGLONG)off_1800DC220;
    v33 = v7;
    v32 = v3;
    EventDescriptor.Keyword = 8LL;
    v34 = 0;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    UserData.Size = *(unsigned __int16 *)off_1800DC220;
    v29 = &unk_1800C1178;
    UserData.Reserved = 2;
    v30 = 81;
    v31 = 1;
    v24[1] = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(qword_1800DC238, &EventDescriptor, 0LL, 0LL, 9u, &UserData);
  }
  if ( (*((_BYTE *)a1 + 788) & 1) != 0 )
  {
    CempLockTrackerMarkAcquired(HampLockTrackerId);
    RtlAcquireSRWLockExclusive(a1);
    CurrentThreadId = GetCurrentThreadId();
    v9 = HampLockTrackerId;
    *((_DWORD *)a1 + 2) = CurrentThreadId;
    *((_QWORD *)a1 + 83) |= 0x100000000000000uLL;
    CempLockTrackerMarkReleased(v9, v10, 1LL);
    *((_DWORD *)a1 + 2) = 0;
    RtlReleaseSRWLockExclusive(a1);
  }
  v11 = (struct _HAM_HOST_DEPENDENCY *)*((_QWORD *)a1 + 89);
  if ( v11 )
    HampDepGroupInvalidateDependency(v11);
  v12 = (struct _HAM_DEPENDENCY_GROUP *)*((_QWORD *)a1 + 88);
  if ( v12 )
    HampDepGroupRemoveHost(v12, a1);
  if ( v1 )
  {
    v13 = *(_QWORD *)(v1 + 88);
    if ( a1 == *(struct _RM_HAM_ACTIVITY_HOST **)(v13 + 328) )
    {
      HampPkgAcquireLockExclusive(*(struct _HAM_PACKAGE **)(v1 + 88));
      *(_QWORD *)(v13 + 328) = 0LL;
      HampPkgReleaseLockExclusive((struct _HAM_PACKAGE *)v13);
    }
    v14 = HampLockTrackerId;
    if ( HampLockTrackerId != -1 )
    {
      Value = TlsGetValue(HampLockTrackerId);
      if ( (*(_QWORD *)TlsGetValue(v14) & 0xFFFFFFFFFFFFFFE0uLL) != 0 )
        __int2c();
      *Value |= 0x20uLL;
      ++Value[6];
    }
    RtlAcquireSRWLockExclusive(v1 + 584);
    *(_DWORD *)(v1 + 592) = GetCurrentThreadId();
    if ( !(unsigned int)CempListEntryIsNull((_QWORD *)a1 + 103) )
    {
      v16 = *v17;
      if ( *(_QWORD **)(*v17 + 8LL) != v17 || (v18 = (_QWORD *)v17[1], (_QWORD *)*v18 != v17) )
        __fastfail(3u);
      *v18 = v16;
      *(_QWORD *)(v16 + 8) = v18;
    }
    v19 = *((_BYTE *)a1 + 592);
    if ( v19 )
    {
      if ( v19 == 1 && a1 == *(struct _RM_HAM_ACTIVITY_HOST **)(v1 + 576) )
        *(_QWORD *)(v1 + 576) = 0LL;
    }
    else if ( a1 == *(struct _RM_HAM_ACTIVITY_HOST **)(v1 + 568) )
    {
      *(_QWORD *)(v1 + 568) = 0LL;
    }
    CempLockTrackerMarkReleased(HampLockTrackerId, v16, 5LL);
    *(_DWORD *)(v1 + 592) = 0;
    RtlReleaseSRWLockExclusive(v1 + 584);
  }
  v20 = *((_QWORD *)a1 + 100);
  if ( v20 )
  {
    if ( (*(_QWORD *)(v20 + 600))-- == 1LL )
      RmpActivityHostCheckQueueDelete((struct _RM_ACTIVITY_HOST *)(v20 - 64));
  }
}
