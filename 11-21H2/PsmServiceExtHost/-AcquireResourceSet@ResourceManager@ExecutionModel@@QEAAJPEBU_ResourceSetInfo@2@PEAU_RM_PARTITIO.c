/*
 * XREFs of ?AcquireResourceSet@ResourceManager@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEAU_RM_PARTITION@@PEAXPEAUIResourceSetCallback@2@2PEBGPEAT_RM_SID@@KK_KKW4_HOST_GROUP@@PEAU_RM_ACTIVATOR@@PEA_N6PEAPEAVResourceSet@2@@Z @ 0x18001D9C0
 * Callers:
 *     ?RmSrvAcquireResourceSet@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_ResourceSetInfo@ExecutionModel@@PEAUIResourceSetCallback@3@PEAXPEBG3KK_KKW4_HOST_GROUP@@5PEAU_RM_ACTIVATOR@@PEA_N@Z @ 0x18001E940 (-RmSrvAcquireResourceSet@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_ResourceSetInfo@ExecutionModel@@PEAUI.c)
 * Callees:
 *     ?HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180016A20 (-HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?AcquireInternalResources@ResourceSet@ExecutionModel@@QEAAJW4Enum@PendType@2@PEA_N@Z @ 0x180018FC0 (-AcquireInternalResources@ResourceSet@ExecutionModel@@QEAAJW4Enum@PendType@2@PEA_N@Z.c)
 *     ?RmpActivityHostCanDelete@@YAKPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18001CAB0 (-RmpActivityHostCanDelete@@YAKPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x1800248A0 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     ?RmpActivityHostCreateHostPsm@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PARTITION@@PEAU_RM_PSM_HOST_INFO@@KPEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180024F40 (-RmpActivityHostCreateHostPsm@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PARTITION@@PEAU_RM_PSM_HOST_I.c)
 *     ?RmpActivityHostEnumerateResourceSetGetNext@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY_HOST_RESOURCE_SET_ENUMERATION_CONTEXT@@@Z @ 0x180029F54 (-RmpActivityHostEnumerateResourceSetGetNext@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY_.c)
 *     ?RmpActivityHostFinalCleanup@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800362A4 (-RmpActivityHostFinalCleanup@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     CempHeapFreeForHashTable @ 0x18003E714 (CempHeapFreeForHashTable.c)
 *     CempHeapAllocateForHashTable @ 0x18003E738 (CempHeapAllocateForHashTable.c)
 *     ?RmpSystemDuplicateHandle@@YAJPEAXKPEAPEAX@Z @ 0x18003E8F8 (-RmpSystemDuplicateHandle@@YAJPEAXKPEAPEAX@Z.c)
 *     ??0_ResourceInfo@ExecutionModel@@QEAA@XZ @ 0x18003F0D0 (--0_ResourceInfo@ExecutionModel@@QEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x18004DD94 (--3@YAXPEAX@Z.c)
 *     __security_check_cookie @ 0x18004E310 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x18004F7E8 (--2@YAPEAX_K@Z.c)
 *     memcpy_0 @ 0x180050222 (memcpy_0.c)
 *     memset_0 @ 0x18005023A (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180050280 (_guard_xfg_dispatch_icall_nop.c)
 *     ?RmpEmPriorityCompare@@YAJW4Enum@Priority@ExecutionModel@@0@Z @ 0x180083D1C (-RmpEmPriorityCompare@@YAJW4Enum@Priority@ExecutionModel@@0@Z.c)
 *     ?RmpActivityHostEnumerateResourceSetGetFirst@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY_HOST@@KW4_RM_RESOURCE_SET_CATEGORY@@@Z @ 0x180087118 (-RmpActivityHostEnumerateResourceSetGetFirst@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY.c)
 *     ?RmpResourceSetCleanup@@YAXPEAU_RM_RESOURCE_SET@@@Z @ 0x18008804C (-RmpResourceSetCleanup@@YAXPEAU_RM_RESOURCE_SET@@@Z.c)
 */

__int64 __fastcall ExecutionModel::ResourceManager::AcquireResourceSet(
        __int64 a1,
        __int128 *a2,
        struct _RM_PARTITION *a3,
        void *a4,
        __int64 a5,
        __int64 a6,
        wchar_t *Source,
        PSID Sid,
        int a9,
        int a10,
        __int64 a11,
        char a12,
        char a13,
        void *a14,
        _BYTE *a15,
        void *a16,
        _QWORD *a17)
{
  char *v19; // rax
  _BYTE *v20; // r13
  ExecutionModel::_ResourceInfo *v21; // rdi
  __int64 v22; // rbx
  _BYTE *v23; // rcx
  __int64 v24; // rax
  __int128 v25; // xmm0
  ULONG v26; // eax
  __int64 v27; // r12
  unsigned int v28; // r10d
  __int64 v29; // rdi
  __int64 v30; // r9
  __int64 v31; // r8
  int v32; // eax
  struct _RM_PARTITION *v33; // rdi
  void **Heap; // rax
  volatile signed __int64 *v35; // r14
  HANDLE v36; // rcx
  _QWORD *v37; // rax
  _QWORD *v38; // rsi
  ExecutionModel::_ResourceInfo *v39; // rbx
  __int64 v40; // rdi
  ExecutionModel::_ResourceInfo *v41; // rdi
  __int64 v42; // rbx
  __int64 v43; // rcx
  __int64 v44; // r15
  __int64 v45; // rbx
  unsigned int v46; // r9d
  unsigned __int64 v47; // r8
  volatile signed __int64 **v48; // rdx
  _QWORD *v49; // rcx
  _BYTE *v50; // rax
  __int64 v51; // rdx
  __int128 v52; // xmm0
  __int64 v53; // rdi
  __int64 v54; // rcx
  __int64 v55; // rdi
  __int64 v56; // rax
  _DWORD *v57; // rdi
  __int64 v58; // rcx
  _QWORD *v59; // rax
  struct _RM_PARTITION *v60; // r8
  _QWORD *v61; // r8
  _QWORD *v62; // r9
  _QWORD *v63; // rdi
  _QWORD *v64; // rcx
  _QWORD *v65; // rax
  int v66; // eax
  int v67; // r15d
  DWORD v68; // esi
  char *v69; // rbx
  _QWORD *Value; // rdi
  DWORD CurrentThreadId; // eax
  struct _RM_ACTIVITY_HOST *v72; // rcx
  __int64 *v73; // rax
  __int64 v74; // rdx
  signed __int64 v76; // r12
  bool v77; // cc
  signed __int64 v78; // r12
  char *v80; // r10
  char v81; // cl
  unsigned __int64 v82; // rcx
  unsigned int v83; // edx
  unsigned int v84; // r12d
  __int64 v85; // r11
  _QWORD **v86; // r9
  _QWORD *v87; // r8
  unsigned __int64 v88; // rcx
  unsigned int v89; // r9d
  int HostPsm; // r15d
  __int64 v91; // rcx
  struct ExecutionModel::ResourceSet *Next; // rax
  __int64 v93; // rcx
  int v94; // ecx
  int v95; // ecx
  int v96; // [rsp+30h] [rbp-D0h]
  PVOID P; // [rsp+38h] [rbp-C8h] BYREF
  struct _RM_PARTITION *v98; // [rsp+40h] [rbp-C0h]
  _BYTE *v99; // [rsp+48h] [rbp-B8h]
  __int64 v100; // [rsp+50h] [rbp-B0h]
  _QWORD v101[2]; // [rsp+58h] [rbp-A8h] BYREF
  HANDLE SourceHandle; // [rsp+68h] [rbp-98h]
  __int64 v103; // [rsp+70h] [rbp-90h]
  _QWORD *v104; // [rsp+78h] [rbp-88h]
  __int64 v105; // [rsp+80h] [rbp-80h]
  void *v106; // [rsp+90h] [rbp-70h]
  wchar_t Destination[232]; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v108[68]; // [rsp+270h] [rbp+170h] BYREF
  int v109; // [rsp+2B4h] [rbp+1B4h]
  int v110; // [rsp+2B8h] [rbp+1B8h]
  __int64 v111; // [rsp+2C0h] [rbp+1C0h]

  v103 = a5;
  v99 = a15;
  v104 = a17;
  SourceHandle = a4;
  v98 = a3;
  P = 0LL;
  v19 = (char *)operator new(0x178uLL);
  v20 = v19;
  if ( !v19 )
    return (unsigned int)-805306345;
  v21 = (ExecutionModel::_ResourceInfo *)(v19 + 80);
  v22 = 3LL;
  do
  {
    ExecutionModel::_ResourceInfo::_ResourceInfo(v21);
    v21 = (ExecutionModel::_ResourceInfo *)((char *)v21 + 24);
    --v22;
  }
  while ( v22 );
  v23 = v20;
  v24 = 2LL;
  do
  {
    v23 += 128;
    v25 = *a2;
    a2 += 8;
    *((_OWORD *)v23 - 8) = v25;
    *((_OWORD *)v23 - 7) = *(a2 - 7);
    *((_OWORD *)v23 - 6) = *(a2 - 6);
    *((_OWORD *)v23 - 5) = *(a2 - 5);
    *((_OWORD *)v23 - 4) = *(a2 - 4);
    *((_OWORD *)v23 - 3) = *(a2 - 3);
    *((_OWORD *)v23 - 2) = *(a2 - 2);
    *((_OWORD *)v23 - 1) = *(a2 - 1);
    --v24;
  }
  while ( v24 );
  *(_OWORD *)v23 = *a2;
  *((_OWORD *)v23 + 1) = a2[1];
  *((_OWORD *)v23 + 2) = a2[2];
  *((_OWORD *)v23 + 3) = a2[3];
  *((_OWORD *)v23 + 4) = a2[4];
  *((_OWORD *)v23 + 5) = a2[5];
  *((_OWORD *)v23 + 6) = a2[6];
  *((_QWORD *)v23 + 14) = *((_QWORD *)a2 + 14);
  memset_0(Destination, 0, 0x228uLL);
  wcscpy_s(Destination, 0xE8uLL, Source);
  memset_0(v108, 0, sizeof(v108));
  v26 = RtlLengthSid(Sid);
  memcpy_0(v108, Sid, v26);
  v27 = *(_QWORD *)(a1 + 128);
  v109 = a9;
  v110 = a10;
  v111 = a11;
  RtlAcquireSRWLockShared(v27 + 32);
  v28 = *(_DWORD *)(v27 + 20);
  v29 = 0LL;
  v105 = a11;
  v30 = -1LL << (v28 & 0x1F);
  v31 = v30 & (HIBYTE(a11)
             + 37
             * (BYTE6(a11)
              + 37
              * (BYTE5(a11)
               + 37
               * (BYTE4(a11)
                + 37 * (BYTE3(a11) + 37 * (BYTE2(a11) + 37 * (BYTE1(a11) + 37 * ((unsigned __int8)a11 + 11623883LL))))))));
LABEL_7:
  if ( v29 )
    goto LABEL_10;
  if ( v28 >> 5 )
  {
    v29 = *(_QWORD *)(v27 + 24)
        + 8LL
        * ((37
          * (BYTE6(v31)
           + 37
           * (BYTE5(v31)
            + 37
            * (BYTE4(v31)
             + 37 * (BYTE3(v31) + 37 * (BYTE2(v31) + 37 * (BYTE1(v31) + 37 * ((unsigned __int8)v31 + 11623883)))))))
          + HIBYTE(v31)) & ((v28 >> 5) - 1));
LABEL_10:
    while ( 1 )
    {
      v29 = *(_QWORD *)v29;
      if ( (v29 & 1) != 0 )
        break;
      if ( v31 == (v30 & *(_QWORD *)(v29 + 8)) )
      {
        if ( a11 != *(_QWORD *)(v29 + 32) )
          goto LABEL_7;
        if ( _InterlockedIncrement64((volatile signed __int64 *)(v29 + 16)) <= 1 )
          __fastfail(0xEu);
        RtlReleaseSRWLockShared(v27 + 32);
        if ( *(_BYTE *)(v29 + 656) != a13 && a13 != 3 )
        {
          RmpObjectRelease((PVOID)v29);
          goto LABEL_83;
        }
        v32 = *(_DWORD *)(v29 + 852) ^ (*((unsigned __int16 *)v20 + 20) >> 5);
        P = (PVOID)v29;
        if ( (v32 & 1) == 0 )
        {
          v33 = v98;
          goto LABEL_17;
        }
        v67 = -805306320;
        goto LABEL_48;
      }
    }
  }
  RtlReleaseSRWLockShared(v27 + 32);
LABEL_83:
  v89 = 0;
  if ( (a12 & 1) != 0 )
    v89 = 8;
  v33 = v98;
  HostPsm = RmpActivityHostCreateHostPsm(
              *(struct _RM_SERVICE_GLOBALS **)(a1 + 128),
              v98,
              (struct _RM_PSM_HOST_INFO *)Destination,
              v89,
              (struct _RM_ACTIVITY_HOST **)&P);
  if ( HostPsm < 0 )
  {
LABEL_121:
    v67 = HostPsm | 0x10000000;
    goto LABEL_48;
  }
LABEL_17:
  if ( (v20[42] & 7) == 4 )
  {
    v101[1] = 3LL;
    v101[0] = RmpActivityHostEnumerateResourceSetGetFirst(P, 3LL);
    Next = RmpActivityHostEnumerateResourceSetGetNext((struct _RM_ACTIVITY_HOST_RESOURCE_SET_ENUMERATION_CONTEXT *)v101);
    if ( Next )
    {
      while ( !*((_QWORD *)Next + 175) )
      {
        Next = RmpActivityHostEnumerateResourceSetGetNext((struct _RM_ACTIVITY_HOST_RESOURCE_SET_ENUMERATION_CONTEXT *)v101);
        if ( !Next )
          goto LABEL_18;
      }
      v67 = -805305980;
      goto LABEL_48;
    }
  }
LABEL_18:
  if ( !v99 )
    goto LABEL_104;
  if ( a10 == 2 )
  {
    v96 = 11;
    goto LABEL_21;
  }
  if ( a10 == 4 || a10 == 8 )
    v96 = 12;
  else
LABEL_104:
    v96 = -1;
LABEL_21:
  v100 = *(_QWORD *)(a1 + 32);
  Heap = (void **)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x60uLL);
  v35 = (volatile signed __int64 *)Heap;
  if ( Heap )
  {
    Heap[6] = 0LL;
    *((_OWORD *)Heap + 4) = 0LL;
    *((_OWORD *)Heap + 5) = 0LL;
    *Heap = 0LL;
    Heap[3] = 0LL;
    Heap[4] = a16;
    v106 = a16;
    Heap[5] = (void *)1;
    Heap[2] = (void *)1;
    Heap[1] = (void *)(HIBYTE(a16)
                     + 37
                     * (BYTE6(a16)
                      + 37
                      * (BYTE5(a16)
                       + 37
                       * (BYTE4(a16)
                        + 37
                        * (BYTE3(a16) + 37 * (BYTE2(a16) + 37 * (BYTE1(a16) + 37 * ((unsigned __int8)a16 + 11623883LL))))))));
    Heap[7] = a14;
    if ( _InterlockedIncrement64((volatile signed __int64 *)v33) <= 1 )
      __fastfail(0xEu);
    v36 = SourceHandle;
    Heap[8] = v33;
    if ( !v36 || (HostPsm = RmpSystemDuplicateHandle(v36, 1u, Heap + 9), HostPsm >= 0) )
    {
      v37 = operator new(0x6F0uLL);
      v38 = v37;
      if ( v37 )
      {
        *((_DWORD *)v37 + 2) = 0;
        *v37 = &ExecutionModel::BaseResourceSet::`vftable';
        v39 = (ExecutionModel::_ResourceInfo *)(v37 + 9);
        *((_BYTE *)v37 + 12) = 0;
        v37[3] = 0LL;
        v40 = 50LL;
        *((_DWORD *)v37 + 8) = -1;
        v37[5] = v37 + 5;
        v37[6] = v37 + 5;
        v37[7] = 0LL;
        *((_DWORD *)v37 + 9) = 1;
        v37[8] = 0LL;
        do
        {
          ExecutionModel::_ResourceInfo::_ResourceInfo(v39);
          v39 = (ExecutionModel::_ResourceInfo *)((char *)v39 + 24);
          --v40;
        }
        while ( v40 );
        v38[160] = 0LL;
        *v38 = &ExecutionModel::ResourceSet::`vftable';
        v41 = (ExecutionModel::_ResourceInfo *)(v38 + 177);
        v38[159] = 0LL;
        v42 = 3LL;
        *((_DWORD *)v38 + 322) = -1;
        v38[164] = 0LL;
        v38[165] = 0LL;
        *((_DWORD *)v38 + 332) = 2;
        *((_DWORD *)v38 + 334) = -1;
        *((_DWORD *)v38 + 335) = 0;
        *((_DWORD *)v38 + 336) = 101;
        *((_DWORD *)v38 + 337) = 32;
        *((_DWORD *)v38 + 346) = 0;
        v38[174] = 0LL;
        v38[175] = 0LL;
        *((_DWORD *)v38 + 352) = 0;
        do
        {
          ExecutionModel::_ResourceInfo::_ResourceInfo(v41);
          v41 = (ExecutionModel::_ResourceInfo *)((char *)v41 + 24);
          --v42;
        }
        while ( v42 );
        *((_DWORD *)v38 + 360) = 1;
        *((_DWORD *)v38 + 354) = 0;
        *((_DWORD *)v38 + 366) = 2;
        *((_DWORD *)v38 + 422) = 0;
        v38[212] = 0LL;
        *((_DWORD *)v38 + 372) = 101;
        *((_DWORD *)v38 + 373) = 101;
        *((_DWORD *)v38 + 374) = 101;
        *((_DWORD *)v38 + 375) = 101;
        *((_DWORD *)v38 + 376) = 101;
        *((_DWORD *)v38 + 377) = 101;
        *((_DWORD *)v38 + 378) = 101;
        *((_DWORD *)v38 + 379) = 101;
        *((_DWORD *)v38 + 380) = 101;
        *((_DWORD *)v38 + 381) = 101;
        *((_DWORD *)v38 + 382) = 101;
        *((_DWORD *)v38 + 383) = 101;
        *((_DWORD *)v38 + 384) = 101;
        *((_DWORD *)v38 + 385) = 101;
        *((_DWORD *)v38 + 386) = 101;
        *((_DWORD *)v38 + 387) = 101;
        *((_DWORD *)v38 + 388) = 101;
        *((_DWORD *)v38 + 389) = 101;
        *((_DWORD *)v38 + 390) = 101;
        *((_DWORD *)v38 + 391) = 101;
        *((_DWORD *)v38 + 392) = 101;
        *((_DWORD *)v38 + 393) = 101;
        *((_DWORD *)v38 + 394) = 101;
        *((_DWORD *)v38 + 395) = 101;
        *((_DWORD *)v38 + 396) = 101;
        *((_DWORD *)v38 + 397) = 101;
        *((_DWORD *)v38 + 398) = 101;
        *((_DWORD *)v38 + 399) = 101;
        *((_DWORD *)v38 + 400) = 101;
        *((_DWORD *)v38 + 401) = 101;
        *((_DWORD *)v38 + 402) = 101;
        *((_DWORD *)v38 + 403) = 101;
        *((_DWORD *)v38 + 404) = 101;
        *((_DWORD *)v38 + 405) = 101;
        *((_DWORD *)v38 + 406) = 101;
        *((_DWORD *)v38 + 407) = 101;
        v43 = v100;
        *((_DWORD *)v38 + 408) = 101;
        *((_DWORD *)v38 + 409) = 101;
        *((_DWORD *)v38 + 410) = 101;
        *((_DWORD *)v38 + 411) = 101;
        *((_DWORD *)v38 + 412) = 101;
        *((_DWORD *)v38 + 413) = 101;
        *((_DWORD *)v38 + 414) = 101;
        *((_DWORD *)v38 + 415) = 101;
        *((_DWORD *)v38 + 416) = 101;
        *((_DWORD *)v38 + 417) = 101;
        *((_DWORD *)v38 + 418) = 101;
        *((_DWORD *)v38 + 419) = 101;
        *((_DWORD *)v38 + 420) = 101;
        *((_DWORD *)v38 + 421) = 101;
        *((_DWORD *)v38 + 427) = 0;
        *((_WORD *)v38 + 688) = 0;
        *((_BYTE *)v38 + 1378) = 0;
        *((_DWORD *)v38 + 345) = 1;
        *((_DWORD *)v38 + 338) = 0;
        *((_OWORD *)v38 + 85) = 0LL;
        *((_DWORD *)v38 + 342) = 101;
        v38[214] = 0LL;
        v38[215] = 0LL;
        v38[219] = -1LL;
        v38[220] = 0LL;
        v38[221] = 0LL;
        *((_OWORD *)v38 + 108) = 0LL;
        v38[218] = 0LL;
        *((_DWORD *)v38 + 333) = 0;
        *((_OWORD *)v38 + 81) = 0LL;
        v38[8] = v43;
        *((_DWORD *)v38 + 4) = *(_DWORD *)(v43 + 16);
        v38[3] = *(_QWORD *)(v43 + 24);
        v38[159] = *(_QWORD *)(v43 + 1272);
        if ( _InterlockedIncrement64((volatile signed __int64 *)P + 2) <= 1 )
          __fastfail(0xEu);
        v38[165] = P;
        if ( _InterlockedIncrement64(v35 + 2) <= 1 )
          __fastfail(0xEu);
        v38[164] = v35;
        v38[219] = *((_QWORD *)v35 + 4);
        (*(void (__fastcall **)(_QWORD *))(*v38 + 8LL))(v38);
        *((_QWORD *)v35 + 6) = v38;
        v44 = *(_QWORD *)(v38[3] + 128LL) + 536LL;
        RtlAcquireSRWLockExclusive(*(_QWORD *)(v38[3] + 128LL) + 552LL);
        v45 = (unsigned int)(2 * (*(_DWORD *)(v44 + 4) >> 5));
        if ( *(_DWORD *)v44 >= (unsigned int)v45 )
        {
          if ( (unsigned int)v45 < 4 )
            v45 = 4LL;
          v80 = (char *)CempHeapAllocateForHashTable(8LL * (unsigned int)v45, 0LL);
          if ( v80 )
          {
            if ( (((_DWORD)v45 - 1) & (unsigned int)v45) != 0 )
            {
              v81 = -1;
              do
              {
                ++v81;
                LODWORD(v45) = (unsigned int)v45 >> 1;
              }
              while ( (_DWORD)v45 );
              v45 = (unsigned int)(1 << v81);
            }
            if ( (unsigned int)v45 > 0x4000000 )
              v45 = 0x4000000LL;
            v82 = (unsigned int)v45;
            if ( v80 > &v80[8 * v45] )
              v82 = 0LL;
            if ( v82 )
              memset64(v80, v44 | 1, v82);
            v83 = *(_DWORD *)(v44 + 4);
            v84 = 0;
            v85 = -1LL << (*(_BYTE *)(v44 + 4) & 0x1F);
            if ( (v83 & 0xFFFFFFE0) != 0 )
            {
              do
              {
                v86 = (_QWORD **)(*(_QWORD *)(v44 + 8) + 8LL * v84);
                while ( 1 )
                {
                  v87 = *v86;
                  if ( ((unsigned __int8)*v86 & 1) != 0 )
                    break;
                  *v86 = (_QWORD *)*v87;
                  v88 = ((((unsigned __int64)v85 & v87[1]) >> 56)
                       + 37
                       * ((unsigned __int8)(((unsigned __int64)v85 & v87[1]) >> 48)
                        + 37
                        * ((unsigned __int8)((unsigned __int16)(((unsigned __int64)v85 & v87[1]) >> 32) >> 8)
                         + 37
                         * ((unsigned __int8)(((unsigned __int64)v85 & v87[1]) >> 32)
                          + 37
                          * ((((unsigned int)v85 & (_DWORD)v87[1]) >> 24)
                           + 37
                           * ((unsigned __int8)(((unsigned int)v85 & (_DWORD)v87[1]) >> 16)
                            + 37
                            * (37 * ((unsigned __int8)(v85 & v87[1]) + 11623883)
                             + (unsigned __int8)((unsigned __int16)(v85 & v87[1]) >> 8)))))))) & (unsigned int)(v45 - 1);
                  *v87 = *(_QWORD *)&v80[8 * v88];
                  *(_QWORD *)&v80[8 * v88] = v87;
                }
                v83 = *(_DWORD *)(v44 + 4);
                ++v84;
              }
              while ( v84 < v83 >> 5 );
            }
            v91 = *(_QWORD *)(v44 + 8);
            *(_QWORD *)(v44 + 8) = v80;
            *(_DWORD *)(v44 + 4) = v83 & 0x1F | (32 * v45);
            if ( v91 )
              CempHeapFreeForHashTable(v91, 0LL);
          }
        }
        v46 = *(_DWORD *)(v44 + 4);
        v47 = v35[1] & (-1LL << (v46 & 0x1F));
        v48 = (volatile signed __int64 **)(*(_QWORD *)(v44 + 8)
                                         + 8
                                         * ((HIBYTE(v47)
                                           + 37
                                           * (BYTE6(v47)
                                            + 37
                                            * (BYTE5(v47)
                                             + 37
                                             * (BYTE4(v47)
                                              + 37
                                              * ((((_DWORD)v35[1] & (unsigned int)(-1 << (v46 & 0x1F))) >> 24)
                                               + 37
                                               * (BYTE2(v47)
                                                + 37
                                                * (37 * ((unsigned __int8)v47 + 11623883)
                                                 + (unsigned __int8)((unsigned __int16)(v35[1] & (-1 << (v46 & 0x1F))) >> 8)))))))) & ((v46 >> 5) - 1)));
        *v35 = (volatile signed __int64)*v48;
        *v48 = v35;
        ++*(_DWORD *)v44;
        RtlReleaseSRWLockExclusive(v44 + 16);
        v49 = v38 + 167;
        v50 = v20;
        v51 = 2LL;
        do
        {
          v49 += 16;
          v52 = *(_OWORD *)v50;
          v50 += 128;
          *((_OWORD *)v49 - 8) = v52;
          *((_OWORD *)v49 - 7) = *((_OWORD *)v50 - 7);
          *((_OWORD *)v49 - 6) = *((_OWORD *)v50 - 6);
          *((_OWORD *)v49 - 5) = *((_OWORD *)v50 - 5);
          *((_OWORD *)v49 - 4) = *((_OWORD *)v50 - 4);
          *((_OWORD *)v49 - 3) = *((_OWORD *)v50 - 3);
          *((_OWORD *)v49 - 2) = *((_OWORD *)v50 - 2);
          *((_OWORD *)v49 - 1) = *((_OWORD *)v50 - 1);
          --v51;
        }
        while ( v51 );
        v53 = v103;
        *(_OWORD *)v49 = *(_OWORD *)v50;
        *((_OWORD *)v49 + 1) = *((_OWORD *)v50 + 1);
        *((_OWORD *)v49 + 2) = *((_OWORD *)v50 + 2);
        *((_OWORD *)v49 + 3) = *((_OWORD *)v50 + 3);
        *((_OWORD *)v49 + 4) = *((_OWORD *)v50 + 4);
        *((_OWORD *)v49 + 5) = *((_OWORD *)v50 + 5);
        *((_OWORD *)v49 + 6) = *((_OWORD *)v50 + 6);
        v49[14] = *((_QWORD *)v50 + 14);
        *((_DWORD *)v38 + 322) = *((_DWORD *)v20 + 2);
        *((_DWORD *)v38 + 323) = *((_DWORD *)v20 + 8);
        *((_DWORD *)v38 + 8) = v96;
        *((_DWORD *)v38 + 2) = 0;
        *((_DWORD *)v38 + 320) = 1;
        v54 = v38[214];
        if ( v54 != v53 )
        {
          if ( v53 )
          {
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v53 + 8LL))(v53);
            v54 = v38[214];
          }
          if ( v54 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v54 + 16LL))(v54);
          v38[214] = v53;
        }
        v38[215] = a6;
        v38[216] = *((_QWORD *)v20 + 11);
        v38[217] = *((_QWORD *)v20 + 14);
        v38[218] = *((_QWORD *)v20 + 17);
        v55 = v38[165];
        v56 = *v38;
        *(_OWORD *)(v38 + 9) = *((_OWORD *)v20 + 5);
        *(_OWORD *)(v38 + 11) = *((_OWORD *)v20 + 6);
        *(_OWORD *)(v38 + 13) = *((_OWORD *)v20 + 7);
        *(_OWORD *)(v38 + 15) = *((_OWORD *)v20 + 8);
        v38[17] = *((_QWORD *)v20 + 18);
        (*(void (__fastcall **)(_QWORD *))(v56 + 8))(v38);
        v57 = (_DWORD *)(v55 + 1128);
        (*(void (__fastcall **)(_QWORD *))(*v38 + 8LL))(v38);
        v58 = *(_QWORD *)v57;
        v59 = v38 + 162;
        if ( *(_DWORD **)(*(_QWORD *)v57 + 8LL) != v57 )
          goto LABEL_118;
        v60 = v98;
        *v59 = v58;
        v61 = (_QWORD *)((char *)v60 + 216);
        v38[163] = v57;
        *(_QWORD *)(v58 + 8) = v59;
        *(_QWORD *)v57 = v59;
        ++v57[4];
        v62 = (_QWORD *)v38[164];
        *((_DWORD *)v38 + 332) = 0;
        v63 = (_QWORD *)*v61;
        if ( (_QWORD *)*v61 != v61 )
        {
          v93 = *(unsigned int *)(v62[6] + 1288LL);
          do
          {
            if ( (int)RmpEmPriorityCompare(v93, *(unsigned int *)(*(v63 - 4) + 1288LL), v61) > 0 )
              break;
            v63 = (_QWORD *)*v63;
          }
          while ( v63 != v61 );
        }
        v64 = (_QWORD *)v63[1];
        v65 = v62 + 10;
        if ( (_QWORD *)*v64 != v63 )
LABEL_118:
          __fastfail(3u);
        *v65 = v63;
        v62[11] = v64;
        *v64 = v65;
        v63[1] = v65;
        if ( (v20[42] & 0x20) != 0 && (*((_WORD *)v20 + 8) & 0x100) == 0 )
          *((_DWORD *)v38 + 333) |= 8u;
        if ( v99 )
          v66 = 1;
        else
          v66 = 2;
        v67 = ExecutionModel::ResourceSet::AcquireInternalResources(v38, v66, v99);
        if ( v67 < 0 )
        {
          if ( v38 )
          {
            (*(void (__fastcall **)(_QWORD *, _QWORD))(*v38 + 32LL))(v38, 0LL);
            (*(void (__fastcall **)(_QWORD *))(*v38 + 16LL))(v38);
          }
        }
        else
        {
          v67 = 0;
          *v104 = v38;
        }
        goto LABEL_48;
      }
      HostPsm = -1073741801;
    }
    RmpObjectRelease((PVOID)v35);
    goto LABEL_121;
  }
  v67 = -805306345;
LABEL_48:
  if ( P )
  {
    v68 = HampLockTrackerId;
    v69 = (char *)P + 64;
    if ( HampLockTrackerId != -1 )
    {
      Value = TlsGetValue(HampLockTrackerId);
      if ( (*(_QWORD *)TlsGetValue(v68) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
        __int2c();
      *Value |= 2uLL;
      ++Value[2];
    }
    RtlAcquireSRWLockExclusive(v69);
    CurrentThreadId = GetCurrentThreadId();
    v72 = (struct _RM_ACTIVITY_HOST *)P;
    *((_DWORD *)v69 + 2) = CurrentThreadId;
    if ( RmpActivityHostCanDelete(v72) )
      HampHostCheckQueueStateWorker((struct _RM_HAM_ACTIVITY_HOST *)v69, 1);
    if ( HampLockTrackerId != -1 )
    {
      v73 = (__int64 *)TlsGetValue(HampLockTrackerId);
      v74 = *v73;
      if ( (*v73 & 2) == 0 )
        __int2c();
      if ( v73[2]-- == 1 )
        *v73 = v74 & 0xFFFFFFFFFFFFFFFDuLL;
    }
    *((_DWORD *)v69 + 2) = 0;
    RtlReleaseSRWLockExclusive(v69);
    v76 = _InterlockedExchangeAdd64((volatile signed __int64 *)P + 2, 0xFFFFFFFFFFFFFFFFuLL);
    v77 = v76 <= 1;
    v78 = v76 - 1;
    if ( v77 )
    {
      if ( v78 )
        __fastfail(0xEu);
      v94 = *((_DWORD *)P + 10);
      if ( v94 )
      {
        v95 = v94 - 1;
        if ( v95 )
        {
          if ( v95 == 1 && !*((_DWORD *)P + 24) && !*((_DWORD *)P + 25) )
            NtDeleteWnfStateName((char *)P + 96);
        }
        else
        {
          RmpResourceSetCleanup((struct _RM_RESOURCE_SET *)P);
        }
      }
      else
      {
        RmpActivityHostFinalCleanup((struct _RM_ACTIVITY_HOST *)P);
      }
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, P);
    }
  }
  operator delete(v20);
  return (unsigned int)v67;
}
