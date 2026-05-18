/*
 * XREFs of ?SelectAdapterProfileLevel@RenderDeviceD3D11@D3D11@Engine@Spectre@@AEAAXXZ @ 0x1800C712C
 * Callers:
 *     ?InitializeRenderer@RenderDeviceD3D11@D3D11@Engine@Spectre@@MEAAXXZ @ 0x1800C5CA0 (-InitializeRenderer@RenderDeviceD3D11@D3D11@Engine@Spectre@@MEAAXXZ.c)
 * Callees:
 *     _o_log_0 @ 0x18000C044 (_o_log_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall Spectre::Engine::D3D11::RenderDeviceD3D11::SelectAdapterProfileLevel(
        Spectre::Engine::D3D11::RenderDeviceD3D11 *this)
{
  __int64 v2; // rax
  int v3; // eax
  int v4; // eax
  __int64 v5; // rcx
  double v6; // xmm0_8
  __int128 v7; // [rsp+28h] [rbp-39h] BYREF
  int v8; // [rsp+38h] [rbp-29h]
  __int64 v9; // [rsp+3Ch] [rbp-25h]
  int v10; // [rsp+44h] [rbp-1Dh]
  __int128 v11; // [rsp+48h] [rbp-19h]
  __int128 v12; // [rsp+58h] [rbp-9h]
  __int128 v13; // [rsp+68h] [rbp+7h]
  __int64 v14; // [rsp+78h] [rbp+17h]
  unsigned __int64 v15; // [rsp+80h] [rbp+1Fh]
  __int64 v16; // [rsp+88h] [rbp+27h]
  __int64 v17; // [rsp+90h] [rbp+2Fh]
  int v18; // [rsp+98h] [rbp+37h]

  v7 = 0LL;
  v9 = 0LL;
  v10 = 0;
  v14 = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  v18 = 0;
  v2 = *(_QWORD *)this;
  v8 = 0;
  v11 = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  (*(void (__fastcall **)(Spectre::Engine::D3D11::RenderDeviceD3D11 *, __int128 *))(v2 + 88))(this, &v7);
  v3 = *((_DWORD *)this + 72);
  if ( v3 == 5 )
  {
    v4 = 3000;
  }
  else if ( v3 == 4 )
  {
    v4 = 4000;
  }
  else
  {
    v5 = 32LL;
    if ( v15 > 0x20 )
      v5 = v15;
    if ( v5 < 0 )
      v6 = (double)(int)(v5 & 1 | ((unsigned __int64)v5 >> 1)) + (double)(int)(v5 & 1 | ((unsigned __int64)v5 >> 1));
    else
      v6 = (double)(int)v5;
    o_log_0(v6 * 0.03125);
    o_log_0(4.0);
    v4 = (int)(_o_round() * 100.0);
  }
  *((_DWORD *)this + 1158) = v4;
}
