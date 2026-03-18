/*
 * XREFs of ?MemoryTransferUsingGpuVaWorker@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@1PEAU_MDL@@2131U_DXGK_TRANSFERFLAGS@@1@Z @ 0x1C00E52E8
 * Callers:
 *     ?MemoryTransferInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@PEAU_MDL@@234U_DXGK_TRANSFERFLAGS@@@Z @ 0x1C00E4B38 (-MemoryTransferInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_.c)
 *     ?MemoryTransferUsingGpuVa@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@PEAU_MDL@@234U_DXGK_TRANSFERFLAGS@@@Z @ 0x1C00E5070 (-MemoryTransferUsingGpuVa@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEA.c)
 * Callees:
 *     ?DriverId@VIDMM_SEGMENT@@QEAAKXZ @ 0x1C0004EE4 (-DriverId@VIDMM_SEGMENT@@QEAAKXZ.c)
 *     ?DdiBuildPagingBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C00053BC (-DdiBuildPagingBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z.c)
 *     ?IsGpuVaPagingHistoryEnabled@VIDMM_GLOBAL@@QEAA_NXZ @ 0x1C00053E0 (-IsGpuVaPagingHistoryEnabled@VIDMM_GLOBAL@@QEAA_NXZ.c)
 *     ?FlushGpuVaTlb@CVirtualAddressAllocator@@QEAAXI_K0@Z @ 0x1C0017918 (-FlushGpuVaTlb@CVirtualAddressAllocator@@QEAAXI_K0@Z.c)
 *     ?GetGpuMmuCaps@ADAPTER_RENDER@@QEBAPEBUDXGADAPTER_GPUMMUCAPS@@I@Z @ 0x1C001925C (-GetGpuMmuCaps@ADAPTER_RENDER@@QEBAPEBUDXGADAPTER_GPUMMUCAPS@@I@Z.c)
 *     __security_check_cookie @ 0x1C0019900 (__security_check_cookie.c)
 *     ?GetForwardProgressLogicalAddress@VIDMM_SEGMENT@@QEAA_KXZ @ 0x1C0019A84 (-GetForwardProgressLogicalAddress@VIDMM_SEGMENT@@QEAA_KXZ.c)
 *     memset @ 0x1C001ABC0 (memset.c)
 *     McTemplateK0pppxxq_EtwWriteTransfer @ 0x1C002E850 (McTemplateK0pppxxq_EtwWriteTransfer.c)
 *     ?SetupForBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C0091F60 (-SetupForBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BU.c)
 *     ?CompleteBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAA_NKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@JHPEAX@Z @ 0x1C0092140 (-CompleteBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAA_NKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_B.c)
 *     ?SetupForBuildPagingBuffer@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C0092384 (-SetupForBuildPagingBuffer@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGING.c)
 *     ?VidMmRecordTransfer@@YAXPEAU_VIDMM_GLOBAL_STATISTICS@@_KI@Z @ 0x1C009242C (-VidMmRecordTransfer@@YAXPEAU_VIDMM_GLOBAL_STATISTICS@@_KI@Z.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1C0095820 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     ?VidMmiInitializeAdlForMdl@@YAXPEAU_DXGK_ADL@@PEAU_MDL@@_K@Z @ 0x1C00B41DC (-VidMmiInitializeAdlForMdl@@YAXPEAU_DXGK_ADL@@PEAU_MDL@@_K@Z.c)
 *     ?FlushScratchGpuVaRanges@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1C00E31F8 (-FlushScratchGpuVaRanges@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?MustFlushTlbOnValidTransition@VIDMM_GLOBAL@@QEAA_NI@Z @ 0x1C00E5F0C (-MustFlushTlbOnValidTransition@VIDMM_GLOBAL@@QEAA_NI@Z.c)
 *     ?ChargeEvictionTransfer@VIDMM_PROCESS@@QEAAXK_K@Z @ 0x1C00EEBBC (-ChargeEvictionTransfer@VIDMM_PROCESS@@QEAAXK_K@Z.c)
 *     ?VidMmiGetLogicalAddress@@YA_KPEAX_K@Z @ 0x1C00F1734 (-VidMmiGetLogicalAddress@@YA_KPEAX_K@Z.c)
 *     ?GetVirtualAddressOfPageTable@CVirtualAddressAllocator@@QEBA_KI_KE@Z @ 0x1C00F2988 (-GetVirtualAddressOfPageTable@CVirtualAddressAllocator@@QEBA_KI_KE@Z.c)
 *     ?MapScratchAreaVaRange@VIDMM_PAGING_PROCESS@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@I_KPEAU_VIDMM_GLOBAL_ALLOC@@0I0PEBU_DXGK_ADL@@PEAE0@Z @ 0x1C00F2A8C (-MapScratchAreaVaRange@VIDMM_PAGING_PROCESS@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@I_KPEAU_VIDMM_GLOBAL.c)
 *     ?RecordVaPagingHistoryVirtualTransfer@VIDMM_GLOBAL@@QEAAXPEAU_DXGKARG_BUILDPAGINGBUFFER@@PEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00F315C (-RecordVaPagingHistoryVirtualTransfer@VIDMM_GLOBAL@@QEAAXPEAU_DXGKARG_BUILDPAGINGBUFFER@@PEAU_VI.c)
 */

void __fastcall VIDMM_GLOBAL::MemoryTransferUsingGpuVaWorker(
        VIDMM_GLOBAL *this,
        unsigned int a2,
        struct _VIDMM_GLOBAL_ALLOC *a3,
        SIZE_T a4,
        unsigned __int64 a5,
        struct VIDMM_SEGMENT *a6,
        unsigned __int64 a7,
        struct _MDL *a8,
        struct VIDMM_SEGMENT *a9,
        unsigned __int64 a10,
        struct _MDL *a11,
        unsigned __int64 a12,
        struct _DXGK_TRANSFERFLAGS a13,
        unsigned __int64 a14)
{
  VIDMM_SEGMENT *v16; // r11
  unsigned __int64 v17; // r8
  __int64 v18; // r13
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // rcx
  SIZE_T v21; // r14
  bool v22; // r12
  unsigned __int64 v23; // rdi
  unsigned __int64 v24; // rax
  __int64 v25; // rcx
  unsigned int v26; // edx
  __int64 v27; // rcx
  _QWORD *v28; // rax
  __int64 v29; // rcx
  _QWORD *v30; // rax
  struct VIDMM_SEGMENT *v31; // rcx
  struct _MDL *v32; // r10
  _QWORD *v33; // rax
  struct _MDL *v34; // r10
  unsigned __int64 v35; // rdx
  SIZE_T v36; // rcx
  SIZE_T v37; // rax
  SIZE_T v38; // rdi
  unsigned __int64 v39; // rbx
  unsigned __int64 v40; // rax
  unsigned __int64 v41; // rcx
  unsigned int v42; // eax
  struct VIDMM_MAPPED_VA_RANGE *v43; // rax
  unsigned __int64 v44; // rcx
  unsigned __int64 v45; // rax
  bool MustFlushTlbOnValidTransition; // al
  LARGE_INTEGER *v47; // rbx
  unsigned __int64 v48; // r9
  unsigned __int64 v49; // r8
  struct _VIDMM_GLOBAL_ALLOC *v50; // r8
  ADAPTER_RENDER *v51; // rcx
  unsigned int v52; // edx
  __int64 v53; // r10
  CVirtualAddressAllocator *v54; // rbx
  VIDMM_GLOBAL *v55; // rcx
  int v56; // eax
  __int64 v57; // rcx
  int v58; // ebx
  int v59; // ebx
  HANDLE CurrentProcessId; // rax
  __int64 v61; // rdx
  __int64 v62; // r8
  bool v63; // sf
  struct VIDMM_MAPPED_VA_RANGE *v64; // r10
  __int64 *v65; // rdx
  __int64 v66; // rcx
  __int64 **v67; // rax
  struct VIDMM_MAPPED_VA_RANGE *v68; // r9
  __int64 *v69; // rcx
  __int64 v70; // rdx
  __int64 **v71; // rax
  unsigned __int8 *v72; // [rsp+40h] [rbp-C0h]
  unsigned __int8 v73; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int8 v74[7]; // [rsp+51h] [rbp-AFh] BYREF
  struct _MDL *v75; // [rsp+58h] [rbp-A8h]
  unsigned __int64 v76; // [rsp+60h] [rbp-A0h]
  struct VIDMM_MAPPED_VA_RANGE *v77; // [rsp+68h] [rbp-98h]
  SIZE_T v78; // [rsp+70h] [rbp-90h]
  SIZE_T v79; // [rsp+78h] [rbp-88h]
  SIZE_T v80; // [rsp+80h] [rbp-80h]
  unsigned int v81; // [rsp+88h] [rbp-78h]
  unsigned int v82; // [rsp+8Ch] [rbp-74h]
  struct VIDMM_MAPPED_VA_RANGE *v83; // [rsp+90h] [rbp-70h]
  struct _MDL *v84; // [rsp+98h] [rbp-68h]
  SIZE_T v85; // [rsp+A0h] [rbp-60h]
  int v86; // [rsp+A8h] [rbp-58h]
  unsigned __int64 v87; // [rsp+B0h] [rbp-50h]
  struct VIDMM_SEGMENT *v88; // [rsp+B8h] [rbp-48h]
  struct VIDMM_SEGMENT *v89; // [rsp+C0h] [rbp-40h]
  SIZE_T v90; // [rsp+C8h] [rbp-38h]
  unsigned __int64 v91; // [rsp+D0h] [rbp-30h]
  __int128 v92; // [rsp+D8h] [rbp-28h] BYREF
  __int128 v93; // [rsp+E8h] [rbp-18h] BYREF
  int v94[2]; // [rsp+F8h] [rbp-8h]
  struct _DXGKARG_BUILDPAGINGBUFFER v95; // [rsp+100h] [rbp+0h] BYREF
  int v96; // [rsp+240h] [rbp+140h] BYREF
  int v97; // [rsp+244h] [rbp+144h]
  SIZE_T v98; // [rsp+248h] [rbp+148h]
  SIZE_T v99; // [rsp+250h] [rbp+150h]

  v16 = a9;
  v17 = a7;
  v75 = a8;
  v84 = a11;
  v18 = a2;
  v19 = *((unsigned int *)this + 10244);
  v91 = a14;
  v78 = a4;
  v88 = a6;
  v89 = a9;
  if ( a6 != a9 )
  {
    v21 = v19;
    v22 = 1;
LABEL_10:
    v23 = a12;
    v24 = a5;
    v76 = a12;
    goto LABEL_11;
  }
  if ( a7 == a10 )
    return;
  v20 = a7 - a10;
  v21 = (unsigned int)v19;
  if ( a10 >= a7 )
    v20 = a10 - a7;
  v22 = a10 < a7;
  if ( v20 <= v19 )
    v21 = v20;
  if ( a10 < a7 )
    goto LABEL_10;
  v23 = a12;
  v24 = a4 + a5;
  v76 = a4 + a12;
LABEL_11:
  v25 = v24 + a10;
  v26 = 0;
  v80 = v24 + a10;
  v79 = a7 + v24;
  if ( a6 )
    v81 = VIDMM_SEGMENT::DriverId(a6);
  else
    v81 = 0;
  if ( v16 )
    v82 = VIDMM_SEGMENT::DriverId(v16);
  else
    v82 = v26;
  v74[0] = v26;
  v73 = v26;
  if ( g_IsInternalReleaseOrDbg != (_BYTE)v26 )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v25) + 24) = a3;
    if ( g_IsInternalReleaseOrDbg )
    {
      v28 = (_QWORD *)WdLogNewEntry5_WdTrace(v27);
      v28[3] = v78;
      v28[4] = a5;
      v28[5] = v23;
      v30 = (_QWORD *)WdLogNewEntry5_WdTrace(v29);
      v31 = v88;
      v32 = v75;
      v30[3] = v88;
      v30[4] = a7;
      v30[5] = v32;
      v33 = (_QWORD *)WdLogNewEntry5_WdTrace(v31);
      v33[3] = v89;
      v33[5] = v84;
      v33[4] = a10;
    }
    a4 = v78;
    v17 = a7;
  }
  v34 = v75;
  v35 = a5;
  if ( a4 )
  {
    while ( 1 )
    {
      v36 = v79;
      v37 = v80;
      v38 = (unsigned int)v21;
      v39 = v76;
      if ( a4 <= v21 )
        v38 = (unsigned int)a4;
      if ( !v22 )
      {
        v36 = v79 - v38;
        v37 = v80 - v38;
        v39 = v76 - v38;
      }
      v90 = v37;
      v85 = v36;
      v87 = v36 - v17;
      while ( 1 )
      {
        v92 = 0LL;
        if ( v34 )
        {
          v40 = *((_BYTE *)a3 + 264)
              ? VIDMM_SEGMENT::GetForwardProgressLogicalAddress(*((void *const **)a3 + 30))
              : VidMmiGetLogicalAddress(*((void **)a3 + 66), v35);
          VidMmiInitializeAdlForMdl((struct _DXGK_ADL *)&v92, v75, v40);
          v41 = v39;
        }
        else
        {
          v42 = *((_DWORD *)a3 + 4) >> 12;
          *((_QWORD *)&v92 + 1) = v36 >> 12;
          v41 = 0LL;
          *(_QWORD *)&v92 = v42 | 0x100000000LL;
        }
        v43 = VIDMM_PAGING_PROCESS::MapScratchAreaVaRange(
                (VIDMM_GLOBAL *)((char *)this + 40384),
                v18,
                v38,
                a3,
                v87,
                v81,
                v41,
                (const struct _DXGK_ADL *)&v92,
                v74,
                v91);
        v44 = 0LL;
        v83 = v43;
        if ( v43 )
          break;
        VIDMM_GLOBAL::FlushPagingBufferInternal(this, v18, 1u, 0LL, 0LL, 0, 0);
        VIDMM_GLOBAL::FlushScratchGpuVaRanges(this, v18);
        v36 = v85;
        v35 = a5;
        v34 = v75;
      }
      while ( 1 )
      {
        v93 = 0LL;
        if ( v84 )
        {
          v45 = *((_BYTE *)a3 + 264)
              ? VIDMM_SEGMENT::GetForwardProgressLogicalAddress(*((void *const **)a3 + 30))
              : VidMmiGetLogicalAddress(*((void **)a3 + 66), a5);
          VidMmiInitializeAdlForMdl((struct _DXGK_ADL *)&v93, v84, v45);
          v44 = v39;
        }
        else
        {
          LODWORD(v93) = *((_DWORD *)a3 + 4) >> 12;
          *((_QWORD *)&v93 + 1) = v90 >> 12;
          DWORD1(v93) = 1;
        }
        v77 = VIDMM_PAGING_PROCESS::MapScratchAreaVaRange(
                (VIDMM_GLOBAL *)((char *)this + 40384),
                v18,
                v38,
                a3,
                v87,
                v82,
                v44,
                (const struct _DXGK_ADL *)&v93,
                &v73,
                v91);
        if ( v77 )
          break;
        VIDMM_GLOBAL::FlushPagingBufferInternal(this, v18, 1u, 0LL, 0LL, 0, 0);
        VIDMM_GLOBAL::FlushScratchGpuVaRanges(this, v18);
        v44 = 0LL;
      }
      MustFlushTlbOnValidTransition = VIDMM_GLOBAL::MustFlushTlbOnValidTransition(this, v18);
      v47 = (LARGE_INTEGER *)v77;
      if ( MustFlushTlbOnValidTransition )
      {
        v48 = *((_QWORD *)v83 + 13);
        v49 = *((_QWORD *)v83 + 12);
        if ( v48 <= *((_QWORD *)v77 + 13) )
          v48 = *((_QWORD *)v77 + 13);
        if ( v49 >= *((_QWORD *)v77 + 12) )
          v49 = *((_QWORD *)v77 + 12);
        CVirtualAddressAllocator::FlushGpuVaTlb(*((CVirtualAddressAllocator **)this + v18 + 5052), v18, v49, v48);
      }
      memset(&v95, 0, sizeof(v95));
      VIDMM_GLOBAL::SetupForBuildPagingBuffer(this, v18, v50, &v95);
      v95.Transfer.Destination.SegmentAddress.LowPart = v75 ? 1 : v84 == 0LL ? 2 : 0;
      do
      {
        VIDMM_GLOBAL::SetupForBuildPagingBufferIteration(this, v18, a3, &v95);
        v95.UpdateContextAllocation.ContextAllocation = *(_QWORD *)(*((_QWORD *)a3 + 67) + 40LL);
        v51 = (ADAPTER_RENDER *)*((_QWORD *)this + 2);
        v95.Fill.FillSize = v87;
        v95.Operation = DXGK_OPERATION_VIRTUAL_TRANSFER;
        v95.Transfer.TransferSize = v38;
        v95.MapApertureSegment.OffsetInPages = *((_QWORD *)v83 + 12);
        v95.Transfer.Source.SegmentAddress = v47[12];
        if ( (*((_DWORD *)ADAPTER_RENDER::GetGpuMmuCaps(v51, v18) + 5) & 1) != 0 )
        {
          v54 = (CVirtualAddressAllocator *)*((_QWORD *)this + v18 + 5052);
          v95.UnmapApertureSegment.DummyPage.QuadPart = (unsigned int)CVirtualAddressAllocator::GetVirtualAddressOfPageTable(
                                                                        v54,
                                                                        v52,
                                                                        *(_QWORD *)(v53 + 96),
                                                                        v74[0]);
          v95.TransferVirtual.DestinationPageTable = (unsigned int)CVirtualAddressAllocator::GetVirtualAddressOfPageTable(
                                                                     v54,
                                                                     v18,
                                                                     *((_QWORD *)v77 + 12),
                                                                     v73);
          v95.Transfer.Destination.SegmentAddress.HighPart = v95.Transfer.Destination.SegmentAddress.HighPart & 0xFFFFFFFC | v74[0] & 1 | (2 * (v73 & 1));
        }
        if ( VIDMM_GLOBAL::IsGpuVaPagingHistoryEnabled(this) )
          VIDMM_GLOBAL::RecordVaPagingHistoryVirtualTransfer(v55, &v95, a3);
        v56 = ADAPTER_RENDER::DdiBuildPagingBuffer(
                *((ADAPTER_RENDER **)this + 2),
                (struct _DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY3 *)&v95);
        v57 = *((_QWORD *)this + 879);
        v58 = v56;
        v86 = v56;
        if ( v57 && (!v89 || (*((_DWORD *)v89 + 20) & 0x1001) != 0) )
          VIDMM_PROCESS::ChargeEvictionTransfer(
            *(VIDMM_PROCESS **)(v57 + 8),
            *(_DWORD *)(*((_QWORD *)this + 3) + 240LL),
            v38);
        _InterlockedExchangeAdd64((volatile signed __int64 *)this + 987, v38);
        if ( bTracingEnabled )
        {
          if ( !v88 || (v59 = 2, (*((_DWORD *)v88 + 20) & 0x1001) != 0) )
            v59 = 1;
          *(_QWORD *)v94 = *((_QWORD *)this + v18 + 143);
          CurrentProcessId = PsGetCurrentProcessId();
          if ( (byte_1C0076981 & 8) != 0 )
          {
            LODWORD(v72) = v59;
            McTemplateK0pppxxq_EtwWriteTransfer(
              *(__int64 *)v94,
              v61,
              v62,
              CurrentProcessId,
              a3,
              *(_QWORD *)v94,
              v85,
              v38,
              v72);
          }
          VidMmRecordTransfer((VIDMM_GLOBAL *)((char *)this + 7184), v38, v59);
          v58 = v86;
        }
        if ( v88 )
          v96 = *((_DWORD *)v88 + 4) + 1;
        else
          v96 = 0;
        v98 = v85;
        if ( v89 )
          v97 = *((_DWORD *)v89 + 4) + 1;
        else
          v97 = 0;
        v99 = v90;
        VIDMM_GLOBAL::CompleteBuildPagingBufferIteration(this, v18, a3, &v95, v58, 0, &v96);
        v63 = v58 < 0;
        if ( v58 >= 0 )
        {
          v64 = v83;
          v65 = (__int64 *)((char *)v83 + 24);
          v66 = 1616 * v18 + *((_QWORD *)this + 5028) + 472LL;
          v67 = *(__int64 ***)(v66 + 8);
          if ( *v67 != (__int64 *)v66 )
            goto LABEL_83;
          v68 = v77;
          *v65 = v66;
          v65[1] = (__int64)v67;
          *v67 = v65;
          *(_QWORD *)(v66 + 8) = v65;
          v69 = (__int64 *)((char *)v68 + 24);
          v70 = 1616 * v18 + *((_QWORD *)this + 5028) + 472LL;
          v71 = *(__int64 ***)(v70 + 8);
          if ( *v71 != (__int64 *)v70 )
LABEL_83:
            __fastfail(3u);
          *v69 = v70;
          v63 = v58 < 0;
          *((_QWORD *)v68 + 4) = v71;
          *v71 = v69;
          *(_QWORD *)(v70 + 8) = v69;
          *((_QWORD *)v64 + 5) = *((_QWORD *)a3 + 20);
          *((_QWORD *)v68 + 5) = *((_QWORD *)a3 + 20);
        }
        v47 = (LARGE_INTEGER *)v77;
      }
      while ( v63 );
      a4 = v78 - v38;
      v78 -= v38;
      if ( v22 )
      {
        v79 += v38;
        v80 += v38;
        v76 += v38;
      }
      else
      {
        v79 -= v38;
        v80 -= v38;
        v76 -= v38;
      }
      if ( !a4 )
        break;
      v17 = a7;
      v35 = a5;
      v34 = v75;
    }
  }
}
