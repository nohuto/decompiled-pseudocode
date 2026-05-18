/*
 * XREFs of Spectre::Engine::GetFormatSlicePitch @ 0x180056720
 * Callers:
 *     ?Create@Texture@Engine@Spectre@@QEAAXIIIW4Format@23@W4Usage@23@IPEBXIPEAVRenderDevice@23@@Z @ 0x180055E20 (-Create@Texture@Engine@Spectre@@QEAAXIIIW4Format@23@W4Usage@23@IPEBXIPEAVRenderDevice@23@@Z.c)
 *     ?CreateDefaultImageDescriptors@Engine@Spectre@@YA?AV?$vector@UTextureImageDesc@Engine@Spectre@@V?$allocator@UTextureImageDesc@Engine@Spectre@@@std@@@std@@AEBUTextureDesc@12@_K@Z @ 0x180056230 (-CreateDefaultImageDescriptors@Engine@Spectre@@YA-AV-$vector@UTextureImageDesc@Engine@Spectre@@V.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     Spectre::Engine::GetFormatRowPitch @ 0x1800566E4 (Spectre--Engine--GetFormatRowPitch.c)
 */

__int64 __fastcall Spectre::Engine::GetFormatSlicePitch(unsigned int a1)
{
  __int64 v1; // rbx
  int FormatRowPitch; // eax
  int v3; // r11d
  unsigned int v4; // edx
  char *v5; // rdi
  __int64 i; // rcx
  unsigned int v7; // ecx
  unsigned int v8; // edx
  _DWORD v10[2]; // [rsp+20h] [rbp-88h]
  char v11; // [rsp+28h] [rbp-80h] BYREF
  int v12; // [rsp+78h] [rbp-30h]
  int v13; // [rsp+7Ch] [rbp-2Ch]
  int v14; // [rsp+80h] [rbp-28h]

  v1 = a1;
  FormatRowPitch = Spectre::Engine::GetFormatRowPitch(a1);
  v4 = 0;
  if ( (_DWORD)v1 == 23 )
  {
    v8 = v3 + ((unsigned int)(v3 + 1) >> 1);
    return FormatRowPitch * v8;
  }
  v10[0] = 0;
  v10[1] = 1;
  v5 = &v11;
  for ( i = 20LL; i; --i )
  {
    *(_DWORD *)v5 = 1;
    v5 += 4;
  }
  v12 = 4;
  v13 = 1;
  v14 = 1;
  v7 = v10[v1];
  if ( v7 )
  {
    v8 = (v7 + v3 - 1) / v7;
    return FormatRowPitch * v8;
  }
  return v4;
}
