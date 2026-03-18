/*
 * XREFs of NtGdiPATHOBJ_vEnumStartClipLines @ 0x1C02B3A90
 * Callers:
 *     <none>
 * Callees:
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C0009B28 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     ??1CAutoTGO@@QEAA@XZ @ 0x1C010A45C (--1CAutoTGO@@QEAA@XZ.c)
 *     ??0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z @ 0x1C0128EA0 (--0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z.c)
 *     ?GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z @ 0x1C01291B4 (-GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z.c)
 *     ?Cleanup@UMPDSURFOBJ@@SAXPEAX@Z @ 0x1C015F730 (-Cleanup@UMPDSURFOBJ@@SAXPEAX@Z.c)
 *     ??$GetDDIOBJ@U_PATHOBJ@@@UMPDOBJ@@QEAAPEAU_PATHOBJ@@PEAU1@@Z @ 0x1C02B03D8 (--$GetDDIOBJ@U_PATHOBJ@@@UMPDOBJ@@QEAAPEAU_PATHOBJ@@PEAU1@@Z.c)
 *     ?bCaptureLINEATTRS@@YAHPEAPEAU_LINEATTRS@@PEAU1@@Z @ 0x1C02B079C (-bCaptureLINEATTRS@@YAHPEAPEAU_LINEATTRS@@PEAU1@@Z.c)
 *     PATHOBJ_vEnumStartClipLines @ 0x1C02BC100 (PATHOBJ_vEnumStartClipLines.c)
 */

__int64 NtGdiPATHOBJ_vEnumStartClipLines(__int64 a1, struct _CLIPOBJ *a2, struct _SURFOBJ *a3, ...)
{
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rax
  unsigned int v8; // ebx
  UMPDOBJ *v9; // rsi
  SURFOBJ *v10; // r15
  unsigned __int64 v11; // rax
  PATHOBJ *v12; // r12
  struct _CLIPOBJ *DDIOBJ; // rax
  CLIPOBJ *v14; // r14
  LINEATTRS *v15; // rdi
  PFLOAT_LONG pstyle; // rcx
  struct _LINEATTRS v18; // [rsp+28h] [rbp-39h] BYREF
  SURFOBJ *pso[3]; // [rsp+58h] [rbp-9h] BYREF
  _BYTE v20[40]; // [rsp+70h] [rbp+Fh] BYREF
  LINEATTRS *pla; // [rsp+E0h] [rbp+7Fh] BYREF
  va_list plaa; // [rsp+E0h] [rbp+7Fh]
  va_list va1; // [rsp+E8h] [rbp+87h] BYREF

  va_start(va1, a3);
  va_start(plaa, a3);
  pla = va_arg(va1, LINEATTRS *);
  memset(&v18, 0, sizeof(v18));
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v8 = 0;
  v9 = ThreadCurrentObj;
  if ( !ThreadCurrentObj )
    return (unsigned int)-1073741811;
  ++*((_DWORD *)ThreadCurrentObj + 105);
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)pso, a3, (struct _SURFOBJ **)ThreadCurrentObj);
  v10 = pso[0];
  v11 = UMPDOBJ::GetDDIOBJ<_PATHOBJ>((__int64)v9, a1);
  v12 = (PATHOBJ *)v11;
  if ( v10 && v11 && (unsigned int)bCaptureLINEATTRS((struct _LINEATTRS **)plaa, &v18) )
  {
    DDIOBJ = UMPDOBJ::GetDDIOBJ(v9, a2, &v10->sizlBitmap);
    v14 = DDIOBJ;
    if ( (*((_DWORD *)v9 + 103) & 0x100) == 0 )
    {
      v15 = pla;
      goto LABEL_16;
    }
    if ( !DDIOBJ && gfUMPDDebug )
      DbgPrint(
        "clientcore\\windows\\core\\ntgdi\\gre\\windows\\umpdeng.cxx:%d:NtGdiPATHOBJ_vEnumStartClipLines:pco == NULL\n",
        4004);
    v15 = pla;
    if ( !pla && gfUMPDDebug )
      DbgPrint(
        "clientcore\\windows\\core\\ntgdi\\gre\\windows\\umpdeng.cxx:%d:NtGdiPATHOBJ_vEnumStartClipLines:pla == NULL\n",
        4009);
    if ( !v14 )
      goto LABEL_17;
    if ( v15 )
    {
LABEL_16:
      PATHOBJ_vEnumStartClipLines(v12, v14, v10, v15);
LABEL_17:
      if ( v15 )
      {
        pstyle = v15->pstyle;
        if ( pstyle )
          Win32FreePool(pstyle);
      }
    }
  }
  CAutoTGO::~CAutoTGO((CAutoTGO *)v20);
  UMPDSURFOBJ::Cleanup(pso);
  CAutoTGO::~CAutoTGO((CAutoTGO *)v20);
  --*((_DWORD *)v9 + 105);
  return v8;
}
