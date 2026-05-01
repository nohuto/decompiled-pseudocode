/*
 * XREFs of ?OnApplicationTerminated@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_PSM_HOST_INFO@@@Z @ 0x18001A7B0
 * Callers:
 *     ?HostStateNotification@ResourceManager@ExecutionModel@@UEAAXPEBGPEAT_RM_SID@@KQEAKQEA_KKW4_PSM_INTERNAL_HOST_STATE@@@Z @ 0x18001A600 (-HostStateNotification@ResourceManager@ExecutionModel@@UEAAXPEBGPEAT_RM_SID@@KQEAKQEA_KKW4_PSM_I.c)
 * Callees:
 *     ??$_DeleteNode@U?$_HashNode@U?$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@@utl@@@?$_ContainerBase@U?$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@V?$allocator@U?$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@@2@@utl@@IEAAXPEAU?$_HashNode@U?$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@@1@@Z @ 0x180014384 (--$_DeleteNode@U-$_HashNode@U-$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfStates@ResourceManag.c)
 *     ?HampHostCheckNotifyZeroProcess@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18001A040 (-HampHostCheckNotifyZeroProcess@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpActivityHostZeroProcessNotification@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18001AE8C (-RmpActivityHostZeroProcessNotification@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18001C700 (-RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180032500 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     __security_check_cookie @ 0x1800494C0 (__security_check_cookie.c)
 *     ??$find@X@?$_HashTable@U_RM_PSM_HOST_INFO@@U?$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@U?$hash@U_RM_PSM_HOST_INFO@@@3@U?$equal_to@U_RM_PSM_HOST_INFO@@@3@V?$allocator@U?$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@@3@$0A@@utl@@QEAA?AV?$_DlistIt@U?$_HashNode@U?$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@@utl@@U?$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@2@@1@AEBU_RM_PSM_HOST_INFO@@@Z @ 0x18004F614 (--$find@X@-$_HashTable@U_RM_PSM_HOST_INFO@@U-$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfState.c)
 *     ?_UnlinkNode@?$_HashTable@U_RM_PSM_HOST_INFO@@U?$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@U?$hash@U_RM_PSM_HOST_INFO@@@3@U?$equal_to@U_RM_PSM_HOST_INFO@@@3@V?$allocator@U?$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@@3@$0A@@utl@@AEAAPEAU?$_HashNode@U?$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@@2@V?$_DlistConstIt@U?$_HashNode@U?$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@@utl@@U?$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@2@@2@_K@Z @ 0x18004F9F0 (-_UnlinkNode@-$_HashTable@U_RM_PSM_HOST_INFO@@U-$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfSt.c)
 */

void __fastcall ExecutionModel::ResourceManager::OnApplicationTerminated(
        ExecutionModel::ResourceManager *this,
        struct _RM_PSM_HOST_INFO *a2)
{
  __int64 v4; // r14
  __int64 v5; // r12
  DWORD v6; // edi
  __int64 v7; // r13
  _QWORD *Value; // rbx
  __int64 v9; // rdi
  unsigned int v10; // ebx
  __int64 v11; // rsi
  __int64 v12; // rax
  __int64 v13; // r11
  __int64 v14; // r10
  __int64 v15; // rax
  __int64 *v16; // rax
  __int64 v17; // rcx
  bool v18; // zf
  DWORD v19; // edi
  _QWORD *v20; // rbx
  ExecutionModel::ResourceManager *v21; // rbx
  void *v22; // rax
  __int64 v23; // rcx
  __int64 *v24; // rax
  __int64 v25; // rdx
  DWORD v26; // edi
  _QWORD *v27; // rbx
  __int64 *v28; // rax
  __int64 v29; // rcx
  int v30; // eax
  int v31; // [rsp+38h] [rbp-C8h] BYREF
  ExecutionModel::ResourceManager *v32; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v33; // [rsp+48h] [rbp-B8h]
  ExecutionModel::ResourceManager *v34; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v35; // [rsp+58h] [rbp-A8h]
  __int64 v36; // [rsp+60h] [rbp-A0h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+68h] [rbp-98h] BYREF
  EVENT_DESCRIPTOR v38; // [rsp+78h] [rbp-88h] BYREF
  __int64 v39; // [rsp+90h] [rbp-70h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+A0h] [rbp-60h] BYREF
  void *v41; // [rsp+B0h] [rbp-50h]
  int v42; // [rsp+B8h] [rbp-48h]
  int v43; // [rsp+BCh] [rbp-44h]
  struct _EVENT_DATA_DESCRIPTOR v44; // [rsp+C0h] [rbp-40h] BYREF
  void *v45; // [rsp+D0h] [rbp-30h]
  int v46; // [rsp+D8h] [rbp-28h]
  int v47; // [rsp+DCh] [rbp-24h]
  struct _RM_PSM_HOST_INFO *v48; // [rsp+E0h] [rbp-20h]
  int v49; // [rsp+E8h] [rbp-18h]
  int v50; // [rsp+ECh] [rbp-14h]
  ExecutionModel::ResourceManager **v51; // [rsp+F0h] [rbp-10h]
  __int64 v52; // [rsp+F8h] [rbp-8h]
  int *v53; // [rsp+100h] [rbp+0h]
  __int64 v54; // [rsp+108h] [rbp+8h]
  __int64 *v55; // [rsp+110h] [rbp+10h]
  __int64 v56; // [rsp+118h] [rbp+18h]

  v32 = this;
  if ( (unsigned int)dword_1800DB1E0 > 4 && (byte_1800DB1F0 & 1) != 0 && (qword_1800DB1F8 & 1) == qword_1800DB1F8 )
  {
    *(_DWORD *)&EventDescriptor.Level = 260;
    UserData.Ptr = (ULONGLONG)off_1800DB1E8;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 1LL;
    UserData.Size = *(unsigned __int16 *)off_1800DB1E8;
    v41 = &unk_1800C34A9;
    UserData.Reserved = 2;
    v42 = 33;
    v43 = 1;
    EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 2u, &UserData);
  }
  v4 = *((_QWORD *)a2 + 68);
  v5 = 0LL;
  v6 = HampLockTrackerId;
  v7 = 0LL;
  v35 = v4;
  if ( HampLockTrackerId != -1 )
  {
    Value = TlsGetValue(HampLockTrackerId);
    if ( *(_QWORD *)TlsGetValue(v6) )
      __int2c();
    *Value |= 1uLL;
    ++Value[1];
  }
  RtlAcquireSRWLockExclusive(&RmpGlobalLock);
  dword_1800DC580 = GetCurrentThreadId();
  v33 = *((_QWORD *)this + 16);
  v9 = v33 + 32;
  RtlAcquireSRWLockShared(v33 + 32);
  v10 = *(_DWORD *)(v33 + 20);
  v11 = -1LL;
  v39 = v4;
  v12 = 0LL;
  v13 = -1LL << (v10 & 0x1F);
  v14 = v13 & (HIBYTE(v4)
             + 37
             * (BYTE6(v4)
              + 37
              * (BYTE5(v4)
               + 37
               * (BYTE4(v4)
                + 37 * (BYTE3(v4) + 37 * (BYTE2(v4) + 37 * (BYTE1(v4) + 37 * ((unsigned __int8)v4 + 11623883LL))))))));
LABEL_10:
  if ( v12 )
    goto LABEL_13;
  if ( v10 >> 5 )
  {
    v12 = *(_QWORD *)(v33 + 24)
        + 8LL
        * ((37
          * (BYTE6(v14)
           + 37
           * (BYTE5(v14)
            + 37
            * (BYTE4(v14)
             + 37 * (BYTE3(v14) + 37 * (BYTE2(v14) + 37 * (BYTE1(v14) + 37 * ((unsigned __int8)v14 + 11623883)))))))
          + HIBYTE(v14)) & ((v10 >> 5) - 1));
LABEL_13:
    while ( 1 )
    {
      v12 = *(_QWORD *)v12;
      if ( (v12 & 1) != 0 )
        break;
      if ( v14 == (v13 & *(_QWORD *)(v12 + 8)) )
      {
        if ( v4 != *(_QWORD *)(v12 + 32) )
          goto LABEL_10;
        if ( _InterlockedIncrement64((volatile signed __int64 *)(v12 + 16)) <= 1 )
          __fastfail(0xEu);
        v5 = v12;
        RtlReleaseSRWLockShared(v9);
        v15 = 0LL;
        v7 = v5 + 64;
        if ( v5 != -64 )
          v15 = v5;
        if ( *(int *)(v15 + 24) >= 0 )
          ++*(_QWORD *)(v5 + 664);
        dword_1800DC580 = 0;
        RtlReleaseSRWLockExclusive(&RmpGlobalLock);
        if ( HampLockTrackerId != -1 )
        {
          v16 = (__int64 *)TlsGetValue(HampLockTrackerId);
          v17 = *v16;
          if ( (*v16 & 1) == 0 )
            __int2c();
          v18 = v16[1]-- == 1;
          if ( v18 )
            *v16 = v17 & 0xFFFFFFFFFFFFFFFEuLL;
        }
        HampHostCheckNotifyZeroProcess((struct _RM_HAM_ACTIVITY_HOST *)(v5 + 64));
        v19 = HampLockTrackerId;
        if ( HampLockTrackerId != -1 )
        {
          v20 = TlsGetValue(HampLockTrackerId);
          if ( *(_QWORD *)TlsGetValue(v19) )
            __int2c();
          *v20 |= 1uLL;
          ++v20[1];
        }
        RtlAcquireSRWLockExclusive(&RmpGlobalLock);
        dword_1800DC580 = GetCurrentThreadId();
        RmpActivityHostZeroProcessNotification((struct _RM_ACTIVITY_HOST *)v5);
        goto LABEL_33;
      }
    }
  }
  RtlReleaseSRWLockShared(v9);
LABEL_33:
  utl::_HashTable<_RM_PSM_HOST_INFO,utl::pair<_RM_PSM_HOST_INFO const,ExecutionModel::ResourceManager::CommitMemoryWnfStates>,utl::hash<_RM_PSM_HOST_INFO>,utl::equal_to<_RM_PSM_HOST_INFO>,utl::allocator<utl::pair<_RM_PSM_HOST_INFO const,ExecutionModel::ResourceManager::CommitMemoryWnfStates>>,0>::find<void>(
    (char *)v32 + 168,
    &v34,
    a2);
  v21 = v34;
  if ( v34 != (ExecutionModel::ResourceManager *)((char *)v32 + 168) )
  {
    NtDeleteWnfStateName((char *)v34 + 576);
    NtDeleteWnfStateName((char *)v21 + 584);
    v22 = (void *)utl::_HashTable<_RM_PSM_HOST_INFO,utl::pair<_RM_PSM_HOST_INFO const,ExecutionModel::ResourceManager::CommitMemoryWnfStates>,utl::hash<_RM_PSM_HOST_INFO>,utl::equal_to<_RM_PSM_HOST_INFO>,utl::allocator<utl::pair<_RM_PSM_HOST_INFO const,ExecutionModel::ResourceManager::CommitMemoryWnfStates>>,0>::_UnlinkNode(
                    (char *)v32 + 168,
                    v21,
                    (8LL << *((_BYTE *)v32 + 200)) - 1);
    utl::_ContainerBase<utl::pair<_RM_PSM_HOST_INFO const,ExecutionModel::ResourceManager::CommitMemoryWnfStates>,utl::allocator<utl::pair<_RM_PSM_HOST_INFO const,ExecutionModel::ResourceManager::CommitMemoryWnfStates>>>::_DeleteNode<utl::_HashNode<utl::pair<_RM_PSM_HOST_INFO const,ExecutionModel::ResourceManager::CommitMemoryWnfStates>>>(
      v23,
      v22);
  }
  dword_1800DC580 = 0;
  RtlReleaseSRWLockExclusive(&RmpGlobalLock);
  if ( HampLockTrackerId != -1 )
  {
    v24 = (__int64 *)TlsGetValue(HampLockTrackerId);
    v25 = *v24;
    if ( (*v24 & 1) == 0 )
      __int2c();
    v18 = v24[1]-- == 1;
    if ( v18 )
      *v24 = v25 & 0xFFFFFFFFFFFFFFFEuLL;
  }
  if ( v5 )
    RmpObjectRelease((struct _RM_OBJECT_HEADER *)v5);
  if ( v7 )
  {
    v26 = HampLockTrackerId;
    if ( HampLockTrackerId != -1 )
    {
      v27 = TlsGetValue(HampLockTrackerId);
      if ( *(_QWORD *)TlsGetValue(v26) )
        __int2c();
      *v27 |= 1uLL;
      ++v27[1];
    }
    RtlAcquireSRWLockExclusive(&RmpGlobalLock);
    dword_1800DC580 = GetCurrentThreadId();
    v18 = (*(_QWORD *)(v7 + 600))-- == 1LL;
    if ( v18 )
      RmpActivityHostCheckQueueDelete((struct _RM_ACTIVITY_HOST *)(v7 - 64));
    dword_1800DC580 = 0;
    RtlReleaseSRWLockExclusive(&RmpGlobalLock);
    if ( HampLockTrackerId != -1 )
    {
      v28 = (__int64 *)TlsGetValue(HampLockTrackerId);
      v29 = *v28;
      if ( (*v28 & 1) == 0 )
        __int2c();
      v18 = v28[1]-- == 1;
      if ( v18 )
        *v28 = v29 & 0xFFFFFFFFFFFFFFFEuLL;
    }
  }
  if ( (unsigned int)dword_1800DB1E0 > 4 && (byte_1800DB1F0 & 9) != 0 && (qword_1800DB1F8 & 9) == qword_1800DB1F8 )
  {
    v36 = v35;
    v31 = *((_DWORD *)a2 + 133);
    LODWORD(v32) = *((_DWORD *)a2 + 134);
    v55 = &v36;
    v53 = &v31;
    v51 = &v32;
    v56 = 8LL;
    v54 = 4LL;
    v52 = 4LL;
    if ( a2 )
    {
      do
        v18 = *((_WORD *)a2 + ++v11) == 0;
      while ( !v18 );
      v30 = 2 * v11 + 2;
    }
    else
    {
      a2 = (struct _RM_PSM_HOST_INFO *)&word_1800B66B4;
      v30 = 2;
    }
    v49 = v30;
    *(_DWORD *)&v38.Level = 516;
    v44.Ptr = (ULONGLONG)off_1800DB1E8;
    v48 = a2;
    v50 = 0;
    *(_DWORD *)&v38.Id = 184549376;
    v38.Keyword = 9LL;
    v44.Size = *(unsigned __int16 *)off_1800DB1E8;
    v45 = &unk_1800C36A9;
    v44.Reserved = 2;
    v46 = 73;
    v47 = 1;
    EventWriteTransfer(RegHandle, &v38, 0LL, 0LL, 6u, &v44);
  }
}
