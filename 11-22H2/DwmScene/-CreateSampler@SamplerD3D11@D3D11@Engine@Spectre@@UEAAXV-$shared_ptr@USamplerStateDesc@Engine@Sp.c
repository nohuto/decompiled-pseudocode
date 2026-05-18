/*
 * XREFs of ?CreateSampler@SamplerD3D11@D3D11@Engine@Spectre@@UEAAXV?$shared_ptr@USamplerStateDesc@Engine@Spectre@@@std@@@Z @ 0x1800D4950
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000E72C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?lock@?$weak_ptr@VRenderDevice@Engine@Spectre@@@std@@QEBA?AV?$shared_ptr@VRenderDevice@Engine@Spectre@@@2@XZ @ 0x180011C50 (-lock@-$weak_ptr@VRenderDevice@Engine@Spectre@@@std@@QEBA-AV-$shared_ptr@VRenderDevice@Engine@Sp.c)
 *     ?GetDevice@RenderDeviceD3D11@D3D11@Engine@Spectre@@QEBA?AV?$ComPtr@UID3D11Device1@@@WRL@Microsoft@@XZ @ 0x1800C581C (-GetDevice@RenderDeviceD3D11@D3D11@Engine@Spectre@@QEBA-AV-$ComPtr@UID3D11Device1@@@WRL@Microsof.c)
 *     ?ValidateDeviceApiCall@RenderDeviceD3D11@D3D11@Engine@Spectre@@IEAAXJ@Z @ 0x1800C76D0 (-ValidateDeviceApiCall@RenderDeviceD3D11@D3D11@Engine@Spectre@@IEAAXJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall Spectre::Engine::D3D11::SamplerD3D11::CreateSampler(__int64 a1, unsigned int **a2)
{
  unsigned int *v4; // rdx
  __m128i v5; // xmm0
  __int64 v6; // rax
  int v7; // ecx
  __int64 v8; // rbx
  __int64 (__fastcall *v9)(__int64, __int128 *, __int64); // rsi
  int v10; // eax
  unsigned int *v11; // rax
  unsigned int *v12; // rdx
  std::_Ref_count_base *v13; // rcx
  std::_Ref_count_base *v14; // rcx
  __int64 v15; // [rsp+20h] [rbp-59h] BYREF
  Spectre::Engine::D3D11::RenderDeviceD3D11 *v16; // [rsp+28h] [rbp-51h] BYREF
  std::_Ref_count_base *v17; // [rsp+30h] [rbp-49h]
  unsigned int **v18; // [rsp+38h] [rbp-41h]
  __int128 v19; // [rsp+40h] [rbp-39h] BYREF
  __int128 v20; // [rsp+50h] [rbp-29h]
  __int128 v21; // [rsp+60h] [rbp-19h]
  unsigned int v22; // [rsp+70h] [rbp-9h]
  __m128i si128; // [rsp+78h] [rbp-1h]
  __m128i v24; // [rsp+88h] [rbp+Fh]
  int v25; // [rsp+98h] [rbp+1Fh]
  int v26; // [rsp+9Ch] [rbp+23h]
  int v27; // [rsp+A0h] [rbp+27h]

  v18 = a2;
  std::weak_ptr<Spectre::Engine::RenderDevice>::lock(a1 + 72, &v16);
  v4 = *a2;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  v24 = _mm_load_si128((const __m128i *)&_xmm);
  v25 = 4;
  v26 = 5;
  v27 = 16;
  LODWORD(v19) = si128.m128i_i32[*v4];
  v5 = _mm_load_si128((const __m128i *)&_xmm);
  si128 = v5;
  v24.m128i_i32[0] = 5;
  DWORD1(v19) = si128.m128i_i32[v4[1]];
  si128 = v5;
  v24.m128i_i32[0] = 5;
  DWORD2(v19) = si128.m128i_i32[v4[2]];
  si128 = v5;
  v24.m128i_i32[0] = 5;
  HIDWORD(v19) = si128.m128i_i32[v4[3]];
  v6 = 0LL;
  v7 = 1;
  do
    si128.m128i_i32[v6++] = v7++;
  while ( v6 < 8 );
  DWORD2(v20) = si128.m128i_i32[v4[6]];
  DWORD1(v20) = v4[5];
  v22 = v4[12];
  HIDWORD(v21) = v4[11];
  LODWORD(v20) = v4[4];
  HIDWORD(v20) = v4[7];
  LODWORD(v21) = v4[8];
  *(_QWORD *)((char *)&v21 + 4) = *(_QWORD *)(v4 + 9);
  Spectre::Engine::D3D11::RenderDeviceD3D11::GetDevice((__int64)v16, &v15);
  v8 = v15;
  v9 = *(__int64 (__fastcall **)(__int64, __int128 *, __int64))(*(_QWORD *)v15 + 184LL);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)(a1 + 184));
  v10 = v9(v8, &v19, a1 + 184);
  Spectre::Engine::D3D11::RenderDeviceD3D11::ValidateDeviceApiCall(v16, v10);
  *(_OWORD *)(a1 + 128) = v19;
  *(_OWORD *)(a1 + 144) = v20;
  *(_OWORD *)(a1 + 160) = v21;
  *(_DWORD *)(a1 + 176) = v22;
  v11 = *a2;
  v12 = a2[1];
  *a2 = 0LL;
  a2[1] = 0LL;
  *(_QWORD *)(a1 + 96) = v11;
  v13 = *(std::_Ref_count_base **)(a1 + 104);
  *(_QWORD *)(a1 + 104) = v12;
  if ( v13 )
    std::_Ref_count_base::_Decref(v13);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v15);
  if ( v17 )
    std::_Ref_count_base::_Decref(v17);
  v14 = (std::_Ref_count_base *)a2[1];
  if ( v14 )
    std::_Ref_count_base::_Decref(v14);
}
