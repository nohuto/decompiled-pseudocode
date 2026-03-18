/*
 * XREFs of pProcessDfbSurfacesInternal @ 0x1C0061CD0
 * Callers:
 *     pProcessDfbSurfaces2 @ 0x1C0061C30 (pProcessDfbSurfaces2.c)
 * Callees:
 *     ?bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z @ 0x1C001A590 (-bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C001BAA4 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ??0DLODCOBJ@@QEAA@XZ @ 0x1C001DADC (--0DLODCOBJ@@QEAA@XZ.c)
 *     ??1DLODCOBJ@@QEAA@XZ @ 0x1C001DB44 (--1DLODCOBJ@@QEAA@XZ.c)
 *     ??1SURFMEM@@QEAA@XZ @ 0x1C0025050 (--1SURFMEM@@QEAA@XZ.c)
 *     GreAcquireHmgrSemaphore @ 0x1C002DF20 (GreAcquireHmgrSemaphore.c)
 *     GreReleaseHmgrSemaphore @ 0x1C002E900 (GreReleaseHmgrSemaphore.c)
 *     vDynamicConvertNewSurfaceDCs @ 0x1C0061570 (vDynamicConvertNewSurfaceDCs.c)
 *     bMigrateSurfaceForConversion @ 0x1C0061D70 (bMigrateSurfaceForConversion.c)
 *     ?vLock@DEVLOCKOBJ@@QEAAXAEAVPDEVOBJ@@@Z @ 0x1C00628E0 (-vLock@DEVLOCKOBJ@@QEAAXAEAVPDEVOBJ@@@Z.c)
 *     ?vCleanupRedirectionSurface@@YAXPEAVSURFACE@@_N@Z @ 0x1C016F53C (-vCleanupRedirectionSurface@@YAXPEAVSURFACE@@_N@Z.c)
 */

SURFACE *__fastcall pProcessDfbSurfacesInternal(struct SURFACE *this)
{
  int v1; // eax
  SURFACE *v2; // rbx
  SURFACE *v3; // rsi
  int v5; // ecx
  __int64 v6; // rdx
  __int64 v7; // r8
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rdx
  int v14; // ecx
  int v15; // r8d
  __int64 v16; // rdx
  int v17; // r8d
  SURFACE *v18; // [rsp+60h] [rbp-69h] BYREF
  char v19; // [rsp+68h] [rbp-61h]
  int v20; // [rsp+6Ch] [rbp-5Dh]
  _DWORD v21[4]; // [rsp+70h] [rbp-59h] BYREF
  __int64 v22; // [rsp+80h] [rbp-49h]
  __int64 v23; // [rsp+88h] [rbp-41h]
  _BYTE v24[32]; // [rsp+90h] [rbp-39h] BYREF
  _BYTE v25[112]; // [rsp+B0h] [rbp-19h] BYREF
  __int64 v26; // [rsp+140h] [rbp+77h] BYREF

  v1 = *((_DWORD *)this + 28);
  v2 = 0LL;
  v3 = (SURFACE *)*((_QWORD *)this + 70);
  if ( (v1 & 0x80100000) != 0 )
    return 0LL;
  v5 = *((_DWORD *)this + 29) & 1;
  if ( !v5 && (v1 & 0x800) != 0 && *((_WORD *)this + 50) == 3 )
    return 0LL;
  v18 = 0LL;
  v19 = 0;
  v20 = 0;
  if ( !v3 )
  {
    v21[0] = *((_DWORD *)this + 24);
    v21[1] = *((_DWORD *)this + 14);
    v21[2] = *((_DWORD *)this + 15);
    v21[3] = 0;
    v23 = 1LL;
    v22 = 0LL;
    if ( v5 )
    {
      v9 = 1;
      if ( (*((_WORD *)this + 51) & 0x800) != 0 )
        v9 = 2049;
      LODWORD(v23) = v9;
    }
    if ( !(unsigned int)SURFMEM::bCreateDIB(
                          (SURFMEM *)&v18,
                          (struct _DEVBITMAPINFO *)v21,
                          0LL,
                          0LL,
                          0,
                          0LL,
                          0LL,
                          0,
                          1,
                          0,
                          0) )
      goto LABEL_21;
    v26 = *((_QWORD *)this + 6);
    DLODCOBJ::DLODCOBJ((DLODCOBJ *)v25);
    DEVLOCKOBJ::vLock((DEVLOCKOBJ *)v24, (struct PDEVOBJ *)&v26);
    GreAcquireHmgrSemaphore(v11, v10, v12);
    v3 = v18;
    if ( (*((_DWORD *)this + 29) & 1) != 0 )
      *((_DWORD *)v18 + 28) |= 0x800u;
    *((_QWORD *)v3 + 6) = *((_QWORD *)this + 6);
    GreReleaseHmgrSemaphore(v14, v13, v15);
    DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v24, v16, v17);
    DLODCOBJ::~DLODCOBJ((DLODCOBJ *)v25);
  }
  if ( !(unsigned int)bMigrateSurfaceForConversion(this, v3) )
  {
LABEL_21:
    if ( (*((_DWORD *)this + 29) & 1) != 0 )
      vCleanupRedirectionSurface(this, 0);
    goto LABEL_23;
  }
  if ( v18 )
    v19 |= 1u;
  v2 = v3;
LABEL_23:
  SURFMEM::~SURFMEM((SURFMEM *)&v18, v6, v7);
  return v2;
}
