/*
 * XREFs of ?UpdateSourceRect@CThumbnailVisual@@QEAAJXZ @ 0x180019FF0
 * Callers:
 *     ?ValidateVisual@CThumbnailVisual@@UEAAJXZ @ 0x18001C720 (-ValidateVisual@CThumbnailVisual@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Update@CRectResourceProxy@@QEAAJAEBUMilRectF@@@Z @ 0x18001A19C (-Update@CRectResourceProxy@@QEAAJAEBUMilRectF@@@Z.c)
 *     ?_IsThumbnailCVIStatic@CThumbnailVisual@@AEAA_NXZ @ 0x18001A1D0 (-_IsThumbnailCVIStatic@CThumbnailVisual@@AEAA_NXZ.c)
 *     ?GetShellWindowForDesktop@CWindowList@@QEAAPEAUHWND__@@_K@Z @ 0x18001A200 (-GetShellWindowForDesktop@CWindowList@@QEAAPEAUHWND__@@_K@Z.c)
 *     ?_IsImmersiveIconic@CThumbnailVisual@@AEAA_NXZ @ 0x18001D828 (-_IsImmersiveIconic@CThumbnailVisual@@AEAA_NXZ.c)
 *     ?SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z @ 0x180036354 (-SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z.c)
 *     __security_check_cookie @ 0x180060050 (__security_check_cookie.c)
 *     ?ShiftViewPortOrigin@@YAXPEAUtagRECT@@@Z @ 0x1800E36DC (-ShiftViewPortOrigin@@YAXPEAUtagRECT@@@Z.c)
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
  int v18; // ecx
  __int64 v19; // rdx
  __int64 v20; // rax
  int v21; // eax
  __int64 v22; // rcx
  __int64 i; // rax
  int v24; // eax
  LONG v25; // eax
  LONG v26; // ecx
  __m128i v27; // xmm6
  int v28; // ebx
  int v29; // eax
  __int64 v30; // r8
  __int128 v31; // [rsp+30h] [rbp-50h]
  struct tagRECT v32; // [rsp+40h] [rbp-40h] BYREF
  __int128 v33; // [rsp+50h] [rbp-30h] BYREF

  v2 = 0;
  if ( !*((_QWORD *)this + 50) || !*((_QWORD *)this + 47) )
    return v2;
  v31 = 0LL;
  v33 = 0LL;
  if ( CThumbnailVisual::_IsImmersiveIconic(this) )
  {
    *(_QWORD *)&v33 = 0LL;
    v18 = 0;
    v19 = *((_QWORD *)this + 48);
    v20 = *(_QWORD *)(v19 + 376);
    if ( v20 )
      v18 = *(_DWORD *)(v20 + 128);
    v21 = 0;
    *((float *)&v33 + 2) = (float)v18;
    v22 = *(_QWORD *)(v19 + 376);
    if ( v22 )
      v21 = *(_DWORD *)(v22 + 132);
    *((float *)&v33 + 3) = (float)v21;
    goto LABEL_18;
  }
  v3 = *((_QWORD *)this + 47);
  if ( (*(_BYTE *)(v3 + 36) & 2) != 0 )
  {
    for ( i = 0LL; i < 4; ++i )
      *((float *)&v33 + i) = (float)*(int *)(v3 + 4 * i + 56);
    LODWORD(v31) = *(_DWORD *)(v3 + 56);
    v24 = 0;
    if ( *(_DWORD *)(v3 + 64) - (int)v31 >= 0 )
      v24 = *(_DWORD *)(v3 + 64) - *(_DWORD *)(v3 + 56);
    DWORD1(v31) = *(_DWORD *)(v3 + 60);
    DWORD2(v31) = v24;
    v14 = *(_DWORD *)(v3 + 68) - DWORD1(v31);
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
    v32.right = v5;
    v32.bottom = v6;
    v32.left = v7;
    v32.top = v8;
    v9 = *(_QWORD *)(v3 + 24);
    if ( (*(_BYTE *)(v9 + 668) & 8) != 0
      && !*(_DWORD *)(v3 + 77)
      && v4[18] == 2
      && ((*(_DWORD *)(v9 + 116) & 0x1000000) != 0 || (*(_BYTE *)(v9 + 669) & 1) != 0) )
    {
      v32.right = v5 - *(_DWORD *)(v9 + 304) - *(_DWORD *)(v9 + 300);
      v32.bottom = v6 - *(_DWORD *)(v9 + 312) - *(_DWORD *)(v9 + 308);
    }
    if ( *(_BYTE *)(v3 + 32) )
    {
      v25 = v4[20];
      top = 0;
      v26 = v4[21];
      left = 0;
      *(_QWORD *)&v32.left = 0LL;
      v32.right = v25;
      v32.bottom = v26;
    }
    else
    {
      if ( *(HWND *)(*(_QWORD *)(*((_QWORD *)this + 47) + 24LL) + 40LL) == CWindowList::GetShellWindowForDesktop(
                                                                             *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance
                                                                             + 52),
                                                                             *(_QWORD *)(*(_QWORD *)(v3 + 24) + 136LL)) )
        ShiftViewPortOrigin(&v32);
      left = v32.left;
      top = v32.top;
    }
    for ( j = 0LL; j < 16; j += 4LL )
      *(float *)((char *)&v33 + j) = (float)*(int *)((char *)&v32.left + j);
    v13 = 0;
    *(_QWORD *)&v31 = __PAIR64__(top, left);
    if ( v32.right - left >= 0 )
      v13 = v32.right - left;
    DWORD2(v31) = v13;
    v14 = 0;
    if ( v32.bottom - top >= 0 )
      v14 = v32.bottom - top;
  }
  HIDWORD(v31) = v14;
LABEL_18:
  if ( CThumbnailVisual::_IsThumbnailCVIStatic(this) )
  {
    v27 = *(__m128i *)((char *)this + 508);
    v28 = MulDiv(*((_DWORD *)this + 131) - v31, _mm_cvtsi128_si32(_mm_srli_si128(v27, 8)), *((_DWORD *)this + 133))
        + _mm_cvtsi128_si32(v27);
    v29 = MulDiv(
            *((_DWORD *)this + 132) - DWORD1(v31),
            _mm_cvtsi128_si32(_mm_srli_si128(v27, 12)),
            *((_DWORD *)this + 134));
    v30 = *((_QWORD *)this + 47);
    v32.left = v28 + *(_DWORD *)(v30 + 40);
    v32.top = v29 + _mm_cvtsi128_si32(_mm_srli_si128(v27, 4)) + *(_DWORD *)(v30 + 44);
    CVisual::SetOffset(this, (const struct tagPOINT *)&v32);
  }
  else
  {
    v15 = (CRectResourceProxy *)*((_QWORD *)this + 50);
    *(_OWORD *)((char *)this + 524) = v31;
    v16 = CRectResourceProxy::Update(v15, (const struct MilRectF *)&v33);
    v2 = v16;
    if ( v16 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v16, 0x3B0u);
  }
  return v2;
}
