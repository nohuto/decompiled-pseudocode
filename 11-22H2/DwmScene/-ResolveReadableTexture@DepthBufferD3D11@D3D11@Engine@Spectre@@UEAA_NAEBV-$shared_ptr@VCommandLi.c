/*
 * XREFs of ?ResolveReadableTexture@DepthBufferD3D11@D3D11@Engine@Spectre@@UEAA_NAEBV?$shared_ptr@VCommandList@Engine@Spectre@@@std@@W4ShaderAccessMode@DeviceDepthBuffer@34@@Z @ 0x1800D6F10
 * Callers:
 *     <none>
 * Callees:
 *     ??$?8VScene@Engine@Spectre@@@std@@YA_NAEBV?$shared_ptr@VScene@Engine@Spectre@@@0@$$T@Z @ 0x180011DD0 (--$-8VScene@Engine@Spectre@@@std@@YA_NAEBV-$shared_ptr@VScene@Engine@Spectre@@@0@$$T@Z.c)
 *     ??$?9VScene@Engine@Spectre@@@std@@YA_NAEBV?$shared_ptr@VScene@Engine@Spectre@@@0@$$T@Z @ 0x180011DE0 (--$-9VScene@Engine@Spectre@@@std@@YA_NAEBV-$shared_ptr@VScene@Engine@Spectre@@@0@$$T@Z.c)
 *     ?CopyTexture@CommandList@Engine@Spectre@@QEAAXAEBV?$shared_ptr@VTexture@Engine@Spectre@@@std@@0@Z @ 0x18003914C (-CopyTexture@CommandList@Engine@Spectre@@QEAAXAEBV-$shared_ptr@VTexture@Engine@Spectre@@@std@@0@.c)
 */

bool __fastcall Spectre::Engine::D3D11::DepthBufferD3D11::ResolveReadableTexture(_QWORD *a1, _QWORD ***a2, int a3)
{
  int v4; // r8d
  int v5; // r8d
  __int64 v6; // rcx
  __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // r8
  _QWORD **v10; // rcx
  _QWORD *v12; // rsi
  _QWORD ***v13; // rdx
  __int64 v14; // r9
  __int64 v15; // rdi

  v4 = a3 - 1;
  if ( !v4 )
  {
    v12 = a1 + 18;
    if ( !std::operator==<Spectre::Engine::Scene>(a1 + 18) )
    {
      v10 = *v13;
      if ( *(_BYTE *)(v14 + 256) )
      {
        v15 = v14 + 160;
        Spectre::Engine::CommandList::CopyTexture(v10, v14 + 160, v14 + 128);
        v10 = *a2;
      }
      else
      {
        v15 = v14 + 128;
      }
      v9 = v15;
      v8 = (__int64)v12;
      goto LABEL_13;
    }
    return 0;
  }
  v5 = v4 - 1;
  if ( !v5 )
    return std::operator!=<Spectre::Engine::Scene>(a1 + 22);
  if ( v5 != 1 || std::operator==<Spectre::Engine::Scene>(a1 + 24) )
    return 0;
  v8 = v6;
  v9 = v7 + 128;
  v10 = *a2;
LABEL_13:
  Spectre::Engine::CommandList::CopyTexture(v10, v8, v9);
  return 1;
}
