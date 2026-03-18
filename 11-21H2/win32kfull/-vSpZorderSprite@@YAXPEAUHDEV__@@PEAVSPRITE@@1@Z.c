/*
 * XREFs of ?vSpZorderSprite@@YAXPEAUHDEV__@@PEAVSPRITE@@1@Z @ 0x1C00B62C0
 * Callers:
 *     ?GdiZorderSprite@@YAXPEAUHDEV__@@PEAUHWND__@@1@Z @ 0x1C00B61F4 (-GdiZorderSprite@@YAXPEAUHDEV__@@PEAUHWND__@@1@Z.c)
 *     ?GdiMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@H@Z @ 0x1C027C278 (-GdiMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@H@Z.c)
 * Callees:
 *     ??0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C0085EEC (--0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ??1SPRITEDDIACCESS@@QEAA@XZ @ 0x1C0085FE0 (--1SPRITEDDIACCESS@@QEAA@XZ.c)
 *     ?vSpRedrawSprite@@YAXPEAVSPRITE@@@Z @ 0x1C00B6430 (-vSpRedrawSprite@@YAXPEAVSPRITE@@@Z.c)
 *     ?vSpRemoveAllSpriteOverlapPresents@@YAXPEAUHDEV__@@@Z @ 0x1C00B67C4 (-vSpRemoveAllSpriteOverlapPresents@@YAXPEAUHDEV__@@@Z.c)
 *     ?vSpComputeSpriteRanges@@YAXPEAU_SPRITESTATE@@@Z @ 0x1C00B69FC (-vSpComputeSpriteRanges@@YAXPEAU_SPRITESTATE@@@Z.c)
 *     ?vSpRenumberZOrder@@YAXPEAU_SPRITESTATE@@@Z @ 0x1C00B6F6C (-vSpRenumberZOrder@@YAXPEAU_SPRITESTATE@@@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall vSpZorderSprite(HDEV a1, struct SPRITE *a2, struct SPRITE *a3)
{
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  struct _SPRITESTATE *v11[24]; // [rsp+20h] [rbp-C8h] BYREF
  HDEV v12; // [rsp+F0h] [rbp+8h] BYREF

  v12 = a1;
  SPRITEDDIACCESS::SPRITEDDIACCESS((SPRITEDDIACCESS *)v11, (struct PDEVOBJ *)&v12);
  v6 = *((_QWORD *)a1 + 11);
  if ( !a2 || !v6 )
    goto LABEL_13;
  if ( (struct SPRITE *)v6 == a2 )
  {
    *((_QWORD *)a1 + 11) = *(_QWORD *)(v6 + 24);
    v7 = *(_QWORD *)(v6 + 24);
    if ( v7 )
      *(_QWORD *)(v7 + 32) = 0LL;
    else
      *((_QWORD *)a1 + 12) = 0LL;
    *(_QWORD *)(v6 + 24) = 0LL;
    *(_QWORD *)(v6 + 32) = 0LL;
    if ( *((_QWORD *)a2 + 3) )
      goto LABEL_13;
  }
  else
  {
    v9 = *((_QWORD *)a2 + 4);
    if ( *((struct SPRITE **)a1 + 12) == a2 )
      *((_QWORD *)a1 + 12) = v9;
    else
      *(_QWORD *)(*((_QWORD *)a2 + 3) + 32LL) = v9;
    *(_QWORD *)(*((_QWORD *)a2 + 4) + 24LL) = *((_QWORD *)a2 + 3);
    *((_QWORD *)a2 + 3) = 0LL;
    *((_QWORD *)a2 + 4) = 0LL;
  }
  if ( !*((_QWORD *)a2 + 4) )
  {
    if ( a3 )
    {
      *((_QWORD *)a2 + 3) = *((_QWORD *)a3 + 3);
      v10 = *((_QWORD *)a3 + 3);
      if ( v10 )
        *(_QWORD *)(v10 + 32) = a2;
      *((_QWORD *)a3 + 3) = a2;
      *((_QWORD *)a2 + 4) = a3;
      if ( *((struct SPRITE **)a1 + 12) == a3 )
        *((_QWORD *)a1 + 12) = a2;
    }
    else
    {
      *((_QWORD *)a2 + 3) = *((_QWORD *)a1 + 11);
      v8 = *((_QWORD *)a1 + 11);
      if ( v8 )
        *(_QWORD *)(v8 + 32) = a2;
      else
        *((_QWORD *)a1 + 12) = a2;
      *((_QWORD *)a1 + 11) = a2;
    }
    vSpRenumberZOrder((struct _SPRITESTATE *)(a1 + 20));
    vSpRemoveAllSpriteOverlapPresents(a1);
    ++giSpriteUniqueness;
    *((_DWORD *)a1 + 49) = 0;
    vSpComputeSpriteRanges((struct _SPRITESTATE *)(a1 + 20));
    vSpRedrawSprite(a2);
  }
LABEL_13:
  SPRITEDDIACCESS::~SPRITEDDIACCESS(v11);
}
