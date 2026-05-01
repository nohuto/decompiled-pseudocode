/*
 * XREFs of ?ReleaseResourcesInternal@ResourceSet@ExecutionModel@@UEAAJK@Z @ 0x18001F950
 * Callers:
 *     <none>
 * Callees:
 *     ?HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180016A20 (-HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpPolicyDigestMerge@@YA?AT_RM_POLICY_DIGEST@@T1@0@Z @ 0x18001AC10 (-RmpPolicyDigestMerge@@YA-AT_RM_POLICY_DIGEST@@T1@0@Z.c)
 *     ?RmpActivityHostUpdateImportance@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x18001AD00 (-RmpActivityHostUpdateImportance@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpActivityHostCanDelete@@YAKPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18001CAB0 (-RmpActivityHostCanDelete@@YAKPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpPolicyDigestCompute@@YA?AT_RM_POLICY_DIGEST@@PEAVResourceSet@ExecutionModel@@@Z @ 0x180020490 (-RmpPolicyDigestCompute@@YA-AT_RM_POLICY_DIGEST@@PEAVResourceSet@ExecutionModel@@@Z.c)
 *     ?HostApplyExternalResourcePriorities@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180020554 (-HostApplyExternalResourcePriorities@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_ACTIVITY_HOST@.c)
 *     ?RmpActivityHostIsRevocable@@YAKPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180020680 (-RmpActivityHostIsRevocable@@YAKPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?PerformReleaseResources@ResourceSet@ExecutionModel@@QEAAXXZ @ 0x180020840 (-PerformReleaseResources@ResourceSet@ExecutionModel@@QEAAXXZ.c)
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x1800248A0 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     CempPackageFamilyNameFromPsmKey @ 0x180025F60 (CempPackageFamilyNameFromPsmKey.c)
 *     ?RmpActivityHostIsPple@@YAEPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180028348 (-RmpActivityHostIsPple@@YAEPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpPsmAppFamilyIdInitialize@@YAXPEBGPEAT_RM_SID@@KPEAU_RM_PSM_APP_FAMILY_ID@@@Z @ 0x180029200 (-RmpPsmAppFamilyIdInitialize@@YAXPEBGPEAT_RM_SID@@KPEAU_RM_PSM_APP_FAMILY_ID@@@Z.c)
 *     ?RmpActivityHostComputeDigestForCategory@@YA?AT_RM_POLICY_DIGEST@@PEAU_RM_ACTIVITY_HOST@@W4_RM_RESOURCE_SET_CATEGORY@@@Z @ 0x18002948C (-RmpActivityHostComputeDigestForCategory@@YA-AT_RM_POLICY_DIGEST@@PEAU_RM_ACTIVITY_HOST@@W4_RM_R.c)
 *     ?RmpActivityHostComputeAndApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180029970 (-RmpActivityHostComputeAndApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpPsmAppFamilyCompareForHashTable@@YAKPEAU_RTL_HASH_ENTRY@@PEAX@Z @ 0x18003ADA8 (-RmpPsmAppFamilyCompareForHashTable@@YAKPEAU_RTL_HASH_ENTRY@@PEAX@Z.c)
 *     ?RmpActivityHostGetResourceSetCount@@YAKPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x18003DFDC (-RmpActivityHostGetResourceSetCount@@YAKPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 *     __security_check_cookie @ 0x18004E310 (__security_check_cookie.c)
 *     ?RmpActivityHostHasPpleResourceSet@@YAEPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18008716C (-RmpActivityHostHasPpleResourceSet@@YAEPEAU_RM_ACTIVITY_HOST@@@Z.c)
 */

__int64 __fastcall ExecutionModel::ResourceSet::ReleaseResourcesInternal(ExecutionModel::ResourceSet *this, char a2)
{
  __int64 v2; // rsi
  int v4; // edi
  __int16 v5; // r12
  __int64 v6; // r11
  unsigned int v7; // r13d
  __int16 v8; // bx
  int v9; // r15d
  __int64 v10; // r11
  __int16 v11; // ax
  __int64 v12; // r8
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rax
  __int16 v16; // bx
  __int64 v17; // rax
  __int64 v18; // rcx
  int v19; // eax
  ExecutionModel::ResourceManager *v20; // rdi
  DWORD v21; // r14d
  _QWORD *Value; // rdi
  __int64 *v23; // rax
  __int64 v24; // rcx
  __int64 v27; // r15
  WCHAR *v28; // rbx
  __int64 v29; // rdi
  WCHAR v30; // cx
  __int64 v31; // rdx
  unsigned __int64 v32; // r14
  __int64 v33; // rbx
  unsigned __int64 v34; // r14
  __int64 v35; // r10
  unsigned __int64 v36; // r9
  struct _RM_ACTIVITY_HOST *v37; // rbx
  WCHAR v38; // [rsp+20h] [rbp-E0h]
  unsigned int v39; // [rsp+20h] [rbp-E0h]
  ExecutionModel::ResourceManager *v40; // [rsp+28h] [rbp-D8h]
  __int64 v41; // [rsp+30h] [rbp-D0h]
  _BYTE v42[464]; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v43[80]; // [rsp+210h] [rbp+110h] BYREF
  unsigned __int16 v44[232]; // [rsp+260h] [rbp+160h] BYREF

  v2 = *((_QWORD *)this + 165);
  if ( _InterlockedIncrement64((volatile signed __int64 *)(v2 + 16)) <= 1 )
    __fastfail(0xEu);
  if ( *((_DWORD *)this + 320) )
  {
    v4 = 2;
    if ( (a2 & 2) != 0
      && *((_BYTE *)this + 12)
      && RmpActivityHostGetResourceSetCount((struct _RM_ACTIVITY_HOST *)v2, 2u) < 2 )
    {
      v7 = -2147220221;
    }
    else
    {
      if ( *((_BYTE *)this + 12) )
      {
        ExecutionModel::ResourceSet::PerformReleaseResources(this);
        v5 = *(_WORD *)(v2 + 1178);
        v6 = *(_QWORD *)(v2 + 1152);
        v7 = 0;
        v8 = 102;
        v9 = 2;
        if ( v6 != v2 + 1152 )
        {
          v10 = v6 - 1296;
          while ( v10 )
          {
            if ( *(_DWORD *)(v10 + 1280) == 2 || (*(_BYTE *)(v10 + 1332) & 4) != 0 )
            {
              v11 = RmpPolicyDigestCompute(v10);
              v8 = RmpPolicyDigestMerge(v8, v11);
            }
            v12 = *(_QWORD *)(v10 + 1296);
            v13 = 3 * (*(int *)(v10 + 1328) + 47LL);
            v14 = *(_QWORD *)(v10 + 1320);
            v10 = 0LL;
            if ( v12 != v14 + 8 * v13 )
              v10 = v12 - 1296;
          }
        }
        *(_WORD *)(v2 + 1178) = v8;
        v15 = *(_QWORD *)(v2 + 56);
        v16 = v8 & 0x80;
        if ( (v5 & 0x80) != 0 )
        {
          if ( !v16 )
            --*(_DWORD *)(v15 + 212);
        }
        else if ( v16 )
        {
          ++*(_DWORD *)(v15 + 212);
        }
      }
      else
      {
        ExecutionModel::ResourceSet::PerformReleaseResources(this);
        v7 = 0;
        *(_WORD *)(v2 + 1176) = RmpActivityHostComputeDigestForCategory(v2, 0LL);
        v4 = 0;
        v9 = 1;
      }
      RmpActivityHostUpdateImportance((struct _RM_ACTIVITY_HOST *)v2, v9);
      QueryUnbiasedInterruptTime((PULONGLONG)(v2 + 1472));
      if ( RmpActivityHostIsRevocable((struct _RM_ACTIVITY_HOST *)v2) )
        SetEvent(*(HANDLE *)(*(_QWORD *)(v2 + 56) + 88LL));
      if ( v4 )
      {
        v17 = *(_QWORD *)(v2 + 48);
        *(_QWORD *)(v2 + 1224) = 0LL;
        v18 = *(_QWORD *)(v17 + 3232);
        v19 = *(_DWORD *)(v18 + 160);
        if ( (v19 & 3) == 0 )
        {
          *(_DWORD *)(v18 + 160) = v19 | 1;
          TpPostWork(*(_QWORD *)(v18 + 144));
        }
      }
      if ( v9 == 2 )
      {
        if ( (*(_BYTE *)(v2 + 852) & 1) == 0 )
          RmpActivityHostComputeAndApplyEnforcementSettings((PVOID)v2);
        v20 = (ExecutionModel::ResourceManager *)*((_QWORD *)this + 3);
        v40 = v20;
        ExecutionModel::ResourceManager::HostApplyExternalResourcePriorities(v20, (struct _RM_ACTIVITY_HOST *)v2);
        if ( *(_DWORD *)(v2 + 624) == 2 && !RmpActivityHostIsPple((struct _RM_ACTIVITY_HOST *)v2) )
        {
          v27 = *(_QWORD *)(v2 + 48);
          v41 = v27;
          if ( (int)CempPackageFamilyNameFromPsmKey(v2 + 88, v44) >= 0 )
          {
            RmpPsmAppFamilyIdInitialize(
              v44,
              (union _RM_SID *)(v2 + 552),
              *(_DWORD *)(v2 + 620),
              (struct _RM_PSM_APP_FAMILY_ID *)v42);
            v28 = (WCHAR *)v42;
            v29 = 314159LL;
            do
            {
              v30 = *v28++;
              v38 = RtlUpcaseUnicodeChar(v30);
              v29 = HIBYTE(v38) + 37 * ((unsigned __int8)v38 + 37 * v29);
            }
            while ( v28 < (WCHAR *)v43 );
            v31 = v43[69]
                + 37
                * (v43[68]
                 + 37
                 * (v43[67]
                  + 37
                  * (v43[66]
                   + 37
                   * (v43[65]
                    + 37
                    * (v43[64] + 37 * (v43[63] + 37 * (v43[62] + 37 * (v43[61] + 37 * (v43[60] + 37LL * v43[59])))))))));
            v32 = 0x4EA2BC662EBCED75LL * v43[10]
                + 0x4F5D696EC151561DLL * v43[20]
                + 0x9FEAE5B513875FC9uLL * v43[1]
                + 0xFCE97086A74B1CB9uLL * v43[29]
                + 0xC378F206849F0269uLL * v43[41]
                + 0xFC7A30A306398A8DuLL * v43[32]
                + 0x51C644DB3653E381LL * v43[39]
                + 0x73D058131B2A8879LL * v43[13]
                + 0x8BA4A57B9C3D7391uLL * v43[43]
                + 0xBB24DD21FAFC26B1uLL * v43[51]
                + 0xBEEC149AF4096455uLL * v43[34]
                + 0x3C82EBCCD629C471LL * v43[35]
                + 0x1CF3332BD290D80DLL * v43[0]
                + 0x8DBD43762DDB26BDuLL * v43[28]
                + 0x78803D01F0C17231LL * v43[19]
                + 0xF5BCA5B282606D41uLL * v43[23]
                + 0x423D249C25A50325LL * v43[6]
                + 0x407AFAF12AFB592DLL * v43[40]
                + 0x4128EAEEFF459821LL * v43[15]
                + 0xECFE0C79B5739BCDuLL * v43[48]
                + 0xAA604B65C241EDD5uLL * v43[2]
                + 0xBD1CBAC2ED25B97DuLL * v43[12]
                + 0xBD90C36322378919uLL * v43[53]
                + 0x2B26220C747DAB5DLL * v43[36]
                + 0x288D4C21D6A4D26DLL * v43[56]
                + 0x2ECBEADD94E1B3F5LL * v43[42]
                + 0xDB9C20F4D76948E5uLL * v43[54]
                + 0x84417E6FF051D6ADuLL * v43[8]
                + 0x92D64A9170D97459uLL * v43[5]
                + 0x1D77462DBBD40701LL * v43[7]
                + 0xB5A728F1B3DF494DuLL * v43[16]
                + 0x38F8C7054F6DD0DDLL * v43[4]
                + 0x8443F2CCD7EFCA65uLL * v43[22]
                + 0x6A88D147CBF58115LL * v43[18]
                + 0x4FE1DAF580C363FDLL * v43[44]
                + 0x8B7970C2A4EFB2A9uLL * v43[57]
                + 0x4D463845869B9CD9LL * v43[37]
                + 0x5D853AC4C14E51E9LL * v43[9]
                + 0x65EC3D53F206D09DLL * v43[52]
                + 0x14D2E4F3AFFE229LL * (v43[25] + 37LL * v43[24])
                + 37 * (v43[70] + 37 * v31);
            v33 = 0LL;
            v34 = v43[71]
                + 0x2F2665556EEF39E1LL * v29
                + 0x1DD2179B35A84099LL * v43[21]
                + 0xC8228AB72E6AE889uLL * v43[49]
                + 0x7C5AC014A0AC9951LL * v43[27]
                + 0x6AE9F48AE50EFCC5LL * v43[14]
                + 0x65C63F607A7BA809LL * v43[17]
                + 0x3433B6F080FF8F35LL * v43[58]
                + 0x5A90B6DB573C2B45LL * v43[46]
                + 0xD1A7F3AEDA1FE1A5uLL * v43[38]
                + 0x7DA9078FE6510661LL * v43[31]
                + 0x296E17CC49B5EC05LL * v43[30]
                + 0x981EFA65455B8049uLL * v43[33]
                + 0xC53F5E946719795LL * v43[50]
                + 0x16EA6DB39BB240F9LL * v43[45]
                + 0x5526FE2C4673CF11LL * v43[11]
                + 0xF91DC2FB38F228B5uLL * v43[26]
                + 0x3BF4C3C47ADF2FF1LL * v43[3]
                + 0x40B7CD9739B584A1LL * v43[47]
                + 0xDC6C00E405D269C1uLL * v43[55]
                + v32;
LABEL_42:
            v39 = *(_DWORD *)(v27 + 3060);
            v35 = -1LL << (v39 & 0x1F);
            v36 = v34 & v35;
            if ( v33 )
            {
              v27 = v41;
              goto LABEL_44;
            }
            if ( v39 >> 5 )
            {
              v27 = v41;
              v33 = *(_QWORD *)(v41 + 3064)
                  + 8
                  * ((((v34 & v35) >> 56)
                    + 37
                    * ((unsigned __int8)((v34 & v35) >> 48)
                     + 37
                     * ((unsigned __int8)((unsigned __int16)((v34 & v35) >> 32) >> 8)
                      + 37
                      * ((unsigned __int8)((v34 & v35) >> 32)
                       + 37
                       * ((((unsigned int)v34 & (unsigned int)v35) >> 24)
                        + 37
                        * ((unsigned __int8)(((unsigned int)v34 & (unsigned int)v35) >> 16)
                         + 37
                         * ((unsigned __int8)((unsigned __int16)(v34 & v35) >> 8)
                          + 37 * ((unsigned __int8)v36 + 11623883)))))))) & ((v39 >> 5) - 1));
LABEL_44:
              while ( 1 )
              {
                v33 = *(_QWORD *)v33;
                if ( (v33 & 1) != 0 )
                  break;
                if ( v36 == (v35 & *(_QWORD *)(v33 + 8)) )
                {
                  if ( !RmpPsmAppFamilyCompareForHashTable((struct _RTL_HASH_ENTRY *)v33, v42) )
                    goto LABEL_42;
                  v20 = v40;
                  if ( !v33 )
                    goto LABEL_55;
                  goto LABEL_48;
                }
              }
            }
            v20 = v40;
          }
LABEL_55:
          v33 = 0LL;
LABEL_48:
          v37 = *(struct _RM_ACTIVITY_HOST **)(v33 + 568);
          if ( v37 && RmpActivityHostHasPpleResourceSet(v37) )
            ExecutionModel::ResourceManager::HostApplyExternalResourcePriorities(v20, v37);
        }
      }
      v21 = HampLockTrackerId;
      if ( HampLockTrackerId != -1 )
      {
        Value = TlsGetValue(HampLockTrackerId);
        if ( (*(_QWORD *)TlsGetValue(v21) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
          __int2c();
        *Value |= 2uLL;
        ++Value[2];
      }
      RtlAcquireSRWLockExclusive(v2 + 64);
      *(_DWORD *)(v2 + 72) = GetCurrentThreadId();
      if ( RmpActivityHostCanDelete((struct _RM_ACTIVITY_HOST *)v2) )
        HampHostCheckQueueStateWorker((struct _RM_HAM_ACTIVITY_HOST *)(v2 + 64), 1);
      if ( HampLockTrackerId != -1 )
      {
        v23 = (__int64 *)TlsGetValue(HampLockTrackerId);
        v24 = *v23;
        if ( (*v23 & 2) == 0 )
          __int2c();
        if ( v23[2]-- == 1 )
          *v23 = v24 & 0xFFFFFFFFFFFFFFFDuLL;
      }
      *(_DWORD *)(v2 + 72) = 0;
      RtlReleaseSRWLockExclusive(v2 + 64);
    }
  }
  else
  {
    v7 = 0;
  }
  RmpObjectRelease((PVOID)v2);
  return v7;
}
