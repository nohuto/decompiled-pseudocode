/*
 * XREFs of ?CreateVisualFromBitmap@CDCompVisualImageLoader@ImageLoaders@@QEAAJPEAUID2D1Bitmap1@@AEBUtagSIZE@@PEAPEAUIDCompositionVisual@@@Z @ 0x1805E9724
 * Callers:
 *     ?LoadImageByPath@CDCompVisualImageLoader@ImageLoaders@@QEAAJPEBGPEAUtagSIZE@@PEAPEAUIDCompositionVisual@@@Z @ 0x1805E9E80 (-LoadImageByPath@CDCompVisualImageLoader@ImageLoaders@@QEAAJPEBGPEAUtagSIZE@@PEAPEAUIDCompositio.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??I?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA?AV?$ComPtrRef@V?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@@Details@12@XZ @ 0x1800759C4 (--I-$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA-AV-$ComPtrRef@V-$ComPtr@UII.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x180178FD0 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall ImageLoaders::CDCompVisualImageLoader::CreateVisualFromBitmap(
        ImageLoaders::CDCompVisualImageLoader *this,
        struct ID2D1Bitmap1 *a2,
        const struct tagSIZE *a3,
        struct IDCompositionVisual **a4)
{
  __int64 v5; // rsi
  __int64 (__fastcall *v9)(__int64, __int64 *); // rdi
  __int64 *v10; // rbx
  int v11; // eax
  unsigned int v12; // ebx
  __int64 v13; // rdi
  __int64 (__fastcall *v14)(__int64, _QWORD, _QWORD, __int64, int, __int64 *); // rbx
  char v15; // si
  int v16; // eax
  __int64 v17; // rbx
  __int64 (__fastcall *v18)(__int64, _QWORD, GUID *, __int64 *, int *); // rdi
  int v19; // eax
  __int64 v20; // rdi
  __int64 (__fastcall *v21)(__int64, __int64, _QWORD, __int64 *); // rbx
  int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rcx
  float cx; // xmm0_4
  __m128i v27; // xmm1
  struct IDCompositionVisual *v28; // rax
  __int64 v30; // [rsp+40h] [rbp-29h] BYREF
  struct IDCompositionVisual *v31; // [rsp+48h] [rbp-21h] BYREF
  __int64 v32; // [rsp+50h] [rbp-19h] BYREF
  __int64 v33; // [rsp+58h] [rbp-11h] BYREF
  int v34; // [rsp+60h] [rbp-9h] BYREF
  int v35; // [rsp+64h] [rbp-5h]
  __int128 v36; // [rsp+68h] [rbp-1h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]

  *a4 = 0LL;
  v5 = *((_QWORD *)this + 2);
  v31 = 0LL;
  v9 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v5 + 56LL);
  v10 = (__int64 *)*Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&((__int64)&v31, &v36);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v10);
  v11 = v9(v5, v10);
  v12 = v11;
  if ( v11 >= 0 )
  {
    v13 = *((_QWORD *)this + 2);
    v30 = 0LL;
    v14 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64, int, __int64 *))(*(_QWORD *)v13 + 64LL);
    Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v30);
    v15 = 1;
    v16 = v14(v13, (unsigned int)a3->cx, (unsigned int)a3->cy, 87LL, 1, &v30);
    v12 = v16;
    if ( v16 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x81,
        (__int64)"onecoreuap\\shell\\onecore\\libs\\imageloaders\\dcompvisualimageloader.cpp",
        (const char *)(unsigned int)v16);
LABEL_16:
      Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v30);
      goto LABEL_17;
    }
    v17 = v30;
    v33 = 0LL;
    v18 = *(__int64 (__fastcall **)(__int64, _QWORD, GUID *, __int64 *, int *))(*(_QWORD *)v30 + 24LL);
    Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v33);
    v19 = v18(v17, 0LL, &GUID_cafcb56c_6ac3_4889_bf47_9e23bbd260ec, &v33, &v34);
    v12 = v19;
    if ( v19 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x86,
        (__int64)"onecoreuap\\shell\\onecore\\libs\\imageloaders\\dcompvisualimageloader.cpp",
        (const char *)(unsigned int)v19);
LABEL_15:
      Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v33);
      goto LABEL_16;
    }
    v20 = *((_QWORD *)this + 1);
    v32 = 0LL;
    v21 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64 *))(*(_QWORD *)v20 + 496LL);
    Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v32);
    v22 = v21(v20, v33, 0LL, &v32);
    v12 = v22;
    if ( v22 >= 0 )
    {
      (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 1) + 592LL))(*((_QWORD *)this + 1), v32);
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 1) + 384LL))(*((_QWORD *)this + 1));
      v24 = *((_QWORD *)this + 1);
      v36 = 0LL;
      (*(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v24 + 376LL))(v24, &v36);
      v25 = *((_QWORD *)this + 1);
      cx = (float)a3->cx;
      *(float *)&v36 = (float)v34;
      v27 = _mm_cvtsi32_si128(a3->cy);
      *((float *)&v36 + 2) = cx + (float)v34;
      *((float *)&v36 + 1) = (float)v35;
      *((float *)&v36 + 3) = _mm_cvtepi32_ps(v27).m128_f32[0] + (float)v35;
      (*(void (__fastcall **)(__int64, struct ID2D1Bitmap1 *, __int128 *))(*(_QWORD *)v25 + 208LL))(v25, a2, &v36);
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 1) + 392LL))(
        *((_QWORD *)this + 1),
        0LL,
        0LL);
      v15 = 0;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 32LL))(v30);
      v22 = (*(__int64 (__fastcall **)(struct IDCompositionVisual *, __int64))(*(_QWORD *)v31 + 120LL))(v31, v30);
      v12 = v22;
      if ( v22 >= 0 )
      {
        v28 = v31;
        v31 = 0LL;
        v12 = 0;
        *a4 = v28;
LABEL_13:
        Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v32);
        if ( v15 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 32LL))(v30);
        goto LABEL_15;
      }
      v23 = 153LL;
    }
    else
    {
      v23 = 139LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v23,
      (__int64)"onecoreuap\\shell\\onecore\\libs\\imageloaders\\dcompvisualimageloader.cpp",
      (const char *)(unsigned int)v22);
    goto LABEL_13;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x7C,
    (__int64)"onecoreuap\\shell\\onecore\\libs\\imageloaders\\dcompvisualimageloader.cpp",
    (const char *)(unsigned int)v11);
LABEL_17:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v31);
  return v12;
}
