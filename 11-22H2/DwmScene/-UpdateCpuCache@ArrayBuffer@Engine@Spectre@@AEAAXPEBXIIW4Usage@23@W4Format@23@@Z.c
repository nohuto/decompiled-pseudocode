/*
 * XREFs of ?UpdateCpuCache@ArrayBuffer@Engine@Spectre@@AEAAXPEBXIIW4Usage@23@W4Format@23@@Z @ 0x180088D78
 * Callers:
 *     ?Create@ArrayBuffer@Engine@Spectre@@QEAAXPEBXIIW4Usage@23@W4Format@23@@Z @ 0x1800889E0 (-Create@ArrayBuffer@Engine@Spectre@@QEAAXPEBXIIW4Usage@23@W4Format@23@@Z.c)
 * Callees:
 *     memcpy_s @ 0x18000FF54 (memcpy_s.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??4?$shared_ptr@VDeviceArrayBuffer@Engine@Spectre@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180011020 (--4-$shared_ptr@VDeviceArrayBuffer@Engine@Spectre@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?SetMemoryTrackingData@RendererResource@Engine@Spectre@@IEAAX_KW4Category@PerformanceManager@23@@Z @ 0x180029730 (-SetMemoryTrackingData@RendererResource@Engine@Spectre@@IEAAX_KW4Category@PerformanceManager@23@.c)
 *     Spectre::Engine::GetFormatPitch @ 0x180048848 (Spectre--Engine--GetFormatPitch.c)
 *     ?clear@?$_Tree@V?$_Tmap_traits@W4RenderDeviceID@Engine@Spectre@@V?$shared_ptr@VDeviceSampler@Engine@Spectre@@@std@@U?$less@W4RenderDeviceID@Engine@Spectre@@@5@V?$allocator@U?$pair@$$CBW4RenderDeviceID@Engine@Spectre@@V?$shared_ptr@VDeviceSampler@Engine@Spectre@@@std@@@std@@@5@$0A@@std@@@std@@QEAAXXZ @ 0x180054C00 (-clear@-$_Tree@V-$_Tmap_traits@W4RenderDeviceID@Engine@Spectre@@V-$shared_ptr@VDeviceSampler@Eng.c)
 *     ??$?4U?$default_delete@UArrayBufferDesc@Engine@Spectre@@@std@@$0A@@?$unique_ptr@UArrayBufferDesc@Engine@Spectre@@U?$default_delete@UArrayBufferDesc@Engine@Spectre@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800885BC (--$-4U-$default_delete@UArrayBufferDesc@Engine@Spectre@@@std@@$0A@@-$unique_ptr@UArrayBufferDesc.c)
 *     ??$MakeAlignedSharedBuffer@X@Engine@Spectre@@YA?AV?$shared_ptr@X@std@@_KPEBX0@Z @ 0x1800885F4 (--$MakeAlignedSharedBuffer@X@Engine@Spectre@@YA-AV-$shared_ptr@X@std@@_KPEBX0@Z.c)
 *     ??1?$unique_ptr@UArrayBufferDesc@Engine@Spectre@@U?$default_delete@UArrayBufferDesc@Engine@Spectre@@@std@@@std@@QEAA@XZ @ 0x18008883C (--1-$unique_ptr@UArrayBufferDesc@Engine@Spectre@@U-$default_delete@UArrayBufferDesc@Engine@Spect.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Spectre::Engine::ArrayBuffer::UpdateCpuCache(
        __int64 *a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        int a5,
        int a6)
{
  __int64 v6; // rax
  unsigned int v9; // ebp
  int v10; // esi
  unsigned int v11; // ebx
  const void *v12; // r10
  size_t v13; // r11
  void *v14; // rcx
  __int64 v15; // r12
  __int64 *AlignedShared; // rax
  __int64 *v17; // rax
  void *v19; // [rsp+40h] [rbp-38h] BYREF
  std::_Ref_count_base *v20; // [rsp+48h] [rbp-30h]
  __int64 v21; // [rsp+80h] [rbp+8h] BYREF

  v6 = a1[14];
  if ( v6 )
    v9 = *(_DWORD *)(v6 + 16);
  else
    v9 = 0;
  v10 = a6;
  if ( a6 == 23 || a6 == 24 )
    v11 = ((a3 + 1) & 0xFFFFFFFE) * Spectre::Engine::GetFormatPitch(a6);
  else
    v11 = a3 * Spectre::Engine::GetFormatPitch(a6);
  v14 = (void *)a1[17];
  if ( v14 )
  {
    if ( v14 == v12 )
      goto LABEL_15;
    if ( (unsigned int)v13 <= v9 )
    {
      memcpy_s(v14, v9, v12, v11);
      std::_Tree<std::_Tmap_traits<enum Spectre::Engine::RenderDeviceID,std::shared_ptr<Spectre::Engine::DeviceSampler>,std::less<enum Spectre::Engine::RenderDeviceID>,std::allocator<std::pair<enum Spectre::Engine::RenderDeviceID const,std::shared_ptr<Spectre::Engine::DeviceSampler>>>,0>>::clear(a1 + 15);
      goto LABEL_15;
    }
  }
  v9 = v13;
  v15 = v13;
  AlignedShared = (__int64 *)Spectre::Engine::MakeAlignedSharedBuffer<void>(&v19, v13, v12, v11);
  std::shared_ptr<Spectre::Engine::DeviceArrayBuffer>::operator=(a1 + 17, AlignedShared);
  if ( v20 )
    std::_Ref_count_base::_Decref(v20);
  Spectre::Engine::RendererResource::SetMemoryTrackingData((__int64)a1, v15, 15);
LABEL_15:
  v17 = (__int64 *)(*(__int64 (__fastcall **)(__int64 *, __int64 *, _QWORD, _QWORD, unsigned int, int, int))(*a1 + 48))(
                     a1,
                     &v21,
                     a3,
                     v11,
                     v9,
                     a5,
                     v10);
  std::unique_ptr<Spectre::Engine::ArrayBufferDesc>::operator=<std::default_delete<Spectre::Engine::ArrayBufferDesc>,0>(
    a1 + 14,
    v17);
  std::unique_ptr<Spectre::Engine::ArrayBufferDesc>::~unique_ptr<Spectre::Engine::ArrayBufferDesc>(&v21);
  return (*(__int64 (__fastcall **)(__int64 *))(*a1 + 40))(a1);
}
