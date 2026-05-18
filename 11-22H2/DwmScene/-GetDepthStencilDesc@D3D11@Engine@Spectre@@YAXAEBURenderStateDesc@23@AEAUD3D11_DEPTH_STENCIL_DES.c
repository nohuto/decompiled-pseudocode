/*
 * XREFs of ?GetDepthStencilDesc@D3D11@Engine@Spectre@@YAXAEBURenderStateDesc@23@AEAUD3D11_DEPTH_STENCIL_DESC@@@Z @ 0x1800D522C
 * Callers:
 *     ?Create@RenderStateD3D11@D3D11@Engine@Spectre@@UEAAXV?$shared_ptr@URenderStateDesc@Engine@Spectre@@@std@@@Z @ 0x1800D4D50 (-Create@RenderStateD3D11@D3D11@Engine@Spectre@@UEAAXV-$shared_ptr@URenderStateDesc@Engine@Spectr.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 */

void __fastcall Spectre::Engine::D3D11::GetDepthStencilDesc(
        Spectre::Engine::D3D11 *this,
        const struct Spectre::Engine::RenderStateDesc *a2,
        struct D3D11_DEPTH_STENCIL_DESC *a3)
{
  __int64 v3; // rax
  __int64 v5; // r8
  int v6; // ecx
  __int64 v7; // rax
  __m128i si128; // xmm0
  bool v9; // zf
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int32 v13; // ecx
  __int64 v14; // rax
  int v15; // ecx
  __m128i v16; // xmm0
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int32 v20; // ecx
  int v21; // eax
  __m128i v22; // [rsp+0h] [rbp-30h]
  int v23; // [rsp+10h] [rbp-20h]
  int v24; // [rsp+14h] [rbp-1Ch]
  int v25; // [rsp+18h] [rbp-18h]

  v3 = 0LL;
  *(_OWORD *)a2 = 0LL;
  v5 = 0LL;
  *((_OWORD *)a2 + 1) = 0LL;
  *((_OWORD *)a2 + 2) = 0LL;
  v6 = 1;
  *((_DWORD *)a2 + 12) = 0;
  do
    v22.m128i_i32[v3++] = v6++;
  while ( v3 < 8 );
  v7 = *((unsigned int *)this + 17);
  *((_WORD *)a2 + 8) = -1;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  *((_DWORD *)a2 + 5) = 1;
  *((_DWORD *)a2 + 2) = v22.m128i_i32[v7];
  *((_DWORD *)a2 + 6) = 1;
  *((_DWORD *)a2 + 7) = 1;
  *((_DWORD *)a2 + 8) = 1;
  *((_DWORD *)a2 + 9) = 1;
  *((_DWORD *)a2 + 10) = 1;
  *((_DWORD *)a2 + 11) = 1;
  *((_DWORD *)a2 + 12) = 1;
  *(_DWORD *)a2 = *((unsigned __int8 *)this + 61);
  v9 = *((_BYTE *)this + 62) == 0;
  v22 = si128;
  v23 = 4;
  *((_DWORD *)a2 + 1) = !v9;
  *((_DWORD *)a2 + 3) = *((unsigned __int8 *)this + 63);
  v10 = *((unsigned int *)this + 7);
  v24 = 8;
  v25 = 5;
  *((_DWORD *)a2 + 5) = v22.m128i_i32[v10];
  v11 = *((unsigned int *)this + 8);
  v22 = si128;
  v23 = 4;
  v24 = 8;
  v25 = 5;
  *((_DWORD *)a2 + 6) = v22.m128i_i32[v11];
  v12 = *((unsigned int *)this + 9);
  v22 = si128;
  v23 = 4;
  v24 = 8;
  v25 = 5;
  v13 = v22.m128i_i32[v12];
  v14 = 0LL;
  *((_DWORD *)a2 + 7) = v13;
  v15 = 1;
  do
    v22.m128i_i32[v14++] = v15++;
  while ( v14 < 8 );
  v16 = _mm_load_si128((const __m128i *)&_xmm);
  *((_DWORD *)a2 + 8) = v22.m128i_i32[*((unsigned int *)this + 10)];
  v17 = *((unsigned int *)this + 11);
  v22 = v16;
  v23 = 4;
  v24 = 8;
  v25 = 5;
  *((_DWORD *)a2 + 9) = v22.m128i_i32[v17];
  v18 = *((unsigned int *)this + 12);
  v22 = v16;
  v23 = 4;
  v24 = 8;
  v25 = 5;
  *((_DWORD *)a2 + 10) = v22.m128i_i32[v18];
  v19 = *((unsigned int *)this + 13);
  v22 = v16;
  v23 = 4;
  v24 = 8;
  v25 = 5;
  v20 = v22.m128i_i32[v19];
  v21 = 1;
  *((_DWORD *)a2 + 11) = v20;
  do
    v22.m128i_i32[v5++] = v21++;
  while ( v5 < 8 );
  *((_DWORD *)a2 + 12) = v22.m128i_i32[*((unsigned int *)this + 14)];
}
