/*
 * XREFs of ?Initialize@CD3DPixelShader@@IEAAJPEAVCD3DResourceManager@@IPEAUID3D11PixelShader@@@Z @ 0x18003B5C4
 * Callers:
 *     ?Create@CD3DPixelShader@@SAJPEAVCD3DDevice@@PEBX_KPEAPEAV1@@Z @ 0x18003B49C (-Create@CD3DPixelShader@@SAJPEAVCD3DDevice@@PEBX_KPEAPEAV1@@Z.c)
 * Callees:
 *     ??$SetInterface@UID3D11PixelShader@@U1@@@YAXAEAPEAUID3D11PixelShader@@PEAU0@@Z @ 0x18003B670 (--$SetInterface@UID3D11PixelShader@@U1@@@YAXAEAPEAUID3D11PixelShader@@PEAU0@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?AddHwProtectedResource@CD2DContext@@IEAAXXZ @ 0x180277788 (-AddHwProtectedResource@CD2DContext@@IEAAXXZ.c)
 */

__int64 __fastcall CD3DPixelShader::Initialize(
        CD3DPixelShader *this,
        struct CD3DResourceManager *a2,
        int a3,
        struct ID3D11PixelShader *a4)
{
  char *v4; // rax
  char **v7; // rdx
  char *v8; // rcx
  unsigned int v10; // eax

  *((_DWORD *)this + 16) = a3;
  v4 = (char *)a2 + 32;
  *((_BYTE *)this + 70) = 1;
  *((_QWORD *)this + 3) = a2;
  v7 = (char **)*((_QWORD *)a2 + 5);
  v8 = (char *)this + 32;
  if ( *v7 != v4 )
    __fastfail(3u);
  *(_QWORD *)v8 = v4;
  *((_QWORD *)v8 + 1) = v7;
  *v7 = v8;
  *((_QWORD *)v4 + 1) = v8;
  if ( (*(unsigned __int8 (__fastcall **)(CD3DPixelShader *))(*(_QWORD *)this + 24LL))(this) )
    *((_BYTE *)this + 69) = 1;
  if ( *((_BYTE *)this + 68) )
  {
    *((_BYTE *)this + 68) = 1;
    ++*((_DWORD *)a2 + 18);
    if ( *((_BYTE *)this + 69) )
      CD2DContext::AddHwProtectedResource((CD2DContext *)(*((_QWORD *)a2 + 10) + 16LL));
  }
  *((_DWORD *)a2 + 12) += *((_DWORD *)this + 16);
  v10 = *((_DWORD *)a2 + 12);
  if ( *((_DWORD *)a2 + 13) < v10 )
    *((_DWORD *)a2 + 13) = v10;
  SetInterface<ID3D11PixelShader,ID3D11PixelShader>((char *)this + 96, a4);
  return 0LL;
}
