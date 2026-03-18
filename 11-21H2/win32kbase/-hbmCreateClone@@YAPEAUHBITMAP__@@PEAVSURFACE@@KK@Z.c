/*
 * XREFs of ?hbmCreateClone@@YAPEAUHBITMAP__@@PEAVSURFACE@@KK@Z @ 0x1C0063A90
 * Callers:
 *     GreCreatePatternBrushInternal @ 0x1C00634C0 (GreCreatePatternBrushInternal.c)
 * Callees:
 *     ?bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z @ 0x1C001A590 (-bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z.c)
 *     ??1SURFMEM@@QEAA@XZ @ 0x1C0025050 (--1SURFMEM@@QEAA@XZ.c)
 *     EngAcquireSemaphore @ 0x1C002DF70 (EngAcquireSemaphore.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C00826F0 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C0087C00 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     ?vUnlock@NEEDGRELOCK@@QEAAXXZ @ 0x1C0099D40 (-vUnlock@NEEDGRELOCK@@QEAAXXZ.c)
 *     ?vLock@NEEDGRELOCK@@QEAAXAEAVPDEVOBJ@@@Z @ 0x1C00A6910 (-vLock@NEEDGRELOCK@@QEAAXAEAVPDEVOBJ@@@Z.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall hbmCreateClone(struct SURFACE *a1, int a2, int a3)
{
  int v3; // eax
  __int64 *v5; // rax
  __int64 v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // r8
  bool v9; // zf
  struct _ERESOURCE *v10; // rdi
  int v12; // eax
  __int64 v13; // [rsp+60h] [rbp-29h] BYREF
  char v14; // [rsp+68h] [rbp-21h]
  int v15; // [rsp+6Ch] [rbp-1Dh]
  __int64 v16; // [rsp+70h] [rbp-19h] BYREF
  int v17; // [rsp+78h] [rbp-11h] BYREF
  int v18; // [rsp+7Ch] [rbp-Dh]
  int v19; // [rsp+80h] [rbp-9h]
  int v20; // [rsp+84h] [rbp-5h]
  __int64 v21; // [rsp+88h] [rbp-1h]
  int v22; // [rsp+90h] [rbp+7h]
  int v23; // [rsp+94h] [rbp+Bh]
  __int64 v24; // [rsp+98h] [rbp+Fh] BYREF
  __int64 v25; // [rsp+A0h] [rbp+17h] BYREF
  __int64 v26; // [rsp+A8h] [rbp+1Fh] BYREF
  int v27; // [rsp+B0h] [rbp+27h]
  int v28; // [rsp+B4h] [rbp+2Bh]

  v3 = *((_DWORD *)a1 + 24);
  v20 = 0;
  v23 = 0;
  v17 = v3;
  if ( a2 && a3 )
  {
    if ( *((_DWORD *)a1 + 14) < a2 )
      a2 = *((_DWORD *)a1 + 14);
    v12 = *((_DWORD *)a1 + 15);
    v18 = a2;
    if ( v12 < a3 )
      a3 = v12;
    v19 = a3;
  }
  else
  {
    v18 = *((_DWORD *)a1 + 14);
    v19 = *((_DWORD *)a1 + 15);
  }
  v5 = (__int64 *)*((_QWORD *)a1 + 16);
  v21 = 0LL;
  if ( v5 )
    v21 = *v5;
  v6 = 0LL;
  v22 = 1;
  v13 = 0LL;
  v14 = 0;
  v15 = 0;
  if ( (unsigned int)SURFMEM::bCreateDIB(
                       (SURFMEM *)&v13,
                       (struct _DEVBITMAPINFO *)&v17,
                       0LL,
                       0LL,
                       0,
                       0LL,
                       0LL,
                       0,
                       1,
                       0,
                       0) )
  {
    v9 = (*((_DWORD *)a1 + 28) & 0x4000) == 0;
    v10 = 0LL;
    v27 = v18;
    v28 = v19;
    v24 = 0LL;
    v26 = 0LL;
    v16 = 0LL;
    if ( !v9 )
    {
      v25 = *((_QWORD *)a1 + 6);
      v10 = *(struct _ERESOURCE **)(v25 + 48);
      NEEDGRELOCK::vLock((NEEDGRELOCK *)&v16, (struct PDEVOBJ *)&v25);
      EngAcquireSemaphore((HSEMAPHORE)v10);
      EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemDevLock", v10, 11LL);
    }
    if ( !qword_1C029B000
      || (int)qword_1C029B000() < 0
      || qword_1C029B008
      && (unsigned int)((__int64 (__fastcall *)(__int64, unsigned __int64, _QWORD, void *, __int64 *, __int64 *))qword_1C029B008)(
                         (v13 + 24) & -(__int64)(v13 != 0),
                         ((unsigned __int64)a1 + 24) & -(__int64)(a1 != 0LL),
                         0LL,
                         &xloIdent,
                         &v26,
                         &v24) )
    {
      v14 |= 1u;
      v6 = *(_QWORD *)(v13 + 32);
    }
    if ( v10 )
    {
      EtwTraceGreLockReleaseSemaphore(L"hsemDevLock", v10);
      ExReleaseResourceAndLeaveCriticalRegion(v10);
      PsLeavePriorityRegion();
      NEEDGRELOCK::vUnlock((NEEDGRELOCK *)&v16);
    }
    NEEDGRELOCK::vUnlock((NEEDGRELOCK *)&v16);
  }
  SURFMEM::~SURFMEM((SURFMEM *)&v13, v7, v8);
  return v6;
}
