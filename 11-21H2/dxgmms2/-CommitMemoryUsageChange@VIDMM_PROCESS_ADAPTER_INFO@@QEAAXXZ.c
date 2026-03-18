/*
 * XREFs of ?CommitMemoryUsageChange@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ @ 0x1C00872F4
 * Callers:
 *     ?ReferenceAllocationList@VIDMM_DEVICE@@QEAAJPEAPEAUVIDMM_ALLOC@@_K_NPEA_K@Z @ 0x1C0086E20 (-ReferenceAllocationList@VIDMM_DEVICE@@QEAAJPEAPEAUVIDMM_ALLOC@@_K_NPEA_K@Z.c)
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0093DF0 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 *     ?UnreferenceAllocationList@VIDMM_DEVICE@@QEAAXPEAPEAUVIDMM_ALLOC@@_KPEA_K@Z @ 0x1C00A4670 (-UnreferenceAllocationList@VIDMM_DEVICE@@QEAAXPEAPEAUVIDMM_ALLOC@@_KPEA_K@Z.c)
 *     ?ReferencePinnedAllocation@VIDMM_DEVICE@@QEAAJPEAUVIDMM_ALLOC@@PEA_N@Z @ 0x1C00A9DBC (-ReferencePinnedAllocation@VIDMM_DEVICE@@QEAAJPEAUVIDMM_ALLOC@@PEA_N@Z.c)
 *     ?UnreferencePinnedAllocation@VIDMM_DEVICE@@QEAA_NPEAUVIDMM_ALLOC@@_N@Z @ 0x1C00AA07C (-UnreferencePinnedAllocation@VIDMM_DEVICE@@QEAA_NPEAUVIDMM_ALLOC@@_N@Z.c)
 * Callees:
 *     McTemplateK0xxpqhu_EtwWriteTransfer @ 0x1C002FE90 (McTemplateK0xxpqhu_EtwWriteTransfer.c)
 */

void __fastcall VIDMM_PROCESS_ADAPTER_INFO::CommitMemoryUsageChange(
        VIDMM_PROCESS_ADAPTER_INFO *this,
        __int64 a2,
        __int64 a3)
{
  unsigned int i; // ebx
  unsigned int v5; // ebp
  _QWORD *v6; // rsi

  if ( bTracingEnabled )
  {
    for ( i = 0; i < *(_DWORD *)(*(_QWORD *)this + 7016LL); ++i )
    {
      v5 = 0;
      v6 = (_QWORD *)(*((_QWORD *)this + 6) + 296LL * i + 136);
      do
      {
        if ( v6[3] != *v6 && (byte_1C006E941 & 0x10) != 0 )
          McTemplateK0xxpqhu_EtwWriteTransfer(*(_QWORD *)this, &EventVidMmProcessUsageChange, a3);
        ++v5;
        ++v6;
      }
      while ( v5 < 3 );
    }
  }
}
