/*
 * XREFs of ?SubmitPresentWithDmaBuffer@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAVDXGHWQUEUE@@PEAVDXGALLOCATION@@2PEAU_DXGKARG_PRESENT@@PEAU_VIDMM_DMA_BUFFER@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0172460
 * Callers:
 *     ?SubmitPresent@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAPEAVDXGHWQUEUE@@IPEAPEAV1@PEAVDXGALLOCATION@@IIPEAU_DXGKARG_PRESENT@@PEAU_D3DKMT_PRESENT_RGNS@@PEAU_VIDMM_DMA_BUFFER@@PEAUVIDSCH_SUBMIT_DATA_BASE@@W4_D3DDDIFORMAT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C017B810 (-SubmitPresent@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAPEAVDXGHWQUEUE@@IPEAPEAV1@PEAVDXGALLOCAT.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C000A924 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B780 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C000B800 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C000B8C0 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C000BB00 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D9B8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 *     TraceDxgkPatchLocationList @ 0x1C00510B8 (TraceDxgkPatchLocationList.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C017D000 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?DxgkThreadObjectCreateDxgThread@@YAPEAVDXGTHREAD@@XZ @ 0x1C018B028 (-DxgkThreadObjectCreateDxgThread@@YAPEAVDXGTHREAD@@XZ.c)
 *     ?AcquireDmaBuffer@DXGCONTEXT@@QEAAJPEAPEAU_VIDMM_DMA_BUFFER@@PEAVCOREDEVICEACCESS@@E@Z @ 0x1C01EBD10 (-AcquireDmaBuffer@DXGCONTEXT@@QEAAJPEAPEAU_VIDMM_DMA_BUFFER@@PEAVCOREDEVICEACCESS@@E@Z.c)
 *     ?DdiPresent@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_PRESENT@@@Z @ 0x1C01ED040 (-DdiPresent@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_PRESENT@@@Z.c)
 *     ?DdiPresentToHwQueue@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_PRESENT@@@Z @ 0x1C02227FE (-DdiPresentToHwQueue@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_PRESENT@@@Z.c)
 *     ?DdiSignalMonitoredFence@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_SIGNALMONITOREDFENCE@@@Z @ 0x1C0222AD8 (-DdiSignalMonitoredFence@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_SIGNALMONITOREDFENCE@@@Z.c)
 *     ?EnsureKmSubmissionProgressSyncObject@DXGHWQUEUE@@QEAAJXZ @ 0x1C0223396 (-EnsureKmSubmissionProgressSyncObject@DXGHWQUEUE@@QEAAJXZ.c)
 */

__int64 __fastcall DXGCONTEXT::SubmitPresentWithDmaBuffer(
        DXGCONTEXT *this,
        const struct _D3DKMT_PRESENT *a2,
        struct DXGHWQUEUE *a3,
        struct DXGALLOCATION *a4,
        struct DXGALLOCATION *a5,
        struct _DXGKARG_PRESENT *a6,
        struct _VIDMM_DMA_BUFFER *a7,
        struct VIDSCH_SUBMIT_DATA_BASE *a8,
        struct COREDEVICEACCESS *a9)
{
  unsigned __int8 v9; // di
  struct DXGALLOCATION *v10; // r13
  struct VIDSCH_SUBMIT_DATA_BASE *v12; // r14
  bool v13; // si
  struct _DXGK_PRESENTFLAGS::$39B5E91464CC7478F36F75826127ACBA::$425066DE2CBEB6B5ED4C7449D399EBDF Value; // eax
  struct COREDEVICEACCESS *v15; // rcx
  struct _VIDMM_DMA_BUFFER *v16; // rax
  int v17; // eax
  int v18; // eax
  __int64 v19; // rax
  __int64 v20; // r9
  __int64 v21; // r10
  char *v22; // r8
  D3DGPU_VIRTUAL_ADDRESS *v23; // rcx
  int v24; // eax
  __int64 v25; // r15
  char v26; // di
  void *v27; // rax
  void *v28; // rdx
  UINT v29; // ecx
  UINT v30; // r8d
  __int64 v31; // rdi
  __int64 v32; // rax
  __int64 v33; // r8
  struct DXGALLOCATION *v34; // rdx
  __int64 v35; // rdi
  __int64 v36; // rcx
  __int64 v37; // rax
  __int64 v38; // r9
  __int64 v39; // r8
  __int64 v40; // rdx
  int v41; // r13d
  UINT v42; // eax
  struct _DXGK_PRESENTFLAGS::$39B5E91464CC7478F36F75826127ACBA::$425066DE2CBEB6B5ED4C7449D399EBDF v43; // eax
  __int64 v44; // rdx
  __int64 v45; // r15
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // r9
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v52; // rdi
  __int64 v53; // rsi
  __int64 v54; // r14
  __int64 v55; // rcx
  __int64 v56; // r8
  KIRQL CurrentIrql; // al
  __int64 v58; // r15
  struct DXGTHREAD *v59; // rdi
  int v60; // esi
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // r15
  _QWORD *v64; // rax
  int v65; // edx
  __int64 v66; // rcx
  __int64 v67; // rdi
  __int64 v68; // rcx
  __int64 v69; // r8
  DXGHWQUEUE *v70; // rdi
  unsigned int v71; // eax
  void *pDmaBuffer; // r15
  __int64 v73; // rcx
  int v74; // eax
  unsigned int v75; // r15d
  int v76; // r13d
  __int64 v77; // r8
  unsigned __int64 v78; // rdi
  int v79; // eax
  __int64 v80; // rcx
  int v81; // eax
  unsigned int *v82; // rsi
  _QWORD *v83; // r15
  int v84; // eax
  int v85; // edi
  int v87; // r9d
  __int64 v88; // rcx
  void *v89; // rdx
  __int64 v90; // rax
  int v91; // eax
  __int64 v92; // rax
  __int64 v93; // rdx
  struct DXGTHREAD *Current; // rax
  KIRQL v95; // al
  __int64 v96; // rdi
  UINT64 v97; // rdx
  __int64 v98; // rcx
  __int64 v99; // rax
  void *v100; // rdx
  int v101; // eax
  __int64 v102; // r8
  DXGCONTEXT *v103; // rdx
  __int64 v104; // rcx
  __int64 v105; // rdx
  unsigned int v106; // edi
  char *v107; // rsi
  __int64 v108; // r8
  __int64 v109; // rax
  struct _VIDMM_DMA_BUFFER *v110; // r14
  __int64 v111; // rsi
  __int64 v112; // rdi
  __int64 v113; // rax
  struct DXGALLOCATION *v114; // r13
  bool v115; // zf
  __int64 v116; // rax
  __int64 v117; // r9
  char v118; // r8
  __int64 v119; // rcx
  __int64 v120; // rcx
  __int64 v121; // r8
  _QWORD *v122; // rcx
  _QWORD *v123; // rcx
  DXGHWQUEUE *v124; // rdx
  __int64 v125; // [rsp+20h] [rbp-E0h]
  __int64 v126; // [rsp+20h] [rbp-E0h]
  char v127; // [rsp+60h] [rbp-A0h]
  bool v128; // [rsp+61h] [rbp-9Fh]
  char v129; // [rsp+62h] [rbp-9Eh]
  struct _VIDMM_DMA_BUFFER *v130; // [rsp+68h] [rbp-98h] BYREF
  __int64 v131; // [rsp+70h] [rbp-90h]
  int v132; // [rsp+7Ch] [rbp-84h] BYREF
  struct DXGALLOCATION *v133; // [rsp+80h] [rbp-80h]
  char *v134; // [rsp+88h] [rbp-78h] BYREF
  UINT v135; // [rsp+90h] [rbp-70h] BYREF
  int v136; // [rsp+94h] [rbp-6Ch] BYREF
  __int64 v137; // [rsp+98h] [rbp-68h]
  D3DGPU_VIRTUAL_ADDRESS v138; // [rsp+A0h] [rbp-60h] BYREF
  DXGHWQUEUE *v139; // [rsp+A8h] [rbp-58h]
  struct DXGTHREAD *DxgThread; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v141; // [rsp+B8h] [rbp-48h]
  struct VIDSCH_SUBMIT_DATA_BASE *v142; // [rsp+C0h] [rbp-40h]
  LARGE_INTEGER v143; // [rsp+C8h] [rbp-38h] BYREF
  struct DXGALLOCATION *v144; // [rsp+D0h] [rbp-30h]
  struct COREDEVICEACCESS *v145; // [rsp+D8h] [rbp-28h]
  int v146; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v147; // [rsp+E8h] [rbp-18h]
  char v148; // [rsp+F0h] [rbp-10h]
  __int64 v149; // [rsp+F8h] [rbp-8h] BYREF
  struct _DXGKARG_SIGNALMONITOREDFENCE v150; // [rsp+100h] [rbp+0h] BYREF
  struct _DXGKARG_SIGNALMONITOREDFENCE v151; // [rsp+150h] [rbp+50h] BYREF
  char v152[8]; // [rsp+1B8h] [rbp+B8h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+1C0h] [rbp+C0h] BYREF
  int v154; // [rsp+1F0h] [rbp+F0h] BYREF
  int v155; // [rsp+1F4h] [rbp+F4h]
  int v156; // [rsp+1F8h] [rbp+F8h]
  int v157; // [rsp+1FCh] [rbp+FCh]
  int v158; // [rsp+200h] [rbp+100h]
  __int64 v159; // [rsp+204h] [rbp+104h] BYREF
  int v160; // [rsp+20Ch] [rbp+10Ch]
  struct DXGALLOCATION *v161; // [rsp+210h] [rbp+110h]
  struct DXGALLOCATION *v162; // [rsp+218h] [rbp+118h]
  _QWORD v163[12]; // [rsp+220h] [rbp+120h] BYREF

  v9 = 1;
  v10 = a5;
  v12 = a8;
  v13 = 1;
  Value = (struct _DXGK_PRESENTFLAGS::$39B5E91464CC7478F36F75826127ACBA::$425066DE2CBEB6B5ED4C7449D399EBDF)a6->Flags.Value;
  v15 = a9;
  v133 = a4;
  v139 = a3;
  v144 = a5;
  v130 = a7;
  v142 = a8;
  v145 = a9;
  v127 = 0;
  v134 = 0LL;
  v129 = 0;
  v128 = 1;
  a6->MultipassOffset = 0;
  if ( (*(_BYTE *)&Value & 4) != 0 && !a4 )
  {
    WdLogSingleEntry1(2LL, 8879LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Source allocation cannot be NULL for Flip present",
      8879LL,
      0LL,
      0LL,
      0LL,
      0LL);
LABEL_102:
    v26 = 0;
    LODWORD(v25) = -1073741823;
    goto LABEL_160;
  }
  if ( (*((_DWORD *)this + 101) & 0x10) != 0 && !a3 )
  {
    WdLogSingleEntry1(2LL, 8889LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Hardware context present is not provided with hardware queue array",
      8889LL,
      0LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_102;
  }
  v16 = a7;
  while ( 1 )
  {
    if ( !v16 )
    {
      LODWORD(v25) = DXGCONTEXT::AcquireDmaBuffer(this, &v130, v15, 0);
      if ( (int)v25 < 0 )
      {
        WdLogSingleEntry1(2LL, this);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Failed to acquire DMA buffer for Present. Context: 0x%I64x",
          (__int64)this,
          0LL,
          0LL,
          0LL,
          0LL);
        v26 = 0;
        v127 = 0;
        goto LABEL_160;
      }
      if ( !v130 )
      {
        WdLogSingleEntry1(1LL, 8909LL);
        DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pVidMmDmaBuffer", 8909LL, 0LL, 0LL, 0LL, 0LL);
      }
      a4 = v133;
    }
    v155 &= 2u;
    v154 = 0;
    if ( a4 )
      v17 = *((_DWORD *)a4 + 4);
    else
      v17 = 0;
    v157 &= 2u;
    v156 = v17;
    if ( v10 )
      v18 = *((_DWORD *)v10 + 4);
    else
      v18 = 0;
    v158 = v18;
    v160 = 0;
    v161 = a4;
    v159 = v159 & 2 | 1;
    v19 = *((_QWORD *)this + 2);
    v162 = v10;
    v135 = 0;
    v143.QuadPart = 0LL;
    v138 = 0LL;
    v149 = 0LL;
    if ( DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*(_QWORD *)(v19 + 16) + 16LL)) )
      v22 = (char *)&v159 + 4;
    else
      v22 = 0LL;
    if ( *((_BYTE *)this + 438) )
      v23 = &v138;
    else
      v23 = 0LL;
    LODWORD(v125) = 1;
    v24 = (*(__int64 (__fastcall **)(__int64, int *, __int64, _QWORD, __int64, UINT *, LARGE_INTEGER *, D3DGPU_VIRTUAL_ADDRESS *, __int64 *, __int64, char *))(*(_QWORD *)(v20 + 8) + 584LL))(
            v21,
            &v154,
            3LL,
            v9,
            v125,
            &v135,
            &v143,
            v23,
            &v149,
            (__int64)v12 + 200,
            v22);
    LODWORD(v25) = v24;
    v131 = v24;
    if ( v24 < 0 )
    {
      WdLogSingleEntry2(3LL, this, v24);
      v26 = 0;
      v127 = 0;
      goto LABEL_160;
    }
    v26 = 1;
    v127 = 1;
    (*(void (__fastcall **)(struct _VIDMM_DMA_BUFFER *, char **))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                        + 648LL)
                                                                            + 8LL)
                                                                + 520LL))(
      v130,
      &v134);
    a6->pDmaBuffer = v134;
    a6->DmaSize = (*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                                + 648LL)
                                                                                    + 8LL)
                                                                        + 544LL))(v130);
    v27 = (void *)(*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                                + 648LL)
                                                                                    + 8LL)
                                                                        + 576LL))(v130);
    v28 = v27;
    v29 = v135;
    a6->pDmaBufferPrivateData = v27;
    v30 = *((_DWORD *)this + 52);
    a6->DmaBufferSegmentId = v29;
    a6->DmaBufferPhysicalAddress = v143;
    a6->DmaBufferPrivateDataSize = v30;
    if ( v129 )
      break;
LABEL_15:
    *(_DWORD *)v12 ^= (*(_DWORD *)v12 ^ (*((unsigned __int8 *)this + 438) << 27)) & 0x8000000;
    if ( !v13 )
      goto LABEL_63;
    v31 = *((_QWORD *)this + 2);
    if ( *((_BYTE *)this + 438) )
    {
      memset(v163, 0, sizeof(v163));
      v32 = (*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v31 + 16) + 648LL)
                                                                              + 8LL)
                                                                  + 568LL))(v130);
      v34 = v133;
      v35 = v32;
      v36 = *(_QWORD *)(v32 + 24);
      v163[4] = v36;
      if ( v133 )
      {
        v37 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                                + 648LL)
                                                                                    + 8LL)
                                                                        + 256LL))(
                *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 656LL),
                *((_QWORD *)v133 + 3),
                *((unsigned __int8 *)this + 439),
                *((unsigned int *)this + 100));
        v34 = v133;
        v163[5] = v37;
      }
      if ( (a6->Flags.Value & 4) != 0 )
      {
        v92 = *((_QWORD *)this + 2);
        v93 = *((_QWORD *)v34 + 6);
        v41 = 0;
        v136 = 0;
        (*(void (__fastcall **)(_QWORD, _QWORD, int *, _QWORD *, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v92 + 16)
                                                                                                + 648LL)
                                                                                    + 8LL)
                                                                        + 224LL))(
          *(_QWORD *)(*(_QWORD *)(v92 + 16) + 656LL),
          *(_QWORD *)(v93 + 8),
          &v136,
          &v163[6],
          0LL);
        LOWORD(v163[7]) = v136;
      }
      else
      {
        if ( v10 )
        {
          v38 = *((unsigned int *)this + 100);
          v39 = *((unsigned __int8 *)this + 439);
          v40 = *((_QWORD *)v10 + 3);
          v163[8] = *(_QWORD *)(v35 + 48);
          v163[9] = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, __int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 648LL)
                                                                                             + 8LL)
                                                                                 + 256LL))(
                      *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 656LL),
                      v40,
                      v39,
                      v38);
          if ( !v163[9] )
          {
            LODWORD(v25) = -1073741811;
            WdLogSingleEntry3(2LL, this, -1073741811LL, 9107LL);
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"0x%I64x Rejecting Present because the virtual address is not assigned to the destination allocati"
                        "on, ntStatus 0x%I64x",
              (__int64)this,
              -1073741811LL,
              9107LL,
              0LL,
              0LL);
            goto LABEL_159;
          }
        }
        v41 = 0;
      }
      a6->DmaBufferGpuVirtualAddress = v138;
      a6->pAllocationList = (DXGK_ALLOCATIONLIST *)v163;
      v42 = 0;
      a6->pPatchLocationListOut = 0LL;
    }
    else
    {
      a6->pAllocationList = (DXGK_ALLOCATIONLIST *)(*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *, void *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v31 + 16) + 648LL) + 8LL) + 568LL))(
                                                     v130,
                                                     v28);
      a6->pPatchLocationListOut = (D3DDDI_PATCHLOCATIONLIST *)(*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 648LL) + 8LL) + 560LL))(v130);
      v42 = (*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                          + 648LL)
                                                                              + 8LL)
                                                                  + 552LL))(v130);
      v41 = 0;
    }
    a6->PatchLocationListOutSize = v42;
    if ( (*((_DWORD *)this + 101) & 0x10) == 0
      || (v36 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL),
          *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v36 + 16) + 216LL) + 64LL) + 40LL) + 28LL) < 0xA002u) )
    {
      v43 = (struct _DXGK_PRESENTFLAGS::$39B5E91464CC7478F36F75826127ACBA::$425066DE2CBEB6B5ED4C7449D399EBDF)a6->Flags.Value;
      v141 = 0LL;
      if ( (*(_BYTE *)&v43 & 1) != 0
        || (v44 = *((_QWORD *)this + 2), v36 = *(_QWORD *)(*(_QWORD *)(v44 + 16) + 16LL), !*(_BYTE *)(v36 + 2746)) )
      {
        v44 = *((_QWORD *)this + 2);
        v141 = *((_QWORD *)this + 23);
      }
      v45 = *(_QWORD *)(v44 + 16);
      v137 = v45;
      v146 = -1;
      v147 = 0LL;
      if ( (qword_1C012F870 & 2) != 0 )
      {
        v148 = 1;
        v146 = 5031;
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v36, &EventProfilerEnter, v33, 5031);
      }
      else
      {
        v148 = 0;
      }
      DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v146, 5031);
      CurrentProcess = PsGetCurrentProcess(v47, v46, v48, v49);
      ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
      v52 = ProcessDxgProcess;
      if ( (!ProcessDxgProcess || (*(_DWORD *)(ProcessDxgProcess + 424) & 0x80) != 0)
        && (Current = DXGTHREAD::GetCurrent()) != 0LL
        && (v53 = *((_QWORD *)Current + 3)) != 0
        || (v53 = v52) != 0 )
      {
        v54 = v53 + 152;
        if ( v53 != -152 && *(struct _KTHREAD **)(v53 + 160) == KeGetCurrentThread() )
        {
          WdLogSingleEntry1(1LL, 1425LL);
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            -1,
            (__int64)L"bAllowAcquireRecursive || pPushLock == NULL || !m_pPushLock->IsExclusiveOwner()",
            1425LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        if ( v53 )
        {
          KeEnterCriticalRegion();
          if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v53 + 152, 0LL) )
          {
            if ( bTracingEnabled )
            {
              v87 = *(_DWORD *)(v53 + 176);
              if ( v87 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
                McTemplateK0q_EtwWriteTransfer(v55, (const EVENT_DESCRIPTOR *)"g", v56, v87);
            }
            ExAcquirePushLockExclusiveEx(v53 + 152, 0LL);
          }
          v41 = 2;
          *(_QWORD *)(v53 + 160) = KeGetCurrentThread();
        }
      }
      else
      {
        v54 = 0LL;
      }
      DXGADAPTER::AcquireDdiSync(*(_QWORD *)(v45 + 16), 1);
      _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v45 + 16) + 4484LL));
      CurrentIrql = KeGetCurrentIrql();
      v58 = CurrentIrql;
      v59 = 0LL;
      if ( CurrentIrql < 2u
        && (DxgThread = 0LL, (int)PsTlsGetValue(g_DxgkThreadTlsId, &DxgThread) >= 0)
        && ((v59 = DxgThread) != 0LL || (DxgThread = DxgkThreadObjectCreateDxgThread(), (v59 = DxgThread) != 0LL)) )
      {
        v60 = *((_DWORD *)v59 + 12);
      }
      else
      {
        v60 = 0;
      }
      DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
        (DXGVALIDATIONPROCESSATTACH *)v152,
        *(struct DXGADAPTER **)(v137 + 16));
      v131 = (*(__int64 (__fastcall **)(__int64, struct _DXGKARG_PRESENT *))(*(_QWORD *)(v137 + 16) + 736LL))(v141, a6);
      if ( v152[0] )
        KeUnstackDetachProcess(&ApcState);
      if ( (_BYTE)v58 == KeGetCurrentIrql() )
      {
        v63 = v137;
      }
      else
      {
        v95 = KeGetCurrentIrql();
        v126 = v58;
        v63 = v137;
        WdLogSingleEntry5(0LL, 275LL, 16LL, v137, v126, v95);
      }
      if ( v59 )
      {
        v62 = *((int *)v59 + 12);
        if ( (_DWORD)v62 != v60 )
          WdLogSingleEntry5(0LL, 275LL, 38LL, *((int *)v59 + 12), v60, 0LL);
      }
      _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(v63 + 16) + 4484LL));
      v64 = (_QWORD *)WdLogNewEntry5_WdTrace(v62, v61);
      v65 = v131;
      v66 = v141;
      v67 = (int)v131;
      v64[3] = (int)v131;
      v64[4] = v66;
      v64[5] = a6->SubRectCnt;
      v64[6] = a6->pDmaBuffer;
      v64[7] = a6->DmaSize;
      if ( !v65 )
        goto LABEL_50;
      if ( v65 > -1073741670 )
      {
        if ( v65 == -1071775743 || v65 == -1071775736 || v65 == -1071775232 )
          goto LABEL_50;
      }
      else if ( v65 == -1073741670
             || v65 == -1073741816
             || v65 == -1073741801
             || v65 == -1073741795
             || v65 == -1073741674 )
      {
        goto LABEL_50;
      }
      WdLogSingleEntry1(2LL, v67);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Driver returned an invalid NTSTATUS code: 0x%I64x",
        v67,
        0LL,
        0LL,
        0LL,
        0LL);
LABEL_50:
      DXGADAPTER::ReleaseDdiSync(*(DXGADAPTER **)(v63 + 16));
      if ( v41 == 2 )
      {
        *(_QWORD *)(v54 + 8) = 0LL;
        ExReleasePushLockExclusiveEx(v54, 0LL);
        KeLeaveCriticalRegion();
      }
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v146);
      if ( v148 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v68, &EventProfilerExit, v69, v146);
      v12 = v142;
      LODWORD(v25) = v131;
      v70 = v139;
      goto LABEL_54;
    }
    v70 = v139;
    LODWORD(v25) = ADAPTER_RENDER::DdiPresentToHwQueue((ADAPTER_RENDER *)v36, *((void **)v139 + 4), a6);
    v131 = (unsigned int)v25;
    if ( (_DWORD)v25 == -1073741822 )
    {
      v25 = (unsigned int)ADAPTER_RENDER::DdiPresent(
                            *(ADAPTER_RENDER **)(*((_QWORD *)this + 2) + 16LL),
                            *((void **)this + 23),
                            a6);
      v131 = v25;
    }
LABEL_54:
    if ( *((_BYTE *)this + 438) && (a6->pPatchLocationListOut || a6->PatchLocationListOutSize) )
      WdLogSingleEntry5(0LL, 275LL, 9LL, a6, 0LL, 0LL);
    if ( (_DWORD)v25 == -1071775743 )
    {
      if ( (a6->Flags.Value & 4) != 0 )
      {
        WdLogSingleEntry1(2LL, this);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"0x%I64x Driver must not return STATUS_GRAPHICS_INSUFFICIENT_DMA_BUFFER for Flip",
          (__int64)this,
          0LL,
          0LL,
          0LL,
          0LL);
        v96 = -1073741823LL;
        LODWORD(v25) = -1073741823;
        goto LABEL_149;
      }
    }
    else if ( (int)v25 < 0 )
    {
      v96 = (int)v25;
      if ( (_DWORD)v25 == -1071775736 )
      {
        v102 = -1071775736LL;
        v103 = this;
        v104 = 4LL;
LABEL_158:
        WdLogSingleEntry2(v104, v103, v102);
      }
      else
      {
LABEL_149:
        WdLogSingleEntry2(2LL, this, v96);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"0x%I64x Driver failed Present 0x%I64x",
          (__int64)this,
          v96,
          0LL,
          0LL,
          0LL);
      }
LABEL_159:
      v26 = 1;
      goto LABEL_160;
    }
    if ( *((_BYTE *)this + 438) )
    {
      if ( a6->pAllocationList != (DXGK_ALLOCATIONLIST *)v163 )
      {
        WdLogSingleEntry1(1LL, 9230LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"pPresentDdiArg->pAllocationInfo == AllocationInfo",
          9230LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
    }
    else if ( a6->pAllocationList != (DXGK_ALLOCATIONLIST *)(*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 648LL) + 8LL) + 568LL))(v130) )
    {
      WdLogSingleEntry1(1LL, 9234LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"pPresentDdiArg->pAllocationList == GetVidMmExport()->VidMmGetDmaAllocationList(pVidMmDmaBuffer)",
        9234LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    v13 = (_DWORD)v25 == -1071775743;
    v128 = (_DWORD)v25 == -1071775743;
    if ( (*((_DWORD *)this + 101) & 0x10) != 0 )
    {
      LODWORD(v25) = DXGHWQUEUE::EnsureKmSubmissionProgressSyncObject(v70);
      v131 = (unsigned int)v25;
      if ( (int)v25 < 0 )
        goto LABEL_159;
      v97 = *((_QWORD *)v70 + 12) + 1LL;
      *((_QWORD *)v70 + 12) = v97;
      if ( !*((_BYTE *)this + 296) )
      {
        v98 = *((_QWORD *)v70 + 11);
        v151.DmaBufferPrivateDataSize = a6->DmaBufferPrivateDataSize;
        v151.DmaSize = a6->DmaSize;
        v151.MultipassOffset = a6->MultipassOffset;
        v151.pDmaBuffer = a6->pDmaBuffer;
        v151.pDmaBufferPrivateData = a6->pDmaBufferPrivateData;
        v151.DmaBufferGpuVirtualAddress = v138;
        *((_DWORD *)&v151.KernelSubmissionType + 1) = 0;
        *(&v151.DmaSize + 1) = 0;
        v151.MonitoredFenceGpuVa = *(_QWORD *)(v98 + 48);
        v151.MonitoredFenceCpuVa = *(void **)(v98 + 64);
        v151.hHwQueue = (HANDLE)*((_QWORD *)v70 + 4);
        v99 = *((_QWORD *)this + 2);
        v151.MonitoredFenceValue = v97;
        v100 = (void *)*((_QWORD *)this + 23);
        v151.KernelSubmissionType = DXGK_KERNEL_SUBMISSION_PRESENTBLT;
        v101 = ADAPTER_RENDER::DdiSignalMonitoredFence(*(ADAPTER_RENDER **)(v99 + 16), v100, &v151);
        LODWORD(v25) = v101;
        a6->DmaBufferPrivateDataSize = v151.DmaBufferPrivateDataSize;
        a6->DmaSize = v151.DmaSize;
        a6->MultipassOffset = v151.MultipassOffset;
        a6->pDmaBuffer = v151.pDmaBuffer;
        a6->pDmaBufferPrivateData = v151.pDmaBufferPrivateData;
        v131 = v101;
        if ( v101 == -1071775743 )
        {
          v129 = 1;
        }
        else if ( v101 < 0 )
        {
          v102 = v101;
          v103 = this;
          v104 = 3LL;
          goto LABEL_158;
        }
      }
    }
LABEL_63:
    if ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                            + 624LL)
                                                                + 8LL)
                                                    + 568LL))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                        + 632LL))
      && a6->pDmaBuffer <= v134 )
    {
      WdLogSingleEntry1(1LL, 9309LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"GetVidSchExport()->VidSchIsTDRPending(GetRenderCore()->GetVidSchGlobal()) || static_cast<BYTE*>(pPresen"
                  "tDdiArg->pDmaBuffer) > static_cast<BYTE*>(pDmaBuffer)",
        9309LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    v71 = (*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                        + 648LL)
                                                                            + 8LL)
                                                                + 544LL))(v130);
    pDmaBuffer = a6->pDmaBuffer;
    v73 = v71;
    v74 = (int)v134;
    if ( a6->pDmaBuffer > &v134[v73] )
    {
      WdLogSingleEntry1(1LL, 9310LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"static_cast<BYTE*>(pPresentDdiArg->pDmaBuffer) <= static_cast<BYTE*>(pDmaBuffer)+GetVidMmExport()->VidM"
                  "mGetDmaBufferLength(pVidMmDmaBuffer)",
        9310LL,
        0LL,
        0LL,
        0LL,
        0LL);
      v74 = (int)v134;
      LODWORD(pDmaBuffer) = a6->pDmaBuffer;
    }
    v75 = (_DWORD)pDmaBuffer - v74;
    v76 = LODWORD(a6->pDmaBufferPrivateData)
        - (*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                        + 648LL)
                                                                            + 8LL)
                                                                + 576LL))(v130);
    if ( (*(unsigned int (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                            + 648LL)
                                                                                + 8LL)
                                                                    + 544LL))(v130) < v75 )
    {
      WdLogSingleEntry1(1LL, 9317LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"GetVidMmExport()->VidMmGetDmaBufferLength(pVidMmDmaBuffer) >= DMABufferLength",
        9317LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    (*(void (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                               + 648LL)
                                                                   + 8LL)
                                                       + 528LL))(v130);
    v134 = 0LL;
    if ( *((_BYTE *)this + 438) )
    {
      LODWORD(v78) = 0;
    }
    else
    {
      if ( a6->pPatchLocationListOut < (D3DDDI_PATCHLOCATIONLIST *)(*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 648LL) + 8LL) + 560LL))(v130) )
      {
        WdLogSingleEntry1(1LL, 9332LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"pPresentDdiArg->pPatchLocationListOut >= GetVidMmExport()->VidMmGetDmaPatchLocationList(pVidMmDmaBuffer)",
          9332LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      v110 = v130;
      v111 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 648LL);
      v112 = (*(unsigned int (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(v111 + 8) + 552LL))(v130);
      if ( a6->pPatchLocationListOut > (D3DDDI_PATCHLOCATIONLIST *)((*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(v111 + 8) + 560LL))(v110)
                                                                  + 24 * v112) )
      {
        WdLogSingleEntry1(1LL, 9333LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"pPresentDdiArg->pPatchLocationListOut <= GetVidMmExport()->VidMmGetDmaPatchLocationList(pVidMmDmaBuff"
                    "er) + GetVidMmExport()->VidMmGetDmaPatchLocationListLength(pVidMmDmaBuffer)",
          9333LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      v78 = 0xAAAAAAAAAAAAAAABuLL
          * (((__int64)a6->pPatchLocationListOut
            - (*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                            + 648LL)
                                                                                + 8LL)
                                                                    + 560LL))(v130)) >> 3);
      if ( (*(unsigned int (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                              + 648LL)
                                                                                  + 8LL)
                                                                      + 552LL))(v130) < (unsigned int)v78 )
      {
        WdLogSingleEntry1(1LL, 9343LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"GetVidMmExport()->VidMmGetDmaPatchLocationListLength(pVidMmDmaBuffer) >= PatchLocationTableLength",
          9343LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      if ( (qword_1C012F870 & 0x10) != 0 )
      {
        v113 = (*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                             + 648LL)
                                                                                 + 8LL)
                                                                     + 560LL))(v130);
        TraceDxgkPatchLocationList((__int64)this, (__int64)v130, v78, v113);
      }
      v13 = v128;
      v12 = v142;
    }
    if ( !v75
      && !(*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                            + 624LL)
                                                                + 8LL)
                                                    + 568LL))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                        + 632LL)) )
    {
      WdLogSingleEntry1(1LL, 9358LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"DMABufferLength > 0 || GetVidSchExport()->VidSchIsTDRPending(GetRenderCore()->GetVidSchGlobal())",
        9358LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    v79 = *(_DWORD *)v12;
    if ( (*(_DWORD *)v12 & 0x20) != 0 )
    {
      if ( v13 || v129 )
        v80 = 64LL;
      else
        v80 = 0LL;
      v81 = v80 | v79 & 0xFFFFFFBF;
      *(_DWORD *)v12 = v81;
      if ( (v81 & 0x40) != 0 && bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0q_EtwWriteTransfer(v80, &EventPerformanceWarning, v77, 1);
    }
    else
    {
      *(_DWORD *)v12 = v79 & 0xFFFFFFBF;
    }
    *((_QWORD *)v12 + 1) = v130;
    *((_DWORD *)v12 + 13) = v75;
    *((_DWORD *)v12 + 12) = 0;
    *((_DWORD *)v12 + 15) = 3;
    *((_DWORD *)v12 + 14) = 0;
    *((_DWORD *)v12 + 17) = v78;
    *((_DWORD *)v12 + 16) = 0;
    *((_DWORD *)v12 + 19) = v76;
    *((_DWORD *)v12 + 18) = 0;
    if ( *((_BYTE *)this + 438) )
    {
      *((_DWORD *)v12 + 20) = v76;
      *((_DWORD *)v12 + 19) = a6->DmaBufferPrivateDataSize;
    }
    if ( *((_BYTE *)v12 + 356) )
    {
      v82 = (unsigned int *)((char *)v12 + 600);
      v83 = (_QWORD *)((char *)v12 + *((_DWORD *)v12 + 151) * ((8 * *((_DWORD *)v12 + 152) + 231) & 0xFFFFFFF8) + 648);
    }
    else
    {
      v83 = (_QWORD *)((char *)v12 + 504);
      v82 = (unsigned int *)((char *)v12 + 496);
    }
    if ( *((_DWORD *)v12 + 30) != 4 )
    {
      if ( (*v82 & 0x3FF) != 0 )
      {
        WdLogSingleEntry1(1LL, 9455LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"pVidSchFlipMultiplaneOverlay->ToLayers == 0",
          9455LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      goto LABEL_85;
    }
    v114 = v133;
    if ( !v133 )
    {
      WdLogSingleEntry1(1LL, 9396LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pSrcAllocation", 9396LL, 0LL, 0LL, 0LL, 0LL);
    }
    if ( (*(_DWORD *)v12 & 0x40) != 0 )
    {
      WdLogSingleEntry1(1LL, 9397LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"pVidSchSubmitData->SubmitFlags.SplitedPresent == FALSE",
        9397LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    *v82 = *v82 & 0xFFFFFC00 | 1;
    if ( (*(int (__fastcall **)(_QWORD, _QWORD, _QWORD *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2)
                                                                                             + 16LL)
                                                                                 + 648LL)
                                                                     + 8LL)
                                                         + 424LL))(
           *(_QWORD *)(*((_QWORD *)this + 2) + 760LL),
           *((_QWORD *)v114 + 3),
           v83) < 0 )
    {
      WdLogSingleEntry1(1LL, 9416LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"NT_SUCCESS(RefStatus)", 9416LL, 0LL, 0LL, 0LL, 0LL);
    }
    v115 = *((_BYTE *)v12 + 356) == 0;
    v116 = *((_QWORD *)this + 2);
    v132 = 0;
    if ( v115 )
      v117 = (__int64)v12 + 520;
    else
      v117 = (__int64)v12 + *((_DWORD *)v12 + 151) * ((8 * *((_DWORD *)v12 + 152) + 231) & 0xFFFFFFF8) + 640;
    (*(void (__fastcall **)(_QWORD, _QWORD, int *, __int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v116 + 16)
                                                                                           + 648LL)
                                                                               + 8LL)
                                                                   + 224LL))(
      *(_QWORD *)(*(_QWORD *)(v116 + 16) + 656LL),
      *(_QWORD *)(*((_QWORD *)v114 + 6) + 8LL),
      &v132,
      v117,
      0LL);
    v118 = *((_BYTE *)v12 + 356);
    if ( v118 )
    {
      *(_WORD *)((char *)v12 + *((_DWORD *)v12 + 151) * ((8 * *((_DWORD *)v12 + 152) + 231) & 0xFFFFFFF8) + 632) = v132;
      v118 = *((_BYTE *)v12 + 356);
    }
    else
    {
      *((_DWORD *)v12 + 139) ^= (*((_DWORD *)v12 + 139) ^ (v132 << 17)) & 0x3E0000;
    }
    v119 = *((_QWORD *)v114 + 5);
    if ( v119 && (*(_DWORD *)(v119 + 4) & 8) != 0 )
      v120 = *(_QWORD *)(*(_QWORD *)(v119 + 56) + 184LL);
    else
      v120 = 0LL;
    if ( v118 )
    {
      *(_QWORD *)((char *)v12 + *((_DWORD *)v12 + 151) * ((8 * *((_DWORD *)v12 + 152) + 231) & 0xFFFFFFF8) + 656) = v120;
      v121 = *(_QWORD *)(*((_QWORD *)v114 + 6) + 16LL);
      if ( *((_BYTE *)v12 + 356) )
      {
        v122 = (_QWORD *)((char *)v12 + *((_DWORD *)v12 + 151) * ((8 * *((_DWORD *)v12 + 152) + 231) & 0xFFFFFFF8) + 624);
        goto LABEL_212;
      }
    }
    else
    {
      *((_QWORD *)v12 + 72) = v120;
      v121 = *(_QWORD *)(*((_QWORD *)v114 + 6) + 16LL);
    }
    v122 = (_QWORD *)((char *)v12 + 512);
LABEL_212:
    *v122 = v121;
    if ( *((_BYTE *)v12 + 356) )
      v123 = (_QWORD *)((char *)v12 + *((_DWORD *)v12 + 151) * ((8 * *((_DWORD *)v12 + 152) + 231) & 0xFFFFFFF8) + 616);
    else
      v123 = (_QWORD *)((char *)v12 + 568);
    *v123 = *((_QWORD *)this + 23);
    if ( *((_BYTE *)v12 + 356) )
      *((_DWORD *)v12 + 160) = -1;
LABEL_85:
    if ( *((struct _KTHREAD **)this + 57) != KeGetCurrentThread() )
    {
      WdLogSingleEntry1(1LL, 9458LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"GetContextLock()->IsExclusiveOwner()",
        9458LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    if ( (*((_DWORD *)this + 101) & 0x10) != 0 )
    {
      v124 = v139;
      *((_QWORD *)v12 + 62) = *((_QWORD *)v139 + 12);
      *((_DWORD *)v12 + 126) = 0;
      *((_QWORD *)v12 + 65) = *(_QWORD *)(*((_QWORD *)v124 + 11) + 64LL);
      *((_QWORD *)v12 + 64) = *(_QWORD *)(*((_QWORD *)v124 + 11) + 48LL);
      v84 = (*(__int64 (__fastcall **)(_QWORD, struct VIDSCH_SUBMIT_DATA_BASE *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 624LL)
                                                                                            + 8LL)
                                                                                + 432LL))(
              *((_QWORD *)v124 + 5),
              v12);
    }
    else
    {
      v84 = (*(__int64 (__fastcall **)(_QWORD, struct VIDSCH_SUBMIT_DATA_BASE *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 624LL)
                                                                                            + 8LL)
                                                                                + 424LL))(
              *((_QWORD *)this + 32),
              v12);
    }
    v85 = v84;
    if ( v84 < 0 )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 624LL)
                                                         + 8LL)
                                             + 440LL))(
        *((_QWORD *)this + 32),
        0LL);
      if ( (*v82 & 0x3FF) != 0 && *v83 )
        (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                       + 648LL)
                                                                           + 8LL)
                                                               + 440LL))(
          *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 656LL),
          *((unsigned int *)v12 + 34),
          *v83,
          0LL);
      LODWORD(v25) = v85;
      goto LABEL_159;
    }
    v13 = v128;
    v9 = 0;
    a4 = v133;
    v16 = 0LL;
    v15 = v145;
    v130 = 0LL;
    v10 = v144;
    if ( !v129 )
    {
      if ( !v128 )
        return v131;
      v16 = 0LL;
    }
  }
  v150.pDmaBufferPrivateData = v27;
  *((_DWORD *)&v150.KernelSubmissionType + 1) = 0;
  *(&v150.DmaSize + 1) = 0;
  v88 = *((_QWORD *)v139 + 11);
  v150.DmaSize = a6->DmaSize;
  v150.MultipassOffset = a6->MultipassOffset;
  v150.pDmaBuffer = a6->pDmaBuffer;
  v150.DmaBufferGpuVirtualAddress = v138;
  v150.DmaBufferPrivateDataSize = v30;
  v150.MonitoredFenceGpuVa = *(_QWORD *)(v88 + 48);
  v150.MonitoredFenceCpuVa = *(void **)(v88 + 64);
  v150.MonitoredFenceValue = *((_QWORD *)v139 + 12);
  v89 = (void *)*((_QWORD *)this + 23);
  v150.hHwQueue = (HANDLE)*((_QWORD *)v139 + 4);
  v90 = *((_QWORD *)this + 2);
  v150.KernelSubmissionType = DXGK_KERNEL_SUBMISSION_PRESENTBLT;
  v91 = ADAPTER_RENDER::DdiSignalMonitoredFence(*(ADAPTER_RENDER **)(v90 + 16), v89, &v150);
  v25 = v91;
  a6->DmaBufferPrivateDataSize = v150.DmaBufferPrivateDataSize;
  a6->DmaSize = v150.DmaSize;
  a6->MultipassOffset = v150.MultipassOffset;
  a6->pDmaBuffer = v150.pDmaBuffer;
  a6->pDmaBufferPrivateData = v150.pDmaBufferPrivateData;
  v131 = v91;
  if ( v91 != -1071775743 )
  {
    if ( v91 < 0 )
      goto LABEL_221;
    v129 = 0;
    goto LABEL_15;
  }
  WdLogSingleEntry5(0LL, 275LL, 40LL, this, 0LL, 0LL);
LABEL_221:
  WdLogSingleEntry2(3LL, this, v25);
LABEL_160:
  if ( v130 )
  {
    if ( v134 )
    {
      (*(void (**)(void))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 648LL) + 8LL) + 528LL))();
      if ( (*((_DWORD *)this + 101) & 0x10) == 0 )
        (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                       + 624LL)
                                                           + 8LL)
                                               + 440LL))(
          *((_QWORD *)this + 32),
          0LL);
    }
    if ( DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL)) )
    {
      v106 = 0;
      if ( *((_DWORD *)v12 + 50) )
      {
        do
        {
          v107 = (char *)v12 + 8 * v106;
          v108 = *((_QWORD *)v107 + 26);
          if ( v108 )
          {
            (*(void (__fastcall **)(_QWORD, _QWORD, __int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                            + 648LL)
                                                                                + 8LL)
                                                                    + 440LL))(
              *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 656LL),
              0LL,
              v108,
              0LL);
            *((_QWORD *)v107 + 26) = 0LL;
          }
          ++v106;
        }
        while ( v106 < *((_DWORD *)v12 + 50) );
        v105 = *((_QWORD *)this + 2);
      }
      v26 = v127;
    }
    if ( v26 )
    {
      v109 = *(_QWORD *)(v105 + 16);
      LOBYTE(v105) = 1;
      (*(void (__fastcall **)(struct _VIDMM_DMA_BUFFER *, __int64))(*(_QWORD *)(*(_QWORD *)(v109 + 648) + 8LL) + 592LL))(
        v130,
        v105);
      v105 = *((_QWORD *)this + 2);
    }
    (*(void (__fastcall **)(struct _VIDMM_DMA_BUFFER *, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v105 + 16) + 648LL)
                                                                           + 8LL)
                                                               + 512LL))(
      v130,
      0LL);
  }
  return (unsigned int)v25;
}
