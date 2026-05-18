/*
 * XREFs of ??R?$default_delete@UArrayBufferDesc@Engine@Spectre@@@std@@QEBAXPEAUArrayBufferDesc@Engine@Spectre@@@Z @ 0x1800888B4
 * Callers:
 *     ??$?4U?$default_delete@UArrayBufferDesc@Engine@Spectre@@@std@@$0A@@?$unique_ptr@UArrayBufferDesc@Engine@Spectre@@U?$default_delete@UArrayBufferDesc@Engine@Spectre@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800885BC (--$-4U-$default_delete@UArrayBufferDesc@Engine@Spectre@@@std@@$0A@@-$unique_ptr@UArrayBufferDesc.c)
 *     ??1?$unique_ptr@UArrayBufferDesc@Engine@Spectre@@U?$default_delete@UArrayBufferDesc@Engine@Spectre@@@std@@@std@@QEAA@XZ @ 0x18008883C (--1-$unique_ptr@UArrayBufferDesc@Engine@Spectre@@U-$default_delete@UArrayBufferDesc@Engine@Spect.c)
 *     ??$?4UVertexBufferDesc@DeviceVertexBuffer@Engine@Spectre@@U?$default_delete@UVertexBufferDesc@DeviceVertexBuffer@Engine@Spectre@@@std@@$0A@@?$unique_ptr@UArrayBufferDesc@Engine@Spectre@@U?$default_delete@UArrayBufferDesc@Engine@Spectre@@@std@@@std@@QEAAAEAV01@$$QEAV?$unique_ptr@UVertexBufferDesc@DeviceVertexBuffer@Engine@Spectre@@U?$default_delete@UVertexBufferDesc@DeviceVertexBuffer@Engine@Spectre@@@std@@@1@@Z @ 0x180089004 (--$-4UVertexBufferDesc@DeviceVertexBuffer@Engine@Spectre@@U-$default_delete@UVertexBufferDesc@De.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall std::default_delete<Spectre::Engine::ArrayBufferDesc>::operator()(
        __int64 a1,
        __int64 (__fastcall ***a2)(_QWORD, __int64))
{
  __int64 result; // rax

  if ( a2 )
    return (**a2)(a2, 1LL);
  return result;
}
