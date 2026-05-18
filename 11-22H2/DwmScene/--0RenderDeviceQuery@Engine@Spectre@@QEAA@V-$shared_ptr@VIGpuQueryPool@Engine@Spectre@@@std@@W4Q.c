/*
 * XREFs of ??0RenderDeviceQuery@Engine@Spectre@@QEAA@V?$shared_ptr@VIGpuQueryPool@Engine@Spectre@@@std@@W4QueryType@GpuQuery@12@@Z @ 0x1800A1A38
 * Callers:
 *     ?GetQuery@RenderDevice@Engine@Spectre@@QEAA?AVRenderDeviceQuery@23@W4QueryType@GpuQuery@23@@Z @ 0x1800267C4 (-GetQuery@RenderDevice@Engine@Spectre@@QEAA-AVRenderDeviceQuery@23@W4QueryType@GpuQuery@23@@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Spectre::Engine::RenderDeviceQuery::RenderDeviceQuery(__int64 a1, _QWORD *a2, int a3)
{
  __int64 v6; // rax
  __int64 v7; // rcx
  int v8; // eax
  std::_Ref_count_base *v9; // rcx

  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  if ( a2[1] )
  {
    *(_QWORD *)a1 = *a2;
    v6 = a2[1];
    *(_QWORD *)(a1 + 8) = v6;
    _InterlockedIncrement((volatile signed __int32 *)(v6 + 12));
  }
  (**(void (__fastcall ***)(_QWORD, __int64))*a2)(*a2, a1 + 16);
  v7 = *(_QWORD *)(a1 + 16);
  v8 = 4;
  if ( !v7 )
    a3 = 4;
  *(_DWORD *)(a1 + 32) = a3;
  if ( v7 )
    v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 64LL))(v7);
  *(_DWORD *)(a1 + 36) = v8;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_BYTE *)(a1 + 48) = 1;
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_QWORD *)(a1 + 80) = 0LL;
  *(_QWORD *)(a1 + 88) = 0LL;
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_QWORD *)(a1 + 112) = 0LL;
  *(_QWORD *)(a1 + 120) = 0LL;
  *(_QWORD *)(a1 + 128) = 0LL;
  *(_QWORD *)(a1 + 136) = 0LL;
  *(_OWORD *)(a1 + 144) = 0LL;
  *(_QWORD *)(a1 + 144) = 0LL;
  *(_QWORD *)(a1 + 152) = 0LL;
  *(_OWORD *)(a1 + 160) = 0LL;
  *(_QWORD *)(a1 + 160) = 0LL;
  *(_QWORD *)(a1 + 168) = 0LL;
  v9 = (std::_Ref_count_base *)a2[1];
  if ( v9 )
    std::_Ref_count_base::_Decref(v9);
  return a1;
}
