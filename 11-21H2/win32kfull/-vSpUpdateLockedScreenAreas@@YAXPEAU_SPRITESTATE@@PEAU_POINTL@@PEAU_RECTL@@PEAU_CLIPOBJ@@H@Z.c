/*
 * XREFs of ?vSpUpdateLockedScreenAreas@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_RECTL@@PEAU_CLIPOBJ@@H@Z @ 0x1C0281544
 * Callers:
 *     ?vSpUpdateSpriteVisRgn@@YAXPEAUHDEV__@@K@Z @ 0x1C0049AEC (-vSpUpdateSpriteVisRgn@@YAXPEAUHDEV__@@K@Z.c)
 *     ?vSpRemoveAllSpriteOverlapPresents@@YAXPEAUHDEV__@@@Z @ 0x1C00B67C4 (-vSpRemoveAllSpriteOverlapPresents@@YAXPEAUHDEV__@@@Z.c)
 *     ?bSpBltFromScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C00FA780 (-bSpBltFromScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEA.c)
 *     ?vSpRedrawUncoveredArea@@YAXPEAVSPRITE@@PEAU_RECTL@@@Z @ 0x1C0155444 (-vSpRedrawUncoveredArea@@YAXPEAVSPRITE@@PEAU_RECTL@@@Z.c)
 *     ?bSpBltScreenToScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C027E220 (-bSpBltScreenToScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@.c)
 * Callees:
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C002AF64 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?INVOKEOFFCOPYBITS@@YAHPEAU_POINTL@@PEAU_SURFOBJ@@01PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@0@Z @ 0x1C0031174 (-INVOKEOFFCOPYBITS@@YAHPEAU_POINTL@@PEAU_SURFOBJ@@01PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@0@Z.c)
 *     ??0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C0085EEC (--0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ??1SPRITEDDIACCESS@@QEAA@XZ @ 0x1C0085FE0 (--1SPRITEDDIACCESS@@QEAA@XZ.c)
 *     ??0ENUMAREAS@@QEAA@PEAU_SPRITESTATE@@PEAU_RECTL@@K1@Z @ 0x1C0086B34 (--0ENUMAREAS@@QEAA@PEAU_SPRITESTATE@@PEAU_RECTL@@K1@Z.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C008E0D4 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ??1ENUMAREAS@@QEAA@XZ @ 0x1C00FAE0C (--1ENUMAREAS@@QEAA@XZ.c)
 *     ?bEnum@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@PEAU_RECTL@@@Z @ 0x1C00FAE48 (-bEnum@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@PEAU_RECTL@@@Z.c)
 *     ?bEnumLayers@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@@Z @ 0x1C015667C (-bEnumLayers@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@@Z.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 */

void __fastcall vSpUpdateLockedScreenAreas(
        struct _SPRITESTATE *a1,
        struct _POINTL *a2,
        struct _RECTL *a3,
        struct _CLIPOBJ *a4,
        int a5)
{
  __int64 v5; // rdi
  struct REGION *v9; // r15
  int v10; // eax
  struct SPRITE *v11; // rsi
  int v12; // ebx
  struct RGNOBJ *p_top; // rdx
  __int64 v14; // rbx
  __int64 v15; // rax
  int v16; // ecx
  __int64 v17; // rax
  struct _SURFOBJ *v18; // rdx
  int v19; // ecx
  __int64 v20; // rax
  int v21; // ecx
  __int64 v22; // rax
  struct _SURFOBJ *v23; // rdx
  int v24; // ecx
  struct SPRITE *v25; // [rsp+40h] [rbp-C0h] BYREF
  int v26; // [rsp+48h] [rbp-B8h]
  _QWORD v27[2]; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v28[2]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v29; // [rsp+70h] [rbp-90h] BYREF
  __int64 v30; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v31[96]; // [rsp+80h] [rbp-80h] BYREF
  struct _SPRITESTATE *v32[24]; // [rsp+E0h] [rbp-20h] BYREF
  struct _RECTL v33; // [rsp+1A0h] [rbp+A0h] BYREF
  struct _RECTL v34; // [rsp+1B0h] [rbp+B0h] BYREF
  struct _CLIPOBJ v35; // [rsp+1C0h] [rbp+C0h] BYREF
  __int64 v36; // [rsp+1F8h] [rbp+F8h]
  __int64 v37; // [rsp+210h] [rbp+110h]
  int v38; // [rsp+218h] [rbp+118h]
  int v39; // [rsp+240h] [rbp+140h]
  __int64 v40; // [rsp+250h] [rbp+150h]

  v5 = 0LL;
  v39 = 1;
  v25 = 0LL;
  v37 = 0LL;
  v38 = 0;
  v40 = 0LL;
  v33 = 0LL;
  v36 = 0LL;
  v34 = 0LL;
  RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v27);
  RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v27);
  RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v28);
  RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v28);
  v29 = *(_QWORD *)a1;
  SPRITEDDIACCESS::SPRITEDDIACCESS((SPRITEDDIACCESS *)v32, (struct PDEVOBJ *)&v29);
  v9 = 0LL;
  if ( v27[0] && v28[0] && bIntersect(a3, (const struct _RECTL *)((char *)a1 + 40), &v34) )
  {
    ENUMAREAS::ENUMAREAS((ENUMAREAS *)v31, a1, &v34, 0, 0LL);
    do
    {
      v10 = ENUMAREAS::bEnum((ENUMAREAS *)v31, &v25, &v33);
      v11 = v25;
      v12 = v10;
      v26 = v10;
      if ( v25 )
      {
        if ( !v9 )
        {
          if ( !a4 || (p_top = (struct RGNOBJ *)&a4[2].rclBounds.top, !a4->iDComplexity) )
          {
            RGNOBJ::vSet((RGNOBJ *)v28, (struct _RECTL *)((char *)a1 + 40));
            p_top = (struct RGNOBJ *)v28;
          }
          v30 = *((_QWORD *)a1 + 129);
          if ( !RGNOBJ::bMerge((RGNOBJ *)v27, p_top, (struct RGNOBJ *)&v30, 4u) )
            RGNOBJ::vSet((RGNOBJ *)v27);
          v9 = (struct REGION *)v27[0];
        }
        XCLIPOBJ::vSetup((XCLIPOBJ *)&v35, v9, (struct ERECTL *)&v33, 0);
        if ( !ERECTL::bEmpty((ERECTL *)&v35.rclBounds) )
        {
          while ( 1 )
          {
            v14 = 0LL;
            if ( !a5 )
              break;
            v15 = *((_QWORD *)a1 + 4);
            if ( v15 )
            {
              v16 = *(_DWORD *)(v15 + 88);
              if ( (v16 & 0x80004000) != 0 && (v16 & 0x200) == 0 )
              {
                v14 = v15 - 24;
                GreLockDisplayDevice(*(_QWORD *)(v15 - 24 + 48));
              }
            }
            v17 = *((_QWORD *)v11 + 20);
            v18 = (struct _SURFOBJ *)v17;
            if ( v17 )
            {
              v19 = *(_DWORD *)(v17 + 88);
              if ( (v19 & 0x80004000) != 0 && (v19 & 0x200) == 0 )
              {
                v5 = v17 - 24;
                GreLockDisplayDevice(*(_QWORD *)(v17 - 24 + 48));
                v18 = (struct _SURFOBJ *)*((_QWORD *)v11 + 20);
              }
            }
            INVOKEOFFCOPYBITS(
              (struct _POINTL *)v11 + 21,
              v18,
              &gptlZero,
              *((struct _SURFOBJ **)a1 + 4),
              &v35,
              0LL,
              &v33,
              (struct _POINTL *)&v33);
            if ( v5 )
              GreUnlockDisplayDevice(*(_QWORD *)(v5 + 48));
            v5 = 0LL;
            if ( v14 )
              GreUnlockDisplayDevice(*(_QWORD *)(v14 + 48));
            if ( !(unsigned int)ENUMAREAS::bEnumLayers((ENUMAREAS *)v31, &v25) )
              goto LABEL_41;
            v11 = v25;
          }
          v20 = *((_QWORD *)v11 + 20);
          if ( v20 )
          {
            v21 = *(_DWORD *)(v20 + 88);
            if ( (v21 & 0x80004000) != 0 && (v21 & 0x200) == 0 )
            {
              v14 = v20 - 24;
              GreLockDisplayDevice(*(_QWORD *)(v20 - 24 + 48));
            }
          }
          v22 = *((_QWORD *)a1 + 4);
          v23 = (struct _SURFOBJ *)v22;
          if ( v22 )
          {
            v24 = *(_DWORD *)(v22 + 88);
            if ( (v24 & 0x80004000) != 0 && (v24 & 0x200) == 0 )
            {
              v5 = v22 - 24;
              GreLockDisplayDevice(*(_QWORD *)(v22 - 24 + 48));
              v23 = (struct _SURFOBJ *)*((_QWORD *)a1 + 4);
            }
          }
          INVOKEOFFCOPYBITS(
            &gptlZero,
            v23,
            (struct _POINTL *)v11 + 21,
            *((struct _SURFOBJ **)v11 + 20),
            &v35,
            0LL,
            &v33,
            (struct _POINTL *)&v33);
          if ( v5 )
            GreUnlockDisplayDevice(*(_QWORD *)(v5 + 48));
          v5 = 0LL;
          if ( v14 )
            GreUnlockDisplayDevice(*(_QWORD *)(v14 + 48));
LABEL_41:
          v12 = v26;
        }
      }
    }
    while ( v12 );
    ENUMAREAS::~ENUMAREAS((ENUMAREAS *)v31);
  }
  SPRITEDDIACCESS::~SPRITEDDIACCESS(v32);
  RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v28);
  RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v27);
}
