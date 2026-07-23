/*
 * XREFs of CmpReorganizeHive @ 0x140703230
 * Callers:
 *     CmpCreateHive @ 0x1407025DC (CmpCreateHive.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140208C40 (CmSiFreeMemory.c)
 *     _tlgKeywordOn @ 0x140212E64 (_tlgKeywordOn.c)
 *     CmpAllocatePool @ 0x14022CFFC (CmpAllocatePool.c)
 *     KeAbPreAcquire @ 0x140230FD0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     CmSiQuerySystemTime @ 0x14028FB90 (CmSiQuerySystemTime.c)
 *     ExfReleasePushLockShared @ 0x1402BDAF0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x1402BDBF0 (ExfTryToWakePushLock.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402F6DB4 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402FD0A0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfAcquirePushLockSharedEx @ 0x1402FD2D0 (ExfAcquirePushLockSharedEx.c)
 *     ExIsSoftBoot @ 0x140384330 (ExIsSoftBoot.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     CmCheckRegistry @ 0x140705420 (CmCheckRegistry.c)
 *     CmpCopyKeyPartial @ 0x1407DDB28 (CmpCopyKeyPartial.c)
 *     CmpUpdateReorganizeRegistryValues @ 0x14085DDC4 (CmpUpdateReorganizeRegistryValues.c)
 *     HvMarkBaseBlockDirty @ 0x140874A6C (HvMarkBaseBlockDirty.c)
 *     CmpClearKeyAccessBits @ 0x140885C2C (CmpClearKeyAccessBits.c)
 *     CmpLogReorganizeEvent @ 0x140A0FF3C (CmpLogReorganizeEvent.c)
 *     CmpCreateEmptyHiveClone @ 0x140A1CD70 (CmpCreateEmptyHiveClone.c)
 *     CmpDestroyHive @ 0x140A1CF50 (CmpDestroyHive.c)
 *     CmpSwapHiveStorage @ 0x140A1D270 (CmpSwapHiveStorage.c)
 *     CmpCopySyncTree @ 0x140A216A8 (CmpCopySyncTree.c)
 *     CmpAcquireShutdownRundown @ 0x140AF5380 (CmpAcquireShutdownRundown.c)
 *     CmpReleaseShutdownRundown @ 0x140AF5470 (CmpReleaseShutdownRundown.c)
 *     CmpLockRegistry @ 0x140AF54A0 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140AF54F0 (CmpUnlockRegistry.c)
 */

__int64 __fastcall CmpReorganizeHive(ULONG_PTR BugCheckParameter3, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  int v5; // ebx
  __int64 v6; // rcx
  __int64 v8; // r13
  int v9; // eax
  int v10; // ebx
  unsigned __int64 v12; // rcx
  LARGE_INTEGER *v13; // r9
  __int64 v14; // rdx
  LARGE_INTEGER v15; // r8
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  unsigned __int64 v20; // rbx
  __int64 v21; // rax
  __int64 v22; // r14
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  ULONG_PTR v27; // rsi
  int v28; // ebx
  __int64 v29; // r8
  __int64 v30; // r9
  int v31; // edx
  int v32; // r9d
  int v33; // r10d
  unsigned __int64 v34; // r14
  __int64 v35; // rax
  __int64 v36; // r13
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 v41; // rcx
  __int64 v42; // r9
  unsigned int v43; // r10d
  unsigned __int64 v44; // rsi
  __int64 v45; // rax
  __int64 v46; // r14
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r9
  unsigned int v51; // r12d
  unsigned int v52; // r14d
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // r8
  __int64 v56; // r9
  __int64 v57; // rcx
  signed __int64 *v58; // rbx
  unsigned __int64 v59; // rsi
  __int64 v60; // rax
  __int64 v61; // r13
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // r8
  __int64 v65; // r9
  ULONG_PTR v66; // [rsp+28h] [rbp-D8h]
  int v67; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v68; // [rsp+44h] [rbp-BCh] BYREF
  LARGE_INTEGER v69; // [rsp+48h] [rbp-B8h] BYREF
  __int16 v70; // [rsp+50h] [rbp-B0h] BYREF
  __int16 v71; // [rsp+54h] [rbp-ACh] BYREF
  ULONG_PTR BugCheckParameter3a; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v73; // [rsp+68h] [rbp-98h] BYREF
  __int64 v74; // [rsp+70h] [rbp-90h] BYREF
  __int64 Pool; // [rsp+78h] [rbp-88h] BYREF
  __int64 v76; // [rsp+80h] [rbp-80h] BYREF
  __int64 v77; // [rsp+88h] [rbp-78h] BYREF
  __int128 v78; // [rsp+90h] [rbp-70h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v79[2]; // [rsp+A0h] [rbp-60h] BYREF
  int *v80; // [rsp+C0h] [rbp-40h]
  __int64 v81; // [rsp+C8h] [rbp-38h]
  __int64 *v82; // [rsp+D0h] [rbp-30h]
  __int64 v83; // [rsp+D8h] [rbp-28h]
  __int64 *p_Pool; // [rsp+E0h] [rbp-20h]
  __int64 v85; // [rsp+E8h] [rbp-18h]
  __int64 *v86; // [rsp+F0h] [rbp-10h]
  __int64 v87; // [rsp+F8h] [rbp-8h]
  struct _EVENT_DATA_DESCRIPTOR v88; // [rsp+100h] [rbp+0h] BYREF
  int *v89; // [rsp+120h] [rbp+20h]
  __int64 v90; // [rsp+128h] [rbp+28h]
  __int16 *v91; // [rsp+130h] [rbp+30h]
  __int64 v92; // [rsp+138h] [rbp+38h]
  __int16 *v93; // [rsp+140h] [rbp+40h]
  __int64 v94; // [rsp+148h] [rbp+48h]
  int *v95; // [rsp+150h] [rbp+50h]
  __int64 v96; // [rsp+158h] [rbp+58h]
  __int64 v97; // [rsp+160h] [rbp+60h]
  __int64 v98; // [rsp+168h] [rbp+68h]
  __int64 v99; // [rsp+170h] [rbp+70h]
  int v100; // [rsp+178h] [rbp+78h]
  int v101; // [rsp+17Ch] [rbp+7Ch]
  __int64 v102; // [rsp+180h] [rbp+80h]
  __int64 v103; // [rsp+188h] [rbp+88h]
  __int64 v104; // [rsp+190h] [rbp+90h]
  int v105; // [rsp+198h] [rbp+98h]
  int v106; // [rsp+19Ch] [rbp+9Ch]
  __int64 v107; // [rsp+1A0h] [rbp+A0h]
  __int64 v108; // [rsp+1A8h] [rbp+A8h]
  __int64 v109; // [rsp+1B0h] [rbp+B0h]
  int v110; // [rsp+1B8h] [rbp+B8h]
  int v111; // [rsp+1BCh] [rbp+BCh]
  __int64 *v112; // [rsp+1C0h] [rbp+C0h]
  __int64 v113; // [rsp+1C8h] [rbp+C8h]

  v3 = *(_QWORD *)(BugCheckParameter3 + 64);
  v74 = a2;
  LODWORD(v73) = 0;
  v5 = a3;
  v69.QuadPart = 0LL;
  v6 = *(unsigned int *)(v3 + 144);
  BugCheckParameter3a = 0LL;
  v8 = 0LL;
  v78 = 0LL;
  if ( (v6 & 1) != 0 )
    return 0;
  v9 = *(_DWORD *)(BugCheckParameter3 + 160);
  if ( (v9 & 0x10) == 0 && !*(_QWORD *)(BugCheckParameter3 + 1544) )
    return 0;
  if ( (v9 & 0x8001) != 0 || !*(_DWORD *)(BugCheckParameter3 + 168) )
    return 0;
  if ( !(unsigned __int8)CmpAcquireShutdownRundown(v6, a2, a3) )
  {
    v10 = -1073741431;
LABEL_37:
    if ( (unsigned int)dword_140C04390 > 5 && tlgKeywordOn((__int64)&dword_140C04390, 0x400000000000LL) )
    {
      v67 = v10;
      v80 = &v67;
      v81 = 4LL;
      v82 = &v76;
      v76 = 0x1000000LL;
      v83 = 8LL;
      tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140C04390, (unsigned __int8 *)byte_14003790B, 0LL, 0LL, 4u, v79);
    }
    return (unsigned int)v10;
  }
  if ( (v5 & 0x400000) != 0 && ExIsSoftBoot() )
  {
    v12 = *(_QWORD *)(*(_QWORD *)(BugCheckParameter3 + 64) + 168LL) - 1LL;
    if ( v12 > 1 )
      goto LABEL_12;
  }
  CmSiQuerySystemTime(&v69);
  v13 = *(LARGE_INTEGER **)(BugCheckParameter3 + 64);
  v14 = v69.LowPart & 0xFFFFFFFC;
  v69.LowPart &= 0xFFFFFFFC;
  v15 = v13[21];
  if ( v15.QuadPart <= (unsigned __int64)v69.QuadPart )
  {
    v12 = 864000000000LL * (unsigned int)CmpReorganizeDelayDays;
    if ( v69.QuadPart - v15.QuadPart < v12 )
      goto LABEL_12;
  }
  if ( !a2 )
  {
    v12 = 0LL;
    *((_QWORD *)&v78 + 1) = v13 + 6;
    do
    {
      if ( !*((_WORD *)&v13[6].LowPart + (unsigned __int16)v12) )
        break;
      LOWORD(v12) = v12 + 1;
    }
    while ( (unsigned __int16)v12 < 0x1Fu );
    LOWORD(v12) = 2 * v12;
    LOWORD(v78) = v12;
    v74 = (__int64)&v78;
  }
  if ( v15.QuadPart == 2 || v15.QuadPart != 1 && (*(_DWORD *)(BugCheckParameter3 + 4112) & 0x400) == 0 )
  {
    v69.LowPart = v14 | 2;
    CmpClearKeyAccessBits(BugCheckParameter3);
    CmpLockRegistry(v17, v16, v18, v19);
    v20 = KeAbPreAcquire(BugCheckParameter3 + 72, 0LL);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(BugCheckParameter3 + 72), 17LL, 0LL) )
      ExfAcquirePushLockSharedEx((signed __int64 *)(BugCheckParameter3 + 72), 0LL, v20, BugCheckParameter3 + 72);
    if ( v20 )
      *(_BYTE *)(v20 + 18) = 1;
    v21 = KeAbPreAcquire(BugCheckParameter3 + 80, 0LL);
    v22 = v21;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter3 + 80), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(BugCheckParameter3 + 80), v21, BugCheckParameter3 + 80);
    if ( v22 )
      *(_BYTE *)(v22 + 18) = 1;
    HvMarkBaseBlockDirty(BugCheckParameter3);
    *(LARGE_INTEGER *)(*(_QWORD *)(BugCheckParameter3 + 64) + 168LL) = v69;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(BugCheckParameter3 + 80), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(BugCheckParameter3 + 80));
    KeAbPostRelease(BugCheckParameter3 + 80);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(BugCheckParameter3 + 72), 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(BugCheckParameter3 + 72));
    KeAbPostRelease(BugCheckParameter3 + 72);
    CmpUnlockRegistry(v24, v23, v25, v26);
    goto LABEL_12;
  }
  if ( v13[4].HighPart == -1 )
  {
LABEL_12:
    v10 = 0;
    goto LABEL_13;
  }
  v69.LowPart = v14 | 1;
  v10 = CmpCreateEmptyHiveClone(&BugCheckParameter3a, BugCheckParameter3);
  if ( v10 < 0 )
    goto LABEL_110;
  v27 = BugCheckParameter3a;
  v10 = CmpCopyKeyPartial(BugCheckParameter3, 6, v66, 0, (__int64)&v73);
  if ( v10 >= 0 )
  {
    v28 = v73;
    *(_DWORD *)(*(_QWORD *)(v27 + 64) + 36LL) = v73;
    HvMarkBaseBlockDirty(v27);
    v10 = CmpCopySyncTree(BugCheckParameter3, *(_DWORD *)(*(_QWORD *)(BugCheckParameter3 + 64) + 36LL), v27, v28, 66, 0);
    if ( v10 >= 0 )
    {
      Pool = CmpAllocatePool(256LL, 432LL, 859393347LL);
      v8 = Pool;
      if ( !Pool )
      {
        v10 = -1073741670;
        goto LABEL_111;
      }
      v10 = CmCheckRegistry(v27);
      if ( v10 >= 0 )
      {
        v41 = *(unsigned int *)(*(_QWORD *)(BugCheckParameter3 + 64) + 4088LL);
        if ( (v41 & 4) == 0 )
        {
          v42 = *(unsigned int *)(BugCheckParameter3 + 4764);
          if ( (_DWORD)v42 != *(_DWORD *)(v27 + 4764) )
          {
            if ( (unsigned int)dword_140C04390 > 5 && tlgKeywordOn((__int64)&dword_140C04390, 0x400000000000LL) )
            {
              v67 = v42;
              v80 = &v67;
              v81 = 4LL;
              v82 = (__int64 *)&v68;
              v68 = v43;
              p_Pool = &Pool;
              v83 = 4LL;
              Pool = 0x1000000LL;
              v85 = 8LL;
              tlgWriteTransfer_EtwWriteTransfer(
                (__int64)&dword_140C04390,
                (unsigned __int8 *)&word_140037736,
                0LL,
                0LL,
                5u,
                v79);
            }
            CmpLockRegistry(v41, v14, v29, v42);
            v44 = KeAbPreAcquire(BugCheckParameter3 + 72, 0LL);
            if ( _InterlockedCompareExchange64((volatile signed __int64 *)(BugCheckParameter3 + 72), 17LL, 0LL) )
              ExfAcquirePushLockSharedEx((signed __int64 *)(BugCheckParameter3 + 72), 0LL, v44, BugCheckParameter3 + 72);
            if ( v44 )
              *(_BYTE *)(v44 + 18) = 1;
            v45 = KeAbPreAcquire(BugCheckParameter3 + 80, 0LL);
            v46 = v45;
            if ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter3 + 80), 0LL) )
              ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(BugCheckParameter3 + 80), v45, BugCheckParameter3 + 80);
            if ( v46 )
              *(_BYTE *)(v46 + 18) = 1;
            HvMarkBaseBlockDirty(BugCheckParameter3);
            *(LARGE_INTEGER *)(*(_QWORD *)(BugCheckParameter3 + 64) + 168LL) = v69;
            if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(BugCheckParameter3 + 80), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock((volatile signed __int64 *)(BugCheckParameter3 + 80));
            KeAbPostRelease(BugCheckParameter3 + 80);
            if ( _InterlockedCompareExchange64((volatile signed __int64 *)(BugCheckParameter3 + 72), 0LL, 17LL) != 17 )
              ExfReleasePushLockShared((signed __int64 *)(BugCheckParameter3 + 72));
            KeAbPostRelease(BugCheckParameter3 + 72);
            CmpUnlockRegistry(v48, v47, v49, v50);
            v10 = -1073741492;
            goto LABEL_110;
          }
        }
        *(_QWORD *)(v27 + 56) = 0LL;
        v51 = *(_DWORD *)(v27 + 280);
        v52 = *(_DWORD *)(BugCheckParameter3 + 280);
        CmpSwapHiveStorage(BugCheckParameter3, v27);
        if ( (unsigned int)dword_140C04390 > 5 && tlgKeywordOn((__int64)&dword_140C04390, 0x400000000000LL) )
        {
          v57 = *(_QWORD *)(*(_QWORD *)(BugCheckParameter3 + 64) + 168LL);
          v80 = (int *)&v77;
          v82 = (__int64 *)&v67;
          p_Pool = (__int64 *)&v68;
          v86 = &v76;
          v77 = v57;
          v81 = 8LL;
          v67 = v52;
          v83 = 4LL;
          v68 = v51;
          v85 = 4LL;
          v76 = 0x1000000LL;
          v87 = 8LL;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_140C04390,
            (unsigned __int8 *)byte_14003794D,
            0LL,
            0LL,
            6u,
            v79);
        }
        CmpLockRegistry(v54, v53, v55, v56);
        v58 = (signed __int64 *)(BugCheckParameter3 + 72);
        v59 = KeAbPreAcquire(BugCheckParameter3 + 72, 0LL);
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)(BugCheckParameter3 + 72), 17LL, 0LL) )
          ExfAcquirePushLockSharedEx((signed __int64 *)(BugCheckParameter3 + 72), 0LL, v59, BugCheckParameter3 + 72);
        if ( v59 )
          *(_BYTE *)(v59 + 18) = 1;
        v60 = KeAbPreAcquire(BugCheckParameter3 + 80, 0LL);
        v61 = v60;
        if ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter3 + 80), 0LL) )
          ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(BugCheckParameter3 + 80), v60, BugCheckParameter3 + 80);
        if ( v61 )
          *(_BYTE *)(v61 + 18) = 1;
        HvMarkBaseBlockDirty(BugCheckParameter3);
        *(LARGE_INTEGER *)(*(_QWORD *)(BugCheckParameter3 + 64) + 168LL) = v69;
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(BugCheckParameter3 + 80), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)(BugCheckParameter3 + 80));
        KeAbPostRelease(BugCheckParameter3 + 80);
        if ( _InterlockedCompareExchange64(v58, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared(v58);
        KeAbPostRelease((ULONG_PTR)v58);
        CmpUnlockRegistry(v63, v62, v64, v65);
        CmpLogReorganizeEvent(v74, v52, v51);
        if ( v51 < v52 )
        {
          if ( CmpFirstReorganize )
          {
            CmpReorganizeLastRun = v69;
            CmpReorganizeTotalBytesSaved = 0LL;
            CmpFirstReorganize = 0;
          }
          CmpReorganizeTotalBytesSaved += v52 - v51;
          CmpUpdateReorganizeRegistryValues();
        }
        v10 = 0;
      }
      else
      {
        if ( (unsigned int)dword_140C04390 > 5 && tlgKeywordOn((__int64)&dword_140C04390, 0x400000000000LL) )
        {
          v67 = v10;
          v89 = &v67;
          v91 = &v70;
          v31 = *(unsigned __int16 *)(v8 + 8);
          v32 = *(unsigned __int16 *)(v8 + 10);
          v97 = v8 + 8;
          v93 = &v71;
          v99 = v8 + 12;
          v33 = *(unsigned __int8 *)(v8 + 394);
          v100 = 12 * v31;
          v104 = v8 + 108;
          v105 = 12 * v32;
          v109 = v8 + 396;
          v112 = &v74;
          LOWORD(v68) = v33;
          v70 = v31;
          v71 = v32;
          v102 = v8 + 10;
          v107 = v8 + 394;
          v90 = 4LL;
          v92 = 2LL;
          v94 = 2LL;
          v95 = (int *)&v68;
          v96 = 2LL;
          v98 = 2LL;
          v101 = 0;
          v103 = 2LL;
          v106 = 0;
          v108 = 2LL;
          v110 = 8 * v33;
          v111 = 0;
          v74 = 0x1000000LL;
          v113 = 8LL;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_140C04390,
            (unsigned __int8 *)&dword_14003779D + 1,
            0LL,
            0LL,
            0xDu,
            &v88);
        }
        if ( v10 != -1073741492 && v10 != -2147483606 )
          goto LABEL_111;
        CmpLockRegistry(v12, v14, v29, v30);
        v34 = KeAbPreAcquire(BugCheckParameter3 + 72, 0LL);
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)(BugCheckParameter3 + 72), 17LL, 0LL) )
          ExfAcquirePushLockSharedEx((signed __int64 *)(BugCheckParameter3 + 72), 0LL, v34, BugCheckParameter3 + 72);
        if ( v34 )
          *(_BYTE *)(v34 + 18) = 1;
        v35 = KeAbPreAcquire(BugCheckParameter3 + 80, 0LL);
        v36 = v35;
        if ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter3 + 80), 0LL) )
          ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(BugCheckParameter3 + 80), v35, BugCheckParameter3 + 80);
        if ( v36 )
          *(_BYTE *)(v36 + 18) = 1;
        HvMarkBaseBlockDirty(BugCheckParameter3);
        *(LARGE_INTEGER *)(*(_QWORD *)(BugCheckParameter3 + 64) + 168LL) = v69;
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(BugCheckParameter3 + 80), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)(BugCheckParameter3 + 80));
        KeAbPostRelease(BugCheckParameter3 + 80);
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)(BugCheckParameter3 + 72), 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)(BugCheckParameter3 + 72));
        KeAbPostRelease(BugCheckParameter3 + 72);
        CmpUnlockRegistry(v38, v37, v39, v40);
      }
      v8 = Pool;
LABEL_110:
      v27 = BugCheckParameter3a;
    }
  }
LABEL_111:
  if ( v27 )
    CmpDestroyHive((PVOID)v27);
LABEL_13:
  CmpReleaseShutdownRundown(v12, v14);
  if ( v8 )
    CmSiFreeMemory((PPRIVILEGE_SET)v8);
  if ( v10 < 0 )
    goto LABEL_37;
  return (unsigned int)v10;
}
