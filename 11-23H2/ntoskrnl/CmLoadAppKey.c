/*
 * XREFs of CmLoadAppKey @ 0x140769830
 * Callers:
 *     CmLoadDifferencingKey @ 0x14069108C (CmLoadDifferencingKey.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140208C40 (CmSiFreeMemory.c)
 *     _tlgKeywordOn @ 0x140212E64 (_tlgKeywordOn.c)
 *     _tlgWriteAgg @ 0x140212E94 (_tlgWriteAgg.c)
 *     CmpAllocatePool @ 0x14022CFFC (CmpAllocatePool.c)
 *     ObfDereferenceObject @ 0x140231660 (ObfDereferenceObject.c)
 *     KeSetEvent @ 0x14023C6B0 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x140243DB0 (KeWaitForSingleObject.c)
 *     ExAcquireRundownProtection_0 @ 0x14028B5F0 (ExAcquireRundownProtection_0.c)
 *     ExReleaseRundownProtection_0 @ 0x14028B620 (ExReleaseRundownProtection_0.c)
 *     KeInitializeEvent @ 0x1402AFB00 (KeInitializeEvent.c)
 *     CmpLoadKeyCommon @ 0x1402F682C (CmpLoadKeyCommon.c)
 *     SetFailureLocation @ 0x1402F6C80 (SetFailureLocation.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402F6DB4 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ExWaitForRundownProtectionRelease @ 0x14030A5D0 (ExWaitForRundownProtectionRelease.c)
 *     ExBlockOnAddressPushLock @ 0x140348930 (ExBlockOnAddressPushLock.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B2D0 (ZwClose.c)
 *     memset @ 0x140435E00 (memset.c)
 *     CmpCheckHivePrimaryFileReadWriteAccess @ 0x1406168E8 (CmpCheckHivePrimaryFileReadWriteAccess.c)
 *     CmpCmdHiveOpen @ 0x14068B2C0 (CmpCmdHiveOpen.c)
 *     CmpOpenHiveFile @ 0x14068BA80 (CmpOpenHiveFile.c)
 *     CmpConstructNameWithStatus @ 0x1406D7BE0 (CmpConstructNameWithStatus.c)
 *     CmpReferenceKeyControlBlockUnsafe @ 0x1406D92F8 (CmpReferenceKeyControlBlockUnsafe.c)
 *     RtlEqualUnicodeString @ 0x1406DA320 (RtlEqualUnicodeString.c)
 *     ObReferenceObjectByHandle @ 0x1406E62F0 (ObReferenceObjectByHandle.c)
 *     CmpDeleteHive @ 0x14074E8C4 (CmpDeleteHive.c)
 *     UNLOCK_HIVE_LOAD @ 0x140752020 (UNLOCK_HIVE_LOAD.c)
 *     LOCK_HIVE_LOAD @ 0x140752098 (LOCK_HIVE_LOAD.c)
 *     CmpLockRegistryFreezeAware @ 0x1407539D8 (CmpLockRegistryFreezeAware.c)
 *     CmpGetNextHive @ 0x14076A140 (CmpGetNextHive.c)
 *     CmpIsThisSameFile @ 0x14076A85C (CmpIsThisSameFile.c)
 *     CmpUnlockAppHiveLoadList @ 0x1407D59C0 (CmpUnlockAppHiveLoadList.c)
 *     CmpLockAppHiveLoadList @ 0x1407D7384 (CmpLockAppHiveLoadList.c)
 *     CmpGetLastHive @ 0x1407D8E44 (CmpGetLastHive.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     CmpReleaseHiveLoadUnloadRundown @ 0x140AF5008 (CmpReleaseHiveLoadUnloadRundown.c)
 *     CmpAcquireHiveLoadUnloadRundown @ 0x140AF502C (CmpAcquireHiveLoadUnloadRundown.c)
 *     CmpDetachFromRegistryProcess @ 0x140AF5230 (CmpDetachFromRegistryProcess.c)
 *     CmpAttachToRegistryProcess @ 0x140AF5250 (CmpAttachToRegistryProcess.c)
 *     CmpUnlockRegistry @ 0x140AF54F0 (CmpUnlockRegistry.c)
 */

__int64 __fastcall CmLoadAppKey(
        _QWORD *a1,
        const UNICODE_STRING *a2,
        int a3,
        __int64 a4,
        struct _KEVENT *a5,
        POBJECT_HANDLE_INFORMATION a6,
        char a7,
        const UNICODE_STRING **a8,
        ULONG_PTR *a9)
{
  __int64 Pool; // rsi
  const UNICODE_STRING *v10; // rdi
  unsigned __int16 *v12; // rax
  char v13; // r15
  __int64 LastHive; // r14
  unsigned int v15; // ecx
  _QWORD *v16; // r12
  unsigned int i; // edx
  __int64 v18; // r8
  int v19; // edx
  int v20; // ecx
  int v21; // edx
  int v22; // eax
  int KeyCommon; // ebx
  __int64 j; // rbx
  int v25; // eax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  void *k; // rcx
  __int64 NextHive; // rax
  __int64 v32; // rdi
  _QWORD *v33; // rbx
  __int64 v34; // rcx
  int v35; // eax
  __int64 v36; // rcx
  __int64 v37; // r8
  const UNICODE_STRING **v38; // rbx
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  ULONG_PTR *v43; // rcx
  __int64 v44; // rdx
  __int64 v45; // r8
  __int64 v46; // r9
  __int64 v47; // rcx
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // r8
  unsigned int v51; // r9d
  int v52; // r11d
  int v53; // r9d
  int v54; // r10d
  _QWORD *v56; // rax
  __int64 v57; // rbx
  struct _EX_RUNDOWN_REF *v58; // rbx
  __int64 v59; // rdx
  _QWORD *v60; // rcx
  _QWORD *v61; // rax
  int v62; // r9d
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // r8
  __int64 v66; // r9
  __int64 v67; // r8
  int v68; // edx
  int v69; // r9d
  int v70; // r10d
  int Object; // [rsp+20h] [rbp-E0h]
  _WORD v72[2]; // [rsp+60h] [rbp-A0h] BYREF
  char v73; // [rsp+64h] [rbp-9Ch] BYREF
  char v74; // [rsp+65h] [rbp-9Bh] BYREF
  char v75; // [rsp+66h] [rbp-9Ah]
  int v76; // [rsp+68h] [rbp-98h] BYREF
  int v77; // [rsp+6Ch] [rbp-94h] BYREF
  int v78; // [rsp+70h] [rbp-90h] BYREF
  int v79; // [rsp+74h] [rbp-8Ch] BYREF
  __int64 v80; // [rsp+78h] [rbp-88h] BYREF
  __int64 v81; // [rsp+80h] [rbp-80h] BYREF
  HANDLE Handle; // [rsp+88h] [rbp-78h] BYREF
  int v83; // [rsp+90h] [rbp-70h] BYREF
  int v84; // [rsp+94h] [rbp-6Ch] BYREF
  const UNICODE_STRING *v85; // [rsp+98h] [rbp-68h] BYREF
  PVOID P; // [rsp+A0h] [rbp-60h] BYREF
  int v87; // [rsp+A8h] [rbp-58h]
  int v88; // [rsp+ACh] [rbp-54h]
  _BYTE v89[80]; // [rsp+B0h] [rbp-50h] BYREF
  PVOID v90; // [rsp+100h] [rbp+0h] BYREF
  POBJECT_HANDLE_INFORMATION v91; // [rsp+108h] [rbp+8h]
  PVOID v92; // [rsp+110h] [rbp+10h] BYREF
  ULONG_PTR *v93; // [rsp+118h] [rbp+18h]
  char *v94; // [rsp+120h] [rbp+20h] BYREF
  const UNICODE_STRING **v95; // [rsp+128h] [rbp+28h]
  struct _EVENT_DATA_DESCRIPTOR v96[3]; // [rsp+130h] [rbp+30h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v97; // [rsp+160h] [rbp+60h] BYREF
  __int64 *v98; // [rsp+180h] [rbp+80h]
  __int64 v99; // [rsp+188h] [rbp+88h]
  int *v100; // [rsp+190h] [rbp+90h]
  __int64 v101; // [rsp+198h] [rbp+98h]
  __int64 *v102; // [rsp+1A0h] [rbp+A0h]
  __int64 v103; // [rsp+1A8h] [rbp+A8h]
  __int64 *v104; // [rsp+1B0h] [rbp+B0h]
  __int64 v105; // [rsp+1B8h] [rbp+B8h]
  __int64 v106; // [rsp+1C0h] [rbp+C0h]
  __int64 v107; // [rsp+1C8h] [rbp+C8h]
  __int64 v108; // [rsp+1D0h] [rbp+D0h]
  int v109; // [rsp+1D8h] [rbp+D8h]
  int v110; // [rsp+1DCh] [rbp+DCh]
  __int64 v111; // [rsp+1E0h] [rbp+E0h]
  __int64 v112; // [rsp+1E8h] [rbp+E8h]
  __int64 v113; // [rsp+1F0h] [rbp+F0h]
  int v114; // [rsp+1F8h] [rbp+F8h]
  int v115; // [rsp+1FCh] [rbp+FCh]
  __int64 v116; // [rsp+200h] [rbp+100h]
  __int64 v117; // [rsp+208h] [rbp+108h]
  __int64 v118; // [rsp+210h] [rbp+110h]
  int v119; // [rsp+218h] [rbp+118h]
  int v120; // [rsp+21Ch] [rbp+11Ch]
  struct _EVENT_DATA_DESCRIPTOR v121; // [rsp+220h] [rbp+120h] BYREF
  __int64 *v122; // [rsp+240h] [rbp+140h]
  __int64 v123; // [rsp+248h] [rbp+148h]
  int *v124; // [rsp+250h] [rbp+150h]
  __int64 v125; // [rsp+258h] [rbp+158h]
  _WORD *v126; // [rsp+260h] [rbp+160h]
  __int64 v127; // [rsp+268h] [rbp+168h]
  int *v128; // [rsp+270h] [rbp+170h]
  __int64 v129; // [rsp+278h] [rbp+178h]
  int *v130; // [rsp+280h] [rbp+180h]
  __int64 v131; // [rsp+288h] [rbp+188h]
  __int64 v132; // [rsp+290h] [rbp+190h]
  __int64 v133; // [rsp+298h] [rbp+198h]
  __int64 v134; // [rsp+2A0h] [rbp+1A0h]
  int v135; // [rsp+2A8h] [rbp+1A8h]
  int v136; // [rsp+2ACh] [rbp+1ACh]
  __int64 v137; // [rsp+2B0h] [rbp+1B0h]
  __int64 v138; // [rsp+2B8h] [rbp+1B8h]
  __int64 v139; // [rsp+2C0h] [rbp+1C0h]
  int v140; // [rsp+2C8h] [rbp+1C8h]
  int v141; // [rsp+2CCh] [rbp+1CCh]
  __int64 v142; // [rsp+2D0h] [rbp+1D0h]
  __int64 v143; // [rsp+2D8h] [rbp+1D8h]
  __int64 v144; // [rsp+2E0h] [rbp+1E0h]
  int v145; // [rsp+2E8h] [rbp+1E8h]
  int v146; // [rsp+2ECh] [rbp+1ECh]
  __int64 *v147; // [rsp+2F0h] [rbp+1F0h]
  __int64 v148; // [rsp+2F8h] [rbp+1F8h]

  Pool = 0LL;
  v10 = a2;
  v80 = (__int64)a5;
  v95 = a8;
  v77 = a3;
  v85 = a2;
  v93 = a9;
  v81 = a4;
  v91 = a6;
  v83 = 0;
  Handle = 0LL;
  memset(v89, 0, sizeof(v89));
  v12 = (unsigned __int16 *)a1[2];
  v73 = 0;
  memset(v96, 0, sizeof(v96));
  LOBYTE(v72[0]) = 0;
  v13 = 0;
  v75 = 0;
  LastHive = 0LL;
  v15 = *v12;
  v16 = 0LL;
  P = 0LL;
  if ( (unsigned __int16)v15 >= 2u )
  {
    for ( i = v15 >> 1; i; *(_WORD *)v18 -= 2 )
    {
      v18 = a1[2];
      if ( *(_WORD *)(*(_QWORD *)(v18 + 8) + 2LL * --i) != 92 )
        break;
    }
  }
  if ( *(_WORD *)a1[2] < 2u )
  {
    KeyCommon = -1073741811;
    goto LABEL_123;
  }
  Pool = CmpAllocatePool(256LL, 432LL, 859393347LL);
  if ( !Pool )
  {
    KeyCommon = -1073741670;
    goto LABEL_123;
  }
  if ( !(unsigned __int8)CmpAcquireHiveLoadUnloadRundown() )
  {
    KeyCommon = -1073741431;
    goto LABEL_57;
  }
  v88 = v77 & 0x20;
  v19 = (v88 != 0 ? 119078913 : 51970049) | 0x8000000;
  if ( (v77 & 0x80u) == 0 )
    v19 = v88 != 0 ? 119078913 : 51970049;
  v20 = v19 | 0x10000000;
  if ( (v77 & 0x200) == 0 )
    v20 = v19;
  v87 = v20;
  v76 = v77 & 0x2000;
  v21 = (v76 != 0) | 0x20;
  if ( (v77 & 0x8000) == 0 )
    v21 = (v77 & 0x2000) != 0;
  v78 = v21;
  v22 = CmpOpenHiveFile(v10, 0, &Handle, &v83, 8u, a6, 0LL, 0LL, (__int64)&P, Pool);
  KeyCommon = v22;
  if ( v22 == -1073741772 )
  {
    LOBYTE(v72[0]) = 1;
    *(_QWORD *)&v89[32] = v10;
    v89[40] = 1;
  }
  else
  {
    if ( v22 < 0 )
    {
      SetFailureLocation(Pool, 0, 32, v22, 16);
      goto LABEL_51;
    }
    v90 = 0LL;
    KeyCommon = ObReferenceObjectByHandle(Handle, 0, *(POBJECT_TYPE *)CmIoFileObjectType, 0, &v90, 0LL);
    v16 = v90;
    ZwClose(Handle);
    if ( KeyCommon < 0 )
    {
      SetFailureLocation(Pool, 0, 32, KeyCommon, 32);
      goto LABEL_49;
    }
    *(_QWORD *)&v89[32] = v16[5];
    v89[40] = 0;
  }
  KeInitializeEvent((PRKEVENT)&v89[48], NotificationEvent, 0);
  *(_QWORD *)&v89[72] = 0LL;
  *(_QWORD *)&v89[24] = &v89[16];
  *(_QWORD *)&v89[16] = &v89[16];
  CmpLockAppHiveLoadList();
  for ( j = CmpAppHiveLoadList; ; j = *(_QWORD *)j )
  {
    if ( (__int64 *)j == &CmpAppHiveLoadList )
    {
      if ( *(__int64 **)qword_140C13DE8 == &CmpAppHiveLoadList )
      {
        *(_QWORD *)v89 = &CmpAppHiveLoadList;
        *(_QWORD *)&v89[8] = qword_140C13DE8;
        *(_QWORD *)qword_140C13DE8 = v89;
        qword_140C13DE8 = (__int64)v89;
        CmpUnlockAppHiveLoadList();
        goto LABEL_21;
      }
LABEL_81:
      __fastfail(3u);
    }
    if ( *(_BYTE *)(j + 40) )
      break;
    if ( *(_QWORD *)(j + 32) == *(_QWORD *)&v89[32] )
      goto LABEL_72;
LABEL_71:
    ;
  }
  if ( !RtlEqualUnicodeString(*(PCUNICODE_STRING *)(j + 32), v10, 1u) )
    goto LABEL_71;
LABEL_72:
  v56 = *(_QWORD **)(j + 24);
  v57 = j + 16;
  if ( *v56 != v57 )
    goto LABEL_81;
  *(_QWORD *)&v89[24] = v56;
  *(_QWORD *)&v89[16] = v57;
  *v56 = &v89[16];
  *(_QWORD *)(v57 + 8) = &v89[16];
  v58 = *(struct _EX_RUNDOWN_REF **)&v89[24];
  ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(*(_QWORD *)&v89[24] + 56LL));
  CmpUnlockAppHiveLoadList();
  KeWaitForSingleObject(&v58[4], Executive, 0, 0, 0LL);
  ExReleaseRundownProtection_0(v58 + 7);
  while ( 1 )
  {
LABEL_21:
    v94 = 0LL;
    v74 = 1;
    v73 = 0;
    v25 = CmpCmdHiveOpen((int)v10, 1, (int)&v74, (__int64)&v94, v87, v78, (__int64)v91, (__int64)&v73, (void *)Pool);
    KeyCommon = v25;
    if ( !v25 )
    {
      KeyCommon = CmpLoadKeyCommon(v94, a1, v77, v81, 0LL, (struct _KEVENT *)v80, a7, v93, v74, v73, Pool);
      goto LABEL_43;
    }
    if ( v25 != -1073741757 || v88 || v13 )
    {
      SetFailureLocation(Pool, 0, 32, v25, 48);
      goto LABEL_43;
    }
    if ( LOBYTE(v72[0]) )
    {
      KeyCommon = CmpOpenHiveFile(v10, 0, &Handle, &v83, 8u, v91, 0LL, 0LL, (__int64)&P, Pool);
      if ( KeyCommon < 0 )
      {
        Object = 64;
        if ( KeyCommon == -1073741772 )
          KeyCommon = -1073741757;
LABEL_106:
        v62 = KeyCommon;
        goto LABEL_109;
      }
      v92 = 0LL;
      KeyCommon = ObReferenceObjectByHandle(Handle, 0, *(POBJECT_TYPE *)CmIoFileObjectType, 0, &v92, 0LL);
      v16 = v92;
      ZwClose(Handle);
      if ( KeyCommon < 0 )
      {
        Object = 80;
        goto LABEL_106;
      }
    }
    LOCK_HIVE_LOAD();
    CmpLockRegistryFreezeAware(1);
    LastHive = CmpGetLastHive();
    if ( LastHive )
      break;
    CmpUnlockRegistry(v27, v26, v28, v29);
    UNLOCK_HIVE_LOAD();
    v13 = 1;
  }
LABEL_27:
  while ( 1 )
  {
    v79 = CmpActiveAppHiveUnloadCount;
    if ( !CmpActiveAppHiveUnloadCount )
      break;
    CmpUnlockRegistry(v27, v26, v28, v29);
    UNLOCK_HIVE_LOAD();
    ExBlockOnAddressPushLock(&CmpActiveAppHiveUnloadEvent, &CmpActiveAppHiveUnloadCount, &v79, 4uLL, 0LL);
    LOCK_HIVE_LOAD();
    CmpLockRegistryFreezeAware(1);
  }
  for ( k = 0LL; ; k = (void *)v32 )
  {
    NextHive = CmpGetNextHive(k);
    v32 = NextHive;
    if ( !NextHive )
      goto LABEL_101;
    v33 = (_QWORD *)(NextHive + 4768);
    v27 = *(unsigned int *)(NextHive + 4768);
    v84 = v27;
    if ( (_DWORD)v27 )
    {
      CmpUnlockRegistry(v27, v26, v28, v29);
      UNLOCK_HIVE_LOAD();
      ExBlockOnAddressPushLock((volatile __int64 *)(v32 + 4776), v33, &v84, 4uLL, 0LL);
      LOCK_HIVE_LOAD();
      CmpLockRegistryFreezeAware(1);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v32 + 4232), 0xFFFFFFFF) == 1 )
        CmpDeleteHive((_QWORD *)v32);
      if ( v32 == LastHive )
        goto LABEL_101;
      goto LABEL_27;
    }
    v26 = *(_QWORD *)(NextHive + 1544);
    if ( v26 )
    {
      if ( (unsigned __int8)CmpIsThisSameFile(v16) )
        break;
    }
    if ( v32 == LastHive )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v32 + 4232), 0xFFFFFFFF) == 1 )
        CmpDeleteHive((_QWORD *)v32);
LABEL_101:
      CmpUnlockRegistry(v27, v26, v28, v29);
      UNLOCK_HIVE_LOAD();
      v10 = v85;
      v13 = 1;
      goto LABEL_21;
    }
  }
  v34 = *(unsigned int *)(v32 + 4112);
  v35 = *(_DWORD *)(v32 + 160) & 0x8000;
  if ( (v34 & 0x20) == 0 || (v34 & 0x40) != 0 )
  {
    CmpUnlockRegistry(v34, v26, v28, v29);
    UNLOCK_HIVE_LOAD();
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v32 + 4232), 0xFFFFFFFF) == 1 )
      CmpDeleteHive((_QWORD *)v32);
    Object = 96;
LABEL_108:
    KeyCommon = -1073741757;
    v62 = -1073741757;
LABEL_109:
    SetFailureLocation(Pool, 0, 32, v62, Object);
    goto LABEL_43;
  }
  if ( !v76 )
  {
    if ( !v35 )
      goto LABEL_39;
    CmpUnlockRegistry(v34, v26, v28, v29);
    UNLOCK_HIVE_LOAD();
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v32 + 4232), 0xFFFFFFFF) == 1 )
      CmpDeleteHive((_QWORD *)v32);
    Object = 112;
    goto LABEL_108;
  }
  if ( !v35 && !CmpCheckHivePrimaryFileReadWriteAccess(P) )
  {
    CmpUnlockRegistry(v64, v63, v65, v66);
    UNLOCK_HIVE_LOAD();
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v32 + 4232), 0xFFFFFFFF) == 1 )
      CmpDeleteHive((_QWORD *)v32);
    KeyCommon = -1073741790;
    Object = 128;
    goto LABEL_106;
  }
LABEL_39:
  CmpAttachToRegistryProcess(v96);
  v36 = *(_QWORD *)(v32 + 2936);
  v85 = 0LL;
  CmpConstructNameWithStatus(v36, &v85, v37);
  v38 = v95;
  *v95 = v85;
  CmpDetachFromRegistryProcess(v96);
  if ( *v38 )
  {
    CmpReferenceKeyControlBlockUnsafe(*(volatile signed __int64 **)(v32 + 2936));
    v43 = v93;
    *v93 = *(_QWORD *)(v32 + 2936);
    CmpUnlockRegistry(v43, v44, v45, v46);
    UNLOCK_HIVE_LOAD();
    KeyCommon = 0;
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v32 + 4232), 0xFFFFFFFF) == 1 )
      CmpDeleteHive((_QWORD *)v32);
    v75 = 1;
  }
  else
  {
    CmpUnlockRegistry(v40, v39, v41, v42);
    UNLOCK_HIVE_LOAD();
    KeyCommon = -1073741670;
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v32 + 4232), 0xFFFFFFFF) == 1 )
      CmpDeleteHive((_QWORD *)v32);
  }
LABEL_43:
  CmpLockAppHiveLoadList();
  v47 = *(_QWORD *)v89;
  v48 = *(_QWORD *)&v89[8];
  if ( *(_BYTE **)(*(_QWORD *)v89 + 8LL) != v89 || **(_BYTE ***)&v89[8] != v89 )
    goto LABEL_81;
  **(_QWORD **)&v89[8] = *(_QWORD *)v89;
  *(_QWORD *)(v47 + 8) = v48;
  v49 = *(_QWORD *)&v89[16];
  if ( *(_BYTE **)&v89[16] == &v89[16] )
    goto LABEL_46;
  v59 = *(_QWORD *)&v89[24];
  v60 = (_QWORD *)(*(_QWORD *)&v89[16] - 16LL);
  if ( *(_BYTE **)(*(_QWORD *)&v89[16] + 8LL) != &v89[16] )
    goto LABEL_81;
  if ( **(_BYTE ***)&v89[24] != &v89[16] )
    goto LABEL_81;
  **(_QWORD **)&v89[24] = *(_QWORD *)&v89[16];
  *(_QWORD *)(v49 + 8) = v59;
  v61 = (_QWORD *)qword_140C13DE8;
  if ( *(__int64 **)qword_140C13DE8 != &CmpAppHiveLoadList )
    goto LABEL_81;
  *v60 = &CmpAppHiveLoadList;
  v60[1] = v61;
  *v61 = v60;
  qword_140C13DE8 = (__int64)v60;
LABEL_46:
  CmpUnlockAppHiveLoadList();
  KeSetEvent((PRKEVENT)&v89[48], 0, 0);
  ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)&v89[72]);
  if ( LastHive && _InterlockedExchangeAdd((volatile signed __int32 *)(LastHive + 4232), 0xFFFFFFFF) == 1 )
    CmpDeleteHive((_QWORD *)LastHive);
LABEL_49:
  if ( v16 )
    ObfDereferenceObject(v16);
LABEL_51:
  if ( P )
    ExFreePoolWithTag(P, 0);
  CmpReleaseHiveLoadUnloadRundown();
  if ( KeyCommon < 0 )
  {
LABEL_57:
    if ( *(_WORD *)(Pool + 8) || *(_WORD *)(Pool + 10) || *(_BYTE *)(Pool + 394) )
    {
      if ( (unsigned int)dword_140C04390 > 5 )
      {
        if ( tlgKeywordOn((__int64)&dword_140C04390, 0x400000000008LL) )
        {
          v81 = 1LL;
          v53 = *(unsigned __int16 *)(Pool + 10);
          v54 = *(unsigned __int8 *)(Pool + 394);
          v122 = &v81;
          v124 = &v76;
          v126 = v72;
          v128 = &v78;
          v130 = &v77;
          v134 = Pool + 12;
          v139 = Pool + 108;
          v140 = 12 * v53;
          v144 = Pool + 396;
          v147 = &v80;
          LOWORD(v77) = v54;
          LOWORD(v78) = v53;
          v135 = 12 * v52;
          v137 = Pool + 10;
          v123 = 8LL;
          v76 = KeyCommon;
          v125 = 4LL;
          v72[0] = v52;
          v127 = 2LL;
          v129 = 2LL;
          v131 = 2LL;
          v132 = Pool + 8;
          v133 = 2LL;
          v136 = 0;
          v138 = 2LL;
          v141 = 0;
          v142 = Pool + 394;
          v143 = 2LL;
          v145 = 8 * v54;
          v146 = 0;
          v80 = 0x1000000LL;
          v148 = 8LL;
          tlgWriteAgg((__int64)&dword_140C04390, (unsigned __int8 *)&unk_1400370D0, Pool + 394, 0xEu, &v121);
          v51 = dword_140C04390;
        }
        if ( v51 > 5 && tlgKeywordOn((__int64)&dword_140C04390, 8LL) )
        {
          v68 = *(unsigned __int16 *)(Pool + 8);
          v69 = *(unsigned __int16 *)(Pool + 10);
          v70 = *(unsigned __int8 *)(Pool + 394);
          v98 = (__int64 *)&v76;
          v100 = &v77;
          v102 = (__int64 *)&v78;
          v104 = (__int64 *)v72;
          v108 = Pool + 12;
          v109 = 12 * v68;
          v113 = Pool + 108;
          v114 = 12 * v69;
          v118 = Pool + 396;
          v72[0] = v70;
          LOWORD(v77) = v68;
          LOWORD(v78) = v69;
          v111 = Pool + 10;
          v116 = Pool + 394;
          v76 = KeyCommon;
          v99 = 4LL;
          v101 = 2LL;
          v103 = 2LL;
          v105 = 2LL;
          v106 = Pool + 8;
          v107 = 2LL;
          v110 = 0;
          v112 = 2LL;
          v115 = 0;
          v117 = 2LL;
          v119 = 8 * v70;
          v120 = 0;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_140C04390,
            (unsigned __int8 *)&word_1400372F6,
            0LL,
            0LL,
            0xCu,
            &v97);
        }
      }
LABEL_64:
      if ( Pool )
        goto LABEL_65;
      return (unsigned int)KeyCommon;
    }
LABEL_123:
    if ( (unsigned int)dword_140C04390 > 5 && tlgKeywordOn((__int64)&dword_140C04390, 0x400000000008LL) )
    {
      v81 = 1LL;
      v98 = &v81;
      v99 = 8LL;
      v100 = &v76;
      v76 = KeyCommon;
      v102 = &v80;
      v101 = 4LL;
      v80 = 0x1000000LL;
      v103 = 8LL;
      tlgWriteAgg((__int64)&dword_140C04390, (unsigned __int8 *)&byte_140037233, v67, 5u, &v97);
    }
    goto LABEL_64;
  }
  if ( (unsigned int)dword_140C04390 > 5 && tlgKeywordOn((__int64)&dword_140C04390, 0x400000000008LL) )
  {
    v99 = 8LL;
    v81 = 1LL;
    v98 = &v81;
    v103 = 1LL;
    v100 = &v76;
    LOBYTE(v72[0]) = v75;
    v102 = (__int64 *)v72;
    v104 = &v80;
    v76 = KeyCommon;
    v101 = 4LL;
    v80 = 0x1000000LL;
    v105 = 8LL;
    tlgWriteAgg((__int64)&dword_140C04390, (unsigned __int8 *)&dword_14003728C, v50, 6u, &v97);
  }
LABEL_65:
  CmSiFreeMemory((PPRIVILEGE_SET)Pool);
  return (unsigned int)KeyCommon;
}
