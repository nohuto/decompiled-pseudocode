/*
 * XREFs of DxgkDdiCreateVirtualGpu @ 0x1C03592C8
 * Callers:
 *     DpiFdoDispatchIoctl @ 0x1C01E6840 (DpiFdoDispatchIoctl.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?VgpuTrace@@YAXEJPEAXPEBG1ZZ @ 0x1C005BFAC (-VgpuTrace@@YAXEJPEAXPEBG1ZZ.c)
 *     ?CreateVirtualGpu@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_CREATEVIRTUALGPU@@EPEAX@Z @ 0x1C0356AD0 (-CreateVirtualGpu@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_CREATEVIRTUALGPU@@EP.c)
 */

__int64 __fastcall DxgkDdiCreateVirtualGpu(ADAPTER_RENDER **a1, int a2, unsigned __int8 a3, _DWORD *a4, __int64 a5)
{
  unsigned __int64 v7; // rdi
  __int64 VirtualGpu; // r15
  unsigned __int64 v9; // r14
  __int64 *v10; // rsi
  unsigned __int64 v11; // r14
  unsigned int *v12; // rsi
  __int64 *v13; // rsi
  int v15; // [rsp+28h] [rbp-40h]

  v7 = 0LL;
  VirtualGpu = (int)ADAPTER_RENDER::CreateVirtualGpu(a1[350], a2, a4, a3, a5);
  if ( bTracingEnabled )
  {
    v15 = *a4;
    VgpuTrace(1, VirtualGpu, a1, L"DxgkDdiCreateVirtualGpu", (wchar_t *)L"%d", v15);
    DxgkLogInternalTriageEvent(
      (__int64)a1,
      196608,
      *a4,
      (__int64)L"Creating vGPU with VFLUID %1, having %2 segments and %3 engines, returns %4",
      (unsigned int)a4[30] + ((__int64)(int)a4[31] << 32),
      (unsigned int)a4[32],
      (unsigned int)a4[418],
      VirtualGpu,
      0LL);
    v9 = 0LL;
    v10 = (__int64 *)(a4 + 4);
    do
    {
      DxgkLogInternalTriageEvent(
        (__int64)a1,
        196608,
        *a4,
        (__int64)L"vGPU creation requested profile on capability %1 have min %2, max %3, and optimal %4",
        v9++,
        *(v10 - 1),
        *v10,
        v10[1],
        0LL);
      v10 += 3;
    }
    while ( v9 < 4 );
    v11 = 0LL;
    if ( a4[418] )
    {
      v12 = a4 + 419;
      do
      {
        DxgkLogInternalTriageEvent(
          (__int64)a1,
          196608,
          *a4,
          (__int64)L"vGPU creation returns engine %1 with min %2 partition units and max %3 partition units",
          v12[2],
          *v12,
          v12[1],
          0LL,
          0LL);
        v12 += 3;
        ++v11;
      }
      while ( v11 < (unsigned int)a4[418] );
    }
    if ( a4[32] )
    {
      v13 = (__int64 *)(a4 + 40);
      do
      {
        DxgkLogInternalTriageEvent(
          (__int64)a1,
          196608,
          *a4,
          (__int64)L"vGPU creation requests framebuffer on segment %1 with size %2, alignment %3, from offset %4 to %5",
          *((unsigned int *)v13 - 6),
          *(v13 - 2),
          *((unsigned int *)v13 - 2),
          *v13,
          v13[1]);
        v13 += 6;
        ++v7;
      }
      while ( v7 < (unsigned int)a4[32] );
    }
  }
  return (unsigned int)VirtualGpu;
}
