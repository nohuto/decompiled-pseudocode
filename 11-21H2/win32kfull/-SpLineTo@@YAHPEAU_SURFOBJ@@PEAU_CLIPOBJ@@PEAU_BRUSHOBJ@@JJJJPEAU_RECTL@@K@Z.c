/*
 * XREFs of ?SpLineTo@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@JJJJPEAU_RECTL@@K@Z @ 0x1C0147910
 * Callers:
 *     <none>
 * Callees:
 *     ??0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1C0031BF0 (--0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ?bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z @ 0x1C0032504 (-bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     ?bRender@NEEDDDILOCK@@QEAAHPEAPEAU_CLIPOBJ@@@Z @ 0x1C00D77FC (-bRender@NEEDDDILOCK@@QEAAHPEAPEAU_CLIPOBJ@@@Z.c)
 *     ?bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z @ 0x1C00D9510 (-bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z.c)
 *     OffLineTo @ 0x1C0147AEC (OffLineTo.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 */

__int64 __fastcall SpLineTo(
        struct _SURFOBJ *a1,
        struct _CLIPOBJ *a2,
        struct _BRUSHOBJ *a3,
        int a4,
        int a5,
        int a6,
        int a7,
        struct _RECTL *a8,
        unsigned int a9)
{
  unsigned int v9; // r14d
  struct _SURFOBJ *v10; // rdi
  PVOID *p_pvScan0; // rbx
  PVOID *v12; // rsi
  int hsurf; // eax
  struct _CLIPOBJ *v14; // r15
  USHORT *p_iType; // rsi
  BOOL (__stdcall *v16)(SURFOBJ *, CLIPOBJ *, BRUSHOBJ *, LONG, LONG, LONG, LONG, RECTL *, MIX); // rcx
  bool v17; // zf
  HDEV hdev; // rcx
  __int64 ThreadWin32Thread; // rax
  struct _SURFOBJ *v21; // [rsp+60h] [rbp-A0h] BYREF
  PVOID *v22; // [rsp+68h] [rbp-98h] BYREF
  struct _CLIPOBJ *v23; // [rsp+70h] [rbp-90h] BYREF
  int v24; // [rsp+78h] [rbp-88h]
  struct _POINTL v25; // [rsp+80h] [rbp-80h] BYREF
  struct _RECTL *v26; // [rsp+88h] [rbp-78h]
  struct _BRUSHOBJ *v27; // [rsp+90h] [rbp-70h]
  _BYTE v28[912]; // [rsp+A0h] [rbp-60h] BYREF

  v9 = 1;
  v25 = 0LL;
  v27 = a3;
  v23 = a2;
  v24 = a4;
  v21 = a1;
  v26 = a8;
  ENUMUNDERLAYS::ENUMUNDERLAYS((ENUMUNDERLAYS *)v28, a1, a2, a8);
  while ( (unsigned int)ENUMUNDERLAYS::bEnum((ENUMUNDERLAYS *)v28, &v21, &v25, &v23) )
  {
    v10 = v21;
    p_pvScan0 = 0LL;
    v12 = 0LL;
    v22 = 0LL;
    if ( v21 )
    {
      hsurf = (int)v21[1].hsurf;
      if ( (hsurf & 0x80004000) != 0 && (hsurf & 0x200) == 0 )
      {
        p_pvScan0 = &v21[-1].pvScan0;
        hdev = v21->hdev;
        v22 = &v21[-1].pvScan0;
        GreLockDisplayDevice(hdev);
        v12 = &v10[-1].pvScan0;
      }
    }
    if ( !NEEDDDILOCK::bRender((NEEDDDILOCK *)&v22, &v23) )
    {
      v17 = v12 == 0LL;
      goto LABEL_11;
    }
    v14 = v23;
    p_iType = &v10->iType;
    if ( v10->iType == 1 )
    {
      if ( bAllowShareAccess(v10) )
      {
        if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
          && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
          && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
           || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108))
          && (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280) + 20LL) & 0x100) != 0 )
        {
          ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
          p_pvScan0 = v22;
          v10 = v21;
          v16 = *(BOOL (__stdcall **)(SURFOBJ *, CLIPOBJ *, BRUSHOBJ *, LONG, LONG, LONG, LONG, RECTL *, MIX))(*(_QWORD *)(ThreadWin32Thread + 280) + 104LL);
          goto LABEL_10;
        }
        p_pvScan0 = v22;
        v10 = v21;
      }
      if ( *p_iType == 1 && bAllowShareAccess(v10) )
      {
        if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
          && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
          && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
           || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108)) )
        {
          p_pvScan0 = v22;
          v10 = v21;
LABEL_31:
          v16 = EngLineTo;
          goto LABEL_10;
        }
        p_pvScan0 = v22;
        v10 = v21;
      }
    }
    if ( ((__int64)v10[1].hsurf & 0x100) == 0 )
      goto LABEL_31;
    v16 = (BOOL (__stdcall *)(SURFOBJ *, CLIPOBJ *, BRUSHOBJ *, LONG, LONG, LONG, LONG, RECTL *, MIX))*((_QWORD *)v10->hdev + 167);
LABEL_10:
    v9 &= OffLineTo(v16, &v25, v10, v14, v27, v24, a5, a6, a7, v26, a9);
    v17 = p_pvScan0 == 0LL;
LABEL_11:
    if ( !v17 )
      GreUnlockDisplayDevice(p_pvScan0[6]);
  }
  return v9;
}
