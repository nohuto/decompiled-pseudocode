/*
 * XREFs of ?FlushGpuVaTlb@VIDMM_GLOBAL@@QEAAXIU_D3DGPU_PHYSICAL_ADDRESS@@PEAVVIDMM_PROCESS@@PEAX_K3@Z @ 0x1C008AB30
 * Callers:
 *     ?FlushGpuVaTlb@CVirtualAddressAllocator@@QEAAXI_K0@Z @ 0x1C0002698 (-FlushGpuVaTlb@CVirtualAddressAllocator@@QEAAXI_K0@Z.c)
 *     ?UncommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@PEAPEAUVIDMM_ALLOC@@E@Z @ 0x1C008A930 (-UncommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@PEAPEAUVI.c)
 * Callees:
 *     ?DdiBuildPagingBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C000277C (-DdiBuildPagingBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C001CDF8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C001CE1C (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     memset @ 0x1C001DC40 (memset.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C001E570 (McTemplateK0q_EtwWriteTransfer.c)
 *     McTemplateK0pptpqqx_EtwWriteTransfer @ 0x1C00313C8 (McTemplateK0pptpqqx_EtwWriteTransfer.c)
 *     McTemplateK0pptpqxpx_EtwWriteTransfer @ 0x1C0031488 (McTemplateK0pptpqxpx_EtwWriteTransfer.c)
 *     McTemplateK0pptpqxpxx_EtwWriteTransfer @ 0x1C0031568 (McTemplateK0pptpqxpxx_EtwWriteTransfer.c)
 *     McTemplateK0pptpqxq_EtwWriteTransfer @ 0x1C003165C (McTemplateK0pptpqxq_EtwWriteTransfer.c)
 *     McTemplateK0pptpqxqqppqqxxpqx_EtwWriteTransfer @ 0x1C003171C (McTemplateK0pptpqxqqppqqxxpqx_EtwWriteTransfer.c)
 *     McTemplateK0pptpqxqxqxq_EtwWriteTransfer @ 0x1C00318C8 (McTemplateK0pptpqxqxqxq_EtwWriteTransfer.c)
 *     McTemplateK0pptpqxqxqxqqq_EtwWriteTransfer @ 0x1C00319E0 (McTemplateK0pptpqxqxqxqqq_EtwWriteTransfer.c)
 *     McTemplateK0pptpqxxqt_EtwWriteTransfer @ 0x1C0031B2C (McTemplateK0pptpqxxqt_EtwWriteTransfer.c)
 *     McTemplateK0pptpqxxt_EtwWriteTransfer @ 0x1C0031C20 (McTemplateK0pptpqxxt_EtwWriteTransfer.c)
 *     McTemplateK0pptpxqqx_EtwWriteTransfer @ 0x1C0031D00 (McTemplateK0pptpxqqx_EtwWriteTransfer.c)
 *     McTemplateK0pptpxx_EtwWriteTransfer @ 0x1C0031DE0 (McTemplateK0pptpxx_EtwWriteTransfer.c)
 *     McTemplateK0pptpxxpq_EtwWriteTransfer @ 0x1C0031EA0 (McTemplateK0pptpxxpq_EtwWriteTransfer.c)
 *     McTemplateK0pptpxxqqxx_EtwWriteTransfer @ 0x1C0031F80 (McTemplateK0pptpxxqqxx_EtwWriteTransfer.c)
 *     McTemplateK0pptpxxqqxxxqqxxx_EtwWriteTransfer @ 0x1C0032084 (McTemplateK0pptpxxqqxxxqqxxx_EtwWriteTransfer.c)
 *     McTemplateK0pptqx_EtwWriteTransfer @ 0x1C0032218 (McTemplateK0pptqx_EtwWriteTransfer.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1C0095CE0 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     ?WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1C00A2358 (-WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?SuspendResumeProcessGpuMmuContexts@VIDMM_PROCESS@@QEAAXI_N@Z @ 0x1C00E02F8 (-SuspendResumeProcessGpuMmuContexts@VIDMM_PROCESS@@QEAAXI_N@Z.c)
 *     ?RecordVaPagingHistoryFlushTlb@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAU_DXGK_BUILDPAGINGBUFFER_FLUSHTLB@@I@Z @ 0x1C00E3330 (-RecordVaPagingHistoryFlushTlb@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAU_DXGK_BUILDPAGINGBUFFER.c)
 */

void __fastcall VIDMM_GLOBAL::FlushGpuVaTlb(
        VIDMM_GLOBAL *this,
        unsigned int a2,
        struct _D3DGPU_PHYSICAL_ADDRESS *a3,
        struct VIDMM_PROCESS *a4,
        void *a5,
        SIZE_T a6,
        unsigned __int64 a7)
{
  struct VIDMM_PROCESS *v7; // r13
  struct _D3DGPU_PHYSICAL_ADDRESS *v8; // rsi
  __int64 v9; // r15
  _QWORD *v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rax
  void *v14; // rax
  __int64 v15; // rcx
  SIZE_T v16; // r11
  LARGE_INTEGER v17; // r10
  _QWORD *v18; // r9
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rdx
  struct _D3DGPU_PHYSICAL_ADDRESS v22; // xmm0
  void *v23; // rcx
  UINT v24; // eax
  bool v25; // zf
  int v26; // eax
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // r13
  __int64 FillPattern; // rcx
  int v31; // esi
  __int64 v32; // r12
  char v33; // al
  __int64 v34; // r10
  SIZE_T OffsetInPages; // r11
  _OWORD *v36; // rdx
  _DWORD *v37; // rcx
  struct _DXGKARG_BUILDPAGINGBUFFER *v38; // rax
  __int64 v39; // rcx
  __int128 v40; // xmm0
  __int64 v41; // rcx
  __int64 v42; // r8
  char v43[8]; // [rsp+30h] [rbp-F8h]
  char v44[8]; // [rsp+38h] [rbp-F0h]
  __int64 v45; // [rsp+40h] [rbp-E8h]
  __int64 v46; // [rsp+48h] [rbp-E0h]
  __int64 v47; // [rsp+50h] [rbp-D8h]
  __int64 v48; // [rsp+58h] [rbp-D0h]
  __int64 v49; // [rsp+60h] [rbp-C8h]
  __int64 v50; // [rsp+70h] [rbp-B8h]
  __int64 v51; // [rsp+78h] [rbp-B0h]
  __int64 v52; // [rsp+80h] [rbp-A8h]
  __int64 v53; // [rsp+98h] [rbp-90h]
  int v54; // [rsp+A8h] [rbp-80h] BYREF
  __int64 v55; // [rsp+B0h] [rbp-78h]
  char v56; // [rsp+B8h] [rbp-70h]
  struct _DXGKARG_BUILDPAGINGBUFFER v57; // [rsp+C8h] [rbp-60h] BYREF

  v7 = a4;
  v8 = a3;
  v9 = a2;
  if ( !*((_BYTE *)this + 7088) && (*((_BYTE *)this + 40936) & 0x10) == 0 )
  {
    memset(&v57, 0, sizeof(v57));
    v11 = *(_QWORD **)(*((_QWORD *)this + 2) + 632LL);
    v12 = *(_QWORD *)(v11[34] + 8 * v9);
    if ( v12 )
    {
      v14 = *(void **)(v12 + 48);
    }
    else
    {
      if ( (*((_BYTE *)this + 40937) & 8) != 0 )
        v13 = v11[36];
      else
        v13 = v11[33];
      v14 = *(void **)(*(_QWORD *)(v13 + 8 * v9) + 64LL);
    }
    v57.hSystemContext = v14;
    v57.MultipassOffset = 0;
    while ( 1 )
    {
      v15 = *((_QWORD *)this + v9 + 79);
      v16 = a6;
      v17.QuadPart = a7;
      if ( (*(_DWORD *)(v15 + 32) & 4) == 0 )
      {
        WdLogSingleEntry5(0LL, 270LL, 29LL, *((_QWORD *)this + v9 + 79), 0LL, 0LL);
        v15 = *((_QWORD *)this + v9 + 79);
        v17.QuadPart = a7;
        v16 = a6;
      }
      v18 = (_QWORD *)*((_QWORD *)this + v9 + 143);
      if ( *(_DWORD *)(v15 + 36) )
        v19 = *(_QWORD *)(v18[7] + 384LL);
      else
        v19 = v18[9];
      *((_QWORD *)this + v9 + 335) = v19;
      v20 = *((unsigned int *)this + v9 + 414);
      *((_QWORD *)this + v9 + 335) += v20;
      v21 = *((unsigned int *)this + v9 + 542);
      v22 = *v8;
      v57.pDmaBuffer = (void *)*((_QWORD *)this + v9 + 335);
      v23 = (void *)(v21 + v18[16]);
      *((_QWORD *)this + v9 + 399) = v23;
      v24 = *((_DWORD *)this + v9 + 29) - v20;
      v57.pDmaBufferPrivateData = v23;
      v57.DmaSize = v24;
      v25 = *((_QWORD *)this + 5123) == 0LL;
      v57.DmaBufferPrivateDataSize = *((_DWORD *)this + v9 + 93) - v21;
      v57.DmaBufferGpuVirtualAddress = v18[12];
      v57.DmaBufferWriteOffset = v20;
      v57.Operation = DXGK_OPERATION_FLUSH_TLB;
      v57.FlushTlb.RootPageTableAddress = v22;
      v57.Transfer.TransferSize = (SIZE_T)a5;
      v57.MapApertureSegment.OffsetInPages = v16;
      v57.Transfer.Source.SegmentAddress = v17;
      if ( !v25 )
        VIDMM_GLOBAL::RecordVaPagingHistoryFlushTlb(this, v7, &v57.FlushTlb, v9);
      v26 = ADAPTER_RENDER::DdiBuildPagingBuffer(*((ADAPTER_RENDER **)this + 2), &v57);
      v29 = -1LL;
      FillPattern = (unsigned int)(LODWORD(v57.pDmaBuffer) - *((_DWORD *)this + 2 * v9 + 670));
      v31 = LODWORD(v57.pDmaBufferPrivateData) - *((_DWORD *)this + 2 * v9 + 798);
      v32 = v26;
      if ( LODWORD(v57.pDmaBuffer) != *((_DWORD *)this + 2 * v9 + 670) || v31 )
      {
        if ( !*((_DWORD *)this + v9 + 1177) )
        {
          *((_DWORD *)this + v9 + 1177) = 1;
          ++*((_QWORD *)this + v9 + 621);
        }
        v33 = *((_BYTE *)this + 40937);
        v29 = *((_QWORD *)this + v9 + 621);
        if ( (v33 & 2) != 0 )
          *((_BYTE *)this + 40937) = v33 & 0xFD;
      }
      *((_DWORD *)this + v9 + 414) += FillPattern;
      if ( *((_DWORD *)this + v9 + 414) > *((_DWORD *)this + v9 + 29) )
        WdLogSingleEntry5(0LL, 270LL, 18LL, 0LL, 0LL, 0LL);
      *((_DWORD *)this + v9 + 542) += v31;
      if ( *((_DWORD *)this + v9 + 542) > *((_DWORD *)this + v9 + 93) )
        WdLogSingleEntry5(0LL, 270LL, 19LL, 0LL, 0LL, 0LL);
      if ( bTracingEnabled )
      {
        v34 = *((_QWORD *)this + v9 + 143);
        v28 = *((_QWORD *)this + 3);
        if ( v57.Operation == DXGK_OPERATION_UPDATE_PAGE_TABLE )
        {
          v27 = v57.Reserved.Reserved[20];
          FillPattern = 0LL;
          if ( v57.Reserved.Reserved[20] == 2 )
          {
            OffsetInPages = v57.MapApertureSegment.OffsetInPages;
            FillPattern = v57.Fill.FillPattern;
          }
          else if ( v57.Reserved.Reserved[20] > 1 )
          {
            OffsetInPages = 0LL;
          }
          else
          {
            OffsetInPages = v57.Transfer.TransferSize;
          }
          if ( (byte_1C006E941 & 8) != 0 )
          {
            LODWORD(v53) = v57.UpdatePageTable.UpdateMode;
            LODWORD(v51) = v57.Transfer.Destination.SegmentAddress.HighPart;
            LODWORD(v48) = v57.UnmapApertureSegment.DummyPage.HighPart;
            LODWORD(v50) = v57.Transfer.Destination.SegmentId;
            LODWORD(v47) = FillPattern;
            LODWORD(v45) = v57.ReadPhysical.SegmentId;
            *(_DWORD *)v43 = v32 == -1071775743;
            McTemplateK0pptpqxqqppqqxxpqx_EtwWriteTransfer(
              (__int64)&DxgkControlGuid_Context,
              (__int64)&EventPagingOpUpdatePageTable,
              0LL,
              v28,
              v34,
              *(_QWORD *)v43,
              0LL,
              v45,
              OffsetInPages,
              v47,
              v48,
              v57.Transfer.Source.SegmentAddress.QuadPart,
              v57.UpdatePageTable.pPageTableEntries64KB,
              v50,
              v51,
              *(_OWORD *)&v57.Reserved.Reserved[14],
              v57.UpdatePageTable.hProcess,
              v53,
              v57.UpdatePageTable.FirstPteVirtualAddress);
          }
        }
        else if ( v57.Operation == DXGK_OPERATION_FLUSH_TLB )
        {
          if ( (byte_1C006E941 & 8) != 0 )
          {
            LODWORD(v45) = v57.ReadPhysical.SegmentId;
            *(_DWORD *)v43 = v32 == -1071775743;
            McTemplateK0pptpqxpxx_EtwWriteTransfer(
              (__int64)&DxgkControlGuid_Context,
              (__int64)&EventPagingOpFlushTlb,
              0LL,
              v28,
              v34,
              *(_QWORD *)v43,
              0LL,
              v45,
              *(_OWORD *)&v57.SpecialLockTransfer.TransferOffset,
              *(_OWORD *)&v57.Reserved.Reserved[6]);
          }
        }
        else
        {
          v27 = 0x1C0000000uLL;
          switch ( v57.Operation )
          {
            case DXGK_OPERATION_TRANSFER:
              if ( (byte_1C006E941 & 8) != 0 )
              {
                LODWORD(v50) = v57.Transfer.Flags.0;
                LODWORD(v49) = v57.Transfer.Destination.SegmentId;
                LODWORD(v47) = v57.Transfer.Source.SegmentId;
                LODWORD(v45) = v57.Transfer.TransferOffset;
                *(_DWORD *)v43 = v32 == -1071775743;
                McTemplateK0pptpqxqxqxq_EtwWriteTransfer(
                  (__int64)&DxgkControlGuid_Context,
                  (__int64)&EventPagingOpTransfer,
                  0LL,
                  v28,
                  v34,
                  *(_QWORD *)v43,
                  0LL,
                  v45,
                  v57.Transfer.TransferSize,
                  v47,
                  v57.Transfer.Source.SegmentAddress.QuadPart,
                  v49,
                  v57.Transfer.Destination.SegmentAddress.QuadPart,
                  v50);
              }
              break;
            case DXGK_OPERATION_FILL:
              if ( (byte_1C006E941 & 8) != 0 )
              {
                LODWORD(v47) = v57.Transfer.Source.SegmentId;
                LODWORD(v46) = v57.Fill.FillPattern;
                *(_DWORD *)v43 = v32 == -1071775743;
                McTemplateK0pptpxqqx_EtwWriteTransfer(
                  (__int64)&DxgkControlGuid_Context,
                  (__int64)&EventPagingOpFill,
                  0LL,
                  v28,
                  v34,
                  *(_QWORD *)v43,
                  0LL,
                  v57.Fill.FillSize,
                  v46,
                  v47,
                  v57.Transfer.Source.SegmentAddress.QuadPart);
              }
              break;
            case DXGK_OPERATION_DISCARD_CONTENT:
              if ( (byte_1C006E941 & 8) != 0 )
              {
                LODWORD(v46) = v57.DiscardContent.SegmentId;
                LODWORD(v45) = v57.Transfer.TransferOffset;
                *(_DWORD *)v43 = v32 == -1071775743;
                McTemplateK0pptpqqx_EtwWriteTransfer(
                  (__int64)&DxgkControlGuid_Context,
                  (__int64)&EventPagingOpDiscard,
                  0LL,
                  v28,
                  v34,
                  *(_QWORD *)v43,
                  0LL,
                  v45,
                  v46,
                  v57.Transfer.TransferSize);
              }
              break;
            case DXGK_OPERATION_READ_PHYSICAL:
              if ( (byte_1C006E941 & 8) != 0 )
              {
                *(_DWORD *)v44 = v57.ReadPhysical.SegmentId;
                *(_DWORD *)v43 = v32 == -1071775743;
                McTemplateK0pptqx_EtwWriteTransfer(
                  (__int64)&DxgkControlGuid_Context,
                  &EventPagingOpReadPhysical,
                  0LL,
                  v28,
                  v34,
                  *(_QWORD *)v43,
                  *(_QWORD *)v44,
                  v57.Fill.FillSize);
              }
              break;
            case DXGK_OPERATION_WRITE_PHYSICAL:
              if ( (byte_1C006E941 & 8) != 0 )
              {
                *(_DWORD *)v44 = v57.ReadPhysical.SegmentId;
                *(_DWORD *)v43 = v32 == -1071775743;
                McTemplateK0pptqx_EtwWriteTransfer(
                  (__int64)&DxgkControlGuid_Context,
                  &EventPagingOpWritePhysical,
                  0LL,
                  v28,
                  v34,
                  *(_QWORD *)v43,
                  *(_QWORD *)v44,
                  v57.Fill.FillSize);
              }
              break;
            case DXGK_OPERATION_MAP_APERTURE_SEGMENT:
              if ( (byte_1C006E941 & 8) != 0 )
              {
                LODWORD(v49) = 0;
                LODWORD(v48) = v57.Transfer.Destination.SegmentAddress.LowPart;
                LODWORD(v45) = v57.Fill.FillPattern;
                *(_DWORD *)v43 = v32 == -1071775743;
                McTemplateK0pptpqxxqt_EtwWriteTransfer(
                  (__int64)&DxgkControlGuid_Context,
                  (__int64)&EventPagingOpMapApertureSegment,
                  0LL,
                  v28,
                  v34,
                  *(_QWORD *)v43,
                  0LL,
                  v45,
                  *(_OWORD *)&v57.Reserved.Reserved[6],
                  v48,
                  v49);
              }
              break;
            case DXGK_OPERATION_UNMAP_APERTURE_SEGMENT:
              if ( (byte_1C006E941 & 8) != 0 )
              {
                LODWORD(v48) = 0;
                LODWORD(v45) = v57.Fill.FillPattern;
                *(_DWORD *)v43 = v32 == -1071775743;
                McTemplateK0pptpqxxt_EtwWriteTransfer(
                  (__int64)&DxgkControlGuid_Context,
                  (__int64)&EventPagingOpUnmapApertureSegment,
                  0LL,
                  v28,
                  v34,
                  *(_QWORD *)v43,
                  0LL,
                  v45,
                  *(_OWORD *)&v57.Reserved.Reserved[6],
                  v48);
              }
              break;
            case DXGK_OPERATION_SPECIAL_LOCK_TRANSFER:
              if ( (byte_1C006E941 & 8) != 0 )
              {
                LODWORD(v52) = v57.SpecialLockTransfer.SwizzlingRangeData;
                LODWORD(v51) = v57.Transfer.MdlOffset;
                LODWORD(v50) = v57.Transfer.Flags.0;
                LODWORD(v49) = v57.Transfer.Destination.SegmentId;
                LODWORD(v47) = v57.Transfer.Source.SegmentId;
                LODWORD(v45) = v57.Transfer.TransferOffset;
                *(_DWORD *)v43 = v32 == -1071775743;
                McTemplateK0pptpqxqxqxqqq_EtwWriteTransfer(
                  (__int64)&DxgkControlGuid_Context,
                  (__int64)&EventPagingOpSpecialLockTransfer,
                  0LL,
                  v28,
                  v34,
                  *(_QWORD *)v43,
                  0LL,
                  v45,
                  v57.Transfer.TransferSize,
                  v47,
                  v57.Transfer.Source.SegmentAddress.QuadPart,
                  v49,
                  v57.Transfer.Destination.SegmentAddress.QuadPart,
                  v50,
                  v51,
                  v52);
              }
              break;
            case DXGK_OPERATION_VIRTUAL_TRANSFER:
              if ( (byte_1C006E941 & 8) != 0 )
              {
                LODWORD(v52) = v57.Transfer.Destination.SegmentAddress.HighPart;
                LODWORD(v51) = v57.Transfer.Destination.SegmentAddress.LowPart;
                LODWORD(v48) = MEMORY[4];
                LODWORD(v47) = MEMORY[0];
                *(_DWORD *)v43 = v32 == -1071775743;
                McTemplateK0pptpxxqqxxxqqxxx_EtwWriteTransfer(
                  (__int64)&DxgkControlGuid_Context,
                  (__int64)&EventPagingOpVirtualTransfer,
                  0LL,
                  v28,
                  v34,
                  *(_QWORD *)v43,
                  0LL,
                  *(_OWORD *)&v57.SpecialLockTransfer.TransferOffset,
                  v47,
                  v48,
                  *(_OWORD *)&v57.Reserved.Reserved[6],
                  v57.UnmapApertureSegment.DummyPage.QuadPart,
                  v51,
                  v52,
                  v57.TransferVirtual.DestinationPageTable,
                  MEMORY[8],
                  MEMORY[0x10]);
              }
              break;
            case DXGK_OPERATION_VIRTUAL_FILL:
              if ( (byte_1C006E941 & 8) != 0 )
              {
                LODWORD(v48) = MEMORY[0];
                LODWORD(v47) = v57.Transfer.Source.SegmentId;
                *(_DWORD *)v43 = v32 == -1071775743;
                McTemplateK0pptpxxqqxx_EtwWriteTransfer(
                  (__int64)&DxgkControlGuid_Context,
                  (__int64)&EventPagingOpVirtualFill,
                  0LL,
                  v28,
                  v34,
                  *(_QWORD *)v43,
                  0LL,
                  *(_OWORD *)&v57.SpecialLockTransfer.TransferOffset,
                  v47,
                  v48,
                  v57.Transfer.Source.SegmentAddress.QuadPart,
                  MEMORY[8]);
              }
              break;
            case DXGK_OPERATION_INIT_CONTEXT_RESOURCE:
              if ( (byte_1C006E941 & 8) != 0 )
              {
                LODWORD(v45) = v57.Transfer.TransferOffset;
                *(_DWORD *)v43 = v32 == -1071775743;
                McTemplateK0pptpqxpx_EtwWriteTransfer(
                  (__int64)&DxgkControlGuid_Context,
                  (__int64)&EventPagingOpInitContextResource,
                  0LL,
                  v28,
                  v34,
                  *(_QWORD *)v43,
                  0LL,
                  v45,
                  *(_OWORD *)&v57.NotifyResidency.PhysicalAddress.SegmentOffset,
                  v57.Transfer.Source.SegmentAddress.QuadPart);
              }
              break;
            case DXGK_OPERATION_UPDATE_CONTEXT_ALLOCATION:
              if ( (byte_1C006E941 & 8) != 0 )
              {
                LODWORD(v48) = v57.Transfer.Source.SegmentId;
                *(_DWORD *)v43 = v32 == -1071775743;
                McTemplateK0pptpxxpq_EtwWriteTransfer(
                  (__int64)&DxgkControlGuid_Context,
                  (__int64)&EventPagingOpUpdateContextAllocation,
                  0LL,
                  v28,
                  v34,
                  *(_QWORD *)v43,
                  0LL,
                  *(_OWORD *)&v57.Transfer.hAllocation,
                  v57.Transfer.TransferSize,
                  v48);
              }
              break;
            case DXGK_OPERATION_NOTIFY_RESIDENCY:
              if ( (byte_1C006E941 & 8) != 0 )
              {
                LODWORD(v47) = v57.Transfer.Source.SegmentId;
                LODWORD(v45) = v57.Transfer.TransferOffset;
                *(_DWORD *)v43 = v32 == -1071775743;
                McTemplateK0pptpqxq_EtwWriteTransfer(
                  (__int64)&DxgkControlGuid_Context,
                  (__int64)&EventPagingOpNotifyResidency,
                  0LL,
                  v28,
                  v34,
                  *(_QWORD *)v43,
                  0LL,
                  v45,
                  v57.Transfer.TransferSize,
                  v47);
              }
              break;
            case DXGK_OPERATION_SIGNAL_MONITORED_FENCE:
              if ( (byte_1C006E941 & 8) != 0 )
              {
                *(_DWORD *)v43 = v32 == -1071775743;
                McTemplateK0pptpxx_EtwWriteTransfer(
                  (__int64)&DxgkControlGuid_Context,
                  (__int64)&EventPagingOpSignalMonitoredFence,
                  0LL,
                  v28,
                  v34,
                  *(_QWORD *)v43,
                  0LL,
                  *(_OWORD *)&v57.Transfer.hAllocation);
              }
              break;
            default:
              break;
          }
        }
      }
      v36 = (_OWORD *)*((_QWORD *)this + 985);
      if ( v36 )
      {
        *((_QWORD *)v36 + 45 * *((unsigned int *)this + 1972) + 1) = 0LL;
        *(_QWORD *)(360LL * *((unsigned int *)this + 1972) + *((_QWORD *)this + 985) + 16) = 0LL;
        *(_DWORD *)(360LL * *((unsigned int *)this + 1972) + *((_QWORD *)this + 985)) = v9;
        v38 = &v57;
        v36 = (_OWORD *)(360LL * *((unsigned int *)this + 1972) + *((_QWORD *)this + 985) + 24LL);
        v39 = 2LL;
        do
        {
          v36 += 8;
          v40 = *(_OWORD *)&v38->pDmaBuffer;
          v38 = (struct _DXGKARG_BUILDPAGINGBUFFER *)((char *)v38 + 128);
          *(v36 - 8) = v40;
          *(v36 - 7) = *(_OWORD *)&v38[-1].Reserved.Reserved[42];
          *(v36 - 6) = *(_OWORD *)&v38[-1].Reserved.Reserved[46];
          *(v36 - 5) = *(_OWORD *)&v38[-1].Reserved.Reserved[50];
          *(v36 - 4) = *(_OWORD *)&v38[-1].Reserved.Reserved[54];
          *(v36 - 3) = *(_OWORD *)&v38[-1].Reserved.Reserved[58];
          *(v36 - 2) = *(_OWORD *)&v38[-1].Reserved.Reserved[62];
          *(v36 - 1) = *(_OWORD *)&v38[-1].DmaBufferGpuVirtualAddress;
          --v39;
        }
        while ( v39 );
        *v36 = *(_OWORD *)&v38->pDmaBuffer;
        v36[1] = *(_OWORD *)&v38->pDmaBufferPrivateData;
        v36[2] = *(_OWORD *)&v38->MultipassOffset;
        v36[3] = *(_OWORD *)&v38->SpecialLockTransfer.TransferOffset;
        *(_DWORD *)(360LL * *((unsigned int *)this + 1972) + *((_QWORD *)this + 985) + 344) = v32;
        FillPattern = 360LL * *((unsigned int *)this + 1972);
        *(_QWORD *)(FillPattern + *((_QWORD *)this + 985) + 352) = v29;
        if ( ++*((_DWORD *)this + 1972) >= *((_DWORD *)this + 1968) )
        {
          ++*((_DWORD *)this + 1973);
          *((_DWORD *)this + 1972) = 0;
        }
      }
      if ( (int)v32 >= 0 )
        break;
      if ( (_DWORD)v32 != -1071775743 )
      {
        WdLogSingleEntry5(0LL, 270LL, 11LL, &v57, v32, *((_QWORD *)this + 3));
        break;
      }
      if ( g_IsInternalReleaseOrDbg )
        WdLogNewEntry5_WdTrace(FillPattern, v36, v27, v28);
      VIDMM_GLOBAL::FlushPagingBufferInternal(this, v9, 1u, 0LL, 0LL, 1, 0);
      v8 = a3;
      v7 = a4;
    }
    v37 = *(_DWORD **)(1584LL * (unsigned int)v9 + *((_QWORD *)this + 5028) + 440);
    if ( (*v37 & 0x20) != 0 && (*((_DWORD *)a4 + 24) & 2) == 0 )
    {
      if ( bTracingEnabled && (byte_1C006E941 & 1) != 0 )
        McTemplateK0q_EtwWriteTransfer((__int64)v37, (__int64)&EventPerformanceWarning, v27, 23);
      v54 = -1;
      v55 = 0LL;
      if ( (qword_1C006E010 & 2) != 0 )
      {
        v56 = 1;
        v54 = 8010;
        if ( byte_1C006E941 < 0 )
          McTemplateK0q_EtwWriteTransfer((__int64)v37, (__int64)&EventProfilerEnter, v27, 8010);
      }
      else
      {
        v56 = 0;
      }
      DXGETWPROFILER_BASE::PushProfilerEntry();
      VIDMM_GLOBAL::FlushPagingBufferInternal(this, v9, 0, 0LL, 0LL, 0, 0);
      VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(this, v9);
      if ( (*((_DWORD *)a4 + 24) & 4) == 0 )
      {
        VIDMM_PROCESS::SuspendResumeProcessGpuMmuContexts(a4, *(_DWORD *)(*((_QWORD *)this + 3) + 240LL), 1);
        VIDMM_PROCESS::SuspendResumeProcessGpuMmuContexts(a4, *(_DWORD *)(*((_QWORD *)this + 3) + 240LL), 0);
      }
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v54);
      if ( v56 )
      {
        if ( byte_1C006E941 < 0 )
          McTemplateK0q_EtwWriteTransfer(v41, (__int64)&EventProfilerExit, v42, v54);
      }
    }
  }
}
