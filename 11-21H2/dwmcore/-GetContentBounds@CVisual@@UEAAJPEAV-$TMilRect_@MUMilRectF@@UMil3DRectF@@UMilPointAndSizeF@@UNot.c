/*
 * XREFs of ?GetContentBounds@CVisual@@UEAAJPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180063160
 * Callers:
 *     ?GetContentBounds@CSpriteVisual@@UEAAJPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180062D40 (-GetContentBounds@CSpriteVisual@@UEAAJPEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF.c)
 *     ?GetContentBounds@CWindowNode@@UEAAJPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180062FA0 (-GetContentBounds@CWindowNode@@UEAAJPEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@.c)
 *     ?GetContentBounds@CCursorVisual@@UEAAJPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180211BC0 (-GetContentBounds@CCursorVisual@@UEAAJPEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?UnionUnsafe@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x1800C9E90 (-UnionUnsafe@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CVisual::GetContentBounds(char *a1, _DWORD *a2)
{
  unsigned int v2; // esi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __m128 v7; // xmm0
  float v8; // xmm1_4
  float v9; // xmm3_4
  float v10; // xmm2_4
  __int64 (__fastcall ***v12)(_QWORD, char *, _DWORD *); // rcx
  int v13; // eax
  unsigned int v14; // ecx
  __int64 i; // rcx
  _DWORD v16[4]; // [rsp+30h] [rbp-28h] BYREF

  v2 = 0;
  a2[3] = 0;
  a2[2] = 0;
  a2[1] = 0;
  *a2 = 0;
  v5 = *((_QWORD *)a1 + 32);
  if ( v5 )
  {
    v12 = (__int64 (__fastcall ***)(_QWORD, char *, _DWORD *))(v5 + 64 + *(int *)(*(_QWORD *)(v5 + 64) + 8LL));
    v13 = (**v12)(v12, a1 + 140, a2);
    v2 = v13;
    if ( v13 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0xE71u, 0LL);
  }
  if ( (*(unsigned __int8 (__fastcall **)(char *))(*(_QWORD *)a1 + 272LL))(a1) )
  {
    v6 = *((_QWORD *)a1 + 28);
    if ( (*(_DWORD *)(v6 + 4) & 0x100000) != 0 )
    {
      for ( i = v6 + 12; (*(_DWORD *)i & 0x7F000000) != 0xC000000; i += (*(_DWORD *)i & 0xFFFFFF) + 4LL )
        ;
      v7 = (__m128)_mm_loadu_si128((const __m128i *)(i + 4));
      LODWORD(v8) = _mm_shuffle_ps(v7, v7, 85).m128_u32[0];
      LODWORD(v9) = _mm_shuffle_ps(v7, v7, 170).m128_u32[0];
      LODWORD(v10) = _mm_shuffle_ps(v7, v7, 255).m128_u32[0];
    }
    else
    {
      v7.m128_i32[0] = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
      v8 = *((float *)&TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty + 1);
      v9 = *((float *)&TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty + 2);
      v10 = *((float *)&TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty + 3);
    }
    *(float *)&v16[3] = v10;
    *(float *)&v16[2] = v9;
    *(float *)&v16[1] = v8;
    v16[0] = v7.m128_i32[0];
    if ( v9 > v7.m128_f32[0] && v10 > v8 )
      TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::UnionUnsafe(a2, v16);
  }
  return v2;
}
