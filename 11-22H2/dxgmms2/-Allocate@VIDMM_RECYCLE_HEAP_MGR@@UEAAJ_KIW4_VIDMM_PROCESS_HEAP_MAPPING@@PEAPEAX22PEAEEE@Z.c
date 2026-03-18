/*
 * XREFs of ?Allocate@VIDMM_RECYCLE_HEAP_MGR@@UEAAJ_KIW4_VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAX22PEAEEE@Z @ 0x1C00A5850
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0005D98 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0019988 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C00199AC (DxgkLogInternalTriageEvent.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0019BB8 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?IntegrateMultirangeIntoTrees@VIDMM_RECYCLE_HEAP@@QEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C00853FC (-IntegrateMultirangeIntoTrees@VIDMM_RECYCLE_HEAP@@QEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z.c)
 *     ?GetPreviousRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ @ 0x1C00862DC (-GetPreviousRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ.c)
 *     ?CreateBlockAndRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@_KIE@Z @ 0x1C008EDC4 (-CreateBlockAndRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@_KIE@Z.c)
 *     ?DestroyMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C009E990 (-DestroyMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z.c)
 *     ?CombineFreedScanFromRange@VIDMM_RECYCLE_BLOCK@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C009EF24 (-CombineFreedScanFromRange@VIDMM_RECYCLE_BLOCK@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?Allocate@VIDMM_RECYCLE_HEAP@@QEAAJ_KIPEAPEAX11PEAEE@Z @ 0x1C009F334 (-Allocate@VIDMM_RECYCLE_HEAP@@QEAAJ_KIPEAPEAX11PEAEE@Z.c)
 *     ?Decommit@VIDMM_RECYCLE_RANGE@@QEAAXXZ @ 0x1C00A0510 (-Decommit@VIDMM_RECYCLE_RANGE@@QEAAXXZ.c)
 *     ?RemoveMultirangeFromTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C00A1368 (-RemoveMultirangeFromTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_.c)
 *     ?GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ @ 0x1C00A3758 (-GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ.c)
 *     ?MergeRanges@VIDMM_RECYCLE_MULTIRANGE@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@0@Z @ 0x1C00A3780 (-MergeRanges@VIDMM_RECYCLE_MULTIRANGE@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@0@Z.c)
 *     ?ProcessDebounceList@VIDMM_RECYCLE_HEAP_MGR@@QEAAX_N0@Z @ 0x1C00A40A0 (-ProcessDebounceList@VIDMM_RECYCLE_HEAP_MGR@@QEAAX_N0@Z.c)
 *     ?ShrinkOnTailRangeFree@VIDMM_RECYCLE_BLOCK@@QEAA?AW4VIDMM_RECYCLE_BLOCK_SHRINK_RESULT@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C00A42EC (-ShrinkOnTailRangeFree@VIDMM_RECYCLE_BLOCK@@QEAA-AW4VIDMM_RECYCLE_BLOCK_SHRINK_RESULT@@PEAVVIDMM.c)
 *     ?ResizeMultirangeToExcludeOverlap@VIDMM_RECYCLE_HEAP@@AEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@0@Z @ 0x1C00A43C0 (-ResizeMultirangeToExcludeOverlap@VIDMM_RECYCLE_HEAP@@AEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@0@Z.c)
 *     ?SplitAt@VIDMM_RECYCLE_RANGE@@QEAAX_KPEA_N@Z @ 0x1C00A4E70 (-SplitAt@VIDMM_RECYCLE_RANGE@@QEAAX_KPEA_N@Z.c)
 *     ?Commit@VIDMM_RECYCLE_RANGE@@QEAAJEPEAE@Z @ 0x1C00A7180 (-Commit@VIDMM_RECYCLE_RANGE@@QEAAJEPEAE@Z.c)
 *     ?VidMmCompareForInsertAlignedRange@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x1C00B0AB0 (-VidMmCompareForInsertAlignedRange@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z.c)
 *     ?VidMmFindAlignedRange@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x1C00B1140 (-VidMmFindAlignedRange@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z.c)
 *     ?DestroyRange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C00B2348 (-DestroyRange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?AddRangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C00F53C4 (-AddRangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?BuildIdleCommittedMultirangeForRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C00F5550 (-BuildIdleCommittedMultirangeForRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@PEAV.c)
 *     ?BuildIdleFreeMultirangeForRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C00F5624 (-BuildIdleFreeMultirangeForRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@PEAVVIDMM.c)
 *     ?BuildIdleLockedMultirangeForRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C00F5698 (-BuildIdleLockedMultirangeForRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@PEAVVID.c)
 *     ?RemoveRangeFromTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C00F61E8 (-RemoveRangeFromTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_RANGE.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall VIDMM_RECYCLE_HEAP_MGR::Allocate(
        VIDMM_RECYCLE_HEAP_MGR **a1,
        unsigned __int64 a2,
        unsigned int a3,
        int a4,
        void **a5,
        void **a6,
        void **a7,
        unsigned __int8 *a8,
        unsigned __int8 a9,
        char a10)
{
  __int64 v10; // r13
  int v11; // r15d
  unsigned __int64 v12; // r12
  VIDMM_RECYCLE_HEAP_MGR **v13; // r14
  __int64 v14; // rcx
  VIDMM_RECYCLE_HEAP_MGR **v15; // rbx
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // r8
  int v19; // r9d
  __int64 v20; // rcx
  __int64 v21; // rcx
  unsigned __int8 v22; // di
  __int64 v23; // rsi
  int v24; // eax
  VIDMM_RECYCLE_HEAP_MGR **v25; // rcx
  VIDMM_RECYCLE_HEAP_MGR **v26; // rbx
  __int64 v27; // rcx
  VIDMM_RECYCLE_HEAP_MGR **v30; // r15
  VIDMM_RECYCLE_HEAP_MGR **v31; // r14
  VIDMM_RECYCLE_HEAP_MGR *v32; // rdi
  int AlignedRange; // eax
  struct VIDMM_RECYCLE_MULTIRANGE *BlockAndRange; // rbx
  __int64 v35; // rdx
  __int64 v36; // rcx
  struct VIDMM_RECYCLE_RANGE *NextRange; // rdi
  unsigned __int64 i; // r14
  __int64 v39; // rax
  int v40; // eax
  int v41; // eax
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r13
  __int64 v47; // r12
  __int64 v48; // r15
  int v49; // eax
  __int64 v50; // rax
  PVOID v51; // rsi
  CCHAR LeastSignificantBit; // al
  __int64 v53; // rax
  __int64 v54; // r15
  __int64 v55; // rcx
  __int64 v56; // r8
  __int64 v57; // rcx
  struct VIDMM_RECYCLE_RANGE *j; // rdi
  int v59; // ecx
  int v60; // ecx
  int v61; // ecx
  int v62; // ecx
  __int64 v63; // r14
  __int64 v64; // r8
  struct _RTL_BALANCED_NODE *v65; // rdi
  __int64 v66; // rax
  struct _RTL_BALANCED_NODE *v67; // rax
  __int64 v68; // r14
  __int64 v69; // r8
  struct _RTL_BALANCED_NODE *v70; // rdi
  __int64 v71; // rax
  struct _RTL_BALANCED_NODE *v72; // rax
  __int64 v73; // r14
  __int64 v74; // r8
  struct _RTL_BALANCED_NODE *v75; // rdi
  __int64 v76; // rax
  struct _RTL_BALANCED_NODE *v77; // rax
  struct VIDMM_RECYCLE_RANGE *k; // rdi
  struct VIDMM_RECYCLE_MULTIRANGE *v79; // rsi
  struct VIDMM_RECYCLE_MULTIRANGE *v80; // rsi
  struct VIDMM_RECYCLE_MULTIRANGE *v81; // rsi
  int v82; // edi
  __int64 v83; // rsi
  int v84; // edi
  unsigned __int8 v85; // dl
  VIDMM_RECYCLE_HEAP_MGR **v86; // rcx
  VIDMM_RECYCLE_RANGE *v87; // rdi
  int v88; // eax
  __int64 v89; // rcx
  __int64 v90; // r8
  struct VIDMM_RECYCLE_RANGE *m; // rax
  struct VIDMM_RECYCLE_RANGE *v92; // r8
  struct VIDMM_RECYCLE_RANGE *v93; // rdi
  struct VIDMM_RECYCLE_RANGE *v94; // r9
  struct VIDMM_RECYCLE_RANGE *v95; // rax
  int v96; // r11d
  int v97; // r10d
  struct VIDMM_RECYCLE_RANGE *v98; // r14
  struct VIDMM_RECYCLE_RANGE *v99; // rdx
  _QWORD *v100; // rdi
  _QWORD *v101; // rcx
  struct VIDMM_RECYCLE_RANGE *v102; // rsi
  __int64 v103; // rax
  __int64 v104; // rdx
  __int64 v105; // r9
  int v106; // edx
  void *v107; // rax
  char v108; // r8
  struct VIDMM_RECYCLE_RANGE *v109; // rax
  struct VIDMM_RECYCLE_RANGE *v110; // r9
  __int64 v111; // rcx
  __int64 v112; // r8
  bool v113; // [rsp+50h] [rbp-91h] BYREF
  char v114; // [rsp+51h] [rbp-90h]
  VIDMM_RECYCLE_HEAP_MGR **v115; // [rsp+58h] [rbp-89h]
  VIDMM_RECYCLE_HEAP_MGR **v116; // [rsp+60h] [rbp-81h]
  __int64 v117; // [rsp+68h] [rbp-79h]
  VIDMM_RECYCLE_HEAP_MGR **v118; // [rsp+70h] [rbp-71h]
  char v119; // [rsp+78h] [rbp-69h]
  int v120; // [rsp+80h] [rbp-61h] BYREF
  __int64 v121; // [rsp+88h] [rbp-59h]
  char v122; // [rsp+90h] [rbp-51h]
  int v123; // [rsp+98h] [rbp-49h]
  __int64 v124; // [rsp+A0h] [rbp-41h] BYREF
  __int64 v125; // [rsp+A8h] [rbp-39h]
  char v126; // [rsp+B0h] [rbp-31h]
  struct VIDMM_RECYCLE_RANGE *PreviousRange; // [rsp+B8h] [rbp-29h]
  _QWORD v128[2]; // [rsp+C0h] [rbp-21h] BYREF
  unsigned __int8 v129; // [rsp+D0h] [rbp-11h]

  v10 = a3;
  v118 = a1 + 166;
  v119 = 0;
  v11 = a4;
  v12 = a2;
  v13 = a1;
  if ( a1 == (VIDMM_RECYCLE_HEAP_MGR **)-1328LL )
  {
    WdLogSingleEntry1(1LL, 592LL);
    DxgkLogInternalTriageEvent(v14, 262146LL);
  }
  v15 = v118;
  KeEnterCriticalRegion();
  if ( v15[3] == KeGetCurrentThread() )
  {
    if ( *((int *)v15 + 8) <= 0 )
    {
      WdLogSingleEntry1(1LL, 491LL);
      DxgkLogInternalTriageEvent(v17, 262146LL);
    }
    ++*((_DWORD *)v15 + 8);
  }
  else
  {
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v15 + 1, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v19 = *((_DWORD *)v15 + 9);
        if ( v19 != -1 && (byte_1C0076981 & 1) != 0 )
          McTemplateK0q_EtwWriteTransfer(v16, (__int64)&EventBlockThread, v18, v19);
      }
      _InterlockedIncrement64((volatile signed __int64 *)v15 + 2);
      ExAcquirePushLockExclusiveEx(v15 + 1, 0LL);
    }
    if ( v15[3] )
    {
      WdLogSingleEntry1(1LL, 515LL);
      DxgkLogInternalTriageEvent(v20, 262146LL);
    }
    if ( *((_DWORD *)v15 + 8) )
    {
      WdLogSingleEntry1(1LL, 516LL);
      DxgkLogInternalTriageEvent(v21, 262146LL);
    }
    v15[3] = KeGetCurrentThread();
    *((_DWORD *)v15 + 8) = 1;
  }
  v22 = a9;
  LODWORD(v23) = -1073741823;
  v119 = 1;
  v114 = 0;
  while ( 2 )
  {
    if ( a10 )
    {
      switch ( v11 )
      {
        case 1:
          v24 = VIDMM_RECYCLE_HEAP::Allocate(
                  v13 + 92,
                  v12,
                  (unsigned int)v10,
                  (struct VIDMM_RECYCLE_MULTIRANGE **)a5,
                  a6,
                  0LL,
                  a8,
                  v22);
          goto LABEL_41;
        case 2:
          v24 = VIDMM_RECYCLE_HEAP::Allocate(
                  v13 + 101,
                  v12,
                  (unsigned int)v10,
                  (struct VIDMM_RECYCLE_MULTIRANGE **)a5,
                  a6,
                  0LL,
                  a8,
                  v22);
          goto LABEL_41;
        case 3:
          v24 = VIDMM_RECYCLE_HEAP::Allocate(
                  v13 + 110,
                  v12,
                  (unsigned int)v10,
                  (struct VIDMM_RECYCLE_MULTIRANGE **)a5,
                  a6,
                  0LL,
                  a8,
                  v22);
          goto LABEL_41;
        case 4:
          v24 = VIDMM_RECYCLE_HEAP::Allocate(
                  v13 + 119,
                  v12,
                  (unsigned int)v10,
                  (struct VIDMM_RECYCLE_MULTIRANGE **)a5,
                  a6,
                  0LL,
                  a8,
                  v22);
          goto LABEL_41;
        case 5:
          v24 = VIDMM_RECYCLE_HEAP::Allocate(
                  v13 + 128,
                  v12,
                  (unsigned int)v10,
                  (struct VIDMM_RECYCLE_MULTIRANGE **)a5,
                  a6,
                  0LL,
                  a8,
                  v22);
          goto LABEL_41;
        case 6:
          v24 = VIDMM_RECYCLE_HEAP::Allocate(
                  v13 + 137,
                  v12,
                  (unsigned int)v10,
                  (struct VIDMM_RECYCLE_MULTIRANGE **)a5,
                  a6,
                  0LL,
                  a8,
                  v22);
          goto LABEL_41;
        case 7:
          v24 = VIDMM_RECYCLE_HEAP::Allocate(
                  v13 + 146,
                  v12,
                  (unsigned int)v10,
                  (struct VIDMM_RECYCLE_MULTIRANGE **)a5,
                  a6,
                  0LL,
                  a8,
                  v22);
          goto LABEL_41;
        case 8:
          v24 = VIDMM_RECYCLE_HEAP::Allocate(
                  v13 + 155,
                  v12,
                  (unsigned int)v10,
                  (struct VIDMM_RECYCLE_MULTIRANGE **)a5,
                  a6,
                  0LL,
                  a8,
                  v22);
          goto LABEL_41;
        default:
          goto LABEL_42;
      }
      goto LABEL_42;
    }
    if ( v11 != 2 )
    {
      switch ( v11 )
      {
        case 1:
          v24 = VIDMM_RECYCLE_HEAP::Allocate(
                  v13 + 2,
                  v12,
                  (unsigned int)v10,
                  (struct VIDMM_RECYCLE_MULTIRANGE **)a5,
                  a6,
                  0LL,
                  a8,
                  v22);
          goto LABEL_41;
        case 3:
          v24 = VIDMM_RECYCLE_HEAP::Allocate(
                  v13 + 20,
                  v12,
                  (unsigned int)v10,
                  (struct VIDMM_RECYCLE_MULTIRANGE **)a5,
                  a6,
                  0LL,
                  a8,
                  v22);
          goto LABEL_41;
        case 4:
          v24 = VIDMM_RECYCLE_HEAP::Allocate(
                  v13 + 29,
                  v12,
                  (unsigned int)v10,
                  (struct VIDMM_RECYCLE_MULTIRANGE **)a5,
                  a6,
                  0LL,
                  a8,
                  v22);
          goto LABEL_41;
        case 5:
          v24 = VIDMM_RECYCLE_HEAP::Allocate(
                  v13 + 38,
                  v12,
                  (unsigned int)v10,
                  (struct VIDMM_RECYCLE_MULTIRANGE **)a5,
                  a6,
                  0LL,
                  a8,
                  v22);
          goto LABEL_41;
        case 6:
          v24 = VIDMM_RECYCLE_HEAP::Allocate(
                  v13 + 47,
                  v12,
                  (unsigned int)v10,
                  (struct VIDMM_RECYCLE_MULTIRANGE **)a5,
                  a6,
                  0LL,
                  a8,
                  v22);
          goto LABEL_41;
        case 7:
          v24 = VIDMM_RECYCLE_HEAP::Allocate(
                  v13 + 56,
                  v12,
                  (unsigned int)v10,
                  (struct VIDMM_RECYCLE_MULTIRANGE **)a5,
                  a6,
                  0LL,
                  a8,
                  v22);
          goto LABEL_41;
        case 8:
          v24 = VIDMM_RECYCLE_HEAP::Allocate(
                  v13 + 65,
                  v12,
                  (unsigned int)v10,
                  (struct VIDMM_RECYCLE_MULTIRANGE **)a5,
                  a6,
                  0LL,
                  a8,
                  v22);
          goto LABEL_41;
        case 9:
          v25 = v13 + 74;
          goto LABEL_40;
        case 10:
          v25 = v13 + 83;
LABEL_40:
          v24 = VIDMM_RECYCLE_HEAP::Allocate(
                  v25,
                  v12,
                  (unsigned int)v10,
                  (struct VIDMM_RECYCLE_MULTIRANGE **)a5,
                  a6,
                  a7,
                  a8,
                  v22);
LABEL_41:
          LODWORD(v23) = v24;
          break;
        default:
          break;
      }
LABEL_42:
      if ( (int)v23 < 0 )
        goto LABEL_187;
      break;
    }
    v30 = v13 + 11;
    v115 = v13 + 11;
    v120 = -1;
    v121 = 0LL;
    if ( (qword_1C0076010 & 2) != 0 )
    {
      v122 = 1;
      v120 = 8004;
      if ( byte_1C0076981 < 0 )
        McTemplateK0q_EtwWriteTransfer(v16, (__int64)&EventProfilerEnter, (__int64)a5, 8004);
    }
    else
    {
      v122 = 0;
    }
    DXGETWPROFILER_BASE::PushProfilerEntry();
    v117 = v10;
    WdLogSingleEntry3(4LL, v13 + 11, v12, v10);
    v31 = v13 + 17;
    v129 = v22;
    v32 = v30[6];
    v128[0] = v12;
    v128[1] = v10;
    v116 = v30 + 6;
    if ( v32 )
    {
      do
      {
        AlignedRange = VidMmFindAlignedRange(v128, (struct _RTL_BALANCED_NODE *)v32);
        if ( AlignedRange >= 0 )
        {
          if ( AlignedRange <= 0 )
            break;
          v32 = (VIDMM_RECYCLE_HEAP_MGR *)*((_QWORD *)v32 + 1);
        }
        else
        {
          v32 = *(VIDMM_RECYCLE_HEAP_MGR **)v32;
        }
      }
      while ( v32 );
      if ( v32 )
      {
        if ( !*((_DWORD *)v32 + 6) )
        {
          VIDMM_RECYCLE_HEAP::RemoveRangeFromTree(v30, *((unsigned int *)v32 + 22), v32);
          BlockAndRange = VIDMM_RECYCLE_HEAP::BuildIdleLockedMultirangeForRange((VIDMM_RECYCLE_HEAP *)v30, v32);
          if ( !BlockAndRange )
          {
            v35 = 0LL;
LABEL_95:
            VIDMM_RECYCLE_HEAP::AddRangeToTree(v30, v35, v32);
LABEL_96:
            WdLogSingleEntry3(4LL, v30, v12, v10);
            v22 = a9;
            BlockAndRange = VIDMM_RECYCLE_HEAP::CreateBlockAndRange(v30);
            if ( !BlockAndRange )
            {
              DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v120);
              if ( v122 && byte_1C0076981 < 0 )
                McTemplateK0q_EtwWriteTransfer(v42, (__int64)&EventProfilerExit, v43, v120);
              LODWORD(v23) = -1073741801;
              goto LABEL_186;
            }
            goto LABEL_67;
          }
          goto LABEL_67;
        }
LABEL_66:
        BlockAndRange = v32;
        goto LABEL_67;
      }
    }
    v32 = v30[7];
    if ( !v32 )
      goto LABEL_85;
    do
    {
      v40 = VidMmFindAlignedRange(v128, (struct _RTL_BALANCED_NODE *)v32);
      if ( v40 >= 0 )
      {
        if ( v40 <= 0 )
          break;
        v32 = (VIDMM_RECYCLE_HEAP_MGR *)*((_QWORD *)v32 + 1);
      }
      else
      {
        v32 = *(VIDMM_RECYCLE_HEAP_MGR **)v32;
      }
    }
    while ( v32 );
    if ( !v32 )
    {
LABEL_85:
      v32 = v30[8];
      if ( !v32 )
        goto LABEL_96;
      do
      {
        v41 = VidMmFindAlignedRange(v128, (struct _RTL_BALANCED_NODE *)v32);
        if ( v41 >= 0 )
        {
          if ( v41 <= 0 )
            break;
          v32 = (VIDMM_RECYCLE_HEAP_MGR *)*((_QWORD *)v32 + 1);
        }
        else
        {
          v32 = *(VIDMM_RECYCLE_HEAP_MGR **)v32;
        }
      }
      while ( v32 );
      if ( !v32 )
        goto LABEL_96;
      if ( !*((_DWORD *)v32 + 6) )
      {
        VIDMM_RECYCLE_HEAP::RemoveRangeFromTree(v30, *((unsigned int *)v32 + 22), v32);
        BlockAndRange = VIDMM_RECYCLE_HEAP::BuildIdleFreeMultirangeForRange((VIDMM_RECYCLE_HEAP *)v30, v32);
        if ( !BlockAndRange )
        {
          v35 = 2LL;
          goto LABEL_95;
        }
        goto LABEL_67;
      }
      goto LABEL_66;
    }
    if ( *((_DWORD *)v32 + 6) )
      goto LABEL_66;
    VIDMM_RECYCLE_HEAP::RemoveRangeFromTree(v30, *((unsigned int *)v32 + 22), v32);
    BlockAndRange = VIDMM_RECYCLE_HEAP::BuildIdleCommittedMultirangeForRange((VIDMM_RECYCLE_HEAP *)v30, v32);
    if ( !BlockAndRange )
    {
      v35 = 1LL;
      goto LABEL_95;
    }
LABEL_67:
    v36 = *((_QWORD *)BlockAndRange + 6);
    if ( *((_QWORD *)BlockAndRange + 5) - v36 <= v12 )
      goto LABEL_156;
    NextRange = (struct VIDMM_RECYCLE_RANGE *)*((_QWORD *)BlockAndRange + 8);
    for ( i = v36 + v12; NextRange; NextRange = VIDMM_RECYCLE_RANGE::GetNextRange(NextRange) )
    {
      if ( *((_QWORD *)NextRange + 4) <= i && *((_QWORD *)NextRange + 5) > i )
        break;
    }
    v39 = *((_QWORD *)NextRange + 4);
    if ( v39 == i )
    {
      PreviousRange = VIDMM_RECYCLE_RANGE::GetPreviousRange(NextRange);
    }
    else
    {
      v113 = 1;
      VIDMM_RECYCLE_RANGE::SplitAt(NextRange, i - v39, &v113);
      if ( !v113 )
      {
        WdLogSingleEntry2(
          3LL,
          BlockAndRange,
          **(_QWORD **)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)BlockAndRange + 10) + 32LL) + 8LL) + 8LL));
        v31 = v30 + 6;
        goto LABEL_156;
      }
      if ( NextRange == *((struct VIDMM_RECYCLE_RANGE **)BlockAndRange + 9)
        && *((_QWORD *)NextRange + 5) != *((_QWORD *)BlockAndRange + 5) )
      {
        *((_QWORD *)BlockAndRange + 9) = VIDMM_RECYCLE_RANGE::GetNextRange(NextRange);
      }
      v44 = *((_QWORD *)NextRange + 15);
      v45 = *((_QWORD *)NextRange + 9);
      PreviousRange = NextRange;
      NextRange = 0LL;
      if ( v44 != v45 + 72 )
        NextRange = (struct VIDMM_RECYCLE_RANGE *)(v44 - 120);
    }
    v46 = *((_QWORD *)BlockAndRange + 10);
    v47 = *((_QWORD *)BlockAndRange + 5);
    v123 = *((_DWORD *)BlockAndRange + 54);
    v48 = *(_QWORD *)(*(_QWORD *)(v46 + 32) + 8LL);
    v49 = *(_DWORD *)(v48 + 1620);
    if ( v49 )
    {
      v50 = (unsigned int)(v49 - 1);
      v51 = *(PVOID *)(v48 + 8 * v50 + 1656);
      *(_QWORD *)(v48 + 8 * v50 + 1656) = 0LL;
      --*(_DWORD *)(v48 + 1620);
    }
    else
    {
      v51 = ExAllocateFromLookasideListEx(*(PLOOKASIDE_LIST_EX *)(v48 + 1320));
    }
    if ( !v51 )
      goto LABEL_155;
    ++*(_DWORD *)(v48 + 1688);
    WdLogSingleEntry1(4LL, v51);
    *((_QWORD *)v51 + 4) = i;
    *((_QWORD *)v51 + 8) = 0LL;
    *((_QWORD *)v51 + 9) = 0LL;
    *((_DWORD *)v51 + 54) = v123;
    *((_DWORD *)v51 + 6) = 1;
    *((_QWORD *)v51 + 10) = v46;
    *((_QWORD *)v51 + 5) = v47;
    *((_QWORD *)v51 + 6) = i;
    *((_WORD *)v51 + 64) = 0;
    ++*(_QWORD *)(v46 + 8);
    LeastSignificantBit = RtlFindLeastSignificantBit(*((_QWORD *)v51 + 4));
    if ( LeastSignificantBit < 0 )
      v53 = 0LL;
    else
      v53 = 1LL << LeastSignificantBit;
    *((_QWORD *)v51 + 7) = v53;
    v54 = *((_QWORD *)v51 + 10);
    *((_QWORD *)v51 + 11) = 3LL;
    *((_QWORD *)v51 + 12) = 0LL;
    *((_QWORD *)v51 + 13) = 0LL;
    *((_QWORD *)v51 + 14) = 0LL;
    *((_QWORD *)v51 + 15) = 0LL;
    *((_BYTE *)v51 + 130) = 0;
    *((_QWORD *)v51 + 17) = 0LL;
    *((_QWORD *)v51 + 18) = 0LL;
    *((_QWORD *)v51 + 24) = 0LL;
    *((_WORD *)v51 + 76) = 0;
    *((_QWORD *)v51 + 20) = 0LL;
    *((_QWORD *)v51 + 21) = 0LL;
    *((_QWORD *)v51 + 23) = 0LL;
    *((_QWORD *)v51 + 22) = 0LL;
    *((_QWORD *)v51 + 25) = 0LL;
    *((_QWORD *)v51 + 26) = 0LL;
    *((_BYTE *)v51 + 232) = 0;
    *((_QWORD *)v51 + 28) = 0LL;
    v55 = *(_QWORD *)(v54 + 136);
    if ( v55 )
    {
      v56 = *(_QWORD *)(v55 + 24) + 144LL * *(_QWORD *)(v55 + 32);
      *(_DWORD *)v56 = 0;
      *(_QWORD *)(v56 + 8) = v51;
      RtlCaptureStackBackTrace(1u, 0x10u, (PVOID *)(v56 + 16), 0LL);
      ++*(_QWORD *)(*(_QWORD *)(v54 + 136) + 32LL);
      v57 = *(_QWORD *)(v54 + 136);
      if ( *(_QWORD *)(v57 + 32) == *(_QWORD *)(v57 + 48) )
      {
        *(_QWORD *)(v57 + 32) = 0LL;
        *(_BYTE *)(*(_QWORD *)(v54 + 136) + 40LL) = 1;
      }
    }
    *((_QWORD *)v51 + 8) = NextRange;
    *((_QWORD *)v51 + 9) = *((_QWORD *)BlockAndRange + 9);
    *((_QWORD *)BlockAndRange + 9) = PreviousRange;
    *((_QWORD *)BlockAndRange + 5) = i;
    for ( j = (struct VIDMM_RECYCLE_RANGE *)*((_QWORD *)v51 + 8); ; j = VIDMM_RECYCLE_RANGE::GetNextRange(j) )
    {
      v59 = *((_DWORD *)v51 + 54);
      if ( v59 )
      {
        v60 = v59 - 1;
        if ( v60 )
        {
          if ( v60 == 1 )
          {
            *((_QWORD *)j + 19) = v51;
          }
          else
          {
            g_DxgMmsBugcheckExportIndex = 1;
            WdLogSingleEntry5(0LL, 270LL, 52LL, 10LL, 0LL, 0LL);
          }
        }
        else
        {
          *((_QWORD *)j + 18) = v51;
        }
      }
      else
      {
        *((_QWORD *)j + 17) = v51;
      }
      if ( j == *((struct VIDMM_RECYCLE_RANGE **)v51 + 9) )
        break;
    }
    v61 = *((_DWORD *)BlockAndRange + 54);
    if ( !v61 )
    {
      v73 = *(_QWORD *)(*((_QWORD *)BlockAndRange + 10) + 32LL);
      WdLogSingleEntry2(4LL, v51, 2LL);
      LOBYTE(v74) = 0;
      v75 = *(struct _RTL_BALANCED_NODE **)(v73 + 64);
      v76 = *((_QWORD *)v51 + 7);
      v124 = *((_QWORD *)v51 + 5) - *((_QWORD *)v51 + 4);
      v125 = v76;
      v126 = 0;
      if ( v75 )
      {
        while ( 1 )
        {
          if ( (int)VidMmCompareForInsertAlignedRange(&v124, v75) < 0 )
          {
            v77 = v75->Children[0];
            if ( !v75->Children[0] )
            {
              LOBYTE(v74) = 0;
              break;
            }
          }
          else
          {
            v77 = v75->Children[1];
            if ( !v77 )
            {
              LOBYTE(v74) = 1;
              break;
            }
          }
          v75 = v77;
        }
      }
      RtlAvlInsertNodeEx(v73 + 64, v75, v74, v51);
      *((_DWORD *)v51 + 22) = 2;
      goto LABEL_155;
    }
    v62 = v61 - 1;
    if ( !v62 )
    {
      v68 = *(_QWORD *)(*((_QWORD *)BlockAndRange + 10) + 32LL);
      WdLogSingleEntry2(4LL, v51, 1LL);
      LOBYTE(v69) = 0;
      v70 = *(struct _RTL_BALANCED_NODE **)(v68 + 56);
      v71 = *((_QWORD *)v51 + 7);
      v124 = *((_QWORD *)v51 + 5) - *((_QWORD *)v51 + 4);
      v125 = v71;
      v126 = 0;
      if ( v70 )
      {
        while ( 1 )
        {
          if ( (int)VidMmCompareForInsertAlignedRange(&v124, v70) < 0 )
          {
            v72 = v70->Children[0];
            if ( !v70->Children[0] )
            {
              LOBYTE(v69) = 0;
              break;
            }
          }
          else
          {
            v72 = v70->Children[1];
            if ( !v72 )
            {
              LOBYTE(v69) = 1;
              break;
            }
          }
          v70 = v72;
        }
      }
      RtlAvlInsertNodeEx(v68 + 56, v70, v69, v51);
      *((_DWORD *)v51 + 22) = 1;
      goto LABEL_155;
    }
    if ( v62 != 1 )
      goto LABEL_155;
    v63 = *(_QWORD *)(*((_QWORD *)BlockAndRange + 10) + 32LL);
    WdLogSingleEntry2(4LL, v51, 0LL);
    LOBYTE(v64) = 0;
    v65 = *(struct _RTL_BALANCED_NODE **)(v63 + 48);
    v66 = *((_QWORD *)v51 + 7);
    v124 = *((_QWORD *)v51 + 5) - *((_QWORD *)v51 + 4);
    v125 = v66;
    v126 = 0;
    if ( !v65 )
      goto LABEL_138;
    while ( (int)VidMmCompareForInsertAlignedRange(&v124, v65) >= 0 )
    {
      v67 = v65->Children[1];
      if ( !v67 )
      {
        LOBYTE(v64) = 1;
        goto LABEL_138;
      }
LABEL_136:
      v65 = v67;
    }
    v67 = v65->Children[0];
    if ( v65->Children[0] )
      goto LABEL_136;
    LOBYTE(v64) = 0;
LABEL_138:
    RtlAvlInsertNodeEx(v63 + 48, v65, v64, v51);
    *((_DWORD *)v51 + 22) = 0;
LABEL_155:
    v30 = v115;
    v31 = v116;
    v12 = a2;
    v10 = v117;
LABEL_156:
    for ( k = (struct VIDMM_RECYCLE_RANGE *)*((_QWORD *)BlockAndRange + 8); ; k = VIDMM_RECYCLE_RANGE::GetNextRange(k) )
    {
      WdLogSingleEntry1(4LL, k);
      if ( *((_DWORD *)BlockAndRange + 54) )
      {
        v79 = (struct VIDMM_RECYCLE_MULTIRANGE *)*((_QWORD *)k + 17);
        if ( v79 )
        {
          WdLogSingleEntry1(4LL, *((_QWORD *)k + 17));
          VIDMM_RECYCLE_HEAP::ResizeMultirangeToExcludeOverlap((VIDMM_RECYCLE_HEAP *)v30, v79, BlockAndRange);
          *((_QWORD *)k + 17) = 0LL;
        }
      }
      if ( *((_DWORD *)BlockAndRange + 54) != 1 )
      {
        v80 = (struct VIDMM_RECYCLE_MULTIRANGE *)*((_QWORD *)k + 18);
        if ( v80 )
        {
          WdLogSingleEntry1(4LL, *((_QWORD *)k + 18));
          VIDMM_RECYCLE_HEAP::ResizeMultirangeToExcludeOverlap((VIDMM_RECYCLE_HEAP *)v30, v80, BlockAndRange);
          *((_QWORD *)k + 18) = 0LL;
        }
      }
      if ( *((_DWORD *)BlockAndRange + 54) != 2 )
      {
        v81 = (struct VIDMM_RECYCLE_MULTIRANGE *)*((_QWORD *)k + 19);
        if ( v81 )
        {
          WdLogSingleEntry1(4LL, *((_QWORD *)k + 19));
          VIDMM_RECYCLE_HEAP::ResizeMultirangeToExcludeOverlap((VIDMM_RECYCLE_HEAP *)v30, v81, BlockAndRange);
          *((_QWORD *)k + 19) = 0LL;
        }
      }
      if ( k == *((struct VIDMM_RECYCLE_RANGE **)BlockAndRange + 9) )
        break;
    }
    v82 = *((_DWORD *)BlockAndRange + 22);
    v83 = v82;
    WdLogSingleEntry2(4LL, BlockAndRange, v82);
    if ( !v82 )
    {
      v86 = v31;
      goto LABEL_175;
    }
    v84 = v82 - 1;
    if ( !v84 )
    {
      v86 = v30 + 7;
      goto LABEL_175;
    }
    if ( v84 == 1 )
    {
      v86 = v30 + 8;
LABEL_175:
      RtlAvlRemoveNode(v86, BlockAndRange);
      goto LABEL_176;
    }
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 270LL, 52LL, 16LL, v83, 0LL);
LABEL_176:
    v87 = (VIDMM_RECYCLE_RANGE *)*((_QWORD *)BlockAndRange + 8);
    *((_DWORD *)BlockAndRange + 22) = 3;
    while ( 1 )
    {
      v88 = VIDMM_RECYCLE_RANGE::Commit(v87, v85, a8);
      v23 = v88;
      if ( v88 < 0 )
        break;
      if ( v87 == *((VIDMM_RECYCLE_RANGE **)BlockAndRange + 9) )
      {
        for ( m = (struct VIDMM_RECYCLE_RANGE *)*((_QWORD *)BlockAndRange + 8); ; m = VIDMM_RECYCLE_RANGE::GetNextRange(m) )
        {
          *((_QWORD *)m + 17) = 0LL;
          *((_QWORD *)m + 18) = 0LL;
          *((_QWORD *)m + 19) = 0LL;
          *((_QWORD *)m + 20) = BlockAndRange;
          v92 = (struct VIDMM_RECYCLE_RANGE *)*((_QWORD *)BlockAndRange + 9);
          if ( m == v92 )
            break;
        }
        v93 = (struct VIDMM_RECYCLE_RANGE *)*((_QWORD *)BlockAndRange + 8);
        *((_DWORD *)BlockAndRange + 54) = 3;
        v94 = v93;
        v95 = v93;
        v96 = *((_DWORD *)v93 + 16);
        v97 = *((_DWORD *)v93 + 23);
        while ( 1 )
        {
          v98 = v93;
          if ( *((_DWORD *)v93 + 16) != v96 || *((_DWORD *)v93 + 23) != v97 )
          {
            if ( v94 != v95 )
            {
              VIDMM_RECYCLE_MULTIRANGE::MergeRanges(BlockAndRange, v94, v95);
              v92 = (struct VIDMM_RECYCLE_RANGE *)*((_QWORD *)BlockAndRange + 9);
            }
            v94 = v93;
          }
          if ( v93 == v92 )
            break;
          v93 = VIDMM_RECYCLE_RANGE::GetNextRange(v93);
          v95 = v98;
        }
        if ( v94 != v93 )
          VIDMM_RECYCLE_MULTIRANGE::MergeRanges(BlockAndRange, v94, v93);
        if ( !*((_DWORD *)BlockAndRange + 54) )
        {
          v99 = (struct VIDMM_RECYCLE_RANGE *)*((_QWORD *)BlockAndRange + 8);
          if ( v99 == *((struct VIDMM_RECYCLE_RANGE **)BlockAndRange + 9) && !*((_DWORD *)v99 + 16) )
            VIDMM_RECYCLE_BLOCK::CombineFreedScanFromRange(*((VIDMM_RECYCLE_BLOCK **)BlockAndRange + 10), v99);
        }
        v100 = (_QWORD *)*((_QWORD *)BlockAndRange + 10);
        v101 = v100;
        if ( *v100 == 1LL && !*((_DWORD *)BlockAndRange + 54) )
        {
          v102 = (struct VIDMM_RECYCLE_RANGE *)*((_QWORD *)BlockAndRange + 8);
          if ( !*((_DWORD *)v102 + 16) )
          {
            VIDMM_RECYCLE_HEAP::RemoveMultirangeFromTree(v100[4], 2, (__int64)BlockAndRange);
            VIDMM_RECYCLE_HEAP_MGR::DestroyMultirange(*(VIDMM_RECYCLE_HEAP_MGR **)(v100[4] + 8LL), BlockAndRange);
            VIDMM_RECYCLE_HEAP_MGR::DestroyRange(*(VIDMM_RECYCLE_HEAP_MGR **)(v100[4] + 8LL), v102);
            v101 = (_QWORD *)*((_QWORD *)BlockAndRange + 10);
          }
        }
        v103 = *((_QWORD *)BlockAndRange + 9);
        v104 = 0LL;
        v105 = *(_QWORD *)(v103 + 120);
        if ( v105 != *(_QWORD *)(v103 + 72) + 72LL )
          v104 = v105 - 120;
        if ( v104 && !*(_DWORD *)(v104 + 64) )
          VIDMM_RECYCLE_BLOCK::ShrinkOnTailRangeFree(v101, v104);
        *a5 = BlockAndRange;
        v106 = **(_DWORD **)(*((_QWORD *)BlockAndRange + 10) + 32LL);
        if ( (unsigned int)(v106 - 3) > 3 || (unsigned int)(v106 - 5) <= 1 )
          v107 = (void *)*((_QWORD *)BlockAndRange + 6);
        else
          v107 = (void *)(*((_QWORD *)BlockAndRange + 20) + *((_QWORD *)BlockAndRange + 21));
        v108 = 1;
        *a6 = v107;
        v109 = (struct VIDMM_RECYCLE_RANGE *)*((_QWORD *)BlockAndRange + 8);
        v110 = (struct VIDMM_RECYCLE_RANGE *)*((_QWORD *)BlockAndRange + 9);
        while ( 1 )
        {
          if ( *((_DWORD *)v109 + 20) > 1u )
            v108 = 0;
          if ( v109 == v110 )
            break;
          v109 = VIDMM_RECYCLE_RANGE::GetNextRange(v109);
        }
        *a8 = v108;
        *(_QWORD *)(*((_QWORD *)v30[1] + 1) + 136LL) += *((_QWORD *)BlockAndRange + 5) - *((_QWORD *)BlockAndRange + 4);
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v120);
        if ( v122 && byte_1C0076981 < 0 )
          McTemplateK0q_EtwWriteTransfer(v111, (__int64)&EventProfilerExit, v112, v120);
        LODWORD(v23) = 0;
        goto LABEL_43;
      }
      v87 = VIDMM_RECYCLE_RANGE::GetNextRange(v87);
    }
    while ( v87 != *((VIDMM_RECYCLE_RANGE **)BlockAndRange + 8) )
    {
      v87 = VIDMM_RECYCLE_RANGE::GetPreviousRange(v87);
      VIDMM_RECYCLE_RANGE::Decommit(v87);
    }
    WdLogSingleEntry5(3LL, BlockAndRange, v12, v10, v23, **((_QWORD **)v30[1] + 1));
    VIDMM_RECYCLE_HEAP::IntegrateMultirangeIntoTrees((VIDMM_RECYCLE_HEAP *)v30, BlockAndRange);
    VIDMM_RECYCLE_HEAP_MGR::DestroyMultirange(v30[1], BlockAndRange);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v120);
    if ( v122 && byte_1C0076981 < 0 )
      McTemplateK0q_EtwWriteTransfer(v89, (__int64)&EventProfilerExit, v90, v120);
    v22 = a9;
LABEL_186:
    v11 = a4;
    v10 = a3;
    v13 = a1;
LABEL_187:
    if ( !v114 )
    {
      VIDMM_RECYCLE_HEAP_MGR::ProcessDebounceList((VIDMM_RECYCLE_HEAP_MGR *)v13, 0, 0);
      v114 = 1;
      continue;
    }
    break;
  }
LABEL_43:
  if ( v119 )
  {
    v26 = v118;
    v119 = 0;
    if ( v118[3] != KeGetCurrentThread() )
      WdLogSingleEntry5(0LL, 275LL, 4LL, v118, 0LL, 0LL);
    if ( *((int *)v26 + 8) <= 0 )
    {
      WdLogSingleEntry1(1LL, 535LL);
      DxgkLogInternalTriageEvent(v27, 262146LL);
    }
    if ( (*((_DWORD *)v26 + 8))-- == 1 )
    {
      v26[3] = 0LL;
      ExReleasePushLockExclusiveEx(v26 + 1, 0LL);
    }
    KeLeaveCriticalRegion();
  }
  return (unsigned int)v23;
}
