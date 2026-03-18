/*
 * XREFs of NtGdiEngFillPath @ 0x1C02C9A40
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C011E0CC (W32GetThreadWin32Thread.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C013E01C (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     EngFillPath @ 0x1C0289380 (EngFillPath.c)
 *     ??$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QEAAPEAU_BRUSHOBJ@@PEAU1@@Z @ 0x1C02C6C3C (--$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QEAAPEAU_BRUSHOBJ@@PEAU1@@Z.c)
 *     ??$GetDDIOBJ@U_PATHOBJ@@@UMPDOBJ@@QEAAPEAU_PATHOBJ@@PEAU1@@Z @ 0x1C02C6C90 (--$GetDDIOBJ@U_PATHOBJ@@@UMPDOBJ@@QEAAPEAU_PATHOBJ@@PEAU1@@Z.c)
 *     ??0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z @ 0x1C02C6DC8 (--0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z.c)
 *     ??1UMPDSURFOBJ@@QEAA@XZ @ 0x1C02C6F80 (--1UMPDSURFOBJ@@QEAA@XZ.c)
 *     ?CaptureAndFakeBRUSHOBJ@@YAPEAU_BRUSHOBJ@@PEAU1@0@Z @ 0x1C02C6FDC (-CaptureAndFakeBRUSHOBJ@@YAPEAU_BRUSHOBJ@@PEAU1@0@Z.c)
 *     ?CapturePOINTL@@YAXPEAPEAU_POINTL@@PEAU1@@Z @ 0x1C02C7150 (-CapturePOINTL@@YAXPEAPEAU_POINTL@@PEAU1@@Z.c)
 *     ?GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z @ 0x1C02C71FC (-GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z.c)
 *     ?bCheckSurfacePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@@Z @ 0x1C02C791C (-bCheckSurfacePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@@Z.c)
 */

_BOOL8 __fastcall NtGdiEngFillPath(
        struct _SURFOBJ *a1,
        __int64 a2,
        struct _CLIPOBJ *a3,
        struct _BRUSHOBJ *a4,
        POINTL *pptlBrushOrg,
        MIX mix,
        FLONG flOptions)
{
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct _SURFOBJ **ThreadCurrentObj; // rax
  UMPDOBJ *v13; // rdi
  _DWORD *v14; // r14
  SURFOBJ *v16; // r15
  PATHOBJ *v17; // r12
  struct _CLIPOBJ *DDIOBJ; // rsi
  struct _BRUSHOBJ *v19; // rdi
  BOOL v20; // [rsp+40h] [rbp-A8h]
  struct _POINTL v21; // [rsp+48h] [rbp-A0h] BYREF
  char *v22; // [rsp+50h] [rbp-98h]
  struct _BRUSHOBJ v23; // [rsp+58h] [rbp-90h] BYREF
  SURFOBJ *pso[15]; // [rsp+70h] [rbp-78h] BYREF

  v20 = 0;
  v21 = 0LL;
  memset(&v23, 0, sizeof(v23));
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  ThreadCurrentObj = (struct _SURFOBJ **)UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v13 = (UMPDOBJ *)ThreadCurrentObj;
  v14 = (_DWORD *)ThreadCurrentObj + 109;
  if ( ThreadCurrentObj )
    ++*v14;
  v22 = (char *)ThreadCurrentObj + 436;
  if ( !ThreadCurrentObj )
    return 0LL;
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)pso, a1, ThreadCurrentObj);
  v16 = pso[0];
  v17 = (PATHOBJ *)UMPDOBJ::GetDDIOBJ<_PATHOBJ>((__int64)v13, a2);
  if ( v16 )
    DDIOBJ = UMPDOBJ::GetDDIOBJ(v13, a3, &v16->sizlBitmap);
  else
    DDIOBJ = 0LL;
  v19 = (struct _BRUSHOBJ *)UMPDOBJ::GetDDIOBJ<_BRUSHOBJ>((__int64)v13, (__int64)a4);
  if ( !v19 )
    v19 = CaptureAndFakeBRUSHOBJ(a4, &v23);
  if ( v16 && v19 && v17 && DDIOBJ && !DDIOBJ->iMode && pptlBrushOrg )
  {
    CapturePOINTL(&pptlBrushOrg, &v21);
    v20 = (unsigned int)bCheckSurfacePath(v16, v17, DDIOBJ)
       && ((((unsigned __int8)mix ^ BYTE1(mix)) & 0xF) == 0 || v19->iSolidColor == -1)
       && EngFillPath(v16, v17, DDIOBJ, v19, pptlBrushOrg, mix, flOptions);
  }
  UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)pso);
  --*v14;
  return v20;
}
