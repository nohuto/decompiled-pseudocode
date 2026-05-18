/*
 * XREFs of ??0DeviceTexture@Engine@Spectre@@QEAA@XZ @ 0x1800551EC
 * Callers:
 *     ??R_lambda_96714d38a6c31817520ed894af71e986_@@QEBA@XZ @ 0x1800529D0 (--R_lambda_96714d38a6c31817520ed894af71e986_@@QEBA@XZ.c)
 *     ??0TextureD3D11@D3D11@Engine@Spectre@@QEAA@XZ @ 0x1800CC99C (--0TextureD3D11@D3D11@Engine@Spectre@@QEAA@XZ.c)
 * Callees:
 *     ??0DeviceBuffer@Engine@Spectre@@QEAA@W4EType@RendererResource@12@W4Category@PerformanceManager@12@@Z @ 0x1800290F8 (--0DeviceBuffer@Engine@Spectre@@QEAA@W4EType@RendererResource@12@W4Category@PerformanceManager@1.c)
 */

Spectre::Engine::DeviceTexture *__fastcall Spectre::Engine::DeviceTexture::DeviceTexture(
        Spectre::Engine::DeviceTexture *this)
{
  Spectre::Engine::DeviceTexture *result; // rax

  Spectre::Engine::DeviceBuffer::DeviceBuffer(this);
  *(_QWORD *)this = &Spectre::Engine::DeviceTexture::`vftable';
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 18) = 15LL;
  *((_BYTE *)this + 120) = 0;
  result = this;
  *((_DWORD *)this + 38) = 0;
  *((_DWORD *)this + 39) = 0;
  return result;
}
