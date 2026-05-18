/*
 * XREFs of _anonymous_namespace_::ApplyCreationOptions3D @ 0x1800CCFA4
 * Callers:
 *     ?CreateRendererResources3D@TextureD3D11@D3D11@Engine@Spectre@@IEAAXIIIIW4Format@34@W4Usage@34@IPEBX_K@Z @ 0x1800CD82C (-CreateRendererResources3D@TextureD3D11@D3D11@Engine@Spectre@@IEAAXIIIIW4Format@34@W4Usage@34@IP.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _anonymous_namespace_::GetD3DTextureFormat @ 0x1800CE0DC (_anonymous_namespace_--GetD3DTextureFormat.c)
 */

__int64 __fastcall anonymous_namespace_::ApplyCreationOptions3D(
        __int64 a1,
        int a2,
        int a3,
        unsigned int a4,
        int a5,
        unsigned int a6)
{
  int v6; // edi
  _DWORD *v8; // rax
  int v9; // eax
  _DWORD v11[4]; // [rsp+20h] [rbp-28h] BYREF

  v6 = 0;
  *(_DWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_DWORD *)(a1 + 32) = 0;
  *(_DWORD *)a1 = a2;
  *(_DWORD *)(a1 + 4) = a3;
  *(_DWORD *)(a1 + 12) = 1;
  *(_DWORD *)(a1 + 16) = anonymous_namespace_::GetD3DTextureFormat(a4, a6);
  v8 = v11;
  do
    *v8++ = v6++;
  while ( v6 < 4 );
  *(_DWORD *)(a1 + 20) = v11[a5];
  if ( (unsigned int)(a5 - 2) <= 1 )
  {
    v9 = *(_DWORD *)(a1 + 28) | 0x10000;
    *(_DWORD *)(a1 + 28) = v9;
    if ( a5 == 3 )
      *(_DWORD *)(a1 + 28) = v9 | 0x20000;
  }
  if ( (a6 & 1) != 0 )
    *(_DWORD *)(a1 + 24) |= 8u;
  return a1;
}
