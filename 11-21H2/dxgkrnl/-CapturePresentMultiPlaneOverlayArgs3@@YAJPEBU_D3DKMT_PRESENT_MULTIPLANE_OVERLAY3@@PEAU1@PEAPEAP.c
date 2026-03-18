/*
 * XREFs of ?CapturePresentMultiPlaneOverlayArgs3@@YAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAU1@PEAPEAPEAU_D3DKMT_MULTIPLANE_OVERLAY3@@PEAPEAU2@PEAPEAU_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3@@PEAPEAPEAUtagRECT@@PEAPEAI6PEAPEAEPEAPEAU_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION@@@Z @ 0x1C018E420
 * Callers:
 *     DxgkPresentMultiPlaneOverlay3 @ 0x1C018ED80 (DxgkPresentMultiPlaneOverlay3.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C000D96C (--3@YAXPEAX@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000D990 (--_V@YAXPEAX@Z.c)
 *     memmove @ 0x1C002CD00 (memmove.c)
 *     _CapturePresentMultiPlaneOverlayArgs3_::_2_::_AUTO::__AUTO @ 0x1C03188F8 (_CapturePresentMultiPlaneOverlayArgs3_--_2_--_AUTO--__AUTO.c)
 */

__int64 __fastcall CapturePresentMultiPlaneOverlayArgs3(
        const struct _D3DKMT_PRESENT_MULTIPLANE_OVERLAY3 *a1,
        struct _D3DKMT_PRESENT_MULTIPLANE_OVERLAY3 *a2,
        struct _D3DKMT_MULTIPLANE_OVERLAY3 ***a3,
        struct _D3DKMT_MULTIPLANE_OVERLAY3 **a4,
        struct _D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3 **a5,
        struct tagRECT ***a6,
        unsigned int **a7,
        unsigned int **a8,
        unsigned __int8 **a9,
        struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION **a10)
{
  __m128i v10; // xmm6
  __m128i v11; // xmm7
  unsigned __int64 v12; // xmm0_8
  unsigned __int64 v13; // rcx
  unsigned int v14; // esi
  unsigned __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  void *v20; // r13
  unsigned int v21; // edi
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rax
  __int64 v25; // r12
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // rax
  const void *v28; // r15
  char *v29; // r14
  const void *v30; // rdx
  char *v31; // rax
  const void *v32; // rdx
  char *v33; // rax
  __int64 v34; // r9
  unsigned int v35; // ebx
  struct _D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3 *v36; // r12
  _OWORD *v37; // rcx
  char *v38; // r13
  unsigned __int64 v39; // rcx
  struct _D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3 *v40; // r14
  __int64 v41; // rax
  unsigned __int64 v42; // rax
  unsigned __int64 DirtyRectCount; // kr00_8
  struct tagRECT *v44; // rax
  __int64 v45; // rdx
  __int64 v46; // r8
  __int64 v47; // r9
  size_t v48; // r8
  RECT *pDirtyRects; // rdx
  __int64 v50; // rdx
  __int64 v51; // r8
  unsigned int v52; // eax
  size_t v53; // r8
  char *v54; // rdx
  ULONG64 v55; // rcx
  __int64 v57; // rax
  __int64 v58; // rax
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // r8
  __int64 v62; // r9
  __int64 v63; // rax
  unsigned int *v64; // r9
  char *v65; // rdx
  __int64 v66; // rax
  unsigned int v67; // eax
  __int64 v68; // rax
  __int64 v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // r8
  __int64 v72; // r9
  __int64 CurrentProcess; // rax
  __int64 v74; // rdx
  __int64 v75; // rcx
  __int64 v76; // r8
  __int64 v77; // r9
  __int64 v78; // [rsp+28h] [rbp-180h]
  __int64 v79; // [rsp+30h] [rbp-178h]
  unsigned int Size; // [rsp+50h] [rbp-158h]
  unsigned int Size_4; // [rsp+54h] [rbp-154h]
  void *v82; // [rsp+58h] [rbp-150h]
  struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION *v83; // [rsp+60h] [rbp-148h]
  struct _D3DKMT_MULTIPLANE_OVERLAY3 *v84; // [rsp+70h] [rbp-138h]
  struct tagRECT **v85; // [rsp+78h] [rbp-130h]
  unsigned int *v86; // [rsp+80h] [rbp-128h]
  void *v87; // [rsp+90h] [rbp-118h] BYREF
  struct _D3DKMT_MULTIPLANE_OVERLAY3 *v88; // [rsp+98h] [rbp-110h]
  __int128 v89; // [rsp+A0h] [rbp-108h]
  __int128 v90; // [rsp+B0h] [rbp-F8h]
  __int128 v91; // [rsp+C0h] [rbp-E8h]
  int v92; // [rsp+D0h] [rbp-D8h]
  void *v93; // [rsp+E0h] [rbp-C8h]
  __int64 v94; // [rsp+E8h] [rbp-C0h]
  void *v95; // [rsp+F0h] [rbp-B8h]
  void *v96[2]; // [rsp+100h] [rbp-A8h]
  __m128i v97; // [rsp+110h] [rbp-98h]
  void *Src[2]; // [rsp+120h] [rbp-88h]
  __m128i v99; // [rsp+130h] [rbp-78h]
  void *v100[2]; // [rsp+140h] [rbp-68h]

  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    a1 = (const struct _D3DKMT_PRESENT_MULTIPLANE_OVERLAY3 *)MmUserProbeAddress;
  *(_OWORD *)v96 = *(_OWORD *)&a1->hAdapter;
  v97 = *(__m128i *)&a1->VidPnSourceId;
  v10 = v97;
  *(_OWORD *)Src = *(_OWORD *)&a1->ppPresentPlanes;
  v11 = *(__m128i *)&a1->Duration;
  v99 = v11;
  *(_OWORD *)v100 = *(_OWORD *)&a1->pHDRMetaData;
  v12 = _mm_srli_si128(v97, 8).m128i_u64[0];
  v13 = HIDWORD(v12);
  if ( (unsigned int)(HIDWORD(v12) - 1) > 9 )
  {
    CurrentProcess = PsGetCurrentProcess(v13, a2, a3, a4);
    WdLogSingleEntry3(2LL, v97.m128i_u32[3], -1073741811LL, CurrentProcess);
    v79 = PsGetCurrentProcess(v75, v74, v76, v77);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Presenting multi plane overlay plane count (0x%I64x) is invalid, returing 0x%I64x at 0x%I64x",
      v97.m128i_u32[3],
      -1073741811LL,
      v79,
      0LL,
      0LL);
    return 3221225485LL;
  }
  if ( (unsigned int)(HIDWORD(v96[0]) - 1) > 0x3F )
  {
    v68 = PsGetCurrentProcess(v13, a2, a3, a4);
    WdLogSingleEntry2(2LL, -1073741811LL, v68);
    v78 = PsGetCurrentProcess(v70, v69, v71, v72);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid ContextCount, returing 0x%I64x at 0x%I64x",
      -1073741811LL,
      v78,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
  v14 = 0;
  v88 = 0LL;
  v89 = 0LL;
  v90 = 0LL;
  v91 = 0LL;
  v92 = HIDWORD(v12);
  v15 = 8 * v13;
  if ( !is_mul_ok(v13, 8uLL) )
    v15 = -1LL;
  v20 = (void *)operator new[](v15, 0x4B677844u, 256LL, (__int64)a4);
  v95 = v20;
  v87 = v20;
  if ( !v20 )
    goto LABEL_74;
  v21 = _mm_cvtsi128_si32(_mm_srli_si128(v97, 12));
  v22 = 80LL * v21;
  if ( !is_mul_ok(v21, 0x50uLL) )
    v22 = -1LL;
  v84 = (struct _D3DKMT_MULTIPLANE_OVERLAY3 *)operator new[](v22, 0x4B677844u, 256LL, v19);
  v88 = v84;
  if ( !v84 )
    goto LABEL_74;
  v23 = 88LL * v21;
  if ( !is_mul_ok(v21, 0x58uLL) )
    v23 = -1LL;
  v94 = operator new[](v23, 0x4B677844u, 256LL, v19);
  *(_QWORD *)&v89 = v94;
  if ( !v94 )
    goto LABEL_74;
  v24 = 8LL * v21;
  if ( !is_mul_ok(v21, 8uLL) )
    v24 = -1LL;
  v85 = (struct tagRECT **)operator new[](v24, 0x4B677844u, 256LL, v19);
  *(_QWORD *)&v91 = v85;
  if ( !v85 )
    goto LABEL_74;
  Size_4 = HIDWORD(v96[0]);
  v25 = HIDWORD(v96[0]);
  v26 = 4LL * HIDWORD(v96[0]);
  if ( !is_mul_ok(HIDWORD(v96[0]), 4uLL) )
    v26 = -1LL;
  v93 = (void *)operator new[](v26, 0x4B677844u, 256LL, v19);
  *((_QWORD *)&v89 + 1) = v93;
  if ( !v93 )
    goto LABEL_74;
  v27 = 4LL * v21 * HIDWORD(v96[0]);
  if ( !is_mul_ok(v21 * HIDWORD(v96[0]), 4uLL) )
    v27 = -1LL;
  v86 = (unsigned int *)operator new[](v27, 0x4B677844u, 256LL, v19);
  *(_QWORD *)&v90 = v86;
  if ( !v86 )
    goto LABEL_74;
  v28 = v100[0];
  if ( !v100[0] )
  {
    Size = v99.m128i_u32[2];
LABEL_25:
    v82 = (void *)*((_QWORD *)&v90 + 1);
    goto LABEL_26;
  }
  v67 = _mm_cvtsi128_si32(_mm_srli_si128(v11, 8));
  Size = v67;
  if ( !v67 )
    goto LABEL_25;
  v82 = (void *)operator new[](v67, 0x4B677844u, 256LL, v19);
  *((_QWORD *)&v90 + 1) = v82;
  if ( !v82 )
    goto LABEL_74;
LABEL_26:
  v29 = (char *)Src[1];
  if ( Src[1] )
  {
    v83 = (struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION *)operator new[](0x28uLL, 0x4B677844u, 256LL, v19);
    *((_QWORD *)&v91 + 1) = v83;
    if ( v83 )
      goto LABEL_28;
LABEL_74:
    v66 = PsGetCurrentProcess(v17, v16, v18, v19);
    WdLogSingleEntry2(3LL, -1073741801LL, v66);
    CapturePresentMultiPlaneOverlayArgs3_::_2_::_AUTO::__AUTO(&v87);
    return 3221225495LL;
  }
  v83 = (struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION *)*((_QWORD *)&v91 + 1);
LABEL_28:
  v30 = Src[0];
  v31 = (char *)Src[0] + 8 * v21;
  if ( v31 < Src[0] || (unsigned __int64)v31 > MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  memmove(v20, v30, 8LL * v21);
  v32 = v96[1];
  v33 = (char *)v96[1] + 4 * v25;
  if ( v33 < v96[1] || (unsigned __int64)v33 > MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  memmove(v93, v32, 4 * v25);
  if ( v28 && Size )
  {
    v55 = (ULONG64)v28 + Size;
    if ( v55 < (unsigned __int64)v28 || v55 > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v82, v28, Size);
  }
  if ( v29 )
  {
    if ( v29 + 40 < v29 || (unsigned __int64)(v29 + 40) > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    *(_OWORD *)&v83->Flags.0 = *(_OWORD *)v29;
    *(_OWORD *)&v83->SrcRect.bottom = *((_OWORD *)v29 + 1);
    *(_QWORD *)&v83->DstRect.bottom = *((_QWORD *)v29 + 4);
  }
  v35 = 0;
  v36 = (struct _D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3 *)v94;
  while ( v35 < v21 )
  {
    v37 = (_OWORD *)*((_QWORD *)v20 + v35);
    v38 = (char *)v84 + 80 * v35;
    if ( v37 + 5 < v37 || (unsigned __int64)(v37 + 5) > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    *(_OWORD *)v38 = *v37;
    *((_OWORD *)v38 + 1) = v37[1];
    *((_OWORD *)v38 + 2) = v37[2];
    *((_OWORD *)v38 + 3) = v37[3];
    *((_OWORD *)v38 + 4) = v37[4];
    v39 = *((_QWORD *)v38 + 6);
    v40 = &v36[v35];
    if ( v39 + 88 < v39 || v39 + 88 > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    *(_OWORD *)&v40->Flags = *(_OWORD *)v39;
    *(_OWORD *)&v40->SrcRect.bottom = *(_OWORD *)(v39 + 16);
    *(_OWORD *)&v40->DstRect.bottom = *(_OWORD *)(v39 + 32);
    *(_OWORD *)&v40->ClipRect.bottom = *(_OWORD *)(v39 + 48);
    *(_OWORD *)&v40->pDirtyRects = *(_OWORD *)(v39 + 64);
    *(_QWORD *)&v40->SDRWhiteLevel = *(_QWORD *)(v39 + 80);
    v41 = v35;
    if ( v40->DirtyRectCount > 0xFFF )
    {
      WdLogSingleEntry3(2LL, v36[v41].DirtyRectCount, v35, -1073741811LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Invalid DirtyRectCount:%u on plane %u, returing 0x%I64x",
        v40->DirtyRectCount,
        v35,
        -1073741811LL,
        0LL,
        0LL);
      CapturePresentMultiPlaneOverlayArgs3_::_2_::_AUTO::__AUTO(&v87);
      return 3221225485LL;
    }
    DirtyRectCount = v36[v41].DirtyRectCount;
    v42 = 16 * DirtyRectCount;
    if ( !is_mul_ok(DirtyRectCount, 0x10uLL) )
      v42 = -1LL;
    v44 = (struct tagRECT *)operator new[](v42, 0x4B677844u, 256LL, v34);
    v85[v35] = v44;
    if ( !v44 )
    {
      v57 = PsGetCurrentProcess(v85, v45, v46, v47);
      WdLogSingleEntry2(3LL, -1073741801LL, v57);
      CapturePresentMultiPlaneOverlayArgs3_::_2_::_AUTO::__AUTO(&v87);
      return 3221225495LL;
    }
    v48 = v40->DirtyRectCount;
    pDirtyRects = v40->pDirtyRects;
    if ( &pDirtyRects[v48] < pDirtyRects || (unsigned __int64)&pDirtyRects[v48] > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v44, pDirtyRects, v48 * 16);
    v40->pDirtyRects = v85[v35];
    v52 = *((_DWORD *)v38 + 4);
    if ( v52 > Size_4 )
    {
      v58 = PsGetCurrentProcess(Size_4, v50, v51, v34);
      WdLogSingleEntry2(2LL, -1073741811LL, v58);
      v63 = PsGetCurrentProcess(v60, v59, v61, v62);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Invalid AllocationCount, returing 0x%I64x at 0x%I64x",
        -1073741811LL,
        v63,
        0LL,
        0LL,
        0LL);
      CapturePresentMultiPlaneOverlayArgs3_::_2_::_AUTO::__AUTO(&v87);
      return 3221225485LL;
    }
    if ( v52 )
    {
      v53 = 4LL * v52;
      v54 = (char *)*((_QWORD *)v38 + 3);
      if ( &v54[v53] < v54 || (unsigned __int64)&v54[v53] > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(&v86[Size_4 * v35], v54, v53);
    }
    ++v35;
    v20 = v95;
  }
  Src[0] = v20;
  v64 = (unsigned int *)v93;
  v96[1] = v93;
  v100[0] = v82;
  Src[1] = v83;
  while ( v14 < v21 )
  {
    v65 = (char *)v84 + 80 * v14;
    *((_QWORD *)v20 + v14) = v65;
    *((_QWORD *)v65 + 6) = &v36[v14];
    *((_QWORD *)v65 + 3) = &v86[Size_4 * v14++];
  }
  *(_OWORD *)&a2->hAdapter = *(_OWORD *)v96;
  *(__m128i *)&a2->VidPnSourceId = v10;
  *(_OWORD *)&a2->ppPresentPlanes = *(_OWORD *)Src;
  *(__m128i *)&a2->Duration = v11;
  *(_OWORD *)&a2->pHDRMetaData = *(_OWORD *)v100;
  *a3 = (struct _D3DKMT_MULTIPLANE_OVERLAY3 **)v20;
  *a4 = v84;
  *a5 = v36;
  *a6 = v85;
  *a7 = v64;
  *a8 = v86;
  *a9 = (unsigned __int8 *)v82;
  *a10 = v83;
  operator delete[](0LL);
  operator delete[](0LL);
  operator delete[](0LL);
  operator delete[](0LL);
  operator delete[](0LL);
  operator delete[](0LL);
  operator delete[](0LL);
  operator delete(0LL);
  return 0LL;
}
