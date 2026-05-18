/*
 * XREFs of ??$make_unique@UDeviceTextureDesc@Engine@Spectre@@AEBUTextureDesc@23@AEAIAEAI$0A@@std@@YA?AV?$unique_ptr@UDeviceTextureDesc@Engine@Spectre@@U?$default_delete@UDeviceTextureDesc@Engine@Spectre@@@std@@@0@AEBUTextureDesc@Engine@Spectre@@AEAI1@Z @ 0x1800CC734
 * Callers:
 *     ?CreateRendererResources2D@TextureD3D11@D3D11@Engine@Spectre@@IEAAXAEBUTextureDesc@34@AEBUTextureImageSetView@34@@Z @ 0x1800CD218 (-CreateRendererResources2D@TextureD3D11@D3D11@Engine@Spectre@@IEAAXAEBUTextureDesc@34@AEBUTextur.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18001C110 (--2@YAPEAX_K@Z.c)
 *     ??$make_unique@UTextureDesc@Engine@Spectre@@AEBU123@$0A@@std@@YA?AV?$unique_ptr@UTextureDesc@Engine@Spectre@@U?$default_delete@UTextureDesc@Engine@Spectre@@@std@@@0@AEBUTextureDesc@Engine@Spectre@@@Z @ 0x180055108 (--$make_unique@UTextureDesc@Engine@Spectre@@AEBU123@$0A@@std@@YA-AV-$unique_ptr@UTextureDesc@Eng.c)
 */

_QWORD *__fastcall std::make_unique<Spectre::Engine::DeviceTextureDesc,Spectre::Engine::TextureDesc const &,unsigned int &,unsigned int &,0>(
        _QWORD *a1,
        __int64 a2,
        int *a3,
        int *a4)
{
  _QWORD *v8; // rax
  _QWORD *v9; // rsi
  int v10; // edi
  int v11; // ebx
  _QWORD *result; // rax

  v8 = operator new(0x10uLL);
  v9 = v8;
  if ( v8 )
  {
    v10 = *a4;
    v11 = *a3;
    std::make_unique<Spectre::Engine::TextureDesc,Spectre::Engine::TextureDesc const &,0>(v8, a2);
    *((_DWORD *)v9 + 2) = v11;
    *((_DWORD *)v9 + 3) = v10;
  }
  else
  {
    v9 = 0LL;
  }
  result = a1;
  *a1 = v9;
  return result;
}
