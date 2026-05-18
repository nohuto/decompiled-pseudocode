/*
 * XREFs of ?IncrementCounter@PerformanceManager@Engine@Spectre@@QEAAXW4Category@123@W4Property@123@_J@Z @ 0x180070AF0
 * Callers:
 *     ??0MemoryBlock@PerformanceManager@Engine@Spectre@@QEAA@W4Category@123@_J@Z @ 0x180029158 (--0MemoryBlock@PerformanceManager@Engine@Spectre@@QEAA@W4Category@123@_J@Z.c)
 *     ??0RendererResource@Engine@Spectre@@QEAA@W4EType@012@W4Category@PerformanceManager@12@@Z @ 0x18002918C (--0RendererResource@Engine@Spectre@@QEAA@W4EType@012@W4Category@PerformanceManager@12@@Z.c)
 *     ??1MemoryBlock@PerformanceManager@Engine@Spectre@@QEAA@XZ @ 0x1800292BC (--1MemoryBlock@PerformanceManager@Engine@Spectre@@QEAA@XZ.c)
 *     ??1RendererResource@Engine@Spectre@@UEAA@XZ @ 0x1800292E8 (--1RendererResource@Engine@Spectre@@UEAA@XZ.c)
 *     ?SetMemoryTrackingData@RendererResource@Engine@Spectre@@IEAAX_KW4Category@PerformanceManager@23@@Z @ 0x180029730 (-SetMemoryTrackingData@RendererResource@Engine@Spectre@@IEAAX_KW4Category@PerformanceManager@23@.c)
 *     ?Render@Mesh@Engine@Spectre@@QEAAXAEBV?$shared_ptr@VCommandList@Engine@Spectre@@@std@@_K@Z @ 0x180048C04 (-Render@Mesh@Engine@Spectre@@QEAAXAEBV-$shared_ptr@VCommandList@Engine@Spectre@@@std@@_K@Z.c)
 *     ?SubmitRenderState@CommandListD3D11@D3D11@Engine@Spectre@@MEAAXAEBV?$shared_ptr@VRenderState@Engine@Spectre@@@std@@IUVector4@Math@Utils@4@E@Z @ 0x1800D1480 (-SubmitRenderState@CommandListD3D11@D3D11@Engine@Spectre@@MEAAXAEBV-$shared_ptr@VRenderState@Eng.c)
 *     ?SubmitShaderTexture@CommandListD3D11@D3D11@Engine@Spectre@@MEAAXW4EShaderType@34@AEBV?$shared_ptr@VTexture@Engine@Spectre@@@std@@I@Z @ 0x1800D2530 (-SubmitShaderTexture@CommandListD3D11@D3D11@Engine@Spectre@@MEAAXW4EShaderType@34@AEBV-$shared_p.c)
 *     ?SubmitUpdateBuffer@CommandListD3D11@D3D11@Engine@Spectre@@MEAAXAEBV?$shared_ptr@VArrayBuffer@Engine@Spectre@@@std@@PEBXI@Z @ 0x1800D27D0 (-SubmitUpdateBuffer@CommandListD3D11@D3D11@Engine@Spectre@@MEAAXAEBV-$shared_ptr@VArrayBuffer@En.c)
 *     ?SubmitUpdateBuffer@CommandListD3D11@D3D11@Engine@Spectre@@MEAAXAEBV?$shared_ptr@VConstantBuffer@Engine@Spectre@@@std@@PEBXI@Z @ 0x1800D2900 (-SubmitUpdateBuffer@CommandListD3D11@D3D11@Engine@Spectre@@MEAAXAEBV-$shared_ptr@VConstantBuffer.c)
 * Callees:
 *     ??$_Atomic_address_as@_JU?$_Atomic_padded@_K@std@@@std@@YAPEC_JAEAU?$_Atomic_padded@_K@0@@Z @ 0x180012030 (--$_Atomic_address_as@_JU-$_Atomic_padded@_K@std@@@std@@YAPEC_JAEAU-$_Atomic_padded@_K@0@@Z.c)
 *     ?GetCounterRecord@PerformanceManager@Engine@Spectre@@AEBAAEAUCounterRecord@123@W4Category@123@W4Property@123@@Z @ 0x180070AD4 (-GetCounterRecord@PerformanceManager@Engine@Spectre@@AEBAAEAUCounterRecord@123@W4Category@123@W4.c)
 */

volatile signed __int64 *__fastcall Spectre::Engine::PerformanceManager::IncrementCounter(__int64 a1, int a2, int a3)
{
  __int64 CounterRecord; // rax
  volatile signed __int64 *result; // rax
  unsigned __int64 v5; // r9

  CounterRecord = Spectre::Engine::PerformanceManager::GetCounterRecord(a1, a2, a3);
  result = (volatile signed __int64 *)std::_Atomic_address_as<__int64,std::_Atomic_padded<unsigned __int64>>(CounterRecord);
  _InterlockedExchangeAdd64(result, v5);
  return result;
}
