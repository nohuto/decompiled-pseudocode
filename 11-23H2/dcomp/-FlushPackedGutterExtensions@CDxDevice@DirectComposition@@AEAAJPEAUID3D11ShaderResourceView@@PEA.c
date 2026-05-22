/*
 * XREFs of ?FlushPackedGutterExtensions@CDxDevice@DirectComposition@@AEAAJPEAUID3D11ShaderResourceView@@PEAUID3D11RenderTargetView@@IIAEBUGutterExtensionSurface@12@IAEBUtagRECT@@@Z @ 0x180022EF4
 * Callers:
 *     ?ExecuteGutterExtensions@CDxDevice@DirectComposition@@QEAAJAEBV?$DynArray@UGutterExtension@DirectComposition@@$0A@@@PEAUID3D11ShaderResourceView@@PEAUID3D11RenderTargetView@@IIW4DXGI_FORMAT@@@Z @ 0x1800233F0 (-ExecuteGutterExtensions@CDxDevice@DirectComposition@@QEAAJAEBV-$DynArray@UGutterExtension@Direc.c)
 * Callees:
 *     ?LoadVertexBuffer@CDxDevice@DirectComposition@@AEAAJPEAXIPEAI@Z @ 0x1800232B8 (-LoadVertexBuffer@CDxDevice@DirectComposition@@AEAAJPEAXIPEAI@Z.c)
 *     __security_check_cookie @ 0x180095B40 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CDxDevice::FlushPackedGutterExtensions(
        DirectComposition::CDxDevice *this,
        struct ID3D11ShaderResourceView *a2,
        struct ID3D11RenderTargetView *a3,
        int a4,
        signed int a5,
        const struct DirectComposition::CDxDevice::GutterExtensionSurface *a6,
        unsigned int a7,
        const struct tagRECT *a8)
{
  void *v10; // rdx
  int v11; // ebx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  unsigned int v17; // [rsp+40h] [rbp-61h] BYREF
  struct ID3D11ShaderResourceView *v18; // [rsp+48h] [rbp-59h] BYREF
  __int64 v19; // [rsp+50h] [rbp-51h] BYREF
  const struct tagRECT *v20; // [rsp+58h] [rbp-49h]
  struct ID3D11RenderTargetView *v21; // [rsp+60h] [rbp-41h] BYREF
  _DWORD v22[2]; // [rsp+68h] [rbp-39h] BYREF
  float v23; // [rsp+70h] [rbp-31h]
  float v24; // [rsp+74h] [rbp-2Dh]
  int v25; // [rsp+78h] [rbp-29h]
  float v26; // [rsp+7Ch] [rbp-25h]
  __m128i si128; // [rsp+80h] [rbp-21h] BYREF

  v25 = 0;
  v22[0] = 0;
  v22[1] = 0;
  v18 = a2;
  v10 = (void *)*((_QWORD *)this + 23);
  v21 = a3;
  v26 = FLOAT_1_0;
  v20 = a8;
  v11 = DirectComposition::CDxDevice::LoadVertexBuffer(this, v10, 48 * a7, &v17);
  if ( v11 >= 0 )
  {
    v12 = *((_QWORD *)this + 9);
    v19 = 0LL;
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v12 + 944LL))(v12, *((_QWORD *)a6 + 3));
    v13 = *((_QWORD *)this + 9);
    si128 = _mm_load_si128((const __m128i *)&_xmm);
    (*(void (__fastcall **)(__int64, __int64, __m128i *))(*(_QWORD *)v13 + 360LL))(v13, 1LL, &si128);
    (*(void (__fastcall **)(_QWORD, _QWORD, __int64, char *, void *, unsigned int *))(**((_QWORD **)this + 9) + 144LL))(
      *((_QWORD *)this + 9),
      0LL,
      1LL,
      (char *)this + 128,
      &unk_1801E5754,
      &v17);
    (*(void (__fastcall **)(_QWORD, _QWORD, __int64, struct ID3D11ShaderResourceView **))(**((_QWORD **)this + 9) + 64LL))(
      *((_QWORD *)this + 9),
      0LL,
      1LL,
      &v18);
    (*(void (__fastcall **)(_QWORD, __int64, char *))(**((_QWORD **)this + 9) + 264LL))(
      *((_QWORD *)this + 9),
      1LL,
      (char *)a6 + 24);
    v14 = *((_QWORD *)this + 9);
    v23 = FLOAT_64_0;
    v24 = FLOAT_320_0;
    (*(void (__fastcall **)(__int64, __int64, _DWORD *))(*(_QWORD *)v14 + 352LL))(v14, 1LL, v22);
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 9) + 104LL))(
      *((_QWORD *)this + 9),
      3 * a7,
      0LL);
    (*(void (__fastcall **)(_QWORD, _QWORD, __int64, __int64 *))(**((_QWORD **)this + 9) + 64LL))(
      *((_QWORD *)this + 9),
      0LL,
      1LL,
      &v19);
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 9) + 264LL))(
      *((_QWORD *)this + 9),
      0LL,
      0LL,
      0LL);
    v11 = DirectComposition::CDxDevice::LoadVertexBuffer(this, *((void **)this + 24), 48 * a7, &v17);
    if ( v11 >= 0 )
    {
      (*(void (__fastcall **)(_QWORD, __int64, const struct tagRECT *))(**((_QWORD **)this + 9) + 360LL))(
        *((_QWORD *)this + 9),
        1LL,
        v20);
      (*(void (__fastcall **)(_QWORD, _QWORD, __int64, char *, void *, unsigned int *))(**((_QWORD **)this + 9) + 144LL))(
        *((_QWORD *)this + 9),
        0LL,
        1LL,
        (char *)this + 128,
        &unk_1801E5754,
        &v17);
      (*(void (__fastcall **)(_QWORD, _QWORD, __int64, char *))(**((_QWORD **)this + 9) + 64LL))(
        *((_QWORD *)this + 9),
        0LL,
        1LL,
        (char *)a6 + 16);
      (*(void (__fastcall **)(_QWORD, __int64, struct ID3D11RenderTargetView **, _QWORD))(**((_QWORD **)this + 9) + 264LL))(
        *((_QWORD *)this + 9),
        1LL,
        &v21,
        0LL);
      v15 = *((_QWORD *)this + 9);
      v23 = (float)a4;
      v24 = (float)a5;
      (*(void (__fastcall **)(__int64, __int64, _DWORD *))(*(_QWORD *)v15 + 352LL))(v15, 1LL, v22);
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 9) + 104LL))(
        *((_QWORD *)this + 9),
        3 * a7,
        0LL);
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 9) + 64LL))(
        *((_QWORD *)this + 9),
        0LL,
        0LL,
        0LL);
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 9) + 264LL))(
        *((_QWORD *)this + 9),
        0LL,
        0LL,
        0LL);
    }
  }
  return (unsigned int)v11;
}
