/*
 * XREFs of ?GetBounds@CAtlasedRectsMesh@@QEBAXPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800D3B98
 * Callers:
 *     ?EnsureBounds@CAtlasedRectsGroup@@IEBAXXZ @ 0x1800D3948 (-EnsureBounds@CAtlasedRectsGroup@@IEBAXXZ.c)
 * Callees:
 *     ?UnionUnsafe@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x1800C9E90 (-UnionUnsafe@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 */

char __fastcall CAtlasedRectsMesh::GetBounds(__int64 a1, _OWORD *a2)
{
  __int64 v3; // r11
  __int64 v4; // rcx
  unsigned int v5; // ebx
  char result; // al
  float v7[6]; // [rsp+20h] [rbp-18h] BYREF

  v3 = a1;
  if ( *(_BYTE *)(a1 + 136) )
  {
    *(_DWORD *)(a1 + 124) = 0;
    v4 = a1 + 120;
    v5 = 0;
    *(_DWORD *)(v4 + 12) = 0;
    *(_DWORD *)(v4 + 8) = 0;
    for ( *(_DWORD *)v4 = 0; v5 < *(_DWORD *)(v3 + 68); ++v5 )
    {
      *(_OWORD *)v7 = *(_OWORD *)(*(_QWORD *)(v3 + 96) + 16LL * v5);
      result = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::UnionUnsafe((float *)v4, v7);
    }
    *(_BYTE *)(v3 + 136) = 0;
  }
  *a2 = *(_OWORD *)(v3 + 120);
  return result;
}
