/*
 * XREFs of ?CheckForDestinationChanges@CPresentationSurface@@IEAAXXZ @ 0x1800A7B9C
 * Callers:
 *     ?PrePresent@CPresentationSurface@@UEAAJPEAPEAUIUnknown@@@Z @ 0x1801B0070 (-PrePresent@CPresentationSurface@@UEAAJPEAPEAUIUnknown@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180095B40 (__security_check_cookie.c)
 *     ??9@YA_NAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@0@Z @ 0x1800A7FEC (--9@YA_NAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@.c)
 */

void __fastcall CPresentationSurface::CheckForDestinationChanges(CPresentationSurface *this)
{
  __int16 v1; // r11
  __int128 v2; // xmm6
  float v3; // xmm0_4
  CPresentationSurface *v4; // r8
  char v5; // r10
  float v6; // xmm0_4
  float v7; // xmm2_4
  float v8; // xmm3_4
  float v9; // xmm5_4
  unsigned int v10; // xmm1_4
  float v11; // xmm0_4
  unsigned int v12; // xmm4_4
  char v13; // r9
  char v14; // al
  char v15; // cl
  __int128 v16; // [rsp+20h] [rbp-38h] BYREF

  v1 = 0;
  v2 = 0LL;
  LODWORD(v3) = *((_DWORD *)this + 31) & _xmm;
  v4 = this;
  v5 = 0;
  v16 = 0LL;
  if ( v3 < 0.0000011920929 && COERCE_FLOAT(*((_DWORD *)this + 32) & _xmm) < 0.0000011920929 )
  {
    v6 = *((float *)this + 34);
    v5 = 1;
    v7 = *((float *)this + 33);
    v8 = *((float *)this + 35);
    v9 = (float)((float)*((int *)this + 25) * *((float *)this + 30)) + v6;
    *(float *)&v10 = (float)((float)*((int *)this + 27) * *((float *)this + 30)) + v6;
    v11 = (float)*((int *)this + 28);
    *(float *)&v12 = (float)((float)*((int *)this + 26) * v7) + v8;
    *(float *)&v16 = v9;
    *(_QWORD *)((char *)&v16 + 4) = __PAIR64__(v10, v12);
    *((float *)&v16 + 3) = (float)(v11 * v7) + v8;
    v2 = v16;
  }
  v13 = *((_BYTE *)this + 75);
  if ( v13 && (!*((_BYTE *)this + 77) || !v5 || (unsigned __int8)operator!=(&v16, (char *)this + 80, this)) )
    *((_BYTE *)v4 + 76) = 1;
  v14 = *((_BYTE *)v4 + 97);
  v15 = 2 * (*((_BYTE *)v4 + 76) & 1);
  *(_WORD *)((char *)v4 + 75) = v1;
  *((_BYTE *)v4 + 77) = v5;
  *((_BYTE *)v4 + 97) = v14 & 0xF9 | (2 * (v13 & 1 | v15));
  *((_OWORD *)v4 + 5) = v2;
}
