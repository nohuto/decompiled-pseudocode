/*
 * XREFs of ?MemoryLimitNotification@ResourceManager@ExecutionModel@@UEAAJPEBGPEAT_RM_SID@@KK_K@Z @ 0x1800072A0
 * Callers:
 *     <none>
 * Callees:
 *     ?HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180023510 (-HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180032500 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     __security_check_cookie @ 0x1800494C0 (__security_check_cookie.c)
 *     memcmp_0 @ 0x180053496 (memcmp_0.c)
 *     memcpy_0 @ 0x1800534A2 (memcpy_0.c)
 *     memset_0 @ 0x1800534BA (memset_0.c)
 */

__int64 __fastcall ExecutionModel::ResourceManager::MemoryLimitNotification(
        ExecutionModel::ResourceManager *this,
        const unsigned __int16 *a2,
        union _RM_SID *a3,
        int a4,
        unsigned int a5,
        unsigned __int64 a6)
{
  ULONG v10; // eax
  DWORD v11; // edi
  _QWORD *Value; // rbx
  __int64 v13; // rbx
  __int64 v14; // r13
  wchar_t *v15; // rsi
  __int64 v16; // rdi
  WCHAR v17; // cx
  __int64 v18; // rdx
  unsigned __int64 v19; // r14
  unsigned __int64 v20; // r14
  unsigned __int64 v21; // r9
  int v22; // r11d
  __int64 v23; // rsi
  DWORD v24; // r14d
  _QWORD *v25; // rdi
  __int64 *v26; // rax
  __int64 v27; // rcx
  bool v28; // zf
  unsigned int v29; // ebx
  __int64 *v30; // rax
  __int64 v31; // rdx
  WCHAR v33; // [rsp+20h] [rbp-E0h]
  __int64 v34; // [rsp+28h] [rbp-D8h]
  unsigned __int64 v35; // [rsp+30h] [rbp-D0h]
  wchar_t Destination[232]; // [rsp+40h] [rbp-C0h] BYREF
  __int128 Buf1; // [rsp+210h] [rbp+110h] BYREF
  __int128 v38; // [rsp+220h] [rbp+120h]
  __int128 v39; // [rsp+230h] [rbp+130h]
  __int128 v40; // [rsp+240h] [rbp+140h]
  int v41; // [rsp+250h] [rbp+150h]
  int v42; // [rsp+254h] [rbp+154h]
  unsigned int v43; // [rsp+258h] [rbp+158h]
  unsigned __int8 v44; // [rsp+25Ch] [rbp+15Ch]
  unsigned __int8 v45; // [rsp+25Dh] [rbp+15Dh]
  unsigned __int8 v46; // [rsp+25Eh] [rbp+15Eh]
  unsigned __int8 v47; // [rsp+25Fh] [rbp+15Fh]
  unsigned __int64 v48; // [rsp+260h] [rbp+160h]

  memset_0(Destination, 0, 0x228uLL);
  wcscpy_s(Destination, 0xE8uLL, a2);
  v41 = 0;
  Buf1 = 0LL;
  v38 = 0LL;
  v39 = 0LL;
  v40 = 0LL;
  v10 = RtlLengthSid(a3);
  memcpy_0(&Buf1, a3, v10);
  v11 = HampLockTrackerId;
  v43 = a5;
  v48 = a6;
  v42 = a4;
  if ( HampLockTrackerId != -1 )
  {
    Value = TlsGetValue(HampLockTrackerId);
    if ( *(_QWORD *)TlsGetValue(v11) )
      __int2c();
    *Value |= 1uLL;
    ++Value[1];
  }
  RtlAcquireSRWLockExclusive(&RmpGlobalLock);
  dword_1800DC580 = GetCurrentThreadId();
  v13 = 0LL;
  v14 = *((_QWORD *)this + 15);
  v15 = Destination;
  v16 = 314159LL;
  do
  {
    v17 = *v15++;
    v33 = RtlUpcaseUnicodeChar(v17);
    v16 = HIBYTE(v33) + 37 * ((unsigned __int8)v33 + 37 * v16);
  }
  while ( v15 < (wchar_t *)&Buf1 );
  v18 = BYTE5(v48)
      + 37
      * (BYTE4(v48)
       + 37
       * (BYTE3(v48)
        + 37
        * (BYTE2(v48)
         + 37
         * (BYTE1(v48)
          + 37 * ((unsigned __int8)v48 + 37 * (v47 + 37 * (v46 + 37 * (v45 + 37 * (v44 + 37LL * HIBYTE(v43))))))))));
  v19 = 0x2C5E09D2BFFAAA95LL * BYTE2(Buf1)
      + 0x4EA2BC662EBCED75LL * BYTE10(v38)
      + 0xBB24DD21FAFC26B1uLL * HIBYTE(v41)
      + 0xBEEC149AF4096455uLL * BYTE2(v40)
      + 0xB2261F79558AB0C1uLL * BYTE7(Buf1)
      + 0xF5BCA5B282606D41uLL * BYTE7(v39)
      + 0x423D249C25A50325LL * BYTE6(v38)
      + 0xFC7A30A306398A8DuLL * (unsigned __int8)v40
      + 0x407AFAF12AFB592DLL * BYTE8(v40)
      + 0x51C644DB3653E381LL * BYTE7(v40)
      + 0x8BA4A57B9C3D7391uLL * BYTE11(v40)
      + 0x4128EAEEFF459821LL * HIBYTE(v38)
      + 0x3C82EBCCD629C471LL * BYTE3(v40)
      + 0xECFE0C79B5739BCDuLL * (unsigned __int8)v41
      + 0x8DBD43762DDB26BDuLL * BYTE12(v39)
      + 0xAA604B65C241EDD5uLL * BYTE2(v38)
      + 0x78803D01F0C17231LL * BYTE3(v39)
      + 0xBD1CBAC2ED25B97DuLL * BYTE12(v38)
      + 0xEC517606CCCE0235uLL * BYTE10(Buf1)
      + 0xBD90C36322378919uLL * BYTE1(v42)
      + 0x2B26220C747DAB5DLL * BYTE4(v40)
      + 0xDB9C20F4D76948E5uLL * BYTE2(v42)
      + 0x84417E6FF051D6ADuLL * BYTE8(v38)
      + 0x92D64A9170D97459uLL * BYTE5(v38)
      + 0xBF828C895D0B8BE5uLL * BYTE6(Buf1)
      + 0x1D77462DBBD40701LL * BYTE7(v38)
      + 0xB5A728F1B3DF494DuLL * (unsigned __int8)v39
      + 0x44A84175CE2F14D1LL * BYTE11(Buf1)
      + 0x288D4C21D6A4D26DLL * (unsigned __int8)v43
      + 0x38F8C7054F6DD0DDLL * BYTE4(v38)
      + 0x27C60EFB99C651A9LL * BYTE9(Buf1)
      + 0xBFA02A5D39A9CD6DuLL * BYTE8(Buf1)
      + 0x8443F2CCD7EFCA65uLL * BYTE6(v39)
      + 0x2ECBEADD94E1B3F5LL * BYTE10(v40)
      + 0x8B7970C2A4EFB2A9uLL * BYTE1(v43)
      + 0x4D463845869B9CD9LL * BYTE5(v40)
      + 0x6A88D147CBF58115LL * BYTE2(v39)
      + 0x4FE1DAF580C363FDLL * BYTE12(v40)
      + 0x5D853AC4C14E51E9LL * BYTE9(v38)
      + 0x14D2E4F3AFFE229LL * (BYTE9(v39) + 37LL * BYTE8(v39))
      + 37 * (BYTE6(v48) + 37 * v18);
  v20 = HIBYTE(v48)
      + 0xAABDA8ABA0A9EBA1uLL * v16
      + 0x2453E5DE3D4C8439LL * BYTE13(Buf1)
      + 0x65EC3D53F206D09DLL * (unsigned __int8)v42
      + 0x1DD2179B35A84099LL * BYTE5(v39)
      + 0x42E28804A37A36CDLL * (unsigned __int8)Buf1
      + 0xC8228AB72E6AE889uLL * BYTE1(v41)
      + 0x7C5AC014A0AC9951LL * BYTE11(v39)
      + 0xC9D9072F359EFDB1uLL * BYTE3(Buf1)
      + 0x6AE9F48AE50EFCC5LL * BYTE14(v38)
      + 0x65C63F607A7BA809LL * BYTE1(v39)
      + 0x3433B6F080FF8F35LL * BYTE2(v43)
      + 0x5A90B6DB573C2B45LL * BYTE14(v40)
      + 0x296E17CC49B5EC05LL * BYTE14(v39)
      + 0x2F2665556EEF39E1LL * HIBYTE(Buf1)
      + 0x16EA6DB39BB240F9LL * BYTE13(v40)
      + 0xD08CA55908935D85uLL * BYTE14(Buf1)
      + 0x5526FE2C4673CF11LL * BYTE11(v38)
      + 0x21218A9292BF1B9DLL * BYTE4(Buf1)
      + 0xD1A7F3AEDA1FE1A5uLL * BYTE6(v40)
      + 0x7DA9078FE6510661LL * HIBYTE(v39)
      + 0x69976B75BF3AA789LL * BYTE1(Buf1)
      + 0x1CF3332BD290D80DLL * (unsigned __int8)v38
      + 0x981EFA65455B8049uLL * BYTE1(v40)
      + 0xC53F5E946719795LL * BYTE2(v41)
      + 0x4F5D696EC151561DLL * BYTE4(v39)
      + 0xADDE4FDA72AB3819uLL * BYTE5(Buf1)
      + 0xF91DC2FB38F228B5uLL * BYTE10(v39)
      + 0x3BF4C3C47ADF2FF1LL * BYTE3(v38)
      + 0x9FEAE5B513875FC9uLL * BYTE1(v38)
      + 0xFCE97086A74B1CB9uLL * BYTE13(v39)
      + 0xC378F206849F0269uLL * BYTE9(v40)
      + 0x73D058131B2A8879LL * BYTE13(v38)
      + 0x4020391EDC0F1C3DLL * BYTE12(Buf1)
      + 0x40B7CD9739B584A1LL * HIBYTE(v40)
      + 0xDC6C00E405D269C1uLL * HIBYTE(v42)
      + v19;
  v35 = v20;
  v34 = v14 + 32;
  RtlAcquireSRWLockShared(v14 + 32);
LABEL_8:
  v21 = v20 & (-1LL << (*(_BYTE *)(v14 + 3348) & 0x1F));
  if ( v13 )
    goto LABEL_11;
  v22 = *(_DWORD *)(v14 + 3348) >> 5;
  if ( v22 )
  {
    v13 = *(_QWORD *)(v14 + 3352)
        + 8
        * ((HIBYTE(v21)
          + 37
          * (BYTE6(v21)
           + 37
           * (BYTE5(v21)
            + 37
            * (BYTE4(v21)
             + 37 * (BYTE3(v21) + 37 * (BYTE2(v21) + 37 * (BYTE1(v21) + 37 * ((unsigned __int8)v21 + 11623883)))))))) & (unsigned int)(v22 - 1));
LABEL_11:
    while ( 1 )
    {
      v13 = *(_QWORD *)v13;
      if ( (v13 & 1) != 0 )
        break;
      if ( v21 == ((-1LL << (*(_BYTE *)(v14 + 3348) & 0x1F)) & *(_QWORD *)(v13 + 8)) )
      {
        v23 = v13 - 1408;
        v20 = v35;
        if ( _wcsicmp(Destination, (const wchar_t *)(v13 - 1408 + 88))
          || memcmp_0(&Buf1, (const void *)(v23 + 552), 0x58uLL) )
        {
          goto LABEL_8;
        }
        if ( _InterlockedIncrement64((volatile signed __int64 *)(v23 + 16)) <= 1 )
          __fastfail(0xEu);
        RtlReleaseSRWLockShared(v34);
        v24 = HampLockTrackerId;
        if ( HampLockTrackerId != -1 )
        {
          v25 = TlsGetValue(HampLockTrackerId);
          if ( (*(_QWORD *)TlsGetValue(v24) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
            __int2c();
          *v25 |= 2uLL;
          ++v25[2];
        }
        RtlAcquireSRWLockExclusive(v23 + 64);
        *(_DWORD *)(v23 + 72) = GetCurrentThreadId();
        *(_QWORD *)(v23 + 728) |= 0x20000000000000uLL;
        HampHostCheckQueueStateWorker((struct _RM_HAM_ACTIVITY_HOST *)(v23 + 64), 0);
        if ( HampLockTrackerId != -1 )
        {
          v26 = (__int64 *)TlsGetValue(HampLockTrackerId);
          v27 = *v26;
          if ( (*v26 & 2) == 0 )
            __int2c();
          v28 = v26[2]-- == 1;
          if ( v28 )
            *v26 = v27 & 0xFFFFFFFFFFFFFFFDuLL;
        }
        *(_DWORD *)(v23 + 72) = 0;
        RtlReleaseSRWLockExclusive(v23 + 64);
        v29 = 0;
        goto LABEL_28;
      }
    }
  }
  RtlReleaseSRWLockShared(v34);
  v23 = 0LL;
  v29 = -805305819;
LABEL_28:
  dword_1800DC580 = 0;
  RtlReleaseSRWLockExclusive(&RmpGlobalLock);
  if ( HampLockTrackerId != -1 )
  {
    v30 = (__int64 *)TlsGetValue(HampLockTrackerId);
    v31 = *v30;
    if ( (*v30 & 1) == 0 )
      __int2c();
    v28 = v30[1]-- == 1;
    if ( v28 )
      *v30 = v31 & 0xFFFFFFFFFFFFFFFEuLL;
  }
  if ( v23 )
    RmpObjectRelease((struct _RM_OBJECT_HEADER *)v23);
  return v29;
}
