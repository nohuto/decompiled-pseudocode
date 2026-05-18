/*
 * XREFs of ??1?$unique_ptr@UArrayBufferDesc@Engine@Spectre@@U?$default_delete@UArrayBufferDesc@Engine@Spectre@@@std@@@std@@QEAA@XZ @ 0x18008883C
 * Callers:
 *     ??1ArrayBuffer@Engine@Spectre@@UEAA@XZ @ 0x18008885C (--1ArrayBuffer@Engine@Spectre@@UEAA@XZ.c)
 *     ?UpdateCpuCache@ArrayBuffer@Engine@Spectre@@AEAAXPEBXIIW4Usage@23@W4Format@23@@Z @ 0x180088D78 (-UpdateCpuCache@ArrayBuffer@Engine@Spectre@@AEAAXPEBXIIW4Usage@23@W4Format@23@@Z.c)
 *     ??1DeviceArrayBuffer@Engine@Spectre@@UEAA@XZ @ 0x18008B3C8 (--1DeviceArrayBuffer@Engine@Spectre@@UEAA@XZ.c)
 *     ?Create@DeviceArrayBuffer@Engine@Spectre@@QEAAXPEBXIIW4Usage@23@W4Format@23@@Z @ 0x18008B3F8 (-Create@DeviceArrayBuffer@Engine@Spectre@@QEAAXPEBXIIW4Usage@23@W4Format@23@@Z.c)
 *     _Spectre::Engine::ArrayBuffer::ArrayBuffer_::_1_::dtor$2 @ 0x1800EA5D4 (_Spectre--Engine--ArrayBuffer--ArrayBuffer_--_1_--dtor$2.c)
 * Callees:
 *     ??R?$default_delete@UArrayBufferDesc@Engine@Spectre@@@std@@QEBAXPEAUArrayBufferDesc@Engine@Spectre@@@Z @ 0x1800888B4 (--R-$default_delete@UArrayBufferDesc@Engine@Spectre@@@std@@QEBAXPEAUArrayBufferDesc@Engine@Spect.c)
 */

__int64 __fastcall std::unique_ptr<Spectre::Engine::ArrayBufferDesc>::~unique_ptr<Spectre::Engine::ArrayBufferDesc>(
        _QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return std::default_delete<Spectre::Engine::ArrayBufferDesc>::operator()();
  return result;
}
