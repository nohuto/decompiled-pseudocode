/*
 * XREFs of ?SpGradientFill@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAXKPEAU_RECTL@@PEAU_POINTL@@K@Z @ 0x1C00D6CD0
 * Callers:
 *     <none>
 * Callees:
 *     ??0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1C0031BF0 (--0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ?bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z @ 0x1C0032504 (-bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     OffGradientFill @ 0x1C00D6ECC (OffGradientFill.c)
 *     ?bRender@NEEDDDILOCK@@QEAAHPEAPEAU_CLIPOBJ@@@Z @ 0x1C00D77FC (-bRender@NEEDDDILOCK@@QEAAHPEAPEAU_CLIPOBJ@@@Z.c)
 *     ?bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z @ 0x1C00D9510 (-bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 */

__int64 __fastcall SpGradientFill(
        struct _SURFOBJ *a1,
        struct _CLIPOBJ *a2,
        struct _XLATEOBJ *a3,
        struct _TRIVERTEX *a4,
        unsigned int a5,
        void *a6,
        unsigned int a7,
        struct _RECTL *a8,
        struct _POINTL *a9,
        unsigned int a10)
{
  unsigned int v10; // r14d
  struct _SURFOBJ *v11; // rdi
  PVOID *p_pvScan0; // rbx
  PVOID *v13; // rsi
  int hsurf; // eax
  struct _CLIPOBJ *v15; // r15
  USHORT *p_iType; // rsi
  BOOL (__stdcall *v17)(SURFOBJ *, CLIPOBJ *, XLATEOBJ *, TRIVERTEX *, ULONG, PVOID, ULONG, RECTL *, POINTL *, ULONG); // rcx
  bool v18; // zf
  HDEV hdev; // rcx
  __int64 ThreadWin32Thread; // rax
  struct _SURFOBJ *v22; // [rsp+60h] [rbp-A0h] BYREF
  PVOID *v23; // [rsp+68h] [rbp-98h] BYREF
  struct _CLIPOBJ *v24; // [rsp+70h] [rbp-90h] BYREF
  struct _POINTL v25; // [rsp+78h] [rbp-88h] BYREF
  struct _POINTL *v26; // [rsp+80h] [rbp-80h]
  struct _RECTL *v27; // [rsp+88h] [rbp-78h]
  void *v28; // [rsp+90h] [rbp-70h]
  struct _TRIVERTEX *v29; // [rsp+98h] [rbp-68h]
  struct _XLATEOBJ *v30; // [rsp+A0h] [rbp-60h]
  _BYTE v31[912]; // [rsp+B0h] [rbp-50h] BYREF

  v10 = 1;
  v25 = 0LL;
  v30 = a3;
  v26 = a9;
  v28 = a6;
  v24 = a2;
  v29 = a4;
  v22 = a1;
  v27 = a8;
  ENUMUNDERLAYS::ENUMUNDERLAYS((ENUMUNDERLAYS *)v31, a1, a2, a8);
  while ( (unsigned int)ENUMUNDERLAYS::bEnum((ENUMUNDERLAYS *)v31, &v22, &v25, &v24) )
  {
    v11 = v22;
    p_pvScan0 = 0LL;
    v13 = 0LL;
    v23 = 0LL;
    if ( v22 )
    {
      hsurf = (int)v22[1].hsurf;
      if ( (hsurf & 0x80004000) != 0 && (hsurf & 0x200) == 0 )
      {
        p_pvScan0 = &v22[-1].pvScan0;
        hdev = v22->hdev;
        v23 = &v22[-1].pvScan0;
        GreLockDisplayDevice(hdev);
        v13 = &v11[-1].pvScan0;
      }
    }
    if ( !(unsigned int)NEEDDDILOCK::bRender((NEEDDDILOCK *)&v23, &v24) )
    {
      v18 = v13 == 0LL;
      goto LABEL_11;
    }
    v15 = v24;
    p_iType = &v11->iType;
    if ( v11->iType == 1 )
    {
      if ( (unsigned int)bAllowShareAccess(v11) )
      {
        if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
          && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
          && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
           || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108))
          && (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280) + 20LL) & 0x20000) != 0 )
        {
          ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
          p_pvScan0 = v23;
          v11 = v22;
          v17 = *(BOOL (__stdcall **)(SURFOBJ *, CLIPOBJ *, XLATEOBJ *, TRIVERTEX *, ULONG, PVOID, ULONG, RECTL *, POINTL *, ULONG))(*(_QWORD *)(ThreadWin32Thread + 280) + 136LL);
          goto LABEL_10;
        }
        p_pvScan0 = v23;
        v11 = v22;
      }
      if ( *p_iType == 1 && (unsigned int)bAllowShareAccess(v11) )
      {
        if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
          && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
          && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
           || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108)) )
        {
          p_pvScan0 = v23;
          v11 = v22;
LABEL_31:
          v17 = EngGradientFill;
          goto LABEL_10;
        }
        p_pvScan0 = v23;
        v11 = v22;
      }
    }
    if ( ((__int64)v11[1].hsurf & 0x20000) == 0 )
      goto LABEL_31;
    v17 = (BOOL (__stdcall *)(SURFOBJ *, CLIPOBJ *, XLATEOBJ *, TRIVERTEX *, ULONG, PVOID, ULONG, RECTL *, POINTL *, ULONG))*((_QWORD *)v11->hdev + 171);
LABEL_10:
    v10 &= OffGradientFill(v17, &v25, v11, v15, v30, v29, a5, v28, a7, v27, v26, a10);
    v18 = p_pvScan0 == 0LL;
LABEL_11:
    if ( !v18 )
      GreUnlockDisplayDevice(p_pvScan0[6]);
  }
  return v10;
}
