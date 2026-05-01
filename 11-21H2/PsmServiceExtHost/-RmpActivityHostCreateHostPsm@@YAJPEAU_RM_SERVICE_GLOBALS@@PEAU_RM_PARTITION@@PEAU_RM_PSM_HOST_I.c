/*
 * XREFs of ?RmpActivityHostCreateHostPsm@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PARTITION@@PEAU_RM_PSM_HOST_INFO@@KPEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180024F40
 * Callers:
 *     ?AcquireResourceSet@ResourceManager@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEAU_RM_PARTITION@@PEAXPEAUIResourceSetCallback@2@2PEBGPEAT_RM_SID@@KK_KKW4_HOST_GROUP@@PEAU_RM_ACTIVATOR@@PEA_N6PEAPEAVResourceSet@2@@Z @ 0x18001D9C0 (-AcquireResourceSet@ResourceManager@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEAU_RM_PARTITIO.c)
 *     ?RmHamFindOrCreateActivityHost@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_HOST_INFO@@PEAU_HAM_APPLICATION@@PEAU_RM_PARTITION@@KW4_HOST_GROUP@@PEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180024984 (-RmHamFindOrCreateActivityHost@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_HOST_INFO@@PEAU_HAM_APPL.c)
 * Callees:
 *     ?RmpActivityHostCleanupCommonState@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000B1D0 (-RmpActivityHostCleanupCommonState@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     CempPackageFamilyNameFromPsmKey @ 0x180025F60 (CempPackageFamilyNameFromPsmKey.c)
 *     ?RmpActivityHostAddToTables@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800260A0 (-RmpActivityHostAddToTables@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpPsmAppFamilyAddActivityHost@@YAJPEAU_RM_PSM_APP_FAMILY@@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x180026D38 (-RmpPsmAppFamilyAddActivityHost@@YAJPEAU_RM_PSM_APP_FAMILY@@PEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpActivityHostAllocateAndInitialize@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PARTITION@@PEAU_RM_PSM_HOST_INFO@@KPEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180026E70 (-RmpActivityHostAllocateAndInitialize@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PARTITION@@PEAU_RM_PS.c)
 *     ?RmpPsmAppFamilyTableAdd@@YAXPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_APP_FAMILY@@@Z @ 0x180028044 (-RmpPsmAppFamilyTableAdd@@YAXPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_APP_FAMILY@@@Z.c)
 *     ?RmpPsmAppFamilyTableTryRemoveActivityHost@@YAJPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18002CA0C (-RmpPsmAppFamilyTableTryRemoveActivityHost@@YAJPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpPsmAppFamilyCompareForHashTable@@YAKPEAU_RTL_HASH_ENTRY@@PEAX@Z @ 0x18003ADA8 (-RmpPsmAppFamilyCompareForHashTable@@YAKPEAU_RTL_HASH_ENTRY@@PEAX@Z.c)
 *     __security_check_cookie @ 0x18004E310 (__security_check_cookie.c)
 *     memset_0 @ 0x18005023A (memset_0.c)
 *     ?RmpPsmAppFamilyTableCheckDelete@@YAXPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_APP_FAMILY@@@Z @ 0x18008F330 (-RmpPsmAppFamilyTableCheckDelete@@YAXPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_APP_FAMILY@@@Z.c)
 */

__int64 __fastcall RmpActivityHostCreateHostPsm(
        struct _RM_SERVICE_GLOBALS *a1,
        struct _RM_PARTITION *a2,
        struct _RM_PSM_HOST_INFO *a3,
        unsigned int a4,
        struct _RM_ACTIVITY_HOST **a5)
{
  struct _RM_SERVICE_GLOBALS *v5; // r15
  __int64 v6; // r14
  __int64 result; // rax
  int v9; // ebx
  __int64 v10; // rdx
  _WORD *v11; // rcx
  __int16 v12; // ax
  __int128 v13; // xmm0
  int v14; // eax
  __int64 v15; // rsi
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  WCHAR *v18; // rbx
  __int128 v19; // xmm1
  __int64 v20; // rdi
  WCHAR v21; // cx
  unsigned __int64 v22; // rdx
  unsigned __int64 v23; // rdx
  unsigned int v24; // r13d
  __int64 v25; // r10
  unsigned __int64 v26; // r9
  unsigned __int64 v27; // r11
  unsigned __int64 v28; // r8
  unsigned __int64 v29; // rbx
  unsigned __int64 v30; // rdi
  unsigned __int64 v31; // r15
  unsigned __int64 v32; // r12
  unsigned __int64 v33; // rdx
  unsigned int v34; // eax
  PVOID Heap; // rax
  WCHAR *v36; // rbx
  __int64 v37; // rdx
  __int64 v38; // rcx
  _BYTE *v39; // rax
  __int128 v40; // xmm0
  unsigned __int8 *v41; // rdi
  WCHAR v42; // cx
  unsigned __int64 v43; // r10
  unsigned __int64 v44; // r10
  struct _RM_SERVICE_GLOBALS *v45; // rcx
  int v46; // eax
  PVOID v47; // rbx
  int v48; // edi
  struct _RM_PSM_APP_FAMILY *v49; // rcx
  struct _RM_ACTIVITY_HOST *v50; // rbx
  unsigned int v51; // r13d
  int v52; // eax
  WCHAR v53; // [rsp+30h] [rbp-D0h]
  WCHAR v54; // [rsp+34h] [rbp-CCh]
  PVOID P; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v56; // [rsp+40h] [rbp-C0h]
  struct _RM_SERVICE_GLOBALS *v57; // [rsp+48h] [rbp-B8h]
  unsigned __int64 v58; // [rsp+50h] [rbp-B0h]
  struct _RM_PSM_HOST_INFO *v59; // [rsp+58h] [rbp-A8h]
  struct _RM_PARTITION *v60; // [rsp+60h] [rbp-A0h]
  struct _RM_ACTIVITY_HOST **v61; // [rsp+68h] [rbp-98h]
  _BYTE v62[464]; // [rsp+70h] [rbp-90h] BYREF
  __int128 v63; // [rsp+240h] [rbp+140h] BYREF
  __int128 v64; // [rsp+250h] [rbp+150h]
  __int128 v65; // [rsp+260h] [rbp+160h]
  __int128 v66; // [rsp+270h] [rbp+170h]
  int v67; // [rsp+280h] [rbp+180h]
  int v68; // [rsp+284h] [rbp+184h]
  _BYTE v69[464]; // [rsp+290h] [rbp+190h] BYREF

  v5 = a1;
  v60 = a2;
  v6 = 0LL;
  v57 = a1;
  v61 = a5;
  P = 0LL;
  v56 = a4;
  v59 = a3;
  result = CempPackageFamilyNameFromPsmKey(a3, v69);
  if ( (int)result >= 0 )
  {
    v9 = *((_DWORD *)a3 + 133);
    memset_0(v62, 0, 0x218uLL);
    v10 = 232LL;
    v11 = v62;
    while ( v10 != -2147483414 )
    {
      v12 = *(_WORD *)((char *)v11 + v69 - v62);
      if ( !v12 )
        break;
      *v11++ = v12;
      if ( !--v10 )
      {
        --v11;
        break;
      }
    }
    v13 = *((_OWORD *)a3 + 29);
    v14 = *((_DWORD *)a3 + 132);
    v15 = 314159LL;
    v16 = *((_OWORD *)a3 + 30);
    *v11 = 0;
    v63 = v13;
    v17 = *((_OWORD *)a3 + 31);
    v68 = v9;
    v18 = (WCHAR *)v62;
    v64 = v16;
    v19 = *((_OWORD *)a3 + 32);
    v20 = 314159LL;
    v67 = v14;
    v65 = v17;
    v66 = v19;
    do
    {
      v21 = *v18++;
      v53 = RtlUpcaseUnicodeChar(v21);
      v20 = HIBYTE(v53) + 37 * ((unsigned __int8)v53 + 37 * v20);
    }
    while ( v18 < (WCHAR *)&v63 );
    v22 = 0xBD1CBAC2ED25B97DuLL * BYTE12(v63)
        + 0xBD90C36322378919uLL * BYTE5(v66)
        + 0x2B26220C747DAB5DLL * BYTE4(v65)
        + 0xDB9C20F4D76948E5uLL * BYTE6(v66)
        + 0x84417E6FF051D6ADuLL * BYTE8(v63)
        + 0x92D64A9170D97459uLL * BYTE5(v63)
        + 0x1D77462DBBD40701LL * BYTE7(v63)
        + 0xB5A728F1B3DF494DuLL * (unsigned __int8)v64
        + 0x288D4C21D6A4D26DLL * BYTE8(v66)
        + 0x38F8C7054F6DD0DDLL * BYTE4(v63)
        + 0x8443F2CCD7EFCA65uLL * BYTE6(v64)
        + 0x2ECBEADD94E1B3F5LL * BYTE10(v65)
        + 0x8B7970C2A4EFB2A9uLL * BYTE9(v66)
        + 0x4D463845869B9CD9LL * BYTE5(v65)
        + 0x6A88D147CBF58115LL * BYTE2(v64)
        + 0x1CF3332BD290D80DLL * (unsigned __int8)v63
        + 0x5D853AC4C14E51E9LL * BYTE9(v63)
        + 0x65EC3D53F206D09DLL * BYTE4(v66)
        + 0x4FE1DAF580C363FDLL * BYTE12(v65)
        + 0x1DD2179B35A84099LL * BYTE5(v64)
        + 0xC8228AB72E6AE889uLL * BYTE1(v66)
        + 0x7C5AC014A0AC9951LL * BYTE11(v64)
        + 0x6AE9F48AE50EFCC5LL * BYTE14(v63)
        + 0x65C63F607A7BA809LL * BYTE1(v64)
        + 0x3433B6F080FF8F35LL * BYTE10(v66)
        + 0x5A90B6DB573C2B45LL * BYTE14(v65)
        + 0xD1A7F3AEDA1FE1A5uLL * BYTE6(v65)
        + 0x7DA9078FE6510661LL * HIBYTE(v64)
        + 0x296E17CC49B5EC05LL * BYTE14(v64)
        + 0x14D2E4F3AFFE229LL * (BYTE9(v64) + 37LL * BYTE8(v64))
        + 37
        * (BYTE2(v68)
         + 37
         * (BYTE1(v68)
          + 37
          * ((unsigned __int8)v68
           + 37
           * (HIBYTE(v67)
            + 37
            * (BYTE2(v67)
             + 37
             * (BYTE1(v67)
              + 37
              * ((unsigned __int8)v67
               + 37 * (HIBYTE(v66) + 37 * (BYTE14(v66) + 37 * (BYTE13(v66) + 37 * (BYTE12(v66) + 37LL * BYTE11(v66))))))))))));
    v23 = HIBYTE(v68)
        + 0x2F2665556EEF39E1LL * v20
        + 0x16EA6DB39BB240F9LL * BYTE13(v65)
        + 0x5526FE2C4673CF11LL * BYTE11(v63)
        + 0xF91DC2FB38F228B5uLL * BYTE10(v64)
        + 0x3BF4C3C47ADF2FF1LL * BYTE3(v63)
        + 0x981EFA65455B8049uLL * BYTE1(v65)
        + 0x40B7CD9739B584A1LL * HIBYTE(v65)
        + 0xDC6C00E405D269C1uLL * BYTE7(v66)
        + 0xC53F5E946719795LL * BYTE2(v66)
        + 0x4EA2BC662EBCED75LL * BYTE10(v63)
        + 0x4F5D696EC151561DLL * BYTE4(v64)
        + 0x9FEAE5B513875FC9uLL * BYTE1(v63)
        + 0xFCE97086A74B1CB9uLL * BYTE13(v64)
        + 0xC378F206849F0269uLL * BYTE9(v65)
        + 0x73D058131B2A8879LL * BYTE13(v63)
        + 0x8BA4A57B9C3D7391uLL * BYTE11(v65)
        + 0xBB24DD21FAFC26B1uLL * BYTE3(v66)
        + 0xBEEC149AF4096455uLL * BYTE2(v65)
        + 0x3C82EBCCD629C471LL * BYTE3(v65)
        + 0x8DBD43762DDB26BDuLL * BYTE12(v64)
        + 0x78803D01F0C17231LL * BYTE3(v64)
        + 0xF5BCA5B282606D41uLL * BYTE7(v64)
        + 0x423D249C25A50325LL * BYTE6(v63)
        + 0xFC7A30A306398A8DuLL * (unsigned __int8)v65
        + 0x407AFAF12AFB592DLL * BYTE8(v65)
        + 0x51C644DB3653E381LL * BYTE7(v65)
        + 0x4128EAEEFF459821LL * HIBYTE(v63)
        + 0xECFE0C79B5739BCDuLL * (unsigned __int8)v66
        + 0xAA604B65C241EDD5uLL * BYTE2(v63)
        + v22;
    v58 = v23;
LABEL_10:
    v24 = *((_DWORD *)v5 + 765);
    v25 = -1LL << (*((_BYTE *)v5 + 3060) & 0x1F);
    v26 = v23 & v25;
    v27 = (v23 & v25) >> 56;
    v28 = (v23 & v25) >> 48;
    v29 = (v23 & v25) >> 40;
    v30 = (v23 & v25) >> 32;
    v31 = (v23 & v25) >> 24;
    v32 = (v23 & v25) >> 16;
    v33 = (v23 & v25) >> 8;
    if ( v6 )
    {
      v5 = v57;
      goto LABEL_12;
    }
    v51 = v24 >> 5;
    if ( v51 )
    {
      v52 = (unsigned __int8)v31;
      v5 = v57;
      v6 = *((_QWORD *)v57 + 383)
         + 8LL
         * (((_DWORD)v27
           + 37
           * ((unsigned __int8)v28
            + 37
            * ((unsigned __int8)v29
             + 37
             * ((unsigned __int8)v30
              + 37
              * (v52 + 37
                     * ((unsigned __int8)v32 + 37 * ((unsigned __int8)v33 + 37 * ((unsigned __int8)v26 + 11623883)))))))) & (v51 - 1));
LABEL_12:
      while ( 1 )
      {
        v6 = *(_QWORD *)v6;
        if ( (v6 & 1) != 0 )
          break;
        if ( v26 == (v25 & *(_QWORD *)(v6 + 8)) )
        {
          if ( !v6 )
            break;
          v34 = RmpPsmAppFamilyCompareForHashTable((struct _RTL_HASH_ENTRY *)v6, v62);
          v23 = v58;
          if ( !v34 )
            goto LABEL_10;
          goto LABEL_23;
        }
      }
    }
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x248uLL);
    v6 = (__int64)Heap;
    if ( Heap )
    {
      memset_0(Heap, 0, 0x248uLL);
      v36 = (WCHAR *)(v6 + 16);
      v37 = 4LL;
      v38 = v6 + 16;
      v39 = v62;
      do
      {
        v38 += 128LL;
        v40 = *(_OWORD *)v39;
        v39 += 128;
        *(_OWORD *)(v38 - 128) = v40;
        *(_OWORD *)(v38 - 112) = *((_OWORD *)v39 - 7);
        *(_OWORD *)(v38 - 96) = *((_OWORD *)v39 - 6);
        *(_OWORD *)(v38 - 80) = *((_OWORD *)v39 - 5);
        *(_OWORD *)(v38 - 64) = *((_OWORD *)v39 - 4);
        *(_OWORD *)(v38 - 48) = *((_OWORD *)v39 - 3);
        *(_OWORD *)(v38 - 32) = *((_OWORD *)v39 - 2);
        *(_OWORD *)(v38 - 16) = *((_OWORD *)v39 - 1);
        --v37;
      }
      while ( v37 );
      v41 = (unsigned __int8 *)(v6 + 480);
      *(_OWORD *)v38 = *(_OWORD *)v39;
      *(_QWORD *)(v38 + 16) = *((_QWORD *)v39 + 2);
      if ( v6 + 16 < (unsigned __int64)(v6 + 480) )
      {
        do
        {
          v42 = *v36++;
          v54 = RtlUpcaseUnicodeChar(v42);
          v15 = HIBYTE(v54) + 37 * ((unsigned __int8)v54 + 37 * v15);
        }
        while ( v36 < (WCHAR *)v41 );
      }
      v43 = 0x407AFAF12AFB592DLL * v41[40]
          + 0x4128EAEEFF459821LL * v41[15]
          + 0xECFE0C79B5739BCDuLL * v41[48]
          + 0xAA604B65C241EDD5uLL * v41[2]
          + 0xBD1CBAC2ED25B97DuLL * v41[12]
          + 0xBD90C36322378919uLL * v41[53]
          + 0x2B26220C747DAB5DLL * v41[36]
          + 0x92D64A9170D97459uLL * v41[5]
          + 0x84417E6FF051D6ADuLL * v41[8]
          + 0x38F8C7054F6DD0DDLL * v41[4]
          + 0x288D4C21D6A4D26DLL * v41[56]
          + 0x14D2E4F3AFFE229LL * (v41[25] + 37LL * v41[24])
          + 37
          * (v41[70]
           + 37
           * (v41[69]
            + 37
            * (v41[68]
             + 37
             * (v41[67]
              + 37
              * (v41[66]
               + 37
               * (v41[65]
                + 37 * (v41[64] + 37 * (v41[63] + 37 * (v41[62] + 37 * (v41[61] + 37 * (v41[60] + 37LL * v41[59])))))))))));
      v44 = 0x296E17CC49B5EC05LL * v41[30]
          + 0x16EA6DB39BB240F9LL * v41[45]
          + 0x5526FE2C4673CF11LL * v41[11]
          + 0x981EFA65455B8049uLL * v41[33]
          + 0xC53F5E946719795LL * v41[50]
          + 0xF91DC2FB38F228B5uLL * v41[26]
          + 0x3BF4C3C47ADF2FF1LL * v41[3]
          + 0x40B7CD9739B584A1LL * v41[47]
          + 0xDC6C00E405D269C1uLL * v41[55]
          + 0x4EA2BC662EBCED75LL * v41[10]
          + 0x4F5D696EC151561DLL * v41[20]
          + 0x9FEAE5B513875FC9uLL * v41[1]
          + 0xC378F206849F0269uLL * v41[41]
          + 0xFCE97086A74B1CB9uLL * v41[29]
          + 0x73D058131B2A8879LL * v41[13]
          + 0xBEEC149AF4096455uLL * v41[34]
          + 0xBB24DD21FAFC26B1uLL * v41[51]
          + 0xF5BCA5B282606D41uLL * v41[23]
          + 0x423D249C25A50325LL * v41[6]
          + 0xFC7A30A306398A8DuLL * v41[32]
          + 0x51C644DB3653E381LL * v41[39]
          + 0x8BA4A57B9C3D7391uLL * v41[43]
          + 0x3C82EBCCD629C471LL * v41[35]
          + 0x8DBD43762DDB26BDuLL * v41[28]
          + 0x78803D01F0C17231LL * v41[19]
          + v43;
      v5 = v57;
      v45 = v57;
      *(_QWORD *)(v6 + 8) = 0x2F2665556EEF39E1LL * v15
                          + v41[71]
                          + 0x1CF3332BD290D80DLL * *v41
                          + 0x2ECBEADD94E1B3F5LL * v41[42]
                          + 0xDB9C20F4D76948E5uLL * v41[54]
                          + 0x1D77462DBBD40701LL * v41[7]
                          + 0xB5A728F1B3DF494DuLL * v41[16]
                          + 0x8443F2CCD7EFCA65uLL * v41[22]
                          + 0x8B7970C2A4EFB2A9uLL * v41[57]
                          + 0x4D463845869B9CD9LL * v41[37]
                          + 0x6A88D147CBF58115LL * v41[18]
                          + 0x4FE1DAF580C363FDLL * v41[44]
                          + 0x5D853AC4C14E51E9LL * v41[9]
                          + 0x65EC3D53F206D09DLL * v41[52]
                          + 0x1DD2179B35A84099LL * v41[21]
                          + 0xC8228AB72E6AE889uLL * v41[49]
                          + 0x7C5AC014A0AC9951LL * v41[27]
                          + 0x6AE9F48AE50EFCC5LL * v41[14]
                          + 0x65C63F607A7BA809LL * v41[17]
                          + 0x3433B6F080FF8F35LL * v41[58]
                          + 0x5A90B6DB573C2B45LL * v41[46]
                          + 0xD1A7F3AEDA1FE1A5uLL * v41[38]
                          + 0x7DA9078FE6510661LL * v41[31]
                          + v44;
      RmpPsmAppFamilyTableAdd(v45, (struct _RM_PSM_APP_FAMILY *)v6);
LABEL_23:
      v46 = RmpActivityHostAllocateAndInitialize(v5, v60, v59, v56, (struct _RM_ACTIVITY_HOST **)&P);
      v47 = P;
      v48 = v46;
      if ( v46 < 0
        || (v49 = (struct _RM_PSM_APP_FAMILY *)v6,
            v6 = 0LL,
            v48 = RmpPsmAppFamilyAddActivityHost(v49, (struct _RM_ACTIVITY_HOST *)P),
            v48 < 0) )
      {
        if ( v47 )
        {
          RmpPsmAppFamilyTableTryRemoveActivityHost((struct _RM_ACTIVITY_HOST *)v47);
          RmpActivityHostCleanupCommonState((struct _RM_ACTIVITY_HOST *)v47);
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, P);
        }
        if ( v6 )
          RmpPsmAppFamilyTableCheckDelete(v5, (struct _RM_PSM_APP_FAMILY *)v6);
        return (unsigned int)v48;
      }
      else
      {
        QueryUnbiasedInterruptTime((PULONGLONG)v47 + 184);
        if ( _InterlockedIncrement64((volatile signed __int64 *)v47 + 2) <= 1 )
          __fastfail(0xEu);
        v50 = (struct _RM_ACTIVITY_HOST *)P;
        RmpActivityHostAddToTables((struct _RM_ACTIVITY_HOST *)P);
        result = 0LL;
        *v61 = v50;
      }
    }
    else
    {
      return 3221225495LL;
    }
  }
  return result;
}
