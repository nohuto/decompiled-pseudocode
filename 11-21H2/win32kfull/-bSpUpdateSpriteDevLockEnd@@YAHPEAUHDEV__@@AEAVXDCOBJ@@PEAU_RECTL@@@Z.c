/*
 * XREFs of ?bSpUpdateSpriteDevLockEnd@@YAHPEAUHDEV__@@AEAVXDCOBJ@@PEAU_RECTL@@@Z @ 0x1C0157970
 * Callers:
 *     ?GdiUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@@Z @ 0x1C01576DC (-GdiUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@@Z.c)
 * Callees:
 *     ?bSpUpdateSprite@@YAHPEAVSPRITE@@PEAUHDC__@@PEAU_POINTL@@PEAUtagSIZE@@12KPEAU_BLENDFUNCTION@@KPEAU_RECTL@@@Z @ 0x1C00857A4 (-bSpUpdateSprite@@YAHPEAVSPRITE@@PEAUHDC__@@PEAU_POINTL@@PEAUtagSIZE@@12KPEAU_BLENDFUNCTION@@KPE.c)
 *     ?pSpGetSprite@@YAPEAVSPRITE@@PEAU_SPRITESTATE@@PEAUHWND__@@PEAX@Z @ 0x1C00B628C (-pSpGetSprite@@YAPEAVSPRITE@@PEAU_SPRITESTATE@@PEAUHWND__@@PEAX@Z.c)
 *     ?pSpGetMetaSprite@@YAPEAU_METASPRITE@@PEBU_SPRITESTATE@@PEAUHWND__@@PEAX_N@Z @ 0x1C027F8E8 (-pSpGetMetaSprite@@YAPEAU_METASPRITE@@PEBU_SPRITESTATE@@PEAUHWND__@@PEAX_N@Z.c)
 */

__int64 __fastcall bSpUpdateSpriteDevLockEnd(_DWORD *a1, HDC **a2, struct _RECTL *a3)
{
  unsigned int v3; // ebx
  unsigned int v6; // edi
  HDEV v7; // rsi
  struct tagSIZE v8; // rax
  HWND v9; // rdx
  struct SPRITE *Sprite; // rcx
  HDC *v11; // r10
  int v13; // r9d
  int v14; // r11d
  struct _METASPRITE *MetaSprite; // r13
  unsigned int v16; // r14d
  struct tagSIZE v17; // [rsp+80h] [rbp+8h] BYREF

  v3 = 0;
  v6 = 0;
  if ( (a1[10] & 0x400) == 0 )
  {
    v7 = (HDEV)(a1 + 20);
    v8 = (struct tagSIZE)(*a2)[64];
    v9 = (HWND)(*a2)[59];
    v17 = v8;
    if ( a1[35] )
    {
      MetaSprite = pSpGetMetaSprite((const struct _SPRITESTATE *)v7, v9, 0LL, 0);
      if ( MetaSprite )
      {
        v6 = v13 + 1;
        v16 = 0;
        if ( v14 )
        {
          do
            v6 &= bSpUpdateSprite(
                    *((struct SPRITE **)MetaSprite + v16++ + 3),
                    0LL,
                    0LL,
                    &v17,
                    **a2,
                    &gptlZero,
                    0,
                    0LL,
                    0x40200000u,
                    a3);
          while ( v16 < *((_DWORD *)v7 + 15) );
        }
      }
    }
    else
    {
      Sprite = pSpGetSprite((struct _SPRITESTATE *)v7, v9, 0LL);
      if ( Sprite )
        return (unsigned int)bSpUpdateSprite(Sprite, 0LL, 0LL, &v17, *v11, &gptlZero, 0, 0LL, 0x40200000u, a3);
    }
    return v6;
  }
  return v3;
}
