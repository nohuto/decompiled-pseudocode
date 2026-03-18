/*
 * XREFs of ?Create@CSurfaceShaderComposer@@SAJPEAVCD3DDevice@@PEAPEAV1@@Z @ 0x180023250
 * Callers:
 *     ?GenerateShaders@CD3DDevice@@AEAAJXZ @ 0x18003A800 (-GenerateShaders@CD3DDevice@@AEAAJXZ.c)
 * Callees:
 *     ??0CSurfaceShaderComposer@@IEAA@PEAUID3D11VertexShader@@PEAUID3D11InputLayout@@PEAUID3D11Buffer@@PEAUID3DDeviceContextState@@PEAVCD3DDevice@@@Z @ 0x18002369C (--0CSurfaceShaderComposer@@IEAA@PEAUID3D11VertexShader@@PEAUID3D11InputLayout@@PEAUID3D11Buffer@.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180080A44 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?InternalRelease@?$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@IEAAKXZ @ 0x1800D2E54 (-InternalRelease@-$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1801000AC (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     McTemplateU0q_EventWriteTransfer @ 0x180111C2C (McTemplateU0q_EventWriteTransfer.c)
 */

__int64 __fastcall CSurfaceShaderComposer::Create(struct CD3DDevice *a1, struct CSurfaceShaderComposer **a2)
{
  __int64 v2; // rsi
  __int64 v3; // r12
  __int64 (__fastcall *v6)(__int64, void *, __int64, _QWORD, struct ID3D11VertexShader **); // rbx
  int v7; // eax
  __int64 v8; // rcx
  unsigned int v9; // edi
  __int64 (__fastcall *v10)(__int64, const char **, __int64, void *, __int64, struct ID3D11InputLayout **); // rbx
  __int64 (__fastcall *v11)(__int64, __int128 *, __int128 *, struct ID3D11Buffer **); // rbx
  __int64 (__fastcall *v12)(__int64, __int64, _DWORD *); // rbx
  void (__fastcall *v13)(__int64, struct ID3DDeviceContextState *, __int64 *); // rbx
  CSurfaceShaderComposer *v14; // rax
  unsigned int v15; // ecx
  struct CSurfaceShaderComposer *v16; // rax
  unsigned int v18; // [rsp+20h] [rbp-E0h]
  struct ID3DDeviceContextState *v19; // [rsp+50h] [rbp-B0h] BYREF
  struct ID3D11Buffer *v20; // [rsp+58h] [rbp-A8h] BYREF
  struct ID3D11InputLayout *v21; // [rsp+60h] [rbp-A0h] BYREF
  struct ID3D11VertexShader *v22; // [rsp+68h] [rbp-98h] BYREF
  __int64 v23; // [rsp+70h] [rbp-90h] BYREF
  _DWORD v24[2]; // [rsp+78h] [rbp-88h] BYREF
  __int128 v25; // [rsp+80h] [rbp-80h] BYREF
  __int128 v26; // [rsp+90h] [rbp-70h] BYREF
  __int64 v27; // [rsp+A0h] [rbp-60h]
  const char *v28; // [rsp+B0h] [rbp-50h] BYREF
  int v29; // [rsp+B8h] [rbp-48h]
  __int64 v30; // [rsp+BCh] [rbp-44h]
  int v31; // [rsp+C4h] [rbp-3Ch]
  __int64 v32; // [rsp+C8h] [rbp-38h]
  const char *v33; // [rsp+D0h] [rbp-30h]
  int v34; // [rsp+D8h] [rbp-28h]
  __int64 v35; // [rsp+DCh] [rbp-24h]
  int v36; // [rsp+E4h] [rbp-1Ch]
  __int64 v37; // [rsp+E8h] [rbp-18h]
  const char *v38; // [rsp+F0h] [rbp-10h]
  int v39; // [rsp+F8h] [rbp-8h]
  __int64 v40; // [rsp+FCh] [rbp-4h]
  int v41; // [rsp+104h] [rbp+4h]
  __int64 v42; // [rsp+108h] [rbp+8h]

  v2 = *((_QWORD *)a1 + 69);
  v3 = *((_QWORD *)a1 + 70);
  v28 = "POSITION";
  v22 = 0LL;
  v33 = "TEXCOORD";
  v38 = "TEXCOORD";
  v21 = 0LL;
  v20 = 0LL;
  v19 = 0LL;
  v23 = 0LL;
  v24[0] = 37632;
  v24[1] = 40960;
  v29 = 0;
  v30 = 16LL;
  v31 = -1;
  v32 = 0LL;
  v34 = 0;
  v35 = 16LL;
  v36 = -1;
  v37 = 0LL;
  v39 = 1;
  v40 = 16LL;
  v41 = -1;
  v42 = 0LL;
  v26 = 0LL;
  v27 = 0LL;
  v25 = 0LL;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
    McTemplateU0q_EventWriteTransfer(0xFFFFFFFFLL, &EVTDESC_D3DSHADER_CREATE_Start, 0LL);
  v6 = *(__int64 (__fastcall **)(__int64, void *, __int64, _QWORD, struct ID3D11VertexShader **))(*(_QWORD *)v2 + 96LL);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v22);
  v7 = v6(v2, &unk_18032A820, 832LL, 0LL, &v22);
  v9 = v7;
  if ( v7 < 0 )
  {
    v18 = 152;
    goto LABEL_18;
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
    McTemplateU0q_EventWriteTransfer(v8, &EVTDESC_D3DSHADER_CREATE_Stop, 0LL);
  v10 = *(__int64 (__fastcall **)(__int64, const char **, __int64, void *, __int64, struct ID3D11InputLayout **))(*(_QWORD *)v2 + 88LL);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v21);
  v7 = v10(v2, &v28, 3LL, &unk_18032A820, 832LL, &v21);
  v9 = v7;
  if ( v7 < 0 )
  {
    v18 = 161;
    goto LABEL_18;
  }
  *(_QWORD *)&v26 = 0x200000090LL;
  *(_QWORD *)&v25 = &unk_18032AB90;
  *((_QWORD *)&v26 + 1) = 0x1000000000001LL;
  v11 = *(__int64 (__fastcall **)(__int64, __int128 *, __int128 *, struct ID3D11Buffer **))(*(_QWORD *)v2 + 24LL);
  Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(&v20);
  v7 = v11(v2, &v26, &v25, &v20);
  v9 = v7;
  if ( v7 < 0 )
  {
    v18 = 174;
    goto LABEL_18;
  }
  v12 = *(__int64 (__fastcall **)(__int64, __int64, _DWORD *))(*(_QWORD *)v2 + 376LL);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v19);
  v7 = v12(v2, 1LL, v24);
  v9 = v7;
  if ( v7 < 0 )
  {
    v18 = 184;
LABEL_18:
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, v18, 0LL);
    goto LABEL_11;
  }
  v13 = *(void (__fastcall **)(__int64, struct ID3DDeviceContextState *, __int64 *))(*(_QWORD *)v3 + 1048LL);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v23);
  v13(v3, v19, &v23);
  (*(void (__fastcall **)(__int64, struct ID3D11InputLayout *))(*(_QWORD *)v3 + 136LL))(v3, v21);
  (*(void (__fastcall **)(__int64, _QWORD, __int64, struct ID3D11Buffer **, void *, int *))(*(_QWORD *)v3 + 144LL))(
    v3,
    0LL,
    1LL,
    &v20,
    &unk_18032AB6C,
    &`CVisual::SetWorldRenderingScaleOverride'::`2'::sc_defaultValue);
  (*(void (__fastcall **)(__int64, struct ID3D11VertexShader *, _QWORD, _QWORD))(*(_QWORD *)v3 + 88LL))(
    v3,
    v22,
    0LL,
    0LL);
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v3 + 344LL))(v3, *((_QWORD *)a1 + 283));
  (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v3 + 288LL))(v3, *((_QWORD *)a1 + 284), 0LL);
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 192LL))(v3, 4LL);
  (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v3 + 1048LL))(v3, v23, 0LL);
  v14 = (CSurfaceShaderComposer *)DefaultHeap::Alloc(0x80uLL);
  if ( !v14 )
  {
    *a2 = 0LL;
    goto LABEL_13;
  }
  v16 = CSurfaceShaderComposer::CSurfaceShaderComposer(v14, v22, v21, v20, v19, a1);
  *a2 = v16;
  if ( !v16 )
  {
LABEL_13:
    v9 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, -2147024882, 0xE1u, 0LL);
  }
LABEL_11:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v23);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v19);
  Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(&v20);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v21);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v22);
  return v9;
}
