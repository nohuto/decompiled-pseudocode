/*
 * XREFs of ?vSpRedrawAreaExMirror@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z @ 0x1C0281178
 * Callers:
 *     ?bSpBltFromScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C00FA780 (-bSpBltFromScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEA.c)
 * Callees:
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C00228A4 (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     ??0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C00228D8 (--0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C002AF64 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?INVOKEOFFCOPYBITS@@YAHPEAU_POINTL@@PEAU_SURFOBJ@@01PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@0@Z @ 0x1C0031174 (-INVOKEOFFCOPYBITS@@YAHPEAU_POINTL@@PEAU_SURFOBJ@@01PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@0@Z.c)
 *     ??0ENUMAREAS@@QEAA@PEAU_SPRITESTATE@@PEAU_RECTL@@K1@Z @ 0x1C0086B34 (--0ENUMAREAS@@QEAA@PEAU_SPRITESTATE@@PEAU_RECTL@@K1@Z.c)
 *     ?vSpDeleteSurface@@YAXPEAU_SURFOBJ@@@Z @ 0x1C00B589C (-vSpDeleteSurface@@YAXPEAU_SURFOBJ@@@Z.c)
 *     ??1ENUMAREAS@@QEAA@XZ @ 0x1C00FAE0C (--1ENUMAREAS@@QEAA@XZ.c)
 *     ?bEnum@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@PEAU_RECTL@@@Z @ 0x1C00FAE48 (-bEnum@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@PEAU_RECTL@@@Z.c)
 *     ?vSpComposite@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C0155F90 (-vSpComposite@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ??1ECLIPOBJTMPIFNEEDED@@QEAA@XZ @ 0x1C01564F0 (--1ECLIPOBJTMPIFNEEDED@@QEAA@XZ.c)
 *     ?vSetup@ECLIPOBJTMPIFNEEDED@@QEAAXHPEAVREGION@@AEAVERECTL@@H@Z @ 0x1C015660C (-vSetup@ECLIPOBJTMPIFNEEDED@@QEAAXHPEAVREGION@@AEAVERECTL@@H@Z.c)
 *     ?bEnumLayers@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@@Z @ 0x1C015667C (-bEnumLayers@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@@Z.c)
 *     ?psoSpGetComposite@@YAPEAU_SURFOBJ@@PEAU_SPRITESTATE@@PEAU_RECTL@@PEAK@Z @ 0x1C01566D4 (-psoSpGetComposite@@YAPEAU_SURFOBJ@@PEAU_SPRITESTATE@@PEAU_RECTL@@PEAK@Z.c)
 *     ?bAdvanceToTopMostOpaqueLayer@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@@Z @ 0x1C0156854 (-bAdvanceToTopMostOpaqueLayer@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@@Z.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     ?bConcurrent@@YAHPEAU_SPRITESTATE@@@Z @ 0x1C027DD30 (-bConcurrent@@YAHPEAU_SPRITESTATE@@@Z.c)
 *     ?vSpWriteToExMirror@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C0281FF4 (-vSpWriteToExMirror@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 */

void __fastcall vSpRedrawAreaExMirror(struct _SPRITESTATE *a1, struct _RECTL *a2)
{
  __int64 v2; // rax
  struct REGION *v5; // rbx
  int v6; // eax
  __int64 v7; // rax
  __int64 v8; // rbx
  int v9; // ecx
  __int64 v10; // rax
  __int64 v11; // rdi
  struct _SURFOBJ *v12; // rdx
  int v13; // ecx
  int v14; // r12d
  struct _SURFOBJ *Composite; // r14
  __int64 v16; // rdi
  struct SPRITE *v17; // r15
  __int64 v18; // rax
  int v19; // ecx
  int hsurf; // eax
  PVOID *p_pvScan0; // rbx
  ULONG StartingIndex; // [rsp+40h] [rbp-C0h] BYREF
  struct SPRITE *v23; // [rsp+48h] [rbp-B8h] BYREF
  struct _POINTL v24; // [rsp+50h] [rbp-B0h] BYREF
  char v25[8]; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE v26[96]; // [rsp+60h] [rbp-A0h] BYREF
  struct _RECTL v27; // [rsp+C0h] [rbp-40h] BYREF
  struct _CLIPOBJ v28; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v29; // [rsp+108h] [rbp+8h]
  __int64 v30; // [rsp+120h] [rbp+20h]
  int v31; // [rsp+128h] [rbp+28h]
  int v32; // [rsp+150h] [rbp+50h]
  __int64 v33; // [rsp+160h] [rbp+60h]
  int v34; // [rsp+168h] [rbp+68h]

  v2 = *(_QWORD *)a1;
  v24 = 0LL;
  v27 = 0LL;
  v23 = 0LL;
  if ( (*(_DWORD *)(v2 + 40) & 0x400) == 0 )
  {
    v5 = (struct REGION *)*((_QWORD *)a1 + 87);
    v30 = 0LL;
    v31 = 0;
    v32 = 1;
    v33 = 0LL;
    v29 = 0LL;
    v34 = 0;
    v6 = bConcurrent(a1);
    ECLIPOBJTMPIFNEEDED::vSetup((ECLIPOBJTMPIFNEEDED *)&v28, v6, v5, (struct ERECTL *)a2, 0);
    if ( !ERECTL::bEmpty((ERECTL *)&v28.rclBounds) )
    {
      v7 = *((_QWORD *)a1 + 4);
      v8 = 0LL;
      if ( v7 )
      {
        v9 = *(_DWORD *)(v7 + 88);
        if ( (v9 & 0x80004000) != 0 && (v9 & 0x200) == 0 )
        {
          v8 = v7 - 24;
          GreLockDisplayDevice(*(_QWORD *)(v7 - 24 + 48));
        }
      }
      v10 = *((_QWORD *)a1 + 166);
      v11 = 0LL;
      v12 = (struct _SURFOBJ *)v10;
      if ( v10 )
      {
        v13 = *(_DWORD *)(v10 + 88);
        if ( (v13 & 0x80004000) != 0 && (v13 & 0x200) == 0 )
        {
          v11 = v10 - 24;
          GreLockDisplayDevice(*(_QWORD *)(v10 - 24 + 48));
          v12 = (struct _SURFOBJ *)*((_QWORD *)a1 + 166);
        }
      }
      INVOKEOFFCOPYBITS(
        &gptlZero,
        v12,
        &gptlZero,
        *((struct _SURFOBJ **)a1 + 4),
        &v28,
        0LL,
        (struct _RECTL *)((char *)a1 + 40),
        &gptlZero);
      if ( v11 )
        GreUnlockDisplayDevice(*(_QWORD *)(v11 + 48));
      if ( v8 )
        GreUnlockDisplayDevice(*(_QWORD *)(v8 + 48));
    }
    ENUMAREAS::ENUMAREAS((ENUMAREAS *)v26, a1, a2, 0, 0LL);
    do
    {
      v14 = ENUMAREAS::bEnum((ENUMAREAS *)v26, &v23, &v27);
      if ( v23 && !(unsigned int)ENUMAREAS::bAdvanceToTopMostOpaqueLayer((ENUMAREAS *)v26, &v23) )
      {
        StartingIndex = 0;
        Composite = psoSpGetComposite(a1, &v27, &StartingIndex);
        if ( !Composite )
          break;
        v16 = 0LL;
        v17 = v23;
        v24.x = -v27.left;
        v24.y = -v27.top;
        v18 = *((_QWORD *)v23 + 20);
        if ( v18 )
        {
          v19 = *(_DWORD *)(v18 + 88);
          if ( (v19 & 0x80004000) != 0 && (v19 & 0x200) == 0 )
          {
            v16 = v18 - 24;
            GreLockDisplayDevice(*(_QWORD *)(v18 - 24 + 48));
          }
        }
        hsurf = (int)Composite[1].hsurf;
        p_pvScan0 = 0LL;
        if ( (hsurf & 0x80004000) != 0 && (hsurf & 0x200) == 0 )
        {
          p_pvScan0 = &Composite[-1].pvScan0;
          GreLockDisplayDevice(Composite->hdev);
        }
        INVOKEOFFCOPYBITS(
          &v24,
          Composite,
          (struct _POINTL *)v17 + 21,
          *((struct _SURFOBJ **)v17 + 20),
          0LL,
          0LL,
          &v27,
          (struct _POINTL *)&v27);
        if ( p_pvScan0 )
          GreUnlockDisplayDevice(p_pvScan0[6]);
        if ( v16 )
          GreUnlockDisplayDevice(*(_QWORD *)(v16 + 48));
        while ( 1 )
        {
          if ( (*(_DWORD *)v17 & 0x100) == 0 )
            vSpComposite(v17, &v24, Composite, &v27);
          if ( !(unsigned int)ENUMAREAS::bEnumLayers((ENUMAREAS *)v26, &v23) )
            break;
          v17 = v23;
        }
        vSpWriteToExMirror(a1, &v24, Composite, &v27);
        if ( StartingIndex == -1 )
        {
          vSpDeleteSurface(Composite);
        }
        else
        {
          PUSHLOCKEX::PUSHLOCKEX((PUSHLOCKEX *)v25, (struct _SPRITESTATE *)((char *)a1 + 688));
          RtlClearBits((PRTL_BITMAP)((char *)a1 + 664), StartingIndex, 1u);
          PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)v25);
        }
      }
    }
    while ( v14 );
    ENUMAREAS::~ENUMAREAS((ENUMAREAS *)v26);
    ECLIPOBJTMPIFNEEDED::~ECLIPOBJTMPIFNEEDED((REGION **)&v28);
  }
}
