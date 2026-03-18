/*
 * XREFs of ?GdiHintSpriteShapeDelayDelete@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHBITMAP__@@H@Z @ 0x1C027C114
 * Callers:
 *     ?vClearRendering@DC@@QEAAXXZ @ 0x1C00357C0 (-vClearRendering@DC@@QEAAXXZ.c)
 * Callees:
 *     ?pSpHintSpriteShape@@YAHPEAVSPRITE@@PEAUHBITMAP__@@H@Z @ 0x1C00B604C (-pSpHintSpriteShape@@YAHPEAVSPRITE@@PEAUHBITMAP__@@H@Z.c)
 *     ?pSpGetMetaSprite@@YAPEAU_METASPRITE@@PEBU_SPRITESTATE@@PEAUHWND__@@PEAX_N@Z @ 0x1C027F8E8 (-pSpGetMetaSprite@@YAPEAU_METASPRITE@@PEBU_SPRITESTATE@@PEAUHWND__@@PEAX_N@Z.c)
 *     ?pSpGetSpriteDelayDelete@@YAPEAVSPRITE@@PEAU_SPRITESTATE@@PEAUHWND__@@PEAX@Z @ 0x1C027F93C (-pSpGetSpriteDelayDelete@@YAPEAVSPRITE@@PEAU_SPRITESTATE@@PEAUHWND__@@PEAX@Z.c)
 */

__int64 __fastcall GdiHintSpriteShapeDelayDelete(HDEV a1, HWND a2, HSURF a3)
{
  unsigned int v5; // edi
  HDEV v6; // r15
  int v7; // r14d
  const struct _SPRITESTATE *v8; // rcx
  struct _METASPRITE *MetaSprite; // rsi
  int v10; // r10d
  __int64 v11; // rbx
  struct SPRITE *v12; // rcx
  int v13; // r12d
  unsigned int v14; // edx
  int v15; // eax
  int v16; // ecx
  unsigned int v17; // eax
  struct SPRITE *v18; // rsi
  int v19; // ebx
  _BYTE v21[56]; // [rsp+20h] [rbp-38h] BYREF
  HDEV v22; // [rsp+60h] [rbp+8h] BYREF

  v22 = a1;
  v5 = 0;
  SPRITELOCK::SPRITELOCK((SPRITELOCK *)v21, (struct PDEVOBJ *)&v22);
  v6 = v22;
  v7 = 0;
  v8 = (const struct _SPRITESTATE *)(v22 + 20);
  if ( *((_DWORD *)v22 + 35) )
  {
    MetaSprite = pSpGetMetaSprite(v8, a2, 0LL, 1);
    if ( MetaSprite )
    {
      LODWORD(v11) = 0;
      if ( v10 )
      {
        do
        {
          v12 = (struct SPRITE *)*((_QWORD *)MetaSprite + (unsigned int)v11 + 3);
          v13 = *(_DWORD *)v12 & 0x200;
          v14 = pSpHintSpriteShape(v12, a3, 0);
          if ( !v14 )
          {
            while ( (_DWORD)v11 )
            {
              v11 = (unsigned int)(v11 - 1);
              pSpHintSpriteShape(*((struct SPRITE **)MetaSprite + v11 + 3), 0LL, 0);
            }
            goto LABEL_19;
          }
          if ( !v13 && (**((_DWORD **)MetaSprite + (unsigned int)v11 + 3) & 0x200) != 0 )
            v7 = 1;
          LODWORD(v11) = v11 + 1;
        }
        while ( (unsigned int)v11 < *((_DWORD *)v6 + 35) );
        v5 = v14;
        v15 = *((_DWORD *)MetaSprite + 4);
        v16 = v15 | 0x40;
        v17 = v15 & 0xFFFFFFBF;
        if ( !a3 )
          v16 = v17;
        *((_DWORD *)MetaSprite + 4) = v16;
        if ( v7 == 1 )
          goto LABEL_18;
      }
    }
  }
  else
  {
    v18 = pSpGetSpriteDelayDelete(v8, a2, 0LL);
    v19 = *(_DWORD *)v18;
    v5 = pSpHintSpriteShape(v18, a3, 0);
    if ( (v19 & 0x200) == 0 && _bittest((const signed __int32 *)v18, 9u) )
LABEL_18:
      _InterlockedAdd(&glDelayedHintShape, 1u);
  }
LABEL_19:
  SPRITELOCK::~SPRITELOCK((SPRITELOCK *)v21);
  return v5;
}
