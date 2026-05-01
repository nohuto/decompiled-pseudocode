/*
 * XREFs of ?RmpActivityHostFindByPsmId@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_HOST_INFO@@PEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180006450
 * Callers:
 *     ?AddCommitMemoryWnfStates@ResourceManager@ExecutionModel@@QEAAJKPEAT_RM_SID@@PEAT_LARGE_INTEGER@@1@Z @ 0x18000544C (-AddCommitMemoryWnfStates@ResourceManager@ExecutionModel@@QEAAJKPEAT_RM_SID@@PEAT_LARGE_INTEGER@.c)
 *     ?RmAccessCheckWithLockHeld@ResourceManager@ExecutionModel@@QEAAJW4Enum@ResourceType@2@KE@Z @ 0x180006188 (-RmAccessCheckWithLockHeld@ResourceManager@ExecutionModel@@QEAAJW4Enum@ResourceType@2@KE@Z.c)
 * Callees:
 *     ??R?$equal_to@U_RM_PSM_HOST_INFO@@@utl@@QEBA_NAEBU_RM_PSM_HOST_INFO@@0@Z @ 0x180006CE8 (--R-$equal_to@U_RM_PSM_HOST_INFO@@@utl@@QEBA_NAEBU_RM_PSM_HOST_INFO@@0@Z.c)
 */

__int64 __fastcall RmpActivityHostFindByPsmId(
        struct _RM_SERVICE_GLOBALS *a1,
        struct _RM_PSM_HOST_INFO *a2,
        struct _RM_ACTIVITY_HOST **a3)
{
  __int64 v3; // r14
  unsigned __int8 *v4; // rsi
  struct _RM_SERVICE_GLOBALS *v6; // rbp
  WCHAR *v7; // rbx
  __int64 v8; // rdi
  WCHAR v9; // cx
  __int64 v10; // rdx
  unsigned __int64 v11; // r12
  unsigned __int64 v12; // r12
  unsigned __int64 v13; // r12
  unsigned __int64 v14; // r12
  unsigned int v15; // r10d
  unsigned __int64 v16; // rcx
  __int64 v17; // r11
  unsigned __int64 v18; // r9
  unsigned int v19; // r10d
  __int64 v20; // rbx
  WCHAR v23; // [rsp+78h] [rbp+10h]
  unsigned int v25; // [rsp+88h] [rbp+20h]

  v3 = 0LL;
  v4 = (unsigned __int8 *)a2 + 464;
  v6 = a1;
  v7 = (WCHAR *)a2;
  v8 = 314159LL;
  if ( a2 < (struct _RM_PSM_HOST_INFO *)((char *)a2 + 464) )
  {
    do
    {
      v9 = *v7++;
      v23 = RtlUpcaseUnicodeChar(v9);
      v8 = HIBYTE(v23) + 37 * ((unsigned __int8)v23 + 37 * v8);
    }
    while ( v7 < (WCHAR *)v4 );
  }
  v10 = v4[85]
      + 37
      * (v4[84]
       + 37
       * (v4[83]
        + 37
        * (v4[82]
         + 37 * (v4[81] + 37 * (v4[80] + 37 * (v4[79] + 37 * (v4[78] + 37 * (v4[77] + 37 * (v4[76] + 37LL * v4[75])))))))));
  v11 = 0xBD90C36322378919uLL * v4[69]
      + 0x2B26220C747DAB5DLL * v4[52]
      + 0x92D64A9170D97459uLL * v4[21]
      + 0x84417E6FF051D6ADuLL * v4[24]
      + 0x44A84175CE2F14D1LL * v4[11]
      + 0x38F8C7054F6DD0DDLL * v4[20]
      + 0x288D4C21D6A4D26DLL * v4[72]
      + 0xBFA02A5D39A9CD6DuLL * v4[8]
      + 0x27C60EFB99C651A9LL * v4[9]
      + 0x2ECBEADD94E1B3F5LL * v4[58]
      + 0xDB9C20F4D76948E5uLL * v4[70]
      + 0xBF828C895D0B8BE5uLL * v4[6]
      + 0x1D77462DBBD40701LL * v4[23]
      + 0xB5A728F1B3DF494DuLL * v4[32]
      + 0x8443F2CCD7EFCA65uLL * v4[38]
      + 0x8B7970C2A4EFB2A9uLL * v4[73]
      + 0x4D463845869B9CD9LL * v4[53]
      + 0x6A88D147CBF58115LL * v4[34]
      + 0x4FE1DAF580C363FDLL * v4[60]
      + 0x5D853AC4C14E51E9LL * v4[25]
      + 0x2453E5DE3D4C8439LL * v4[13]
      + 0x65EC3D53F206D09DLL * v4[68]
      + 0x14D2E4F3AFFE229LL * (v4[41] + 37LL * v4[40])
      + 37 * (v4[86] + 37 * v10);
  v12 = 0x2C5E09D2BFFAAA95LL * v4[2]
      + 0x4EA2BC662EBCED75LL * v4[26]
      + 0x4F5D696EC151561DLL * v4[36]
      + 0x9FEAE5B513875FC9uLL * v4[17]
      + 0xC378F206849F0269uLL * v4[57]
      + 0xFCE97086A74B1CB9uLL * v4[45]
      + 0x73D058131B2A8879LL * v4[29]
      + 0x4020391EDC0F1C3DLL * v4[12]
      + 0xBEEC149AF4096455uLL * v4[50]
      + 0xBB24DD21FAFC26B1uLL * v4[67]
      + 0xF5BCA5B282606D41uLL * v4[39]
      + 0x423D249C25A50325LL * v4[22]
      + 0xFC7A30A306398A8DuLL * v4[48]
      + 0x51C644DB3653E381LL * v4[55]
      + 0x8BA4A57B9C3D7391uLL * v4[59]
      + 0x3C82EBCCD629C471LL * v4[51]
      + 0x8DBD43762DDB26BDuLL * v4[44]
      + 0x78803D01F0C17231LL * v4[35]
      + 0xB2261F79558AB0C1uLL * v4[7]
      + 0x407AFAF12AFB592DLL * v4[56]
      + 0x4128EAEEFF459821LL * v4[31]
      + 0xECFE0C79B5739BCDuLL * v4[64]
      + 0xAA604B65C241EDD5uLL * v4[18]
      + 0xBD1CBAC2ED25B97DuLL * v4[28]
      + 0xEC517606CCCE0235uLL * v4[10]
      + v11;
  v13 = 0x7C5AC014A0AC9951LL * v4[43]
      + 0xC9D9072F359EFDB1uLL * v4[3]
      + 0x6AE9F48AE50EFCC5LL * v4[30]
      + 0x65C63F607A7BA809LL * v4[33]
      + 0x3433B6F080FF8F35LL * v4[74]
      + 0x5A90B6DB573C2B45LL * v4[62]
      + 0xD1A7F3AEDA1FE1A5uLL * v4[54]
      + 0x7DA9078FE6510661LL * v4[47]
      + 0x69976B75BF3AA789LL * v4[1]
      + 0x296E17CC49B5EC05LL * v4[46]
      + 0x2F2665556EEF39E1LL * v4[15]
      + 0x16EA6DB39BB240F9LL * v4[61]
      + 0xD08CA55908935D85uLL * v4[14]
      + 0x5526FE2C4673CF11LL * v4[27]
      + 0x21218A9292BF1B9DLL * v4[4]
      + 0x1CF3332BD290D80DLL * v4[16]
      + 0x981EFA65455B8049uLL * v4[49]
      + 0xC53F5E946719795LL * v4[66]
      + 0xADDE4FDA72AB3819uLL * v4[5]
      + 0xF91DC2FB38F228B5uLL * v4[42]
      + 0x3BF4C3C47ADF2FF1LL * v4[19]
      + 0x40B7CD9739B584A1LL * v4[63]
      + 0xDC6C00E405D269C1uLL * v4[71]
      + v12;
  v25 = -1073741275;
  v14 = 0xAABDA8ABA0A9EBA1uLL * v8
      + v4[87]
      + 0x42E28804A37A36CDLL * *v4
      + 0x1DD2179B35A84099LL * v4[37]
      + 0xC8228AB72E6AE889uLL * v4[65]
      + v13;
  RtlAcquireSRWLockShared((char *)v6 + 32);
LABEL_4:
  v15 = *((_DWORD *)v6 + 837);
  v16 = v15 & 0x1F;
  v17 = -1LL << (*((_BYTE *)v6 + 3348) & 0x1F);
  v18 = v17 & v14;
  if ( v3 )
  {
    v6 = a1;
LABEL_7:
    while ( 1 )
    {
      v3 = *(_QWORD *)v3;
      if ( (v3 & 1) != 0 )
        break;
      if ( v18 == (v17 & *(_QWORD *)(v3 + 8)) )
      {
        v20 = v3 - 1408;
        if ( !(unsigned __int8)utl::equal_to<_RM_PSM_HOST_INFO>::operator()(v16, a2, v3 - 1408 + 88) )
          goto LABEL_4;
        v25 = 0;
        if ( _InterlockedIncrement64((volatile signed __int64 *)(v20 + 16)) <= 1 )
          __fastfail(0xEu);
        *a3 = (struct _RM_ACTIVITY_HOST *)v20;
        break;
      }
    }
  }
  else
  {
    v19 = v15 >> 5;
    if ( v19 )
    {
      v6 = a1;
      v16 = (((v17 & v14) >> 56)
           + 37
           * ((unsigned __int8)((v17 & v14) >> 48)
            + 37
            * ((unsigned __int8)((unsigned __int16)((v17 & v14) >> 32) >> 8)
             + 37
             * ((unsigned __int8)((v17 & v14) >> 32)
              + 37
              * ((((unsigned int)v17 & (unsigned int)v14) >> 24)
               + 37
               * ((unsigned __int8)(((unsigned int)v17 & (unsigned int)v14) >> 16)
                + 37 * ((unsigned __int8)((unsigned __int16)(v17 & v14) >> 8) + 37 * ((unsigned __int8)v18 + 11623883)))))))) & (v19 - 1);
      v3 = *((_QWORD *)a1 + 419) + 8 * v16;
      goto LABEL_7;
    }
    v6 = a1;
  }
  RtlReleaseSRWLockShared((char *)v6 + 32);
  return v25;
}
