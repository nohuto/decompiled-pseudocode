/*
 * XREFs of ?OnApplicationTerminated@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_PSM_HOST_INFO@@@Z @ 0x180002D00
 * Callers:
 *     ?HostStateNotification@ResourceManager@ExecutionModel@@UEAAXPEBGPEAT_RM_SID@@KQEAKQEA_KKW4_PSM_INTERNAL_HOST_STATE@@@Z @ 0x180002B50 (-HostStateNotification@ResourceManager@ExecutionModel@@UEAAXPEBGPEAT_RM_SID@@KQEAKQEA_KKW4_PSM_I.c)
 * Callees:
 *     ?erase@?$_HashTable@U_RM_PSM_HOST_INFO@@U?$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@U?$hash@U_RM_PSM_HOST_INFO@@@3@U?$equal_to@U_RM_PSM_HOST_INFO@@@3@V?$allocator@U?$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@@3@$0A@@utl@@QEAA?AV?$_DlistIt@U?$_HashNode@U?$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@@utl@@U?$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@2@@2@V?$_DlistConstIt@U?$_HashNode@U?$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@@utl@@U?$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@2@@2@0@Z @ 0x180001908 (-erase@-$_HashTable@U_RM_PSM_HOST_INFO@@U-$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfStates@R.c)
 *     ?RmpActivityHostZeroProcessNotification@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180003AD8 (-RmpActivityHostZeroProcessNotification@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostCheckNotifyZeroProcess@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180003CD0 (-HampHostCheckNotifyZeroProcess@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180010950 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x1800109D0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x1800248A0 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     ??R?$equal_to@U_RM_PSM_HOST_INFO@@@utl@@QEBA_NAEBU_RM_PSM_HOST_INFO@@0@Z @ 0x18002BFE8 (--R-$equal_to@U_RM_PSM_HOST_INFO@@@utl@@QEBA_NAEBU_RM_PSM_HOST_INFO@@0@Z.c)
 *     ?RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800398D0 (-RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     __security_check_cookie @ 0x18004E310 (__security_check_cookie.c)
 */

void __fastcall ExecutionModel::ResourceManager::OnApplicationTerminated(
        ExecutionModel::ResourceManager *this,
        struct _RM_PSM_HOST_INFO *a2)
{
  unsigned __int64 v3; // r15
  char *v4; // r12
  DWORD v5; // edi
  _QWORD *Value; // rbx
  __int64 v7; // rbx
  __int64 v8; // rdi
  __int64 v9; // r8
  __int64 v10; // r14
  unsigned int v11; // esi
  __int64 v12; // r11
  __int64 v13; // r9
  char *v14; // rbx
  __int64 *v15; // rax
  __int64 v16; // rcx
  bool v17; // zf
  DWORD v18; // edi
  _QWORD *v19; // rbx
  __int64 *v20; // r9
  __int64 v21; // r8
  unsigned __int8 *v22; // rsi
  WCHAR *v23; // rbx
  __int64 v24; // rdi
  WCHAR v25; // cx
  unsigned __int64 v26; // rdx
  unsigned __int64 v27; // rdx
  unsigned __int64 v28; // rdx
  __int64 v29; // rcx
  unsigned __int64 v30; // rdx
  __int64 *v31; // rbx
  __int64 *v32; // rax
  __int64 v33; // rdx
  int v34; // eax
  __int64 *v35; // rdi
  WCHAR v36; // [rsp+38h] [rbp-C8h]
  ExecutionModel::ResourceManager *v37; // [rsp+40h] [rbp-C0h] BYREF
  int v38; // [rsp+48h] [rbp-B8h] BYREF
  PVOID P; // [rsp+50h] [rbp-B0h]
  unsigned __int64 v40; // [rsp+58h] [rbp-A8h]
  unsigned __int64 v41; // [rsp+60h] [rbp-A0h]
  unsigned __int64 v42; // [rsp+68h] [rbp-98h]
  unsigned __int64 v43; // [rsp+70h] [rbp-90h]
  unsigned __int64 v44; // [rsp+78h] [rbp-88h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+80h] [rbp-80h] BYREF
  EVENT_DESCRIPTOR v46; // [rsp+90h] [rbp-70h] BYREF
  unsigned __int64 v47; // [rsp+A0h] [rbp-60h]
  __int64 *v48; // [rsp+B0h] [rbp-50h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+B8h] [rbp-48h] BYREF
  void *v50; // [rsp+C8h] [rbp-38h]
  int v51; // [rsp+D0h] [rbp-30h]
  int v52; // [rsp+D4h] [rbp-2Ch]
  struct _EVENT_DATA_DESCRIPTOR v53; // [rsp+E0h] [rbp-20h] BYREF
  void *v54; // [rsp+F0h] [rbp-10h]
  int v55; // [rsp+F8h] [rbp-8h]
  int v56; // [rsp+FCh] [rbp-4h]
  struct _RM_PSM_HOST_INFO *v57; // [rsp+100h] [rbp+0h]
  int v58; // [rsp+108h] [rbp+8h]
  int v59; // [rsp+10Ch] [rbp+Ch]
  ExecutionModel::ResourceManager **v60; // [rsp+110h] [rbp+10h]
  __int64 v61; // [rsp+118h] [rbp+18h]
  int *v62; // [rsp+120h] [rbp+20h]
  __int64 v63; // [rsp+128h] [rbp+28h]
  __int64 *v64; // [rsp+130h] [rbp+30h]
  __int64 v65; // [rsp+138h] [rbp+38h]

  v37 = this;
  if ( (unsigned int)dword_1800DC1E0 > 4 && (byte_1800DC1F0 & 1) != 0 && (qword_1800DC1F8 & 1) == qword_1800DC1F8 )
  {
    *(_DWORD *)&EventDescriptor.Level = 260;
    UserData.Ptr = (ULONGLONG)off_1800DC1E8;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 1LL;
    UserData.Size = *(unsigned __int16 *)off_1800DC1E8;
    v50 = &unk_1800C232B;
    UserData.Reserved = 2;
    v51 = 33;
    v52 = 1;
    EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 2u, &UserData);
  }
  v3 = *((_QWORD *)a2 + 68);
  v4 = 0LL;
  v5 = HampLockTrackerId;
  v40 = v3 >> 40;
  v43 = HIDWORD(v3);
  v42 = v3 >> 24;
  v41 = v3 >> 16;
  P = 0LL;
  if ( HampLockTrackerId != -1 )
  {
    Value = TlsGetValue(HampLockTrackerId);
    if ( *(_QWORD *)TlsGetValue(v5) )
      __int2c();
    *Value |= 1uLL;
    ++Value[1];
  }
  RtlAcquireSRWLockExclusive(&RmpGlobalLock);
  dword_1800DD4E8 = GetCurrentThreadId();
  v7 = *((_QWORD *)v37 + 16);
  v8 = v7 + 32;
  RtlAcquireSRWLockShared(v7 + 32);
  v9 = 0LL;
  v47 = v3;
  v10 = -1LL;
  v11 = *(_DWORD *)(v7 + 20);
  v12 = -1LL << (*(_BYTE *)(v7 + 20) & 0x1F);
  v13 = v12 & (HIBYTE(v3)
             + 37
             * (BYTE6(v3)
              + 37
              * ((unsigned __int8)v40
               + 37
               * ((unsigned __int8)v43
                + 37
                * ((unsigned __int8)v42
                 + 37 * ((unsigned __int8)v41 + 37 * (BYTE1(v3) + 37 * ((unsigned __int8)v3 + 11623883LL))))))));
LABEL_10:
  if ( v9 )
    goto LABEL_13;
  if ( v11 >> 5 )
  {
    v9 = *(_QWORD *)(v7 + 24)
       + 8LL
       * ((37
         * (BYTE6(v13)
          + 37
          * (BYTE5(v13)
           + 37
           * (BYTE4(v13)
            + 37 * (BYTE3(v13) + 37 * (BYTE2(v13) + 37 * (BYTE1(v13) + 37 * ((unsigned __int8)v13 + 11623883)))))))
         + HIBYTE(v13)) & ((v11 >> 5) - 1));
LABEL_13:
    while ( 1 )
    {
      v9 = *(_QWORD *)v9;
      if ( (v9 & 1) != 0 )
        break;
      if ( v13 == (v12 & *(_QWORD *)(v9 + 8)) )
      {
        if ( v3 != *(_QWORD *)(v9 + 32) )
          goto LABEL_10;
        if ( _InterlockedIncrement64((volatile signed __int64 *)(v9 + 16)) <= 1 )
          __fastfail(0xEu);
        v14 = (char *)v9;
        P = (PVOID)v9;
        RtlReleaseSRWLockShared(v8);
        if ( (v14[852] & 1) != 0 )
        {
          v4 = v14 + 64;
          if ( *((int *)v14 + 6) >= 0 )
            ++*((_QWORD *)v14 + 83);
          dword_1800DD4E8 = 0;
          RtlReleaseSRWLockExclusive(&RmpGlobalLock);
          if ( HampLockTrackerId != -1 )
          {
            v15 = (__int64 *)TlsGetValue(HampLockTrackerId);
            v16 = *v15;
            if ( (*v15 & 1) == 0 )
              __int2c();
            v17 = v15[1]-- == 1;
            if ( v17 )
              *v15 = v16 & 0xFFFFFFFFFFFFFFFEuLL;
          }
          HampHostCheckNotifyZeroProcess((struct _RM_HAM_ACTIVITY_HOST *)(v14 + 64));
          v18 = HampLockTrackerId;
          if ( HampLockTrackerId != -1 )
          {
            v19 = TlsGetValue(HampLockTrackerId);
            if ( *(_QWORD *)TlsGetValue(v18) )
              __int2c();
            *v19 |= 1uLL;
            ++v19[1];
            v14 = (char *)P;
          }
          RtlAcquireSRWLockExclusive(&RmpGlobalLock);
          dword_1800DD4E8 = GetCurrentThreadId();
        }
        RmpActivityHostZeroProcessNotification(v14);
        goto LABEL_31;
      }
    }
  }
  RtlReleaseSRWLockShared(v7 + 32);
LABEL_31:
  v20 = (__int64 *)((char *)v37 + 168);
  v21 = *((_QWORD *)v37 + 23);
  if ( !v21 )
    goto LABEL_36;
  v22 = (unsigned __int8 *)a2 + 464;
  v23 = (WCHAR *)a2;
  v24 = 314159LL;
  if ( a2 < (struct _RM_PSM_HOST_INFO *)((char *)a2 + 464) )
  {
    do
    {
      v25 = *v23++;
      v36 = RtlUpcaseUnicodeChar(v25);
      v24 = HIBYTE(v36) + 37 * ((unsigned __int8)v36 + 37 * v24);
    }
    while ( v23 < (WCHAR *)v22 );
    v20 = (__int64 *)((char *)v37 + 168);
    v21 = *((_QWORD *)v37 + 23);
  }
  v26 = 0xBB24DD21FAFC26B1uLL * v22[67]
      + 0xF5BCA5B282606D41uLL * v22[39]
      + 0x423D249C25A50325LL * v22[22]
      + 0xFC7A30A306398A8DuLL * v22[48]
      + 0x51C644DB3653E381LL * v22[55]
      + 0x8BA4A57B9C3D7391uLL * v22[59]
      + 0x3C82EBCCD629C471LL * v22[51]
      + 0x8DBD43762DDB26BDuLL * v22[44]
      + 0x78803D01F0C17231LL * v22[35]
      + 0xB2261F79558AB0C1uLL * v22[7]
      + 0x407AFAF12AFB592DLL * v22[56]
      + 0x14D2E4F3AFFE229LL * (v22[41] + 37LL * v22[40])
      + 37
      * (v22[86]
       + 37
       * (v22[85]
        + 37
        * (v22[84]
         + 37
         * (v22[83]
          + 37
          * (v22[82]
           + 37
           * (v22[81]
            + 37 * (v22[80] + 37 * (v22[79] + 37 * (v22[78] + 37 * (v22[77] + 37 * (v22[76] + 37LL * v22[75])))))))))));
  v27 = 0x7DA9078FE6510661LL * v22[47]
      + 0x69976B75BF3AA789LL * v22[1]
      + 0x296E17CC49B5EC05LL * v22[46]
      + 0x2F2665556EEF39E1LL * v22[15]
      + 0x16EA6DB39BB240F9LL * v22[61]
      + 0xD08CA55908935D85uLL * v22[14]
      + 0x5526FE2C4673CF11LL * v22[27]
      + 0x21218A9292BF1B9DLL * v22[4]
      + 0x1CF3332BD290D80DLL * v22[16]
      + 0x981EFA65455B8049uLL * v22[49]
      + 0xC53F5E946719795LL * v22[66]
      + 0xADDE4FDA72AB3819uLL * v22[5]
      + 0xF91DC2FB38F228B5uLL * v22[42]
      + 0x3BF4C3C47ADF2FF1LL * v22[19]
      + 0x40B7CD9739B584A1LL * v22[63]
      + 0xDC6C00E405D269C1uLL * v22[71]
      + 0x2C5E09D2BFFAAA95LL * v22[2]
      + 0x4EA2BC662EBCED75LL * v22[26]
      + 0x4F5D696EC151561DLL * v22[36]
      + 0x9FEAE5B513875FC9uLL * v22[17]
      + 0xC378F206849F0269uLL * v22[57]
      + 0xFCE97086A74B1CB9uLL * v22[45]
      + 0x73D058131B2A8879LL * v22[29]
      + 0x4020391EDC0F1C3DLL * v22[12]
      + 0xBEEC149AF4096455uLL * v22[50]
      + v26;
  v28 = 0x288D4C21D6A4D26DLL * v22[72]
      + 0xBFA02A5D39A9CD6DuLL * v22[8]
      + 0x27C60EFB99C651A9LL * v22[9]
      + 0x2ECBEADD94E1B3F5LL * v22[58]
      + 0xDB9C20F4D76948E5uLL * v22[70]
      + 0xBF828C895D0B8BE5uLL * v22[6]
      + 0x1D77462DBBD40701LL * v22[23]
      + 0xB5A728F1B3DF494DuLL * v22[32]
      + 0x8443F2CCD7EFCA65uLL * v22[38]
      + 0x8B7970C2A4EFB2A9uLL * v22[73]
      + 0x4D463845869B9CD9LL * v22[53]
      + 0x6A88D147CBF58115LL * v22[34]
      + 0x4FE1DAF580C363FDLL * v22[60]
      + 0x5D853AC4C14E51E9LL * v22[25]
      + 0x2453E5DE3D4C8439LL * v22[13]
      + 0x65EC3D53F206D09DLL * v22[68]
      + 0x1DD2179B35A84099LL * v22[37]
      + 0xC8228AB72E6AE889uLL * v22[65]
      + 0x7C5AC014A0AC9951LL * v22[43]
      + 0xC9D9072F359EFDB1uLL * v22[3]
      + 0x6AE9F48AE50EFCC5LL * v22[30]
      + 0x65C63F607A7BA809LL * v22[33]
      + 0x3433B6F080FF8F35LL * v22[74]
      + 0x5A90B6DB573C2B45LL * v22[62]
      + 0xD1A7F3AEDA1FE1A5uLL * v22[54]
      + v27;
  v29 = *((unsigned __int8 *)v20 + 32);
  v30 = 0xAABDA8ABA0A9EBA1uLL * v24
      + 0x42E28804A37A36CDLL * *v22
      + v22[87]
      + 0x4128EAEEFF459821LL * v22[31]
      + 0xECFE0C79B5739BCDuLL * v22[64]
      + 0xAA604B65C241EDD5uLL * v22[18]
      + 0xBD1CBAC2ED25B97DuLL * v22[28]
      + 0xEC517606CCCE0235uLL * v22[10]
      + 0xBD90C36322378919uLL * v22[69]
      + 0x2B26220C747DAB5DLL * v22[52]
      + 0x92D64A9170D97459uLL * v22[21]
      + 0x84417E6FF051D6ADuLL * v22[24]
      + 0x44A84175CE2F14D1LL * v22[11]
      + 0x38F8C7054F6DD0DDLL * v22[20]
      + v28;
  v40 = v30;
  v31 = *(__int64 **)(v21 + 16 * (v30 & ((8LL << v29) - 1)));
  if ( !v31 || (v35 = **(__int64 ***)(v21 + 16 * (v30 & ((8LL << v29) - 1)) + 8), v31 == v35) )
  {
LABEL_36:
    v31 = v20;
    goto LABEL_37;
  }
  while ( v31[2] < v30 )
  {
LABEL_61:
    v31 = (__int64 *)*v31;
    if ( v31 == v35 )
      goto LABEL_62;
  }
  if ( v31[2] > v30 )
  {
LABEL_62:
    v20 = (__int64 *)((char *)v37 + 168);
    goto LABEL_36;
  }
  if ( !(unsigned __int8)utl::equal_to<_RM_PSM_HOST_INFO>::operator()(v29, a2, v31 + 3) )
  {
    v30 = v40;
    goto LABEL_61;
  }
  v20 = (__int64 *)((char *)v37 + 168);
LABEL_37:
  if ( v31 != v20 )
  {
    NtDeleteWnfStateName(v31 + 72);
    NtDeleteWnfStateName(v31 + 73);
    utl::_HashTable<_RM_PSM_HOST_INFO,utl::pair<_RM_PSM_HOST_INFO const,ExecutionModel::ResourceManager::CommitMemoryWnfStates>,utl::hash<_RM_PSM_HOST_INFO>,utl::equal_to<_RM_PSM_HOST_INFO>,utl::allocator<utl::pair<_RM_PSM_HOST_INFO const,ExecutionModel::ResourceManager::CommitMemoryWnfStates>>,0>::erase(
      (__int64)v37 + 168,
      &v48,
      v31,
      (__int64 *)*v31);
  }
  dword_1800DD4E8 = 0;
  RtlReleaseSRWLockExclusive(&RmpGlobalLock);
  if ( HampLockTrackerId != -1 )
  {
    v32 = (__int64 *)TlsGetValue(HampLockTrackerId);
    v33 = *v32;
    if ( (*v32 & 1) == 0 )
      __int2c();
    v17 = v32[1]-- == 1;
    if ( v17 )
      *v32 = v33 & 0xFFFFFFFFFFFFFFFEuLL;
  }
  if ( P )
    RmpObjectRelease(P);
  if ( v4 )
  {
    RmpAcquireGlobalLock();
    v17 = (*((_QWORD *)v4 + 75))-- == 1LL;
    if ( v17 )
      RmpActivityHostCheckQueueDelete((struct _RM_ACTIVITY_HOST *)(v4 - 64));
    RmpReleaseGlobalLock();
  }
  if ( (unsigned int)dword_1800DC1E0 > 4 && (byte_1800DC1F0 & 9) != 0 && (qword_1800DC1F8 & 9) == qword_1800DC1F8 )
  {
    v38 = *((_DWORD *)a2 + 133);
    LODWORD(v37) = *((_DWORD *)a2 + 134);
    v64 = (__int64 *)&v44;
    v62 = &v38;
    v60 = &v37;
    v44 = v3;
    v65 = 8LL;
    v63 = 4LL;
    v61 = 4LL;
    if ( a2 )
    {
      do
        v17 = *((_WORD *)a2 + ++v10) == 0;
      while ( !v17 );
      v34 = 2 * v10 + 2;
    }
    else
    {
      a2 = (struct _RM_PSM_HOST_INFO *)&word_1800B7A9C;
      v34 = 2;
    }
    v58 = v34;
    *(_DWORD *)&v46.Level = 516;
    v53.Ptr = (ULONGLONG)off_1800DC1E8;
    v57 = a2;
    v59 = 0;
    *(_DWORD *)&v46.Id = 184549376;
    v46.Keyword = 9LL;
    v53.Size = *(unsigned __int16 *)off_1800DC1E8;
    v54 = &unk_1800C23FE;
    v53.Reserved = 2;
    v55 = 73;
    v56 = 1;
    EventWriteTransfer(RegHandle, &v46, 0LL, 0LL, 6u, &v53);
  }
}
