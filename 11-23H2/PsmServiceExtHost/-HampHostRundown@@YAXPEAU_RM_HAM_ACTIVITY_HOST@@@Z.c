/*
 * XREFs of ?HampHostRundown@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180038710
 * Callers:
 *     ?RmpActivityHostRemoveFromTables@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18003839C (-RmpActivityHostRemoveFromTables@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     CempLockTrackerMarkReleased @ 0x18001C6B0 (CempLockTrackerMarkReleased.c)
 *     ?RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18001C700 (-RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     CempLockTrackerMarkAcquired @ 0x1800211E0 (CempLockTrackerMarkAcquired.c)
 *     ?HampPkgReleaseLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x1800376E4 (-HampPkgReleaseLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 *     ?HampPkgAcquireLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x180037720 (-HampPkgAcquireLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 *     __security_check_cookie @ 0x1800494C0 (__security_check_cookie.c)
 *     ?HampDepGroupInvalidateDependency@@YAXPEAU_HAM_HOST_DEPENDENCY@@@Z @ 0x18007CA24 (-HampDepGroupInvalidateDependency@@YAXPEAU_HAM_HOST_DEPENDENCY@@@Z.c)
 *     ?HampDepGroupRemoveHost@@YAXPEAU_HAM_DEPENDENCY_GROUP@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18007CD98 (-HampDepGroupRemoveHost@@YAXPEAU_HAM_DEPENDENCY_GROUP@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 */

void __fastcall HampHostRundown(struct _RM_HAM_ACTIVITY_HOST *a1, __int64 a2)
{
  __int64 v2; // rdi
  const unsigned __int16 *v4; // rdx
  char *v5; // rax
  __int64 v6; // rcx
  int v7; // eax
  __int64 v8; // rax
  bool v9; // zf
  int v10; // ecx
  DWORD CurrentThreadId; // eax
  DWORD v12; // ecx
  __int64 *Value; // rax
  __int64 v14; // rcx
  struct _HAM_HOST_DEPENDENCY *v15; // rcx
  void *v16; // rcx
  __int64 v17; // rsi
  __int64 v18; // rdx
  DWORD v19; // r14d
  _QWORD *v20; // rsi
  DWORD v21; // eax
  __int64 v22; // rdx
  char *v23; // rcx
  __int64 *v24; // rax
  char v25; // al
  __int64 v26; // rcx
  char v27; // [rsp+30h] [rbp-89h] BYREF
  char v28; // [rsp+31h] [rbp-88h] BYREF
  _DWORD v29[3]; // [rsp+34h] [rbp-85h] BYREF
  __int64 v30; // [rsp+40h] [rbp-79h] BYREF
  __int64 v31; // [rsp+48h] [rbp-71h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+50h] [rbp-69h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+60h] [rbp-59h] BYREF
  void *v34; // [rsp+70h] [rbp-49h]
  int v35; // [rsp+78h] [rbp-41h]
  int v36; // [rsp+7Ch] [rbp-3Dh]
  const unsigned __int16 *v37; // [rsp+80h] [rbp-39h]
  int v38; // [rsp+88h] [rbp-31h]
  int v39; // [rsp+8Ch] [rbp-2Dh]
  __int64 *v40; // [rsp+90h] [rbp-29h]
  __int64 v41; // [rsp+98h] [rbp-21h]
  char *v42; // [rsp+A0h] [rbp-19h]
  __int64 v43; // [rsp+A8h] [rbp-11h]
  char *v44; // [rsp+B0h] [rbp-9h]
  __int64 v45; // [rsp+B8h] [rbp-1h]
  _DWORD *v46; // [rsp+C0h] [rbp+7h]
  __int64 v47; // [rsp+C8h] [rbp+Fh]
  __int64 v48; // [rsp+D0h] [rbp+17h]
  int v49; // [rsp+D8h] [rbp+1Fh]
  int v50; // [rsp+DCh] [rbp+23h]
  __int64 *v51; // [rsp+E0h] [rbp+27h]
  __int64 v52; // [rsp+E8h] [rbp+2Fh]

  v2 = *((_QWORD *)a1 + 99);
  if ( (unsigned int)dword_1800DB218 > 4 && (qword_1800DB228 & 8) != 0 && (qword_1800DB230 & 8) == qword_1800DB230 )
  {
    v4 = (const unsigned __int16 *)((char *)a1 + 24);
    v30 = *((_QWORD *)a1 + 102);
    v5 = (char *)a1 + 488;
    v52 = 8LL;
    v6 = 552LL;
    if ( a1 )
      v6 = (__int64)v5;
    v29[0] = *((_DWORD *)a1 + 139);
    v27 = *((_BYTE *)a1 + 592);
    v28 = *((_BYTE *)a1 + 560);
    v31 = *((_QWORD *)a1 - 4);
    v51 = &v30;
    v7 = *(unsigned __int8 *)(v6 + 1);
    v48 = v6;
    v50 = 0;
    v47 = 4LL;
    v45 = 1LL;
    v49 = 4 * v7 + 8;
    v46 = v29;
    v44 = &v27;
    v42 = &v28;
    v40 = &v31;
    v43 = 1LL;
    v41 = 8LL;
    if ( a1 == (struct _RM_HAM_ACTIVITY_HOST *)-24LL )
    {
      v4 = &word_1800B66B4;
      v10 = 2;
    }
    else
    {
      v8 = -1LL;
      do
        v9 = v4[++v8] == 0;
      while ( !v9 );
      v10 = 2 * v8 + 2;
    }
    *(_DWORD *)&EventDescriptor.Level = 4;
    UserData.Ptr = (ULONGLONG)off_1800DB220;
    v38 = v10;
    v37 = v4;
    v39 = 0;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 8LL;
    UserData.Size = *(unsigned __int16 *)off_1800DB220;
    v34 = &unk_1800BFDAF;
    UserData.Reserved = 2;
    v35 = 81;
    v36 = 1;
    v29[1] = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(qword_1800DB238, &EventDescriptor, 0LL, 0LL, 9u, &UserData);
  }
  CempLockTrackerMarkAcquired(HampLockTrackerId, a2, 1u, 0);
  RtlAcquireSRWLockExclusive(a1);
  CurrentThreadId = GetCurrentThreadId();
  v12 = HampLockTrackerId;
  *((_DWORD *)a1 + 2) = CurrentThreadId;
  *((_QWORD *)a1 + 83) |= 0x100000000000000uLL;
  if ( v12 != -1 )
  {
    Value = (__int64 *)TlsGetValue(v12);
    v14 = *Value;
    if ( (*Value & 2) == 0 )
      __int2c();
    v9 = Value[2]-- == 1;
    if ( v9 )
      *Value = v14 & 0xFFFFFFFFFFFFFFFDuLL;
  }
  *((_DWORD *)a1 + 2) = 0;
  RtlReleaseSRWLockExclusive(a1);
  v15 = (struct _HAM_HOST_DEPENDENCY *)*((_QWORD *)a1 + 89);
  if ( v15 )
    HampDepGroupInvalidateDependency(v15);
  v16 = (void *)*((_QWORD *)a1 + 88);
  if ( v16 )
    HampDepGroupRemoveHost(v16, a1);
  if ( v2 )
  {
    v17 = *(_QWORD *)(v2 + 88);
    if ( a1 == *(struct _RM_HAM_ACTIVITY_HOST **)(v17 + 328) )
    {
      HampPkgAcquireLockExclusive((struct _HAM_PACKAGE *)v17);
      *(_QWORD *)(v17 + 328) = 0LL;
      HampPkgReleaseLockExclusive((struct _HAM_PACKAGE *)v17, v18);
    }
    v19 = HampLockTrackerId;
    if ( HampLockTrackerId != -1 )
    {
      v20 = TlsGetValue(HampLockTrackerId);
      if ( (*(_QWORD *)TlsGetValue(v19) & 0xFFFFFFFFFFFFFFE0uLL) != 0 )
        __int2c();
      *v20 |= 0x20uLL;
      ++v20[6];
    }
    RtlAcquireSRWLockExclusive(v2 + 584);
    v21 = GetCurrentThreadId();
    v23 = (char *)a1 + 824;
    *(_DWORD *)(v2 + 592) = v21;
    if ( *((_QWORD *)a1 + 103) && *((_QWORD *)a1 + 104) )
    {
      v22 = *(_QWORD *)v23;
      if ( *(char **)(*(_QWORD *)v23 + 8LL) != v23 || (v24 = (__int64 *)*((_QWORD *)a1 + 104), (char *)*v24 != v23) )
        __fastfail(3u);
      *v24 = v22;
      *(_QWORD *)(v22 + 8) = v24;
    }
    v25 = *((_BYTE *)a1 + 592);
    if ( v25 )
    {
      if ( v25 == 1 && a1 == *(struct _RM_HAM_ACTIVITY_HOST **)(v2 + 576) )
        *(_QWORD *)(v2 + 576) = 0LL;
    }
    else if ( a1 == *(struct _RM_HAM_ACTIVITY_HOST **)(v2 + 568) )
    {
      *(_QWORD *)(v2 + 568) = 0LL;
    }
    CempLockTrackerMarkReleased(HampLockTrackerId, v22, 5u);
    *(_DWORD *)(v2 + 592) = 0;
    RtlReleaseSRWLockExclusive(v2 + 584);
  }
  v26 = *((_QWORD *)a1 + 100);
  if ( v26 )
  {
    v9 = (*(_QWORD *)(v26 + 600))-- == 1LL;
    if ( v9 )
      RmpActivityHostCheckQueueDelete((struct _RM_ACTIVITY_HOST *)(v26 - 64));
  }
}
