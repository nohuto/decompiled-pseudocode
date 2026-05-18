/*
 * XREFs of Spectre::Engine::GetFormatSlicePitch_0 @ 0x1800CEB78
 * Callers:
 *     ?CreateRendererResources2D@TextureD3D11@D3D11@Engine@Spectre@@IEAAXAEBUTextureDesc@34@AEBUTextureImageSetView@34@@Z @ 0x1800CD218 (-CreateRendererResources2D@TextureD3D11@D3D11@Engine@Spectre@@IEAAXAEBUTextureDesc@34@AEBUTextur.c)
 *     ?CreateRendererResources3D@TextureD3D11@D3D11@Engine@Spectre@@IEAAXIIIIW4Format@34@W4Usage@34@IPEBX_K@Z @ 0x1800CD82C (-CreateRendererResources3D@TextureD3D11@D3D11@Engine@Spectre@@IEAAXIIIIW4Format@34@W4Usage@34@IP.c)
 *     ?GetDeviceBuffer@TextureD3D11@D3D11@Engine@Spectre@@UEBA?AUTextureImageSet@34@XZ @ 0x1800CE110 (-GetDeviceBuffer@TextureD3D11@D3D11@Engine@Spectre@@UEBA-AUTextureImageSet@34@XZ.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     Spectre::Engine::GetFormatRowPitch @ 0x1800566E4 (Spectre--Engine--GetFormatRowPitch.c)
 */

__int64 __fastcall Spectre::Engine::GetFormatSlicePitch_0(unsigned int a1, __int64 a2, int a3, int *a4)
{
  unsigned int v4; // r11d
  __int64 v5; // rsi
  int FormatRowPitch; // r9d
  char *v8; // rdi
  __int64 i; // rcx
  unsigned int v10; // ecx
  _DWORD v12[2]; // [rsp+20h] [rbp-88h]
  char v13; // [rsp+28h] [rbp-80h] BYREF
  int v14; // [rsp+78h] [rbp-30h]
  int v15; // [rsp+7Ch] [rbp-2Ch]
  int v16; // [rsp+80h] [rbp-28h]

  v4 = 0;
  v5 = a1;
  if ( a4 )
    FormatRowPitch = *a4;
  else
    FormatRowPitch = Spectre::Engine::GetFormatRowPitch(a1);
  if ( (_DWORD)v5 == 23 )
  {
    return FormatRowPitch * (a3 + ((unsigned int)(a3 + 1) >> 1));
  }
  else
  {
    v12[0] = v4;
    v12[1] = 1;
    v8 = &v13;
    for ( i = 20LL; i; --i )
    {
      *(_DWORD *)v8 = 1;
      v8 += 4;
    }
    v14 = 4;
    v15 = 1;
    v16 = 1;
    v10 = v12[v5];
    if ( v10 )
      return FormatRowPitch * ((v10 + a3 - 1) / v10);
  }
  return v4;
}
