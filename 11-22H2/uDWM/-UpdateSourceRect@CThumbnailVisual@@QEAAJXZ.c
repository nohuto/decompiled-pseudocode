/*
 * XREFs of ?UpdateSourceRect@CThumbnailVisual@@QEAAJXZ @ 0x18000A4B0
 * Callers:
 *     ?ValidateVisual@CThumbnailVisual@@UEAAJXZ @ 0x180009440 (-ValidateVisual@CThumbnailVisual@@UEAAJXZ.c)
 * Callees:
 *     ?_IsImmersiveIconic@CThumbnailVisual@@AEAA_NXZ @ 0x180009F8C (-_IsImmersiveIconic@CThumbnailVisual@@AEAA_NXZ.c)
 *     ?_IsThumbnailCVIStatic@CThumbnailVisual@@AEAA_NXZ @ 0x18000A2DC (-_IsThumbnailCVIStatic@CThumbnailVisual@@AEAA_NXZ.c)
 *     ?Update@CRectResourceProxy@@QEAAJAEBUMilRectF@@@Z @ 0x18000A738 (-Update@CRectResourceProxy@@QEAAJAEBUMilRectF@@@Z.c)
 *     ?SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z @ 0x1800434D8 (-SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z.c)
 *     ?GetShellWindowForDesktop@CWindowList@@QEAAPEAUHWND__@@_K@Z @ 0x180052D5C (-GetShellWindowForDesktop@CWindowList@@QEAAPEAUHWND__@@_K@Z.c)
 *     __security_check_cookie @ 0x18005C460 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ShiftViewPortOrigin@@YAXPEAUtagRECT@@@Z @ 0x1800E4F20 (-ShiftViewPortOrigin@@YAXPEAUtagRECT@@@Z.c)
 */

__int64 __fastcall CThumbnailVisual::UpdateSourceRect(CThumbnailVisual *this)
{
  unsigned int v2; // esi
  __int64 v3; // r8
  _DWORD *v4; // rdx
  LONG v5; // r9d
  LONG v6; // r10d
  LONG v7; // eax
  LONG v8; // ecx
  __int64 v9; // rax
  LONG left; // edx
  LONG top; // r8d
  __int64 j; // rax
  int v13; // eax
  int v14; // eax
  CRectResourceProxy *v15; // rcx
  int v16; // eax
  __int64 i; // rax
  int v19; // eax
  __m128i v20; // xmm6
  int v21; // ebx
  int v22; // eax
  __int64 v23; // r9
  LONG v24; // eax
  unsigned int v25; // eax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __m128i v28; // xmm0
  int v29; // eax
  __int64 v30; // rcx
  LONG v31; // eax
  LONG v32; // ecx
  __int128 v33; // [rsp+30h] [rbp-50h]
  struct tagRECT v34; // [rsp+40h] [rbp-40h] BYREF
  __int128 v35; // [rsp+50h] [rbp-30h] BYREF

  v2 = 0;
  if ( !*((_QWORD *)this + 50) || !*((_QWORD *)this + 47) )
    return v2;
  v33 = 0LL;
  v35 = 0LL;
  if ( CThumbnailVisual::_IsImmersiveIconic(this) )
  {
    *(_QWORD *)&v35 = 0LL;
    v25 = 0;
    v26 = *((_QWORD *)this + 48);
    v27 = *(_QWORD *)(v26 + 376);
    if ( v27 )
      v25 = *(_DWORD *)(v27 + 128);
    v28 = _mm_cvtsi32_si128(v25);
    v29 = 0;
    DWORD2(v35) = _mm_cvtepi32_ps(v28).m128_u32[0];
    v30 = *(_QWORD *)(v26 + 376);
    if ( v30 )
      v29 = *(_DWORD *)(v30 + 132);
    *((float *)&v35 + 3) = (float)v29;
    goto LABEL_18;
  }
  v3 = *((_QWORD *)this + 47);
  if ( (*(_BYTE *)(v3 + 36) & 2) != 0 )
  {
    for ( i = 0LL; i < 4; ++i )
      *((float *)&v35 + i) = (float)*(int *)(v3 + 4 * i + 56);
    LODWORD(v33) = *(_DWORD *)(v3 + 56);
    v19 = 0;
    if ( *(_DWORD *)(v3 + 64) - (int)v33 >= 0 )
      v19 = *(_DWORD *)(v3 + 64) - *(_DWORD *)(v3 + 56);
    DWORD1(v33) = *(_DWORD *)(v3 + 60);
    DWORD2(v33) = v19;
    v14 = *(_DWORD *)(v3 + 68) - DWORD1(v33);
    if ( v14 < 0 )
      goto LABEL_18;
  }
  else
  {
    v4 = (_DWORD *)*((_QWORD *)this + 48);
    if ( !v4 )
      goto LABEL_18;
    v5 = v4[20] - v4[23];
    v6 = v4[21] - v4[25];
    v7 = v4[22];
    v8 = v4[24];
    v34.right = v5;
    v34.bottom = v6;
    v34.left = v7;
    v34.top = v8;
    v9 = *(_QWORD *)(v3 + 24);
    if ( (*(_BYTE *)(v9 + 676) & 8) != 0
      && !*(_DWORD *)(v3 + 77)
      && v4[18] == 2
      && ((*(_DWORD *)(v9 + 116) & 0x1000000) != 0 || (*(_BYTE *)(v9 + 677) & 1) != 0) )
    {
      v34.right = v5 - *(_DWORD *)(v9 + 304) - *(_DWORD *)(v9 + 300);
      v34.bottom = v6 - *(_DWORD *)(v9 + 312) - *(_DWORD *)(v9 + 308);
    }
    if ( *(_BYTE *)(v3 + 32) )
    {
      v31 = v4[20];
      top = 0;
      v32 = v4[21];
      left = 0;
      *(_QWORD *)&v34.left = 0LL;
      v34.right = v31;
      v34.bottom = v32;
    }
    else
    {
      if ( *(HWND *)(*(_QWORD *)(*((_QWORD *)this + 47) + 24LL) + 40LL) == CWindowList::GetShellWindowForDesktop(
                                                                             *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance
                                                                             + 54),
                                                                             *(_QWORD *)(*(_QWORD *)(v3 + 24) + 136LL)) )
        ShiftViewPortOrigin(&v34);
      left = v34.left;
      top = v34.top;
    }
    for ( j = 0LL; j < 16; j += 4LL )
      *(float *)((char *)&v35 + j) = (float)*(int *)((char *)&v34.left + j);
    v13 = 0;
    *(_QWORD *)&v33 = __PAIR64__(top, left);
    if ( v34.right - left >= 0 )
      v13 = v34.right - left;
    DWORD2(v33) = v13;
    v14 = 0;
    if ( v34.bottom - top >= 0 )
      v14 = v34.bottom - top;
  }
  HIDWORD(v33) = v14;
LABEL_18:
  if ( CThumbnailVisual::_IsThumbnailCVIStatic(this) )
  {
    v20 = *(__m128i *)((char *)this + 508);
    v21 = MulDiv(*((_DWORD *)this + 131) - v33, _mm_cvtsi128_si32(_mm_srli_si128(v20, 8)), *((_DWORD *)this + 133))
        + _mm_cvtsi128_si32(v20);
    v22 = MulDiv(
            *((_DWORD *)this + 132) - DWORD1(v33),
            _mm_cvtsi128_si32(_mm_srli_si128(v20, 12)),
            *((_DWORD *)this + 134));
    v23 = *((_QWORD *)this + 47);
    v24 = *(_DWORD *)(v23 + 44) + _mm_cvtsi128_si32(_mm_srli_si128(v20, 4)) + v22;
    v34.left = v21 + *(_DWORD *)(v23 + 40);
    v34.top = v24;
    CVisual::SetOffset(this, (const struct tagPOINT *)&v34);
  }
  else
  {
    v15 = (CRectResourceProxy *)*((_QWORD *)this + 50);
    *(_OWORD *)((char *)this + 524) = v33;
    v16 = CRectResourceProxy::Update(v15, (const struct MilRectF *)&v35);
    v2 = v16;
    if ( v16 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v16, 0x3B9u, 0LL);
  }
  return v2;
}
