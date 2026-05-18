/*
 * XREFs of ?SetMemoryTrackingData@RendererResource@Engine@Spectre@@IEAAX_KW4Category@PerformanceManager@23@@Z @ 0x180029730
 * Callers:
 *     ?UpdateCpuCache@ArrayBuffer@Engine@Spectre@@AEAAXPEBXIIW4Usage@23@W4Format@23@@Z @ 0x180088D78 (-UpdateCpuCache@ArrayBuffer@Engine@Spectre@@AEAAXPEBXIIW4Usage@23@W4Format@23@@Z.c)
 *     ?CreateRendererResources2D@TextureD3D11@D3D11@Engine@Spectre@@IEAAXAEBUTextureDesc@34@AEBUTextureImageSetView@34@@Z @ 0x1800CD218 (-CreateRendererResources2D@TextureD3D11@D3D11@Engine@Spectre@@IEAAXAEBUTextureDesc@34@AEBUTextur.c)
 *     ?CreateRendererResources3D@TextureD3D11@D3D11@Engine@Spectre@@IEAAXIIIIW4Format@34@W4Usage@34@IPEBX_K@Z @ 0x1800CD82C (-CreateRendererResources3D@TextureD3D11@D3D11@Engine@Spectre@@IEAAXIIIIW4Format@34@W4Usage@34@IP.c)
 *     ?CreateInternal@VertexBufferD3D11@D3D11@Engine@Spectre@@MEAAXPEBX@Z @ 0x1800D3710 (-CreateInternal@VertexBufferD3D11@D3D11@Engine@Spectre@@MEAAXPEBX@Z.c)
 *     ?Load@VertexShaderD3D11@D3D11@Engine@Spectre@@UEAA_NAEBVShaderProgram@34@@Z @ 0x1800D46B0 (-Load@VertexShaderD3D11@D3D11@Engine@Spectre@@UEAA_NAEBVShaderProgram@34@@Z.c)
 *     ?Load@PixelShaderD3D11@D3D11@Engine@Spectre@@UEAA_NAEBVShaderProgram@34@@Z @ 0x1800D5540 (-Load@PixelShaderD3D11@D3D11@Engine@Spectre@@UEAA_NAEBVShaderProgram@34@@Z.c)
 *     ?Create@ConstantBufferD3D11@D3D11@Engine@Spectre@@UEAA_NPEBXIW4Usage@34@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z @ 0x1800D7170 (-Create@ConstantBufferD3D11@D3D11@Engine@Spectre@@UEAA_NPEBXIW4Usage@34@AEBV-$basic_string@DU-$c.c)
 *     ?Load@GeometryShaderD3D11@D3D11@Engine@Spectre@@UEAA_NAEBVShaderProgram@34@@Z @ 0x1800D7400 (-Load@GeometryShaderD3D11@D3D11@Engine@Spectre@@UEAA_NAEBVShaderProgram@34@@Z.c)
 *     ?Load@DomainShaderD3D11@D3D11@Engine@Spectre@@UEAA_NAEBVShaderProgram@34@@Z @ 0x1800D76A0 (-Load@DomainShaderD3D11@D3D11@Engine@Spectre@@UEAA_NAEBVShaderProgram@34@@Z.c)
 *     ?Load@HullShaderD3D11@D3D11@Engine@Spectre@@UEAA_NAEBVShaderProgram@34@@Z @ 0x1800D7950 (-Load@HullShaderD3D11@D3D11@Engine@Spectre@@UEAA_NAEBVShaderProgram@34@@Z.c)
 *     ?CreateInternal@IndexBufferD3D11@D3D11@Engine@Spectre@@MEAAXPEBX@Z @ 0x1800D83D0 (-CreateInternal@IndexBufferD3D11@D3D11@Engine@Spectre@@MEAAXPEBX@Z.c)
 * Callees:
 *     ??0MemoryBlock@PerformanceManager@Engine@Spectre@@QEAA@W4Category@123@_J@Z @ 0x180029158 (--0MemoryBlock@PerformanceManager@Engine@Spectre@@QEAA@W4Category@123@_J@Z.c)
 *     ??1MemoryBlock@PerformanceManager@Engine@Spectre@@QEAA@XZ @ 0x1800292BC (--1MemoryBlock@PerformanceManager@Engine@Spectre@@QEAA@XZ.c)
 *     ?IncrementCounter@PerformanceManager@Engine@Spectre@@QEAAXW4Category@123@W4Property@123@_J@Z @ 0x180070AF0 (-IncrementCounter@PerformanceManager@Engine@Spectre@@QEAAXW4Category@123@W4Property@123@_J@Z.c)
 *     ?Instance@PerformanceManager@Engine@Spectre@@SAAEAV123@XZ @ 0x180070B14 (-Instance@PerformanceManager@Engine@Spectre@@SAAEAV123@XZ.c)
 */

void __fastcall Spectre::Engine::RendererResource::SetMemoryTrackingData(__int64 a1, __int64 a2, int a3)
{
  int v3; // eax
  struct Spectre::Engine::PerformanceManager *v5; // rax
  unsigned int *v6; // r11
  __int64 v7; // rdx
  __int64 v8; // r9
  __int64 v9; // r8
  __int64 v10; // r10
  _BYTE v11[24]; // [rsp+20h] [rbp-18h] BYREF

  v3 = a3;
  if ( a3 == 15 )
    v3 = *(_DWORD *)(a1 + 48);
  Spectre::Engine::PerformanceManager::MemoryBlock::MemoryBlock((__int64)v11, v3, a2);
  v5 = Spectre::Engine::PerformanceManager::Instance();
  Spectre::Engine::PerformanceManager::IncrementCounter(v5, *(unsigned int *)(a1 + 56), 2LL, -*(_QWORD *)(a1 + 64));
  v7 = *v6;
  *(_DWORD *)(a1 + 56) = v7;
  v8 = *((_QWORD *)v6 + 1);
  *(_QWORD *)(a1 + 64) = v8;
  Spectre::Engine::PerformanceManager::IncrementCounter(v10, v7, v9, v8);
  Spectre::Engine::PerformanceManager::MemoryBlock::~MemoryBlock((Spectre::Engine::PerformanceManager::MemoryBlock *)v11);
}
