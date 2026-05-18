/*
 * XREFs of ??$dynamic_pointer_cast@VRenderDeviceD3D11@D3D11@Engine@Spectre@@VRenderDevice@34@@std@@YA?AV?$shared_ptr@VRenderDeviceD3D11@D3D11@Engine@Spectre@@@0@$$QEAV?$shared_ptr@VRenderDevice@Engine@Spectre@@@0@@Z @ 0x1800CF74C
 * Callers:
 *     ?FinalizeSubmit@CommandListD3D11@D3D11@Engine@Spectre@@MEAAXAEBV?$shared_ptr@VCommandList@Engine@Spectre@@@std@@@Z @ 0x1800D01E0 (-FinalizeSubmit@CommandListD3D11@D3D11@Engine@Spectre@@MEAAXAEBV-$shared_ptr@VCommandList@Engine.c)
 *     ?Internal_WaitForOperationHelper@CommandListD3D11@D3D11@Engine@Spectre@@AEAAXXZ @ 0x1800D0624 (-Internal_WaitForOperationHelper@CommandListD3D11@D3D11@Engine@Spectre@@AEAAXXZ.c)
 *     ?SubmitReadTexture@CommandListD3D11@D3D11@Engine@Spectre@@MEAA_NAEBV?$shared_ptr@VTexture@Engine@Spectre@@@std@@PEAXI@Z @ 0x1800D1170 (-SubmitReadTexture@CommandListD3D11@D3D11@Engine@Spectre@@MEAA_NAEBV-$shared_ptr@VTexture@Engine.c)
 *     ?SubmitUpdateTexture2D@CommandListD3D11@D3D11@Engine@Spectre@@MEAA_NAEBV?$shared_ptr@VTexture@Engine@Spectre@@@std@@IIIIPEBXIIII@Z @ 0x1800D2A20 (-SubmitUpdateTexture2D@CommandListD3D11@D3D11@Engine@Spectre@@MEAA_NAEBV-$shared_ptr@VTexture@En.c)
 *     ?SubmitUpdateTexture@CommandListD3D11@D3D11@Engine@Spectre@@MEAA_NAEBV?$shared_ptr@VTexture@Engine@Spectre@@@std@@PEBXI@Z @ 0x1800D2F50 (-SubmitUpdateTexture@CommandListD3D11@D3D11@Engine@Spectre@@MEAA_NAEBV-$shared_ptr@VTexture@Engi.c)
 *     ?UpdateBuffer@CommandListD3D11@D3D11@Engine@Spectre@@AEAAXPEAUID3D11Buffer@@PEBXI@Z @ 0x1800D3560 (-UpdateBuffer@CommandListD3D11@D3D11@Engine@Spectre@@AEAAXPEAUID3D11Buffer@@PEBXI@Z.c)
 *     ?GetData@GpuQueryD3D11@D3D11@Engine@Spectre@@UEBA?AUGetDataResult@GpuQuery@34@W4FlushOption@634@@Z @ 0x1800D7F10 (-GetData@GpuQueryD3D11@D3D11@Engine@Spectre@@UEBA-AUGetDataResult@GpuQuery@34@W4FlushOption@634@.c)
 *     ?GetStatistics@GpuQueryD3D11@D3D11@Engine@Spectre@@UEBA?AUGetStatisticsResult@GpuQuery@34@W4FlushOption@634@@Z @ 0x1800D8130 (-GetStatistics@GpuQueryD3D11@D3D11@Engine@Spectre@@UEBA-AUGetStatisticsResult@GpuQuery@34@W4Flus.c)
 * Callees:
 *     __RTDynamicCast_0 @ 0x1800E38E0 (__RTDynamicCast_0.c)
 */

__int64 *__fastcall std::dynamic_pointer_cast<Spectre::Engine::D3D11::RenderDeviceD3D11,Spectre::Engine::RenderDevice>(
        __int64 *a1,
        _QWORD *a2)
{
  __int64 v4; // rax

  v4 = _RTDynamicCast_0(
         *a2,
         0LL,
         &Spectre::Engine::RenderDevice `RTTI Type Descriptor',
         &Spectre::Engine::D3D11::RenderDeviceD3D11 `RTTI Type Descriptor',
         0);
  if ( v4 )
  {
    *a1 = v4;
    a1[1] = a2[1];
    *a2 = 0LL;
    a2[1] = 0LL;
  }
  else
  {
    *a1 = 0LL;
    a1[1] = 0LL;
  }
  return a1;
}
