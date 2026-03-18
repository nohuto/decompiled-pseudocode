/*
 * XREFs of PnpReplacePartitionUnit @ 0x140950E30
 * Callers:
 *     IoReplacePartitionUnit @ 0x140943170 (IoReplacePartitionUnit.c)
 * Callees:
 *     KeIsEmptyAffinityEx @ 0x140292F90 (KeIsEmptyAffinityEx.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     KiCopyAffinityEx @ 0x140300030 (KiCopyAffinityEx.c)
 *     KeCheckProcessorAffinityEx @ 0x140345D30 (KeCheckProcessorAffinityEx.c)
 *     KeQueryActiveProcessorCountEx @ 0x140348830 (KeQueryActiveProcessorCountEx.c)
 *     KeRevertToUserGroupAffinityThread @ 0x14035BE00 (KeRevertToUserGroupAffinityThread.c)
 *     KeSetSystemGroupAffinityThread @ 0x14035BFE0 (KeSetSystemGroupAffinityThread.c)
 *     IoAddTriageDumpDataBlock @ 0x1403D99B4 (IoAddTriageDumpDataBlock.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     memset @ 0x140435E00 (memset.c)
 *     PnprQueryReplaceFeatures @ 0x140562F78 (PnprQueryReplaceFeatures.c)
 *     KeFindFirstSetLeftAffinityEx @ 0x14056C170 (KeFindFirstSetLeftAffinityEx.c)
 *     MmUnloadSystemImage @ 0x140762490 (MmUnloadSystemImage.c)
 *     PnprAllocateMappingReserves @ 0x140951C58 (PnprAllocateMappingReserves.c)
 *     PnprCollectResources @ 0x140951DE0 (PnprCollectResources.c)
 *     PnprFreeMappingReserve @ 0x14095212C (PnprFreeMappingReserve.c)
 *     PnprIdentifyUnits @ 0x14095239C (PnprIdentifyUnits.c)
 *     PnprLegacyDeviceDriversPresent @ 0x140952854 (PnprLegacyDeviceDriversPresent.c)
 *     PnprLoadPluginDriver @ 0x1409528A8 (PnprLoadPluginDriver.c)
 *     PnprLockPagesForReplace @ 0x140952A20 (PnprLockPagesForReplace.c)
 *     PnprLogFailureEvent @ 0x140952A54 (PnprLogFailureEvent.c)
 *     PnprLogStartEvent @ 0x140952B80 (PnprLogStartEvent.c)
 *     PnprLogSuccessEvent @ 0x140952C54 (PnprLogSuccessEvent.c)
 *     PnprMmConstruct @ 0x140953048 (PnprMmConstruct.c)
 *     PnprMmFree @ 0x140953154 (PnprMmFree.c)
 *     PnprUnlockPagesForReplace @ 0x140953314 (PnprUnlockPagesForReplace.c)
 *     PnprGetMillisecondCounter @ 0x140A67C14 (PnprGetMillisecondCounter.c)
 *     PnprInitiateReplaceOperation @ 0x140A67C74 (PnprInitiateReplaceOperation.c)
 *     PnprQuiesceDevices @ 0x140A68674 (PnprQuiesceDevices.c)
 *     PnprWakeDevices @ 0x140A6927C (PnprWakeDevices.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

LONG __fastcall PnpReplacePartitionUnit(_QWORD *a1)
{
  ULONG ActiveProcessorCount; // eax
  __int64 v3; // r15
  ULONG_PTR v4; // r10
  __int64 v5; // rcx
  ULONG_PTR v6; // r8
  __int64 v7; // rcx
  __int64 Pool2; // rax
  __int64 v9; // rbx
  int PluginDriver; // esi
  __int64 v11; // rcx
  _WORD *v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rbx
  ULONG_PTR v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rcx
  _WORD *v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rbx
  ULONG_PTR v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rcx
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // rdx
  __int64 v38; // rax
  __int64 v39; // rcx
  __int64 v40; // rcx
  __int64 v41; // rdx
  __int64 v42; // rcx
  PDEVICE_OBJECT *v43; // r14
  int v44; // eax
  int v45; // eax
  __int64 v46; // rcx
  __int64 v47; // rcx
  int v48; // eax
  int v49; // eax
  __int64 v50; // rdx
  int v51; // ecx
  int v52; // ecx
  int v53; // edx
  int v54; // eax
  char v55; // r12
  int ReplaceFeatures; // eax
  __int64 v57; // rcx
  int v58; // eax
  int v59; // edx
  __int64 v60; // rcx
  int v61; // eax
  int v62; // edx
  int v63; // eax
  __int64 v64; // rdx
  unsigned int v65; // eax
  __int64 v66; // rdx
  _QWORD *v67; // rcx
  __int64 v68; // r8
  __int64 v69; // rcx
  int v70; // eax
  int v71; // eax
  int FirstSetLeftAffinity; // eax
  unsigned int v73; // ecx
  __int64 v74; // r14
  void (*v75)(void); // rax
  void *v76; // rcx
  __int64 v77; // r14
  void *v78; // rcx
  void *v79; // rcx
  void *v80; // rcx
  void *v81; // rcx
  ULONG Affinity; // [rsp+38h] [rbp-D0h]
  struct _GROUP_AFFINITY Affinity_8; // [rsp+40h] [rbp-C8h] BYREF
  struct _GROUP_AFFINITY PreviousAffinity_8; // [rsp+50h] [rbp-B8h] BYREF
  _QWORD v86[7]; // [rsp+60h] [rbp-A8h] BYREF
  int v87; // [rsp+98h] [rbp-70h]
  _DWORD v88[68]; // [rsp+A8h] [rbp-60h] BYREF

  Affinity_8 = 0LL;
  memset(&v88[2], 0, 0x100uLL);
  v87 = 0;
  PreviousAffinity_8 = 0LL;
  memset(v86, 0, sizeof(v86));
  ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
  v3 = ActiveProcessorCount;
  Affinity = ActiveProcessorCount;
  KeWaitForSingleObject(&PnpReplaceEvent, Executive, 0, 0, 0LL);
  if ( *((int *)a1 + 4) >= 0 )
  {
    v4 = a1[1];
    if ( !v4
      || (v5 = *(_QWORD *)(*(_QWORD *)(v4 + 312) + 40LL)) == 0
      || _bittest((const signed __int32 *)(v5 + 396), 0x11u) )
    {
      if ( v4 )
      {
        IoAddTriageDumpDataBlock(a1[1], (PVOID)*(unsigned __int16 *)(v4 + 2));
        v4 = a1[1];
        v26 = *(_QWORD *)(v4 + 8);
        if ( v26 )
        {
          IoAddTriageDumpDataBlock(v26, (PVOID)(unsigned int)*(__int16 *)(v26 + 2));
          v4 = a1[1];
          v27 = (_WORD *)(*(_QWORD *)(v4 + 8) + 56LL);
          if ( *v27 )
          {
            IoAddTriageDumpDataBlock((ULONG)v27, (PVOID)2);
            IoAddTriageDumpDataBlock(
              *(_QWORD *)(*(_QWORD *)(a1[1] + 8LL) + 64LL),
              (PVOID)*(unsigned __int16 *)(*(_QWORD *)(a1[1] + 8LL) + 56LL));
            v4 = a1[1];
          }
        }
        if ( v4 )
        {
          v28 = *(_QWORD *)(v4 + 312);
          v29 = *(_QWORD *)(v28 + 40);
          if ( v29 )
          {
            v30 = *(_QWORD *)(v28 + 40);
            IoAddTriageDumpDataBlock(v29, (PVOID)0x310);
            if ( *(_WORD *)(v30 + 40) )
            {
              IoAddTriageDumpDataBlock(v30 + 40, (PVOID)2);
              IoAddTriageDumpDataBlock(*(_QWORD *)(v30 + 48), (PVOID)*(unsigned __int16 *)(v30 + 40));
            }
            v31 = a1[1];
            if ( v31 )
              v32 = *(_QWORD *)(*(_QWORD *)(v31 + 312) + 40LL);
            else
              v32 = 0LL;
            if ( *(_WORD *)(v32 + 56) )
            {
              if ( v31 )
                v33 = *(_QWORD *)(*(_QWORD *)(v31 + 312) + 40LL);
              else
                LODWORD(v33) = 0;
              IoAddTriageDumpDataBlock(v33 + 56, (PVOID)2);
              v34 = a1[1];
              if ( v34 )
              {
                v35 = *(_QWORD *)(*(_QWORD *)(v34 + 312) + 40LL);
                v36 = v35;
              }
              else
              {
                v35 = 0LL;
                v36 = 0LL;
              }
              IoAddTriageDumpDataBlock(*(_QWORD *)(v36 + 64), (PVOID)*(unsigned __int16 *)(v35 + 56));
              v31 = a1[1];
            }
            if ( v31 )
              v37 = *(_QWORD *)(*(_QWORD *)(v31 + 312) + 40LL);
            else
              v37 = 0LL;
            v4 = v31;
            if ( *(_QWORD *)(v37 + 16) )
            {
              v38 = v31 ? *(_QWORD *)(*(_QWORD *)(v31 + 312) + 40LL) : 0LL;
              if ( *(_WORD *)(*(_QWORD *)(v38 + 16) + 56LL) )
              {
                if ( v31 )
                  v39 = *(_QWORD *)(*(_QWORD *)(v31 + 312) + 40LL);
                else
                  v39 = 0LL;
                IoAddTriageDumpDataBlock(*(_QWORD *)(v39 + 16) + 56, (PVOID)2);
                v40 = a1[1];
                if ( v40 )
                {
                  v41 = *(_QWORD *)(*(_QWORD *)(v40 + 312) + 40LL);
                  v42 = v41;
                }
                else
                {
                  v41 = 0LL;
                  v42 = 0LL;
                }
                IoAddTriageDumpDataBlock(
                  *(_QWORD *)(*(_QWORD *)(v42 + 16) + 64LL),
                  (PVOID)*(unsigned __int16 *)(*(_QWORD *)(v41 + 16) + 56LL));
                v4 = a1[1];
              }
            }
          }
        }
      }
      KeBugCheckEx(0xCAu, 2uLL, v4, 0LL, 0LL);
    }
    v6 = *a1;
    if ( !*a1
      || (v7 = *(_QWORD *)(*(_QWORD *)(v6 + 312) + 40LL)) == 0
      || _bittest((const signed __int32 *)(v7 + 396), 0x11u) )
    {
      if ( v6 )
      {
        IoAddTriageDumpDataBlock(*a1, (PVOID)*(unsigned __int16 *)(v6 + 2));
        v6 = *a1;
        v11 = *(_QWORD *)(*a1 + 8LL);
        if ( v11 )
        {
          IoAddTriageDumpDataBlock(v11, (PVOID)(unsigned int)*(__int16 *)(v11 + 2));
          v6 = *a1;
          v12 = (_WORD *)(*(_QWORD *)(*a1 + 8LL) + 56LL);
          if ( *v12 )
          {
            IoAddTriageDumpDataBlock((ULONG)v12, (PVOID)2);
            IoAddTriageDumpDataBlock(
              *(_QWORD *)(*(_QWORD *)(*a1 + 8LL) + 64LL),
              (PVOID)*(unsigned __int16 *)(*(_QWORD *)(*a1 + 8LL) + 56LL));
            v6 = *a1;
          }
        }
        if ( v6 )
        {
          v13 = *(_QWORD *)(v6 + 312);
          v14 = *(_QWORD *)(v13 + 40);
          if ( v14 )
          {
            v15 = *(_QWORD *)(v13 + 40);
            IoAddTriageDumpDataBlock(v14, (PVOID)0x310);
            if ( *(_WORD *)(v15 + 40) )
            {
              IoAddTriageDumpDataBlock(v15 + 40, (PVOID)2);
              IoAddTriageDumpDataBlock(*(_QWORD *)(v15 + 48), (PVOID)*(unsigned __int16 *)(v15 + 40));
            }
            v16 = *a1;
            if ( *a1 )
              v17 = *(_QWORD *)(*(_QWORD *)(v16 + 312) + 40LL);
            else
              v17 = 0LL;
            if ( *(_WORD *)(v17 + 56) )
            {
              if ( v16 )
                v18 = *(_QWORD *)(*(_QWORD *)(v16 + 312) + 40LL);
              else
                LODWORD(v18) = 0;
              IoAddTriageDumpDataBlock(v18 + 56, (PVOID)2);
              if ( *a1 )
              {
                v19 = *(_QWORD *)(*(_QWORD *)(*a1 + 312LL) + 40LL);
                v20 = v19;
              }
              else
              {
                v19 = 0LL;
                v20 = 0LL;
              }
              IoAddTriageDumpDataBlock(*(_QWORD *)(v20 + 64), (PVOID)*(unsigned __int16 *)(v19 + 56));
              v16 = *a1;
            }
            if ( v16 )
              v21 = *(_QWORD *)(*(_QWORD *)(v16 + 312) + 40LL);
            else
              v21 = 0LL;
            v6 = v16;
            if ( *(_QWORD *)(v21 + 16) )
            {
              v22 = v16 ? *(_QWORD *)(*(_QWORD *)(v16 + 312) + 40LL) : 0LL;
              if ( *(_WORD *)(*(_QWORD *)(v22 + 16) + 56LL) )
              {
                if ( v16 )
                  v23 = *(_QWORD *)(*(_QWORD *)(v16 + 312) + 40LL);
                else
                  v23 = 0LL;
                IoAddTriageDumpDataBlock(*(_QWORD *)(v23 + 16) + 56, (PVOID)2);
                if ( *a1 )
                {
                  v24 = *(_QWORD *)(*(_QWORD *)(*a1 + 312LL) + 40LL);
                  v25 = v24;
                }
                else
                {
                  v24 = 0LL;
                  v25 = 0LL;
                }
                IoAddTriageDumpDataBlock(
                  *(_QWORD *)(*(_QWORD *)(v25 + 16) + 64LL),
                  (PVOID)*(unsigned __int16 *)(*(_QWORD *)(v24 + 16) + 56LL));
                v6 = *a1;
              }
            }
          }
        }
      }
      KeBugCheckEx(0xCAu, 2uLL, v6, 0LL, 0LL);
    }
    PnprLogStartEvent(*a1, a1[1]);
  }
  Pool2 = ExAllocatePool2(64LL, 33336LL, 1366322768LL);
  v9 = Pool2;
  if ( !Pool2 )
  {
    PluginDriver = -1073741670;
    goto LABEL_157;
  }
  *(_QWORD *)Pool2 = *a1;
  v43 = (PDEVICE_OBJECT *)(Pool2 + 32);
  *(_QWORD *)(Pool2 + 32) = a1[1];
  *(_DWORD *)(Pool2 + 64) = *((_DWORD *)a1 + 4);
  *(_QWORD *)(Pool2 + 160) = Pool2 + 152;
  *(_QWORD *)(Pool2 + 152) = Pool2 + 152;
  PnprContext = Pool2;
  if ( !KeDynamicPartitioningSupported && *((int *)a1 + 4) >= 0 )
  {
    v44 = *(_DWORD *)(Pool2 + 33272);
    PluginDriver = -1073741637;
    if ( !v44 )
      v44 = 170;
    *(_DWORD *)(v9 + 33272) = v44;
    v45 = *(_DWORD *)(v9 + 33276);
    if ( !v45 )
      v45 = 2;
    *(_DWORD *)(v9 + 33276) = v45;
    goto LABEL_88;
  }
  if ( (unsigned __int8)PnprLegacyDeviceDriversPresent() )
  {
    v47 = PnprContext;
    PluginDriver = -1073741621;
    v48 = *(_DWORD *)(PnprContext + 33272);
    if ( !v48 )
      v48 = 182;
    *(_DWORD *)(PnprContext + 33272) = v48;
    v49 = *(_DWORD *)(v47 + 33276);
    if ( !v49 )
      v49 = 7;
LABEL_94:
    *(_DWORD *)(v47 + 33276) = v49;
LABEL_88:
    v3 = Affinity;
    goto LABEL_157;
  }
  LOBYTE(v46) = 1;
  PnprGetMillisecondCounter(v46);
  if ( *((int *)a1 + 4) < 0 )
  {
    PnprLockPagesForReplace();
    PnprQuiesceDevices(v86);
    PnprWakeDevices(v86);
    PnprUnlockPagesForReplace();
    PluginDriver = 0;
    goto LABEL_88;
  }
  PluginDriver = PnprIdentifyUnits(*(PDEVICE_OBJECT *)v9, *v43);
  if ( PluginDriver < 0 )
  {
    v50 = PnprContext;
    v51 = *(_DWORD *)(PnprContext + 33272);
    if ( !v51 )
      v51 = 219;
    *(_DWORD *)(PnprContext + 33272) = v51;
    v52 = *(_DWORD *)(v50 + 33276);
    if ( !v52 )
      v52 = 3;
    *(_DWORD *)(v50 + 33276) = v52;
    goto LABEL_88;
  }
  PluginDriver = PnprCollectResources(v9, v9 + 32);
  if ( PluginDriver < 0 )
  {
    v53 = 232;
LABEL_105:
    v47 = PnprContext;
    v54 = *(_DWORD *)(PnprContext + 33272);
    if ( !v54 )
      v54 = v53;
    *(_DWORD *)(PnprContext + 33272) = v54;
    v49 = *(_DWORD *)(v47 + 33276);
    if ( !v49 )
      v49 = 1;
    goto LABEL_94;
  }
  v55 = 0;
  PluginDriver = PnprLoadPluginDriver(v9 + 33152, v9 + 33176);
  if ( PluginDriver < 0 )
  {
    v57 = *(_QWORD *)(v9 + 24);
    if ( *(_DWORD *)(v57 + 4) )
    {
      v53 = 258;
      goto LABEL_105;
    }
  }
  else
  {
    ReplaceFeatures = PnprQueryReplaceFeatures(v9 + 33176, (PDEVICE_OBJECT *)(v9 + 32));
    *(_DWORD *)(v9 + 64) |= ReplaceFeatures;
    v55 = ReplaceFeatures;
    v57 = *(_QWORD *)(v9 + 24);
  }
  if ( *(_DWORD *)(v57 + 4) )
  {
    v58 = *(_DWORD *)(v9 + 33184);
    if ( (v58 & 1) == 0 || !*(_QWORD *)(v9 + 33216) )
    {
      v59 = 273;
      goto LABEL_133;
    }
    if ( (v58 & 2) != 0 && !*(_QWORD *)(v9 + 33224) )
    {
      v59 = 281;
LABEL_133:
      v3 = Affinity;
LABEL_134:
      v60 = PnprContext;
      PluginDriver = -1073741637;
      v61 = *(_DWORD *)(PnprContext + 33272);
      if ( !v61 )
        v61 = v59;
      v62 = 9;
LABEL_137:
      *(_DWORD *)(v60 + 33272) = v61;
      v63 = *(_DWORD *)(v60 + 33276);
      if ( !v63 )
        v63 = v62;
      *(_DWORD *)(v60 + 33276) = v63;
      goto LABEL_157;
    }
    PluginDriver = PnprMmConstruct(v57, v9 + 152);
    if ( PluginDriver < 0 )
    {
      v53 = 293;
      goto LABEL_105;
    }
    if ( (v55 & 8) != 0 )
    {
      *(_DWORD *)(*(_QWORD *)(v9 + 56) + 4LL) = 0;
    }
    else if ( !*(_QWORD *)(v9 + 33256) || (*(_DWORD *)(v9 + 64) & 0x20) != 0 )
    {
      v59 = 317;
      goto LABEL_133;
    }
    v3 = Affinity;
    PluginDriver = PnprAllocateMappingReserves(v9 + 136, v9 + 144, Affinity);
    if ( PluginDriver < 0 )
    {
      v60 = PnprContext;
      v61 = *(_DWORD *)(PnprContext + 33272);
      if ( !v61 )
        v61 = 332;
      v62 = 10;
      goto LABEL_137;
    }
    *(_QWORD *)(v9 + 168) = 0LL;
  }
  else
  {
    v3 = Affinity;
  }
  if ( (*(_DWORD *)(v9 + 64) & 0x20) != 0 && !*(_QWORD *)(v9 + 33264) )
  {
    v59 = 352;
    goto LABEL_134;
  }
  *(_DWORD *)(v9 + 176) = v3;
  v88[0] = 2097153;
  memset(&v88[1], 0, 0x104uLL);
  KiCopyAffinityEx((__int64)v88, 0x20u, (unsigned __int16 *)KeActiveProcessors);
  v64 = *(_QWORD *)(v9 + 16);
  v65 = *(_DWORD *)(v64 + 8);
  if ( v65 )
  {
    v66 = *(_QWORD *)v64 - (_QWORD)&v88[2];
    v67 = &v88[2];
    v68 = v65;
    do
    {
      *v67 &= ~*(_QWORD *)((char *)v67 + v66);
      ++v67;
      --v68;
    }
    while ( v68 );
  }
  if ( (unsigned int)KeIsEmptyAffinityEx(v88) )
  {
    v69 = PnprContext;
    PluginDriver = -1073741621;
    v70 = *(_DWORD *)(PnprContext + 33272);
    if ( !v70 )
      v70 = 379;
    *(_DWORD *)(PnprContext + 33272) = v70;
    v71 = *(_DWORD *)(v69 + 33276);
    if ( !v71 )
      v71 = 6;
    *(_DWORD *)(v69 + 33276) = v71;
  }
  else
  {
    if ( (unsigned int)KeCheckProcessorAffinityEx((unsigned __int16 *)v88, 0) )
      FirstSetLeftAffinity = 0;
    else
      FirstSetLeftAffinity = KeFindFirstSetLeftAffinityEx((unsigned __int16 *)v88);
    *(_DWORD *)(v9 + 180) = FirstSetLeftAffinity;
    v73 = KiProcessorIndexToNumberMappingTable[FirstSetLeftAffinity];
    *(_QWORD *)&Affinity_8.Group = (unsigned __int16)(v73 >> 6);
    Affinity_8.Mask = 1LL << (v73 & 0x3F);
    KeSetSystemGroupAffinityThread(&Affinity_8, &PreviousAffinity_8);
    PluginDriver = PnprInitiateReplaceOperation();
    KeRevertToUserGroupAffinityThread(&PreviousAffinity_8);
  }
LABEL_157:
  if ( *((int *)a1 + 4) >= 0 )
  {
    if ( PluginDriver < 0 )
    {
      PnprLogFailureEvent(*a1, a1[1], (unsigned int)PluginDriver);
    }
    else
    {
      *(_DWORD *)(v9 + 33328) = PnprGetMillisecondCounter(0LL);
      PnprLogSuccessEvent();
    }
  }
  if ( v9 )
  {
    v74 = *(_QWORD *)(v9 + 33152);
    if ( v74 )
    {
      v75 = *(void (**)(void))(v9 + 33192);
      if ( v75 )
        v75();
      MmUnloadSystemImage(v74);
    }
    v76 = *(void **)(v9 + 136);
    if ( v76 && *(_QWORD *)(v9 + 144) )
    {
      if ( (_DWORD)v3 )
      {
        v77 = 0LL;
        do
        {
          PnprFreeMappingReserve(v77 + *(_QWORD *)(v9 + 136));
          PnprFreeMappingReserve(v77 + *(_QWORD *)(v9 + 144));
          v77 += 24LL;
          --v3;
        }
        while ( v3 );
        v76 = *(void **)(v9 + 136);
      }
      ExFreePoolWithTag(v76, 0x51706E50u);
      ExFreePoolWithTag(*(PVOID *)(v9 + 144), 0x51706E50u);
    }
    PnprMmFree(v9 + 152);
    v78 = *(void **)(v9 + 16);
    if ( v78 )
    {
      ExFreePoolWithTag(v78, 0x51706E50u);
      *(_QWORD *)(v9 + 16) = 0LL;
    }
    v79 = *(void **)(v9 + 24);
    if ( v79 )
    {
      ExFreePoolWithTag(v79, 0x51706E50u);
      *(_QWORD *)(v9 + 24) = 0LL;
    }
    v80 = *(void **)(v9 + 48);
    if ( v80 )
    {
      ExFreePoolWithTag(v80, 0x51706E50u);
      *(_QWORD *)(v9 + 48) = 0LL;
    }
    v81 = *(void **)(v9 + 56);
    if ( v81 )
    {
      ExFreePoolWithTag(v81, 0x51706E50u);
      *(_QWORD *)(v9 + 56) = 0LL;
    }
    ExFreePoolWithTag((PVOID)v9, 0x51706E50u);
  }
  KeSetEvent(&PnpReplaceEvent, 0, 0);
  *((_DWORD *)a1 + 5) = PluginDriver;
  return KeSetEvent((PRKEVENT)a1 + 1, 0, 0);
}
