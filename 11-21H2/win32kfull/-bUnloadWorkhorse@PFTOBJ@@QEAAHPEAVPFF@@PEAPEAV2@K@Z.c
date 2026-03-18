/*
 * XREFs of ?bUnloadWorkhorse@PFTOBJ@@QEAAHPEAVPFF@@PEAPEAV2@K@Z @ 0x1C0011CB0
 * Callers:
 *     ?bUnloadEUDCFont@PFTOBJ@@QEAAHPEAG@Z @ 0x1C0011B90 (-bUnloadEUDCFont@PFTOBJ@@QEAAHPEAG@Z.c)
 *     ?bCleanupPFT@PUBLIC_PFTOBJ@@QEAAXW4eCleanupMode@1@PEAK@Z @ 0x1C00F97F0 (-bCleanupPFT@PUBLIC_PFTOBJ@@QEAAXW4eCleanupMode@1@PEAK@Z.c)
 *     PFTOBJ_bUnloadWorkhorseWrap @ 0x1C02711C0 (PFTOBJ_bUnloadWorkhorseWrap.c)
 *     GreRemoveFontMemResourceEx @ 0x1C02890A8 (GreRemoveFontMemResourceEx.c)
 *     GreRemoveFontResourceW @ 0x1C0289180 (GreRemoveFontResourceW.c)
 *     ?bRemoveMergeFont@XDCOBJ@@QEAAHU_UNIVERSAL_FONT_ID@@@Z @ 0x1C02ABAE0 (-bRemoveMergeFont@XDCOBJ@@QEAAHU_UNIVERSAL_FONT_ID@@@Z.c)
 *     ?bAttemptReload@PFFOBJ@@QEAAHXZ @ 0x1C02B9D30 (-bAttemptReload@PFFOBJ@@QEAAHXZ.c)
 * Callees:
 *     prfntKillList @ 0x1C000BDE0 (prfntKillList.c)
 *     ?vCleanupFontFile@@YAXPEAVPFFCLEANUP@@@Z @ 0x1C000C12C (-vCleanupFontFile@@YAXPEAVPFFCLEANUP@@@Z.c)
 *     bKillPFFOBJ @ 0x1C000CDC0 (bKillPFFOBJ.c)
 *     ?bDeleteLoadRef@PFFOBJ@@QEAAHKPEAUtagPvtData@@PEAH@Z @ 0x1C0011FA8 (-bDeleteLoadRef@PFFOBJ@@QEAAHKPEAUtagPvtData@@PEAH@Z.c)
 *     ?vRemoveHash@PFFOBJ@@QEAAXXZ @ 0x1C0012A20 (-vRemoveHash@PFFOBJ@@QEAAXXZ.c)
 *     ?pPFFGet@PUBLIC_PFTOBJ@@QEAAPEAVPFF@@PEBGKKPEAUtagDESIGNVECTOR@@KPEAPEAPEAV2@H@Z @ 0x1C0013CF0 (-pPFFGet@PUBLIC_PFTOBJ@@QEAAPEAVPFF@@PEBGKKPEAUtagDESIGNVECTOR@@KPEAPEAPEAV2@H@Z.c)
 *     vKillRFONTList @ 0x1C027108C (vKillRFONTList.c)
 *     ?pPvtDataMatch@PFFOBJ@@QEAAPEAUtagPvtData@@XZ @ 0x1C02BA560 (-pPvtDataMatch@PFFOBJ@@QEAAPEAUtagPvtData@@XZ.c)
 */

_BOOL8 __fastcall PFTOBJ::bUnloadWorkhorse(PFTOBJ *this, struct PFF *a2, struct PFF **a3, unsigned int a4)
{
  BOOL v4; // edi
  struct PFF *v7; // rbx
  int v9; // eax
  struct tagPvtData *v10; // r8
  int v12; // edi
  struct PFF *v13; // r15
  bool v14; // zf
  int v15; // edi
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19[2]; // [rsp+40h] [rbp-30h] BYREF
  __int128 v20; // [rsp+50h] [rbp-20h] BYREF
  __int64 v21; // [rsp+60h] [rbp-10h]
  struct PFF **v22; // [rsp+98h] [rbp+28h] BYREF

  v4 = 0;
  v7 = a2;
  if ( !a2 )
    goto LABEL_7;
  v9 = *((_DWORD *)a2 + 13);
  v10 = 0LL;
  v19[0] = (__int64)a2;
  if ( (v9 & 1) != 0 )
  {
    v4 = 1;
    if ( !*((_DWORD *)a2 + 14) && !*((_DWORD *)a2 + 15) && !*((_QWORD *)a2 + 18) && !*((_DWORD *)a2 + 16) )
      goto LABEL_22;
LABEL_7:
    EtwTraceGreLockReleaseSemaphore(L"ghsemPublicPFT", ghsemPublicPFT);
    GreReleaseSemaphoreInternal(ghsemPublicPFT);
    return v4;
  }
  if ( *(struct PFT **const *)this == gpPFTPrivate )
  {
    v10 = PFFOBJ::pPvtDataMatch((PFFOBJ *)v19);
    if ( !v10 )
      goto LABEL_7;
  }
  LODWORD(v22) = 0;
  v4 = 1;
  if ( !(unsigned int)PFFOBJ::bDeleteLoadRef((PFFOBJ *)v19, a4, v10, (int *)&v22) )
  {
    if ( *(struct PFT **const *)this == gpPFTPrivate )
      v4 = (_DWORD)v22 == 0;
    goto LABEL_7;
  }
  PFFOBJ::vRemoveHash((PFFOBJ *)v19);
  v12 = *((_DWORD *)v7 + 13);
  v13 = 0LL;
  v14 = *((_DWORD *)v7 + 16) == 0;
  v22 = a3;
  if ( v14 )
    v13 = v7;
  v15 = v12 & 0x200;
  if ( !a3 )
  {
    PUBLIC_PFTOBJ::pPFFGet(
      this,
      *((const unsigned __int16 **)v7 + 3),
      *((_DWORD *)v7 + 8),
      *((_DWORD *)v7 + 9),
      *((struct tagDESIGNVECTOR **)v7 + 5),
      *((_DWORD *)v7 + 12),
      &v22,
      0);
    a3 = v22;
  }
  if ( *a3 == v7 )
    *a3 = (struct PFF *)*((_QWORD *)v7 + 1);
  v16 = *((_QWORD *)v7 + 1);
  if ( v16 )
    *(_QWORD *)(v16 + 16) = *((_QWORD *)v7 + 2);
  v17 = *((_QWORD *)v7 + 2);
  if ( v17 )
    *(_QWORD *)(v17 + 8) = *((_QWORD *)v7 + 1);
  v18 = *(_QWORD *)this;
  if ( !v15 )
    ++*(_DWORD *)(v18 + 32);
  --*(_DWORD *)(v18 + 28);
  v7 = v13;
  v4 = 1;
  if ( !v13 )
    goto LABEL_7;
LABEL_22:
  v19[0] = (__int64)v7;
  if ( prfntKillList(v19) )
  {
    EtwTraceGreLockReleaseSemaphore(L"ghsemPublicPFT", ghsemPublicPFT);
    GreReleaseSemaphoreInternal(ghsemPublicPFT);
    vKillRFONTList((PFFOBJ *)v19);
  }
  else
  {
    v21 = 0LL;
    v20 = 0LL;
    if ( (unsigned int)bKillPFFOBJ((PFFOBJ *)v19, (struct PFFCLEANUP *)&v20) )
    {
      EtwTraceGreLockReleaseSemaphore(L"ghsemPublicPFT", ghsemPublicPFT);
      GreReleaseSemaphoreInternal(ghsemPublicPFT);
      vCleanupFontFile((struct PFFCLEANUP *)&v20);
    }
    else
    {
      EtwTraceGreLockReleaseSemaphore(L"ghsemPublicPFT", ghsemPublicPFT);
      GreReleaseSemaphoreInternal(ghsemPublicPFT);
    }
  }
  return 1;
}
