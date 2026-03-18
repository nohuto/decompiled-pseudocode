/*
 * XREFs of ?BuildInitContextAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_N@Z @ 0x1C00D5240
 * Callers:
 *     ?UpdateVirtualAddressForNewResourceLocation@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00DB810 (-UpdateVirtualAddressForNewResourceLocation@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 * Callees:
 *     ?VidMmRecordTransfer@@YAXPEAU_VIDMM_GLOBAL_STATISTICS@@_KI@Z @ 0x1C00021CC (-VidMmRecordTransfer@@YAXPEAU_VIDMM_GLOBAL_STATISTICS@@_KI@Z.c)
 *     ?DriverId@VIDMM_SEGMENT@@QEAAKXZ @ 0x1C0002224 (-DriverId@VIDMM_SEGMENT@@QEAAKXZ.c)
 *     ?DdiBuildPagingBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C000277C (-DdiBuildPagingBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z.c)
 *     memset @ 0x1C001DC40 (memset.c)
 *     McTemplateK0pppxxq_EtwWriteTransfer @ 0x1C002E570 (McTemplateK0pppxxq_EtwWriteTransfer.c)
 *     ?CompleteBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAA_NKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@JHPEAX@Z @ 0x1C0084018 (-CompleteBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAA_NKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_B.c)
 *     ?SetupForBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C00862F0 (-SetupForBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BU.c)
 *     ?GetGpuVirtualAddress@VIDMM_ALLOC@@QEAA_KI@Z @ 0x1C00A5CA8 (-GetGpuVirtualAddress@VIDMM_ALLOC@@QEAA_KI@Z.c)
 */

void __fastcall VIDMM_GLOBAL::BuildInitContextAllocation(ADAPTER_RENDER **this, __int64 **a2)
{
  __int64 v4; // rbx
  __int64 v5; // rdi
  __int64 GpuVirtualAddress; // rax
  ADAPTER_RENDER *v7; // rcx
  int v8; // r14d
  ADAPTER_RENDER *v9; // rbp
  HANDLE CurrentProcessId; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rdx
  int v15; // [rsp+28h] [rbp-180h]
  __int64 v16; // [rsp+30h] [rbp-178h]
  struct _DXGKARG_BUILDPAGINGBUFFER v17; // [rsp+50h] [rbp-158h] BYREF

  v4 = **a2;
  v5 = *(_DWORD *)(v4 + 68) & 0x3F;
  memset(&v17, 0, sizeof(v17));
  do
  {
    VIDMM_GLOBAL::SetupForBuildPagingBufferIteration((VIDMM_GLOBAL *)this, v5, (struct _VIDMM_GLOBAL_ALLOC *)v4, &v17);
    v17.Operation = DXGK_OPERATION_INIT_CONTEXT_RESOURCE;
    v17.UpdateContextAllocation.ContextAllocation = *(_QWORD *)(*(_QWORD *)(v4 + 528) + 40LL);
    v17.Transfer.TransferOffset = VIDMM_SEGMENT::DriverId(*(VIDMM_SEGMENT **)(v4 + 120));
    v17.Transfer.TransferSize = *(_QWORD *)(v4 + 128) + *(_QWORD *)(*(_QWORD *)(v4 + 120) + 24LL);
    if ( (*(_DWORD *)(v4 + 72) & 0x80u) != 0 )
    {
      if ( (**(_DWORD **)(v4 + 528) & 8) != 0 )
        v17.MapApertureSegment.OffsetInPages = *(_QWORD *)(v4 + 384);
      else
        v17.MapApertureSegment.OffsetInPages = *(_QWORD *)(*(_QWORD *)(v4 + 88) + 16LL);
    }
    GpuVirtualAddress = VIDMM_ALLOC::GetGpuVirtualAddress((VIDMM_ALLOC *)a2, v5);
    v7 = this[2];
    v17.Transfer.Source.SegmentAddress.QuadPart = GpuVirtualAddress;
    v8 = ADAPTER_RENDER::DdiBuildPagingBuffer(v7, &v17);
    if ( bTracingEnabled )
    {
      v9 = this[v5 + 143];
      CurrentProcessId = PsGetCurrentProcessId();
      if ( (byte_1C006E941 & 8) != 0 )
      {
        v16 = 0LL;
        v15 = (int)v9;
        McTemplateK0pppxxq_EtwWriteTransfer(v12, v11, v13, CurrentProcessId, v4);
      }
    }
    VidMmRecordTransfer((struct _VIDMM_GLOBAL_STATISTICS *)(this + 898), 0LL, 8);
    VIDMM_GLOBAL::CompleteBuildPagingBufferIteration(
      (VIDMM_GLOBAL *)this,
      v5,
      (struct _VIDMM_GLOBAL_ALLOC *)v4,
      &v17,
      v8,
      v14 & v15,
      (void *)(v14 & v16));
  }
  while ( v8 < 0 );
}
