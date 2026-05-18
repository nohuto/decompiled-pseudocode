/*
 * XREFs of ?GetReadableTexture@DepthBufferD3D11@D3D11@Engine@Spectre@@UEBA?AV?$shared_ptr@VDeviceTexture@Engine@Spectre@@@std@@W4ShaderAccessMode@DeviceDepthBuffer@34@@Z @ 0x1800D6D60
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?GetDeviceTexture@Texture@Engine@Spectre@@QEBA?AV?$shared_ptr@VDeviceTexture@Engine@Spectre@@@std@@W4RenderDeviceID@23@@Z @ 0x180056670 (-GetDeviceTexture@Texture@Engine@Spectre@@QEBA-AV-$shared_ptr@VDeviceTexture@Engine@Spectre@@@st.c)
 */

_QWORD *__fastcall Spectre::Engine::D3D11::DepthBufferD3D11::GetReadableTexture(__int64 a1, _QWORD *a2, int a3)
{
  int v4; // r8d
  int v5; // r8d
  __int64 *DeviceTexture; // rcx
  char v7; // di
  __int64 v8; // rax
  bool v9; // zf
  __int64 *v10; // rcx
  char v11; // di
  __int64 v12; // rax
  __int64 *v13; // rcx
  char v14; // di
  __int64 v15; // rax
  char v17; // [rsp+20h] [rbp-20h] BYREF
  std::_Ref_count_base *v18; // [rsp+28h] [rbp-18h]
  __int64 v19; // [rsp+30h] [rbp-10h] BYREF
  std::_Ref_count_base *v20; // [rsp+38h] [rbp-8h]

  v4 = a3 - 1;
  if ( v4 )
  {
    v5 = v4 - 1;
    if ( v5 )
    {
      if ( v5 != 1 )
      {
        *a2 = 0LL;
        a2[1] = 0LL;
        return a2;
      }
      if ( *(_QWORD *)(a1 + 192) )
      {
        DeviceTexture = Spectre::Engine::Texture::GetDeviceTexture(*(_QWORD *)(a1 + 192), &v19, *(_DWORD *)(a1 + 88));
        v7 = 4;
        v8 = *DeviceTexture;
      }
      else
      {
        v18 = 0LL;
        DeviceTexture = (__int64 *)&v17;
        v8 = 0LL;
        v7 = 8;
      }
      *a2 = v8;
      a2[1] = DeviceTexture[1];
      *DeviceTexture = 0LL;
      DeviceTexture[1] = 0LL;
      if ( (v7 & 8) != 0 )
      {
        v7 &= ~8u;
        if ( v18 )
          std::_Ref_count_base::_Decref(v18);
      }
      v9 = (v7 & 4) == 0;
    }
    else
    {
      if ( *(_QWORD *)(a1 + 176) )
      {
        v10 = Spectre::Engine::Texture::GetDeviceTexture(*(_QWORD *)(a1 + 176), &v19, *(_DWORD *)(a1 + 88));
        v11 = 16;
        v12 = *v10;
      }
      else
      {
        v18 = 0LL;
        v10 = (__int64 *)&v17;
        v12 = 0LL;
        v11 = 32;
      }
      *a2 = v12;
      a2[1] = v10[1];
      *v10 = 0LL;
      v10[1] = 0LL;
      if ( (v11 & 0x20) != 0 )
      {
        v11 &= ~0x20u;
        if ( v18 )
          std::_Ref_count_base::_Decref(v18);
      }
      v9 = (v11 & 0x10) == 0;
    }
  }
  else
  {
    if ( *(_QWORD *)(a1 + 144) )
    {
      v13 = Spectre::Engine::Texture::GetDeviceTexture(*(_QWORD *)(a1 + 144), &v19, *(_DWORD *)(a1 + 88));
      v14 = 1;
      v15 = *v13;
    }
    else
    {
      v18 = 0LL;
      v13 = (__int64 *)&v17;
      v15 = 0LL;
      v14 = 2;
    }
    *a2 = v15;
    a2[1] = v13[1];
    *v13 = 0LL;
    v13[1] = 0LL;
    if ( (v14 & 2) != 0 )
    {
      v14 &= ~2u;
      if ( v18 )
        std::_Ref_count_base::_Decref(v18);
    }
    v9 = (v14 & 1) == 0;
  }
  if ( !v9 && v20 )
    std::_Ref_count_base::_Decref(v20);
  return a2;
}
