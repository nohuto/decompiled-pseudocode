/*
 * XREFs of ?CheckQuery@MarkerQueryData@GpuProfilerFrame@Engine@Spectre@@AEAAXAEAVRenderDeviceQuery@34@AEA_K@Z @ 0x1800A2C50
 * Callers:
 *     ?CheckResult@MarkerQueryData@GpuProfilerFrame@Engine@Spectre@@AEAAXXZ @ 0x1800A2CE8 (-CheckResult@MarkerQueryData@GpuProfilerFrame@Engine@Spectre@@AEAAXXZ.c)
 * Callees:
 *     ??0RenderDeviceQuery@Engine@Spectre@@QEAA@XZ @ 0x1800A1B5C (--0RenderDeviceQuery@Engine@Spectre@@QEAA@XZ.c)
 *     ??1RenderDeviceQuery@Engine@Spectre@@QEAA@XZ @ 0x1800A1BD8 (--1RenderDeviceQuery@Engine@Spectre@@QEAA@XZ.c)
 *     ??4RenderDeviceQuery@Engine@Spectre@@QEAAAEAV012@$$QEAV012@@Z @ 0x1800A1C34 (--4RenderDeviceQuery@Engine@Spectre@@QEAAAEAV012@$$QEAV012@@Z.c)
 *     ??BRenderDeviceQuery@Engine@Spectre@@QEBA_NXZ @ 0x1800A1D74 (--BRenderDeviceQuery@Engine@Spectre@@QEBA_NXZ.c)
 *     ?GetData@RenderDeviceQuery@Engine@Spectre@@QEBA?AUGetDataResult@GpuQuery@23@W4FlushOption@523@@Z @ 0x1800A1EF8 (-GetData@RenderDeviceQuery@Engine@Spectre@@QEBA-AUGetDataResult@GpuQuery@23@W4FlushOption@523@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Spectre::Engine::GpuProfilerFrame::MarkerQueryData::CheckQuery(
        Spectre::Engine::GpuProfilerFrame::MarkerQueryData *this,
        struct Spectre::Engine::RenderDeviceQuery *a2,
        unsigned __int64 *a3)
{
  int v5; // [rsp+20h] [rbp-D8h] BYREF
  unsigned __int64 v6; // [rsp+28h] [rbp-D0h]
  std::_Ref_count_base *v7[24]; // [rsp+38h] [rbp-C0h] BYREF

  if ( Spectre::Engine::RenderDeviceQuery::operator bool() )
  {
    Spectre::Engine::RenderDeviceQuery::GetData((__int64)a2, (__int64)&v5);
    if ( v5 == 2 )
    {
      *a3 = v6;
      Spectre::Engine::RenderDeviceQuery::RenderDeviceQuery((Spectre::Engine::RenderDeviceQuery *)v7);
      Spectre::Engine::RenderDeviceQuery::operator=((__int64)a2, (__int64 *)v7);
    }
    else
    {
      if ( v5 != 5 )
        return;
      Spectre::Engine::RenderDeviceQuery::RenderDeviceQuery((Spectre::Engine::RenderDeviceQuery *)v7);
      Spectre::Engine::RenderDeviceQuery::operator=((__int64)a2, (__int64 *)v7);
    }
    Spectre::Engine::RenderDeviceQuery::~RenderDeviceQuery(v7);
  }
}
