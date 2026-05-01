/*
 * XREFs of ?ApplyExternalResourcePriorities@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180028940
 * Callers:
 *     ?ApplyResourceSet_Modern@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@@Z @ 0x1800292C8 (-ApplyResourceSet_Modern@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@@Z.c)
 *     ?SetExternalResourcePriorities@ResourceSet@ExecutionModel@@QEAAJKQEAU_ResourceInfo@2@@Z @ 0x18008EBB0 (-SetExternalResourcePriorities@ResourceSet@ExecutionModel@@QEAAJKQEAU_ResourceInfo@2@@Z.c)
 * Callees:
 *     ?HostApplyExternalResourcePriorities@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180020554 (-HostApplyExternalResourcePriorities@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_ACTIVITY_HOST@.c)
 *     CempPackageFamilyNameFromPsmKey @ 0x180025F60 (CempPackageFamilyNameFromPsmKey.c)
 *     ?RmpActivityHostIsPple@@YAEPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180028348 (-RmpActivityHostIsPple@@YAEPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpPsmAppFamilyIdInitialize@@YAXPEBGPEAT_RM_SID@@KPEAU_RM_PSM_APP_FAMILY_ID@@@Z @ 0x180029200 (-RmpPsmAppFamilyIdInitialize@@YAXPEBGPEAT_RM_SID@@KPEAU_RM_PSM_APP_FAMILY_ID@@@Z.c)
 *     ?RmpPsmAppFamilyCompareForHashTable@@YAKPEAU_RTL_HASH_ENTRY@@PEAX@Z @ 0x18003ADA8 (-RmpPsmAppFamilyCompareForHashTable@@YAKPEAU_RTL_HASH_ENTRY@@PEAX@Z.c)
 *     __security_check_cookie @ 0x18004E310 (__security_check_cookie.c)
 *     ?RmpActivityHostHasPpleResourceSet@@YAEPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18008716C (-RmpActivityHostHasPpleResourceSet@@YAEPEAU_RM_ACTIVITY_HOST@@@Z.c)
 */

void __fastcall ExecutionModel::ResourceManager::ApplyExternalResourcePriorities(
        ExecutionModel::ResourceManager *this,
        struct _RM_ACTIVITY_HOST *a2)
{
  ExecutionModel::ResourceManager *v3; // rsi
  __int64 v4; // r14
  WCHAR *v5; // rbx
  __int64 v6; // rdi
  WCHAR v7; // cx
  __int64 v8; // rdx
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // rsi
  __int64 v11; // rbx
  __int64 v12; // r10
  unsigned __int64 v13; // r9
  struct _RM_ACTIVITY_HOST *v14; // rbx
  int v15; // r13d
  WCHAR v16; // [rsp+20h] [rbp-E0h]
  __int64 v18; // [rsp+30h] [rbp-D0h]
  _BYTE v19[464]; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v20[80]; // [rsp+210h] [rbp+110h] BYREF
  unsigned __int16 v21[232]; // [rsp+260h] [rbp+160h] BYREF

  v3 = this;
  ExecutionModel::ResourceManager::HostApplyExternalResourcePriorities((unsigned __int64)this, a2);
  if ( *((_DWORD *)a2 + 156) == 2 && !RmpActivityHostIsPple(a2) )
  {
    v4 = *((_QWORD *)a2 + 6);
    v18 = v4;
    if ( CempPackageFamilyNameFromPsmKey((__int64)a2 + 88, (__int64)v21) >= 0 )
    {
      RmpPsmAppFamilyIdInitialize(
        v21,
        (struct _RM_ACTIVITY_HOST *)((char *)a2 + 552),
        *((_DWORD *)a2 + 155),
        (struct _RM_PSM_APP_FAMILY_ID *)v19);
      v5 = (WCHAR *)v19;
      v6 = 314159LL;
      do
      {
        v7 = *v5++;
        v16 = RtlUpcaseUnicodeChar(v7);
        v6 = HIBYTE(v16) + 37 * ((unsigned __int8)v16 + 37 * v6);
      }
      while ( v5 < (WCHAR *)v20 );
      v8 = v20[69]
         + 37
         * (v20[68]
          + 37
          * (v20[67]
           + 37
           * (v20[66]
            + 37
            * (v20[65]
             + 37 * (v20[64] + 37 * (v20[63] + 37 * (v20[62] + 37 * (v20[61] + 37 * (v20[60] + 37LL * v20[59])))))))));
      v9 = 0xBD1CBAC2ED25B97DuLL * v20[12]
         + 0xBD90C36322378919uLL * v20[53]
         + 0x2B26220C747DAB5DLL * v20[36]
         + 0x288D4C21D6A4D26DLL * v20[56]
         + 0x2ECBEADD94E1B3F5LL * v20[42]
         + 0xDB9C20F4D76948E5uLL * v20[54]
         + 0x84417E6FF051D6ADuLL * v20[8]
         + 0x92D64A9170D97459uLL * v20[5]
         + 0x1D77462DBBD40701LL * v20[7]
         + 0xB5A728F1B3DF494DuLL * v20[16]
         + 0x38F8C7054F6DD0DDLL * v20[4]
         + 0x8443F2CCD7EFCA65uLL * v20[22]
         + 0x1CF3332BD290D80DLL * v20[0]
         + 0x8B7970C2A4EFB2A9uLL * v20[57]
         + 0x4D463845869B9CD9LL * v20[37]
         + 0x6A88D147CBF58115LL * v20[18]
         + 0x4FE1DAF580C363FDLL * v20[44]
         + 0x5D853AC4C14E51E9LL * v20[9]
         + 0x65EC3D53F206D09DLL * v20[52]
         + 0x1DD2179B35A84099LL * v20[21]
         + 0xC8228AB72E6AE889uLL * v20[49]
         + 0x7C5AC014A0AC9951LL * v20[27]
         + 0x6AE9F48AE50EFCC5LL * v20[14]
         + 0x65C63F607A7BA809LL * v20[17]
         + 0x3433B6F080FF8F35LL * v20[58]
         + 0x5A90B6DB573C2B45LL * v20[46]
         + 0xD1A7F3AEDA1FE1A5uLL * v20[38]
         + 0x7DA9078FE6510661LL * v20[31]
         + 0x296E17CC49B5EC05LL * v20[30]
         + 0x981EFA65455B8049uLL * v20[33]
         + 0xC53F5E946719795LL * v20[50]
         + 0x16EA6DB39BB240F9LL * v20[45]
         + 0x5526FE2C4673CF11LL * v20[11]
         + 0xF91DC2FB38F228B5uLL * v20[26]
         + 0x3BF4C3C47ADF2FF1LL * v20[3]
         + 0x40B7CD9739B584A1LL * v20[47]
         + 0xDC6C00E405D269C1uLL * v20[55]
         + 0x4EA2BC662EBCED75LL * v20[10]
         + 0x4F5D696EC151561DLL * v20[20]
         + 0x14D2E4F3AFFE229LL * (v20[25] + 37LL * v20[24])
         + 37 * (v20[70] + 37 * v8);
      v10 = v20[71]
          + 0x2F2665556EEF39E1LL * v6
          + 0x9FEAE5B513875FC9uLL * v20[1]
          + 0xFCE97086A74B1CB9uLL * v20[29]
          + 0xC378F206849F0269uLL * v20[41]
          + 0xFC7A30A306398A8DuLL * v20[32]
          + 0x51C644DB3653E381LL * v20[39]
          + 0x73D058131B2A8879LL * v20[13]
          + 0x8BA4A57B9C3D7391uLL * v20[43]
          + 0xBB24DD21FAFC26B1uLL * v20[51]
          + 0xBEEC149AF4096455uLL * v20[34]
          + 0x3C82EBCCD629C471LL * v20[35]
          + 0x8DBD43762DDB26BDuLL * v20[28]
          + 0x78803D01F0C17231LL * v20[19]
          + 0xF5BCA5B282606D41uLL * v20[23]
          + 0x423D249C25A50325LL * v20[6]
          + 0x407AFAF12AFB592DLL * v20[40]
          + 0x4128EAEEFF459821LL * v20[15]
          + 0xECFE0C79B5739BCDuLL * v20[48]
          + 0xAA604B65C241EDD5uLL * v20[2]
          + v9;
      v11 = 0LL;
LABEL_7:
      v12 = -1LL << (*(_BYTE *)(v4 + 3060) & 0x1F);
      v13 = v10 & v12;
      if ( v11 )
      {
        v4 = v18;
        goto LABEL_9;
      }
      v15 = *(_DWORD *)(v4 + 3060) >> 5;
      if ( v15 )
      {
        v4 = v18;
        v11 = *(_QWORD *)(v18 + 3064)
            + 8
            * ((((v10 & v12) >> 56)
              + 37
              * ((unsigned __int8)((v10 & v12) >> 48)
               + 37
               * ((unsigned __int8)((unsigned __int16)((v10 & v12) >> 32) >> 8)
                + 37
                * ((unsigned __int8)((v10 & v12) >> 32)
                 + 37
                 * ((((unsigned int)v10 & (unsigned int)v12) >> 24)
                  + 37
                  * ((unsigned __int8)(((unsigned int)v10 & (unsigned int)v12) >> 16)
                   + 37
                   * ((unsigned __int8)((unsigned __int16)(v10 & v12) >> 8) + 37 * ((unsigned __int8)v13 + 11623883)))))))) & (unsigned int)(v15 - 1));
LABEL_9:
        while ( 1 )
        {
          v11 = *(_QWORD *)v11;
          if ( (v11 & 1) != 0 )
            break;
          if ( v13 == (v12 & *(_QWORD *)(v11 + 8)) )
          {
            if ( !RmpPsmAppFamilyCompareForHashTable((struct _RTL_HASH_ENTRY *)v11, v19) )
              goto LABEL_7;
            v3 = this;
            if ( !v11 )
              goto LABEL_18;
            goto LABEL_13;
          }
        }
      }
      v3 = this;
    }
LABEL_18:
    v11 = 0LL;
LABEL_13:
    v14 = *(struct _RM_ACTIVITY_HOST **)(v11 + 568);
    if ( v14 )
    {
      if ( RmpActivityHostHasPpleResourceSet(v14) )
        ExecutionModel::ResourceManager::HostApplyExternalResourcePriorities((unsigned __int64)v3, v14);
    }
  }
}
