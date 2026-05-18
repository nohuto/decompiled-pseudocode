/*
 * XREFs of ??$make_unique@UDeviceTextureDesc@Engine@Spectre@@V?$unique_ptr@UTextureDesc@Engine@Spectre@@U?$default_delete@UTextureDesc@Engine@Spectre@@@std@@@std@@AEAIH$0A@@std@@YA?AV?$unique_ptr@UDeviceTextureDesc@Engine@Spectre@@U?$default_delete@UDeviceTextureDesc@Engine@Spectre@@@std@@@0@$$QEAV?$unique_ptr@UTextureDesc@Engine@Spectre@@U?$default_delete@UTextureDesc@Engine@Spectre@@@std@@@0@AEAI$$QEAH@Z @ 0x1800CC7AC
 * Callers:
 *     ?CreateRendererResources3D@TextureD3D11@D3D11@Engine@Spectre@@IEAAXIIIIW4Format@34@W4Usage@34@IPEBX_K@Z @ 0x1800CD82C (-CreateRendererResources3D@TextureD3D11@D3D11@Engine@Spectre@@IEAAXIIIIW4Format@34@W4Usage@34@IP.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18001C110 (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall std::make_unique<Spectre::Engine::DeviceTextureDesc,std::unique_ptr<Spectre::Engine::TextureDesc>,unsigned int &,int,0>(
        _QWORD *a1,
        __int64 *a2,
        int *a3,
        int *a4)
{
  _DWORD *v8; // rax
  int v9; // r10d
  int v10; // r9d
  __int64 v11; // r8

  v8 = operator new(0x10uLL);
  if ( v8 )
  {
    v9 = *a4;
    v10 = *a3;
    v11 = *a2;
    *a2 = 0LL;
    *(_QWORD *)v8 = v11;
    v8[2] = v10;
    v8[3] = v9;
  }
  *a1 = v8;
  return a1;
}
