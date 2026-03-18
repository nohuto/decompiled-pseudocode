/*
 * XREFs of ?BmpDevPlgBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_POINTFIX@@PEAU_RECTL@@4K@Z @ 0x1C0298A50
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0160250 (_guard_dispatch_icall_nop.c)
 *     ??0BMPDEVOPEN@@QEAA@PEAU_SURFOBJ@@@Z @ 0x1C0297AF8 (--0BMPDEVOPEN@@QEAA@PEAU_SURFOBJ@@@Z.c)
 *     ??0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z @ 0x1C0297B30 (--0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z.c)
 *     ?GetDevBitmap@@YAPEAU_SURFOBJ@@PEAU_DISPSURF@@PEAU1@@Z @ 0x1C0299790 (-GetDevBitmap@@YAPEAU_SURFOBJ@@PEAU_DISPSURF@@PEAU1@@Z.c)
 *     ?bBmpMakeOpaque@@YAHPEAVSURFACE@@@Z @ 0x1C0299814 (-bBmpMakeOpaque@@YAHPEAVSURFACE@@@Z.c)
 */

__int64 __fastcall BmpDevPlgBlt(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _SURFOBJ *a3,
        struct _CLIPOBJ *a4,
        struct _XLATEOBJ *a5,
        struct tagCOLORADJUSTMENT *a6,
        struct _POINTL *a7,
        struct _POINTFIX *a8,
        struct _RECTL *a9,
        struct _POINTL *a10,
        unsigned int a11)
{
  unsigned int v15; // r14d
  BOOL (__stdcall *v16)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, POINTFIX *, RECTL *, POINTL *, ULONG); // rax
  __int64 HDEV; // rax
  struct _DISPSURF *i; // rsi
  __int64 v19; // r10
  int v20; // eax
  struct _SURFOBJ *DevBitmap; // rdi
  struct _SURFOBJ *v22; // rbx
  struct _SURFOBJ *v23; // rax
  __int64 v24; // r10
  __int64 v26; // [rsp+60h] [rbp-58h] BYREF
  __int64 v27; // [rsp+68h] [rbp-50h] BYREF
  struct SURFACE *v28; // [rsp+70h] [rbp-48h] BYREF
  struct SURFACE *v29; // [rsp+78h] [rbp-40h] BYREF
  struct SURFACE *v30; // [rsp+80h] [rbp-38h] BYREF

  v15 = 0;
  BMPDEVOPEN::BMPDEVOPEN((BMPDEVOPEN *)&v30, a1);
  BMPDEVOPEN::BMPDEVOPEN((BMPDEVOPEN *)&v29, a2);
  BMPDEVOPEN::BMPDEVOPEN((BMPDEVOPEN *)&v28, a3);
  if ( a1 )
  {
    v16 = ((__int64)a1[1].hsurf & 4) != 0
        ? (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, POINTFIX *, RECTL *, POINTL *, ULONG))*((_QWORD *)a1->hdev + 403)
        : EngPlgBlt;
    v15 = ((__int64 (__fastcall *)(struct _SURFOBJ *, struct _SURFOBJ *, struct _SURFOBJ *))v16)(a1, a2, a3);
    HDEV = UserGetHDEV();
    if ( HDEV )
    {
      if ( (*(_DWORD *)(HDEV + 40) & 0x20000000) != 0 )
      {
        for ( i = **(struct _DISPSURF ***)(HDEV + 1768); i; i = *(struct _DISPSURF **)i )
        {
          v19 = *((_QWORD *)i + 6);
          v26 = v19;
          if ( v19 )
          {
            if ( (*(_DWORD *)(v19 + 1792) & 0x8000000) != 0 )
            {
              v20 = *(_DWORD *)(v19 + 2096);
              if ( (v20 & 0x1000) != 0 && (v20 & 0x8000) != 0 )
              {
                if ( *(_QWORD *)(*(_QWORD *)(v19 + 1760) + 624LL) )
                {
                  MARK_ACCDRV_NOTIFICATION::MARK_ACCDRV_NOTIFICATION(
                    (MARK_ACCDRV_NOTIFICATION *)&v27,
                    (struct PDEVOBJ *)&v26,
                    a1);
                  DevBitmap = GetDevBitmap(i, a3);
                  v22 = GetDevBitmap(i, a2);
                  v23 = GetDevBitmap(i, a1);
                  (*(void (__fastcall **)(struct _SURFOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct tagCOLORADJUSTMENT *, struct _POINTL *, struct _POINTFIX *, struct _RECTL *, struct _POINTL *, unsigned int))(*(_QWORD *)(v24 + 1760) + 624LL))(
                    v23,
                    v22,
                    DevBitmap,
                    a4,
                    a5,
                    a6,
                    a7,
                    a8,
                    a9,
                    a10,
                    a11);
                  if ( v27 )
                    *(_WORD *)(v27 + 78) &= ~0x8000u;
                }
              }
            }
          }
        }
      }
    }
  }
  if ( v28 )
    bBmpMakeOpaque(v28);
  if ( v29 )
    bBmpMakeOpaque(v29);
  if ( v30 )
    bBmpMakeOpaque(v30);
  return v15;
}
