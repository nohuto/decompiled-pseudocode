/*
 * XREFs of ??$?4U?$default_delete@UArrayBufferDesc@Engine@Spectre@@@std@@$0A@@?$unique_ptr@UArrayBufferDesc@Engine@Spectre@@U?$default_delete@UArrayBufferDesc@Engine@Spectre@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800885BC
 * Callers:
 *     ?UpdateCpuCache@ArrayBuffer@Engine@Spectre@@AEAAXPEBXIIW4Usage@23@W4Format@23@@Z @ 0x180088D78 (-UpdateCpuCache@ArrayBuffer@Engine@Spectre@@AEAAXPEBXIIW4Usage@23@W4Format@23@@Z.c)
 *     ?Create@DeviceArrayBuffer@Engine@Spectre@@QEAAXPEBXIIW4Usage@23@W4Format@23@@Z @ 0x18008B3F8 (-Create@DeviceArrayBuffer@Engine@Spectre@@QEAAXPEBXIIW4Usage@23@W4Format@23@@Z.c)
 * Callees:
 *     ??R?$default_delete@UArrayBufferDesc@Engine@Spectre@@@std@@QEBAXPEAUArrayBufferDesc@Engine@Spectre@@@Z @ 0x1800888B4 (--R-$default_delete@UArrayBufferDesc@Engine@Spectre@@@std@@QEBAXPEAUArrayBufferDesc@Engine@Spect.c)
 */

__int64 *__fastcall std::unique_ptr<Spectre::Engine::ArrayBufferDesc>::operator=<std::default_delete<Spectre::Engine::ArrayBufferDesc>,0>(
        __int64 *a1,
        __int64 *a2)
{
  __int64 v3; // rax
  __int64 v4; // rdx

  if ( a1 != a2 )
  {
    v3 = *a2;
    *a2 = 0LL;
    v4 = *a1;
    *a1 = v3;
    if ( v4 )
      std::default_delete<Spectre::Engine::ArrayBufferDesc>::operator()();
  }
  return a1;
}
