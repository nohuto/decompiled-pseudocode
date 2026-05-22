/*
 * XREFs of ?GetOcclusionRect@CVirtualSurface@DirectComposition@@QEAA_NPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800B58E4
 * Callers:
 *     ?GetOcclusionRect@CVirtualSurfacePrimitive@DirectComposition@@UEAA_NPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180089DE0 (-GetOcclusionRect@CVirtualSurfacePrimitive@DirectComposition@@UEAA_NPEAV-$TMilRect_@MUMilRectF@@.c)
 * Callees:
 *     ?StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x1800816D8 (-StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 */

bool __fastcall DirectComposition::CVirtualSurface::GetOcclusionRect(__int64 a1, _OWORD *a2)
{
  _OWORD *v2; // r11
  __int64 v3; // r10
  _DWORD *v4; // r8
  int v5; // eax
  int *v6; // r8
  FastRegion::Internal::CRgnData *v7; // rcx
  __int64 v8; // rcx
  int v9; // edx
  int v10; // r9d
  __m128 v12; // [rsp+20h] [rbp-40h]
  _DWORD *v13; // [rsp+30h] [rbp-30h] BYREF
  __int128 v14; // [rsp+38h] [rbp-28h]
  FastRegion::Internal::CRgnData *v15; // [rsp+48h] [rbp-18h]
  int v16; // [rsp+50h] [rbp-10h]
  int v17; // [rsp+54h] [rbp-Ch]

  v2 = a2;
  v3 = a1;
  if ( *(_BYTE *)(a1 + 120) )
  {
    if ( (*(_BYTE *)(a1 + 132) & 2) == 0 )
    {
      v4 = *(_DWORD **)(a1 + 136);
      v13 = v4;
      v5 = *v4;
      if ( *v4 )
      {
        v16 = 0;
        v6 = v4 + 3;
        *((_QWORD *)&v14 + 1) = v6;
        v7 = (FastRegion::Internal::CRgnData *)((char *)v6 + v6[1]);
        *(_QWORD *)&v14 = &v6[2 * v5 - 2];
        v15 = v7;
        v17 = ((__int64)v6 + v6[3] - (_QWORD)v7 + 8) >> 3;
        if ( v17 > 0 )
          goto LABEL_8;
        goto LABEL_6;
      }
      v14 = 0LL;
      while ( 1 )
      {
        v6 = (int *)*((_QWORD *)&v14 + 1);
LABEL_8:
        if ( (unsigned __int64)v6 >= (unsigned __int64)v14 )
          break;
        v8 = 2 * v16;
        v9 = *((_DWORD *)v15 + v8);
        v10 = *((_DWORD *)v15 + v8 + 1);
        v7 = (FastRegion::Internal::CRgnData *)(unsigned int)((v6[2] - *v6) * (v10 - v9));
        if ( (_DWORD)v7 )
        {
          v12.m128_f32[1] = (float)*v6;
          v12.m128_f32[0] = (float)v9;
          v12.m128_f32[3] = (float)v6[2];
          v12.m128_f32[2] = (float)v10;
          *(float *)(v3 + 208) = (float)v9;
          *(_DWORD *)(v3 + 212) = _mm_shuffle_ps(v12, v12, 85).m128_u32[0];
          *(_DWORD *)(v3 + 216) = _mm_shuffle_ps(v12, v12, 170).m128_u32[0];
          *(_DWORD *)(v3 + 220) = _mm_shuffle_ps(v12, v12, 255).m128_u32[0];
          *(_BYTE *)(v3 + 132) |= 2u;
        }
LABEL_6:
        FastRegion::Internal::CRgnData::StepIterator(v7, (struct FastRegion::CRegion::Iterator *)&v13);
      }
    }
    if ( (*(_BYTE *)(v3 + 132) & 2) != 0 )
      *v2 = *(_OWORD *)(v3 + 208);
  }
  return (*(_BYTE *)(v3 + 132) & 2) != 0;
}
