/*
 * XREFs of ?Create@DeviceArrayBuffer@Engine@Spectre@@QEAAXPEBXIIW4Usage@23@W4Format@23@@Z @ 0x18008B3F8
 * Callers:
 *     ?CreateDeviceBufferHelper@ArrayBuffer@Engine@Spectre@@AEAAXAEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z @ 0x180088A38 (-CreateDeviceBufferHelper@ArrayBuffer@Engine@Spectre@@AEAAXAEBV-$shared_ptr@VRenderDevice@Engine.c)
 * Callees:
 *     ??$?4U?$default_delete@UArrayBufferDesc@Engine@Spectre@@@std@@$0A@@?$unique_ptr@UArrayBufferDesc@Engine@Spectre@@U?$default_delete@UArrayBufferDesc@Engine@Spectre@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800885BC (--$-4U-$default_delete@UArrayBufferDesc@Engine@Spectre@@@std@@$0A@@-$unique_ptr@UArrayBufferDesc.c)
 *     ??1?$unique_ptr@UArrayBufferDesc@Engine@Spectre@@U?$default_delete@UArrayBufferDesc@Engine@Spectre@@@std@@@std@@QEAA@XZ @ 0x18008883C (--1-$unique_ptr@UArrayBufferDesc@Engine@Spectre@@U-$default_delete@UArrayBufferDesc@Engine@Spect.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Spectre::Engine::DeviceArrayBuffer::Create(__int64 *a1, __int64 a2)
{
  __int64 *v4; // rax
  __int64 v6; // [rsp+50h] [rbp+8h] BYREF

  v4 = (__int64 *)(*(__int64 (__fastcall **)(__int64 *, __int64 *))(*a1 + 48))(a1, &v6);
  std::unique_ptr<Spectre::Engine::ArrayBufferDesc>::operator=<std::default_delete<Spectre::Engine::ArrayBufferDesc>,0>(
    a1 + 12,
    v4);
  std::unique_ptr<Spectre::Engine::ArrayBufferDesc>::~unique_ptr<Spectre::Engine::ArrayBufferDesc>(&v6);
  return (*(__int64 (__fastcall **)(__int64 *, __int64))(*a1 + 56))(a1, a2);
}
