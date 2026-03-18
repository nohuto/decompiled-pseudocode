/*
 * XREFs of HmgDecrementShareReferenceCountEx @ 0x1C0021710
 * Callers:
 *     ?vRemoveRefPalettes@@YAXK@Z @ 0x1C00181D4 (-vRemoveRefPalettes@@YAXK@Z.c)
 *     ?SelectPaletteWorker@@YAPEAUHPALETTE__@@PEAVXDCOBJ@@PEAU1@H@Z @ 0x1C001AE70 (-SelectPaletteWorker@@YAPEAUHPALETTE__@@PEAVXDCOBJ@@PEAU1@H@Z.c)
 *     ??1EPALOBJ@@QEAA@XZ @ 0x1C001AFA8 (--1EPALOBJ@@QEAA@XZ.c)
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C001CA20 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     ?vDec_cRef@SURFACE@@QEAAXXZ @ 0x1C001E824 (-vDec_cRef@SURFACE@@QEAAXXZ.c)
 *     ?vAltUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C00205B4 (-vAltUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z @ 0x1C0021290 (-DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z.c)
 *     ??1SURFMEM@@QEAA@XZ @ 0x1C0025050 (--1SURFMEM@@QEAA@XZ.c)
 *     vDynamicConvertNewSurfaceDCs @ 0x1C0061570 (vDynamicConvertNewSurfaceDCs.c)
 *     ?apalResetColorTable@XEPALOBJ@@QEAAXXZ @ 0x1C0078FC8 (-apalResetColorTable@XEPALOBJ@@QEAAXXZ.c)
 *     GreDCSelectPen @ 0x1C0098770 (GreDCSelectPen.c)
 *     ?EngDeletePaletteInternal@@YAHPEAUHPALETTE__@@K@Z @ 0x1C00B0820 (-EngDeletePaletteInternal@@YAHPEAUHPALETTE__@@K@Z.c)
 *     ?GreCreateColorSpace@@YAPEAUHCOLORSPACE__@@PEAU_LOGCOLORSPACEEXW@@@Z @ 0x1C00BEE40 (-GreCreateColorSpace@@YAPEAUHCOLORSPACE__@@PEAU_LOGCOLORSPACEEXW@@@Z.c)
 *     ?hpath@DC@@QEAAPEAUHPATH__@@PEAU2@@Z @ 0x1C00CB7C0 (-hpath@DC@@QEAAPEAUHPATH__@@PEAU2@@Z.c)
 *     ?vDisableSurface@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@E@Z @ 0x1C00CE0D0 (-vDisableSurface@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@E@Z.c)
 *     ?UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z @ 0x1C016AB74 (-UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z.c)
 *     ?MulEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEBGKPEAPEAUHSURF__@@KPEAU_GDIINFO@@KPEAUtagDEVINFO@@PEAUHDEV__@@1PEAX@Z @ 0x1C016E490 (-MulEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEBGKPEAPEAUHSURF__@@KPEAU_GDIINFO@@KPEAUtagDE.c)
 *     ?vDynamicSwitchPalettes@@YAXPEAVSURFACE@@PEAVPDEV@@1@Z @ 0x1C016F7F8 (-vDynamicSwitchPalettes@@YAXPEAVSURFACE@@PEAVPDEV@@1@Z.c)
 *     ?DrvSetSharedPalette@@YAPEAUHDEV__@@PEAU_MDEV@@@Z @ 0x1C0171760 (-DrvSetSharedPalette@@YAPEAUHDEV__@@PEAU_MDEV@@@Z.c)
 *     bInitPALOBJ @ 0x1C02E572C (bInitPALOBJ.c)
 * Callees:
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHHH@Z @ 0x1C0022260 (-vLockHandle@HANDLELOCK@@AEAAXIHHH@Z.c)
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C0022610 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?TrackObjectReferenceDecrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x1C0022DEC (-TrackObjectReferenceDecrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
 */

__int64 __fastcall HmgDecrementShareReferenceCountEx(unsigned int *a1, _DWORD *a2)
{
  _DWORD *v2; // r14
  unsigned int v5; // eax
  unsigned int v6; // edx
  unsigned __int16 *v8; // rsi
  char v9; // al
  unsigned int v10; // ebp
  unsigned int v11; // ebx
  GdiHandleManager *v12; // rdi
  __int64 v13; // rdx
  unsigned int v14; // r9d
  __int64 v15; // r8
  unsigned int v16; // ebx
  __int64 v17; // rdx
  unsigned int v18; // r8d
  __int64 v19; // r10
  __int64 v20; // rdx
  __int64 v21; // rcx
  bool v22; // r8
  unsigned __int16 *v23; // [rsp+30h] [rbp-38h] BYREF
  int v24; // [rsp+38h] [rbp-30h]

  v2 = 0LL;
  if ( a2 )
    *a2 = 0;
  v5 = *a1;
  v6 = *a1;
  v23 = 0LL;
  v24 = 0;
  HANDLELOCK::vLockHandle((HANDLELOCK *)&v23, (unsigned __int16)v5 | (v6 >> 8) & 0xFF0000, 0, 0, 1);
  if ( !v24 )
    return 0LL;
  v8 = v23;
  if ( a2 )
    *a2 = (*((_BYTE *)v23 + 15) & 8) != 0;
  v9 = *((_BYTE *)v8 + 14);
  v10 = a1[2];
  if ( v9 == 5 )
  {
    v20 = *((_QWORD *)a1 + 85);
    v21 = 0LL;
LABEL_26:
    TrackObjectReferenceDecrement(v21, v20);
    goto LABEL_9;
  }
  if ( v9 == 16 )
  {
    v20 = *((_QWORD *)a1 + 17);
    v21 = 2LL;
    goto LABEL_26;
  }
LABEL_9:
  --a1[2];
  v11 = *(_DWORD *)v8 & 0xFFFFFF;
  if ( v11 >= 0x10000 )
  {
    if ( *(_DWORD *)gpHandleManager > 0x10000u )
    {
      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                  *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                  *v8,
                                  1)
           + 13) == HIWORD(v11) )
        v11 = (unsigned __int16)v11;
    }
    else
    {
      v11 = *v8;
    }
  }
  v12 = gpHandleManager;
  v13 = *((_QWORD *)gpHandleManager + 2);
  v14 = *(_DWORD *)(v13 + 2056);
  if ( v11 < v14 + ((*(unsigned __int16 *)(v13 + 2) + 0xFFFF) << 16) )
  {
    if ( v11 >= v14 )
    {
      v15 = *(_QWORD *)(v13 + 8LL * (((v11 - v14) >> 16) + 1) + 8);
      v11 += -65536 * ((v11 - v14) >> 16) - v14;
    }
    else
    {
      v15 = *(_QWORD *)(v13 + 8);
    }
    if ( v11 < *(_DWORD *)(v15 + 20) )
      v2 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v15 + 24) + 8 * ((unsigned __int64)v11 >> 8))
                      + 16LL * (unsigned __int8)v11
                      + 8);
  }
  v16 = (unsigned __int16)*v2 | (*v2 >> 8) & 0xFF0000;
  if ( v16 >= 0x10000 )
  {
    if ( *(_DWORD *)gpHandleManager > 0x10000u )
    {
      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                  *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                  (unsigned __int16)*v2,
                                  1)
           + 13) == HIWORD(v16) )
      {
        v16 = (unsigned __int16)v16;
      }
      else if ( *(_DWORD *)v12 > 0x10000u )
      {
        GdiHandleEntryDirectory::GetEntry(*((GdiHandleEntryDirectory **)v12 + 2), (unsigned __int16)v16, v22);
      }
    }
    else
    {
      v16 = (unsigned __int16)*v2;
    }
  }
  v17 = *((_QWORD *)v12 + 2);
  v18 = *(_DWORD *)(v17 + 2056);
  if ( v16 < v18 + ((*(unsigned __int16 *)(v17 + 2) + 0xFFFF) << 16) )
  {
    if ( v16 >= v18 )
    {
      v19 = *(_QWORD *)(v17 + 8LL * (((v16 - v18) >> 16) + 1) + 8);
      v16 += -65536 * ((v16 - v18) >> 16) - v18;
    }
    else
    {
      v19 = *(_QWORD *)(v17 + 8);
    }
    *(_DWORD *)(*(_QWORD *)v19 + 24LL * v16 + 8) &= ~1u;
    ExReleasePushLockExclusiveEx(
      *(_QWORD *)(**(_QWORD **)(v19 + 24) + 8 * ((unsigned __int64)v16 >> 8)) + 16LL * (unsigned __int8)v16,
      0LL);
    KeLeaveCriticalRegion();
  }
  KeLeaveCriticalRegion();
  return v10;
}
