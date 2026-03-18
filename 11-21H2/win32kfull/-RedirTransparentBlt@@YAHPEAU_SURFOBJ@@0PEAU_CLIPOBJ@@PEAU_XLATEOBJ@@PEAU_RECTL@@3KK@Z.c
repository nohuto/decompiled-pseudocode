/*
 * XREFs of ?RedirTransparentBlt@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3KK@Z @ 0x1C029C2B0
 * Callers:
 *     <none>
 * Callees:
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C002CEF0 (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C003FD70 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ??0DLODCOBJ@@QEAA@XZ @ 0x1C0041980 (--0DLODCOBJ@@QEAA@XZ.c)
 *     EngTransparentBlt @ 0x1C0111310 (EngTransparentBlt.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C015D384 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0160250 (_guard_dispatch_icall_nop.c)
 *     ??0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z @ 0x1C0297B30 (--0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z.c)
 *     ?GetDevBitmap@@YAPEAU_SURFOBJ@@PEAU_DISPSURF@@PEAU1@@Z @ 0x1C0299790 (-GetDevBitmap@@YAPEAU_SURFOBJ@@PEAU_DISPSURF@@PEAU1@@Z.c)
 *     ??0REDIROPEN@@QEAA@PEAU_SURFOBJ@@@Z @ 0x1C029A018 (--0REDIROPEN@@QEAA@PEAU_SURFOBJ@@@Z.c)
 *     ?bMakeOpaque@@YAHPEAVSURFACE@@@Z @ 0x1C029C510 (-bMakeOpaque@@YAHPEAVSURFACE@@@Z.c)
 */

__int64 __fastcall RedirTransparentBlt(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        CLIPOBJ *pco,
        XLATEOBJ *pxlo,
        RECTL *prclDst,
        RECTL *prclSrc,
        ULONG iTransColor,
        ULONG a8)
{
  ULONG ulReserved; // r13d
  __int64 HDEV; // rbx
  int v14; // eax
  struct _DISPSURF *i; // rdi
  __int64 v16; // r10
  struct _SURFOBJ *DevBitmap; // rbx
  struct _SURFOBJ *v18; // rax
  __int64 v19; // r10
  unsigned int v20; // r8d
  __int64 v22; // [rsp+58h] [rbp-79h] BYREF
  struct SURFACE *v23; // [rsp+60h] [rbp-71h] BYREF
  struct SURFACE *v24; // [rsp+68h] [rbp-69h] BYREF
  __int128 v25; // [rsp+78h] [rbp-59h] BYREF
  __int64 v26; // [rsp+88h] [rbp-49h]
  int v27; // [rsp+90h] [rbp-41h]
  _QWORD v28[2]; // [rsp+98h] [rbp-39h] BYREF
  _BYTE v29[40]; // [rsp+A8h] [rbp-29h] BYREF
  __int64 v30; // [rsp+D0h] [rbp-1h]
  __int64 v31; // [rsp+D8h] [rbp+7h]
  __int64 v32; // [rsp+118h] [rbp+47h] BYREF

  REDIROPEN::REDIROPEN((REDIROPEN *)&v24, a1);
  REDIROPEN::REDIROPEN((REDIROPEN *)&v23, a2);
  ulReserved = a8;
  if ( a1 )
  {
    if ( ((__int64)a1[1].hsurf & 0x800) != 0 )
    {
      HDEV = UserGetHDEV();
      if ( HDEV )
      {
        DLODCOBJ::DLODCOBJ((DLODCOBJ *)v28);
        v31 = 0LL;
        v30 = 0LL;
        v28[0] = 0LL;
        v14 = *(_DWORD *)(HDEV + 40);
        v25 = 0LL;
        v27 = 1;
        if ( (v14 & 1) != 0 )
        {
          *(_QWORD *)&v25 = *(_QWORD *)(HDEV + 48);
          v26 = HDEV;
          GreAcquireSemaphore(v25);
          EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemTrg", v25, 11LL);
          v14 = *(_DWORD *)(HDEV + 40);
        }
        if ( (v14 & 0x20000) != 0 )
        {
          for ( i = **(struct _DISPSURF ***)(HDEV + 1768); i; i = *(struct _DISPSURF **)i )
          {
            v16 = *((_QWORD *)i + 6);
            v32 = v16;
            if ( v16 )
            {
              if ( (*(_DWORD *)(v16 + 1792) & 0x8000000) != 0 && (*(_DWORD *)(v16 + 2096) & 0x8000) != 0 )
              {
                if ( *(_QWORD *)(*(_QWORD *)(v16 + 1760) + 656LL) )
                {
                  MARK_ACCDRV_NOTIFICATION::MARK_ACCDRV_NOTIFICATION(
                    (MARK_ACCDRV_NOTIFICATION *)&v22,
                    (struct PDEVOBJ *)&v32,
                    a1);
                  DevBitmap = GetDevBitmap(i, a2);
                  v18 = GetDevBitmap(i, a1);
                  (*(void (__fastcall **)(struct _SURFOBJ *, struct _SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, ULONG, ULONG))(*(_QWORD *)(v19 + 1760) + 656LL))(
                    v18,
                    DevBitmap,
                    pco,
                    pxlo,
                    prclDst,
                    prclSrc,
                    iTransColor,
                    ulReserved);
                  if ( v22 )
                    *(_WORD *)(v22 + 78) &= ~0x8000u;
                }
              }
            }
          }
        }
        DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)&v25);
        if ( v28[0] )
          DLODCOBJ::vUnlock((DLODCOBJ *)v28);
        UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v29);
      }
    }
  }
  v20 = EngTransparentBlt(a1, a2, pco, pxlo, prclDst, prclSrc, iTransColor, ulReserved);
  if ( v23 )
    bMakeOpaque(v23);
  if ( v24 )
    bMakeOpaque(v24);
  return v20;
}
