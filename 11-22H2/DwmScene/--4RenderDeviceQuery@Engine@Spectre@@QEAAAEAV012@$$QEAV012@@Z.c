/*
 * XREFs of ??4RenderDeviceQuery@Engine@Spectre@@QEAAAEAV012@$$QEAV012@@Z @ 0x1800A1C34
 * Callers:
 *     ??0MarkerQueryData@GpuProfilerFrame@Engine@Spectre@@QEAA@$$QEAV0123@@Z @ 0x1800A2640 (--0MarkerQueryData@GpuProfilerFrame@Engine@Spectre@@QEAA@$$QEAV0123@@Z.c)
 *     ?Begin@GpuProfilerFrame@Engine@Spectre@@QEAAX_KV?$shared_ptr@VCommandList@Engine@Spectre@@@std@@@Z @ 0x1800A2948 (-Begin@GpuProfilerFrame@Engine@Spectre@@QEAAX_KV-$shared_ptr@VCommandList@Engine@Spectre@@@std@@.c)
 *     ?CheckQuery@MarkerQueryData@GpuProfilerFrame@Engine@Spectre@@AEAAXAEAVRenderDeviceQuery@34@AEA_K@Z @ 0x1800A2C50 (-CheckQuery@MarkerQueryData@GpuProfilerFrame@Engine@Spectre@@AEAAXAEAVRenderDeviceQuery@34@AEA_K.c)
 *     ?End@GpuProfilerFrame@Engine@Spectre@@QEAAXXZ @ 0x1800A2D20 (-End@GpuProfilerFrame@Engine@Spectre@@QEAAXXZ.c)
 *     ?EndTimeSpan@MarkerQueryData@GpuProfilerFrame@Engine@Spectre@@UEAAXXZ @ 0x1800A2E40 (-EndTimeSpan@MarkerQueryData@GpuProfilerFrame@Engine@Spectre@@UEAAXXZ.c)
 *     ?GetResult@GpuProfilerFrame@Engine@Spectre@@QEAA?AW4Status@123@AEAUResult@123@_N@Z @ 0x1800A2FDC (-GetResult@GpuProfilerFrame@Engine@Spectre@@QEAA-AW4Status@123@AEAUResult@123@_N@Z.c)
 *     ?Present@GpuProfilerFrame@Engine@Spectre@@QEAAXXZ @ 0x1800A3834 (-Present@GpuProfilerFrame@Engine@Spectre@@QEAAXXZ.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x180010574 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??4?$shared_ptr@VDeviceArrayBuffer@Engine@Spectre@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180011020 (--4-$shared_ptr@VDeviceArrayBuffer@Engine@Spectre@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?ReleaseQuery@RenderDeviceQuery@Engine@Spectre@@AEAAXXZ @ 0x1800A210C (-ReleaseQuery@RenderDeviceQuery@Engine@Spectre@@AEAAXXZ.c)
 */

__int64 __fastcall Spectre::Engine::RenderDeviceQuery::operator=(__int64 a1, __int64 *a2)
{
  __int64 v4; // rax
  __int64 v5; // r8
  std::_Ref_count_base *v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rdx
  std::_Ref_count_base *v9; // rcx
  __int64 result; // rax
  __int128 v11; // [rsp+20h] [rbp-18h]

  Spectre::Engine::RenderDeviceQuery::ReleaseQuery((Spectre::Engine::RenderDeviceQuery *)a1);
  v4 = *a2;
  v5 = a2[1];
  *a2 = 0LL;
  a2[1] = 0LL;
  *(_QWORD *)a1 = v4;
  v6 = *(std::_Ref_count_base **)(a1 + 8);
  *(_QWORD *)(a1 + 8) = v5;
  if ( v6 )
    std::_Ref_count_base::_Decwref(v6);
  v7 = a2[2];
  v8 = a2[3];
  a2[2] = 0LL;
  a2[3] = 0LL;
  *(_QWORD *)(a1 + 16) = v7;
  v9 = *(std::_Ref_count_base **)(a1 + 24);
  *(_QWORD *)(a1 + 24) = v8;
  if ( v9 )
    std::_Ref_count_base::_Decref(v9);
  *(_DWORD *)(a1 + 32) = *((_DWORD *)a2 + 8);
  *(_DWORD *)(a1 + 36) = *((_DWORD *)a2 + 9);
  *(_OWORD *)(a1 + 40) = *(_OWORD *)(a2 + 5);
  *(_OWORD *)(a1 + 56) = *(_OWORD *)(a2 + 7);
  *(_OWORD *)(a1 + 72) = *(_OWORD *)(a2 + 9);
  *(_OWORD *)(a1 + 88) = *(_OWORD *)(a2 + 11);
  *(_OWORD *)(a1 + 104) = *(_OWORD *)(a2 + 13);
  *(_OWORD *)(a1 + 120) = *(_OWORD *)(a2 + 15);
  *(_QWORD *)(a1 + 136) = a2[17];
  std::shared_ptr<Spectre::Engine::DeviceArrayBuffer>::operator=((_QWORD *)(a1 + 144), a2 + 18);
  std::shared_ptr<Spectre::Engine::DeviceArrayBuffer>::operator=((_QWORD *)(a1 + 160), a2 + 20);
  *((_DWORD *)a2 + 9) = 4;
  result = a1;
  *(_QWORD *)&v11 = 0LL;
  BYTE8(v11) = 1;
  *(_OWORD *)(a2 + 5) = v11;
  a2[7] = 0LL;
  a2[8] = 0LL;
  a2[9] = 0LL;
  a2[10] = 0LL;
  a2[11] = 0LL;
  a2[12] = 0LL;
  a2[13] = 0LL;
  a2[14] = 0LL;
  a2[15] = 0LL;
  a2[16] = 0LL;
  a2[17] = 0LL;
  return result;
}
