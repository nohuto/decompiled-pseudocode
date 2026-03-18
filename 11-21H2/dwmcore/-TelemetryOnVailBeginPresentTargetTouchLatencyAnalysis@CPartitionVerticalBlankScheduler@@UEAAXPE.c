/*
 * XREFs of ?TelemetryOnVailBeginPresentTargetTouchLatencyAnalysis@CPartitionVerticalBlankScheduler@@UEAAXPEAVIRenderTarget@@@Z @ 0x1800791C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$_Find_lower_bound@PEAVIVailRenderTarget@@@?$_Tree@V?$_Tmap_traits@PEAVIVailRenderTarget@@UMapRenderTargetInfo@InteractionLatencyTelemetry@@U?$less@PEAVIVailRenderTarget@@@std@@V?$allocator@U?$pair@QEAVIVailRenderTarget@@UMapRenderTargetInfo@InteractionLatencyTelemetry@@@std@@@5@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@QEAVIVailRenderTarget@@UMapRenderTargetInfo@InteractionLatencyTelemetry@@@std@@PEAX@std@@@1@AEBQEAVIVailRenderTarget@@@Z @ 0x1801D18F0 (--$_Find_lower_bound@PEAVIVailRenderTarget@@@-$_Tree@V-$_Tmap_traits@PEAVIVailRenderTarget@@UMap.c)
 *     ??$_Try_emplace@PEAVIVailRenderTarget@@$$V@?$map@PEAVIVailRenderTarget@@UMapRenderTargetInfo@InteractionLatencyTelemetry@@U?$less@PEAVIVailRenderTarget@@@std@@V?$allocator@U?$pair@QEAVIVailRenderTarget@@UMapRenderTargetInfo@InteractionLatencyTelemetry@@@std@@@5@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@QEAVIVailRenderTarget@@UMapRenderTargetInfo@InteractionLatencyTelemetry@@@std@@PEAX@std@@_N@1@$$QEAPEAVIVailRenderTarget@@@Z @ 0x1801D19FC (--$_Try_emplace@PEAVIVailRenderTarget@@$$V@-$map@PEAVIVailRenderTarget@@UMapRenderTargetInfo@Int.c)
 */

void __fastcall CPartitionVerticalBlankScheduler::TelemetryOnVailBeginPresentTargetTouchLatencyAnalysis(
        CPartitionVerticalBlankScheduler *this,
        struct IRenderTarget *a2)
{
  __int64 v3; // r8
  int v4; // eax
  LARGE_INTEGER v5; // r10
  __int64 v6; // rdx
  LARGE_INTEGER v7; // rbx
  __int64 v8; // rcx
  _BYTE v9[32]; // [rsp+20h] [rbp-20h] BYREF
  LARGE_INTEGER v10; // [rsp+60h] [rbp+20h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+68h] [rbp+28h] BYREF
  LARGE_INTEGER v12; // [rsp+70h] [rbp+30h] BYREF

  v3 = *(int *)(*((_QWORD *)a2 + 1) + 4LL);
  v10.QuadPart = 0LL;
  v4 = (**(__int64 (__fastcall ***)(char *, GUID *, LARGE_INTEGER *))((char *)a2 + v3 + 8))(
         (char *)a2 + v3 + 8,
         &GUID_813c29c9_c423_4bba_a41c_de7fd4c7b061,
         &v10);
  v5 = v10;
  if ( v4 >= 0 )
  {
    PerformanceCount = v10;
    v6 = *(_QWORD *)(std::_Tree<std::_Tmap_traits<IVailRenderTarget *,InteractionLatencyTelemetry::MapRenderTargetInfo,std::less<IVailRenderTarget *>,std::allocator<std::pair<IVailRenderTarget * const,InteractionLatencyTelemetry::MapRenderTargetInfo>>,0>>::_Find_lower_bound<IVailRenderTarget *>(
                       (char *)this + 12384,
                       v9,
                       &PerformanceCount)
                   + 16);
    if ( !*(_BYTE *)(v6 + 25) && v5.QuadPart >= *(_QWORD *)(v6 + 32) )
    {
      QueryPerformanceCounter(&PerformanceCount);
      v7 = PerformanceCount;
      v12 = v10;
      *(LARGE_INTEGER *)(*(_QWORD *)std::map<IVailRenderTarget *,InteractionLatencyTelemetry::MapRenderTargetInfo>::_Try_emplace<IVailRenderTarget *,>(
                                      (char *)this + 12384,
                                      v9,
                                      &v12)
                       + 88LL) = v7;
      v5 = v10;
    }
  }
  if ( v5.QuadPart )
  {
    v8 = v5.QuadPart + 8 + *(int *)(*(_QWORD *)(v5.QuadPart + 8) + 4LL);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
}
