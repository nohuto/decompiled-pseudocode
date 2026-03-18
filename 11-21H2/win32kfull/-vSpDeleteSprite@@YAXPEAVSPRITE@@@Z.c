/*
 * XREFs of ?vSpDeleteSprite@@YAXPEAVSPRITE@@@Z @ 0x1C00B56F4
 * Callers:
 *     ?GdiCreateSprite@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@@Z @ 0x1C00B53EC (-GdiCreateSprite@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@@Z.c)
 *     ?GdiDeleteSprite@@YAJPEAUHDEV__@@PEAUHWND__@@PEAX@Z @ 0x1C00B5480 (-GdiDeleteSprite@@YAJPEAUHDEV__@@PEAUHWND__@@PEAX@Z.c)
 *     ?vSpDisableSprites@@YAXPEAUHDEV__@@W4_CLEANUPTYPE@@@Z @ 0x1C00B5568 (-vSpDisableSprites@@YAXPEAUHDEV__@@W4_CLEANUPTYPE@@@Z.c)
 *     vSpDynamicModeChange @ 0x1C00B7500 (vSpDynamicModeChange.c)
 *     ?GdiDeleteSpriteDelayDelete@@YAHPEAUHDEV__@@PEAUHWND__@@PEAX@Z @ 0x1C027BEC4 (-GdiDeleteSpriteDelayDelete@@YAHPEAUHDEV__@@PEAUHWND__@@PEAX@Z.c)
 *     ?GdiSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z @ 0x1C027C8A0 (-GdiSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z.c)
 *     ?pSpConvertSpriteFromMeta@@YAPEAVSPRITE@@PEAUHDEV__@@0PEAU_METASPRITE@@@Z @ 0x1C027F464 (-pSpConvertSpriteFromMeta@@YAPEAVSPRITE@@PEAUHDEV__@@0PEAU_METASPRITE@@@Z.c)
 *     ?pSpConvertSpriteToMeta@@YAPEAU_METASPRITE@@PEAUHDEV__@@0PEAVSPRITE@@@Z @ 0x1C027F62C (-pSpConvertSpriteToMeta@@YAPEAU_METASPRITE@@PEAUHDEV__@@0PEAVSPRITE@@@Z.c)
 *     ?pSpMoveSpriteFromMeta@@YAPEAVSPRITE@@PEAUHDEV__@@0PEAU_METASPRITE@@K@Z @ 0x1C027F970 (-pSpMoveSpriteFromMeta@@YAPEAVSPRITE@@PEAUHDEV__@@0PEAU_METASPRITE@@K@Z.c)
 *     ?pSpTransferMetaSprite@@YAPEAU_METASPRITE@@PEAUHDEV__@@0PEAU1@@Z @ 0x1C027FA4C (-pSpTransferMetaSprite@@YAPEAU_METASPRITE@@PEAUHDEV__@@0PEAU1@@Z.c)
 *     ?pSpTransferSprite@@YAPEAVSPRITE@@PEAUHDEV__@@PEAV1@@Z @ 0x1C027FE40 (-pSpTransferSprite@@YAPEAVSPRITE@@PEAUHDEV__@@PEAV1@@Z.c)
 * Callees:
 *     ??0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C0085EEC (--0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ??1SPRITEDDIACCESS@@QEAA@XZ @ 0x1C0085FE0 (--1SPRITEDDIACCESS@@QEAA@XZ.c)
 *     ?vSpDeleteExMirror@@YAXPEAUHDEV__@@@Z @ 0x1C00B56C8 (-vSpDeleteExMirror@@YAXPEAUHDEV__@@@Z.c)
 *     ?vSpDeleteSurface@@YAXPEAU_SURFOBJ@@@Z @ 0x1C00B589C (-vSpDeleteSurface@@YAXPEAU_SURFOBJ@@@Z.c)
 *     ?vSpDeleteShape@@YAXPEAVSPRITE@@@Z @ 0x1C00B58D8 (-vSpDeleteShape@@YAXPEAVSPRITE@@@Z.c)
 *     ?vSpFreeClipResources@@YAXPEAVSPRITE@@@Z @ 0x1C00B5910 (-vSpFreeClipResources@@YAXPEAVSPRITE@@@Z.c)
 *     ?bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z @ 0x1C00B7030 (-bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z.c)
 */

void __fastcall vSpDeleteSprite(struct SPRITE *a1)
{
  __int64 *v1; // rdi
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  struct _SURFOBJ **v9; // rsi
  __int64 v10; // rbp
  __int64 v11; // rcx
  struct _SPRITESTATE *v12[24]; // [rsp+20h] [rbp-C8h] BYREF
  _QWORD *v13; // [rsp+F0h] [rbp+8h] BYREF

  if ( a1 )
  {
    v1 = (__int64 *)*((_QWORD *)a1 + 2);
    v13 = (_QWORD *)*v1;
    if ( !gbGreSessionCleanup )
    {
      SPRITEDDIACCESS::SPRITEDDIACCESS((SPRITEDDIACCESS *)v12, (struct PDEVOBJ *)&v13);
      bSpUpdatePosition(a1, 0LL, 0, 0);
      SPRITEDDIACCESS::~SPRITEDDIACCESS(v12);
    }
    if ( (struct SPRITE *)v1[1] == a1 )
    {
      v3 = *((_QWORD *)a1 + 3);
      v1[1] = v3;
      v4 = *((_QWORD *)a1 + 3);
      if ( v4 )
      {
        *(_QWORD *)(v4 + 32) = 0LL;
        v3 = v1[1];
      }
      if ( !v3 )
        v1[2] = 0LL;
    }
    else
    {
      v11 = *((_QWORD *)a1 + 4);
      if ( (struct SPRITE *)v1[2] == a1 )
        v1[2] = v11;
      else
        *(_QWORD *)(*((_QWORD *)a1 + 3) + 32LL) = v11;
      *(_QWORD *)(*((_QWORD *)a1 + 4) + 24LL) = *((_QWORD *)a1 + 3);
    }
    v5 = *((_QWORD *)a1 + 5);
    v6 = *((_QWORD *)a1 + 6);
    if ( v5 )
      *(_QWORD *)(v5 + 48) = v6;
    if ( v6 )
      *(_QWORD *)(v6 + 40) = v5;
    else
      v1[3] = v5;
    if ( (*(_DWORD *)a1 & 0x100) != 0 )
      vSpDeleteExMirror((_QWORD *)*v1);
    vSpFreeClipResources(a1);
    REGION::vDeleteREGION(*((REGION **)a1 + 24));
    vSpDeleteShape(a1);
    vSpDeleteSurface(*((struct _SURFOBJ **)a1 + 20));
    v7 = *((_QWORD *)a1 + 15);
    if ( v7 )
    {
      bDeleteSurface(*(_QWORD *)(v7 + 8));
      *((_QWORD *)a1 + 15) = 0LL;
    }
    v8 = *((_QWORD *)a1 + 31);
    if ( v8 )
      Win32FreePool(v8);
    v9 = (struct _SURFOBJ **)(v1 + 19);
    v10 = 64LL;
    do
    {
      vSpDeleteSurface(*v9);
      *v9++ = 0LL;
      --v10;
    }
    while ( v10 );
    RtlClearAllBits((PRTL_BITMAP)(v1 + 83));
    Win32FreePool(a1);
  }
}
