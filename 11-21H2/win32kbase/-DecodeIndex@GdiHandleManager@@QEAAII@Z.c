/*
 * XREFs of ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C0022C40
 * Callers:
 *     ?vCleanupDCs@@YAXK@Z @ 0x1C001783C (-vCleanupDCs@@YAXK@Z.c)
 *     HmgNextOwned @ 0x1C001B0D0 (HmgNextOwned.c)
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C001CA20 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     ?HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z @ 0x1C001E9A4 (-HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z.c)
 *     HmgReplaceObject @ 0x1C001EB90 (HmgReplaceObject.c)
 *     GreGetObjectOwner @ 0x1C001F0C0 (GreGetObjectOwner.c)
 *     ?Pid@HANDLELOCK@@QEAAXK@Z @ 0x1C001F14C (-Pid@HANDLELOCK@@QEAAXK@Z.c)
 *     HmgRemoveObject @ 0x1C001F4E0 (HmgRemoveObject.c)
 *     ?AcquireEntryIndex@GdiHandleManager@@QEAA_NPEAI@Z @ 0x1C001F710 (-AcquireEntryIndex@GdiHandleManager@@QEAA_NPEAI@Z.c)
 *     ?hSetup@ENTRYOBJ@@SAPEAUHOBJ__@@PEAVOBJECT@@EGI@Z @ 0x1C001F890 (-hSetup@ENTRYOBJ@@SAPEAUHOBJ__@@PEAVOBJECT@@EGI@Z.c)
 *     ?vUnlockAndRelease@HANDLELOCK@@QEAAXXZ @ 0x1C001F9F0 (-vUnlockAndRelease@HANDLELOCK@@QEAAXXZ.c)
 *     ?vReleaseRao@DC@@QEAAXXZ @ 0x1C001FD30 (-vReleaseRao@DC@@QEAAXXZ.c)
 *     INC_SHARE_REF_CNT @ 0x1C0020410 (INC_SHARE_REF_CNT.c)
 *     EngUnlockSurface @ 0x1C00205F0 (EngUnlockSurface.c)
 *     ?DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT@@YAXPEAVLFONT@@@Z @ 0x1C0020AE0 (-DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT@@YAXPEAVLFONT@@@Z.c)
 *     HmgLock @ 0x1C0021050 (HmgLock.c)
 *     ?DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z @ 0x1C0021290 (-DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z.c)
 *     DEC_SHARE_REF_CNT @ 0x1C0021390 (DEC_SHARE_REF_CNT.c)
 *     HmgPentryFromPobj @ 0x1C0021920 (HmgPentryFromPobj.c)
 *     HmgShareLock @ 0x1C0021AA0 (HmgShareLock.c)
 *     ?GetUserAttr@XDCOBJ@@AEAAPEAU_DC_ATTR@@XZ @ 0x1C0021E20 (-GetUserAttr@XDCOBJ@@AEAAPEAU_DC_ATTR@@XZ.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C0021FC0 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHHH@Z @ 0x1C0022260 (-vLockHandle@HANDLELOCK@@AEAAXIHHH@Z.c)
 *     HmgLockEx @ 0x1C00226A0 (HmgLockEx.c)
 *     ?GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z @ 0x1C0022AE0 (-GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z.c)
 *     ?bLockHobj@HANDLELOCK@@QEAAHPEAUHOBJ__@@E@Z @ 0x1C0022F70 (-bLockHobj@HANDLELOCK@@QEAAHPEAUHOBJ__@@E@Z.c)
 *     GreDeleteObject @ 0x1C0023690 (GreDeleteObject.c)
 *     NtGdiDeleteObjectApp @ 0x1C0024430 (NtGdiDeleteObjectApp.c)
 *     ?bDeleteHandle@RGNOBJAPI@@QEAAHXZ @ 0x1C0024DB0 (-bDeleteHandle@RGNOBJAPI@@QEAAHXZ.c)
 *     ??1SURFMEM@@QEAA@XZ @ 0x1C0025050 (--1SURFMEM@@QEAA@XZ.c)
 *     ?bDeleteDCOBJ@@YAHAEAVXDCOBJ@@PEAKPEAH@Z @ 0x1C002EB80 (-bDeleteDCOBJ@@YAHAEAVXDCOBJ@@PEAKPEAH@Z.c)
 *     ?vReleaseCurrentpMapProcForSurfaces@@YAXW4_CLEANUPTYPE@@@Z @ 0x1C0061378 (-vReleaseCurrentpMapProcForSurfaces@@YAXW4_CLEANUPTYPE@@@Z.c)
 *     ?MultiUserGreCleanupHmgRemoveAllLocks@@YAXE@Z @ 0x1C0061450 (-MultiUserGreCleanupHmgRemoveAllLocks@@YAXE@Z.c)
 *     MultiUserCleanupDCs @ 0x1C0061624 (MultiUserCleanupDCs.c)
 *     HmgSafeNextObjt @ 0x1C0061900 (HmgSafeNextObjt.c)
 *     HmgSafeNextObjtByIndex @ 0x1C0061A80 (HmgSafeNextObjtByIndex.c)
 *     GreSetBrushOwner @ 0x1C00630E0 (GreSetBrushOwner.c)
 *     ?_IncrementOrDecrementUniqueness@GdiHandleManager@@AEAAXPEAVOBJECT@@_N@Z @ 0x1C0064500 (-_IncrementOrDecrementUniqueness@GdiHandleManager@@AEAAXPEAVOBJECT@@_N@Z.c)
 *     HmgModifyHandleType @ 0x1C0064660 (HmgModifyHandleType.c)
 *     HmgValidHandle @ 0x1C006EEE0 (HmgValidHandle.c)
 *     HmgMarkLazyDelete @ 0x1C0088DC0 (HmgMarkLazyDelete.c)
 *     HmgPrefetchAllObjt @ 0x1C0089290 (HmgPrefetchAllObjt.c)
 *     HmgLockIgnoreOwner @ 0x1C008F1A0 (HmgLockIgnoreOwner.c)
 *     HmgShareUnlockRemoveObject @ 0x1C00979E0 (HmgShareUnlockRemoveObject.c)
 *     HmgShareLockIgnoreStockBit @ 0x1C00AE0E0 (HmgShareLockIgnoreStockBit.c)
 *     HmgSetLock @ 0x1C00B0344 (HmgSetLock.c)
 *     HmgUnlock @ 0x1C00B05A8 (HmgUnlock.c)
 *     HmgReferenceCheckLock @ 0x1C00B17B0 (HmgReferenceCheckLock.c)
 *     HmgQueryAltLock @ 0x1C00C1310 (HmgQueryAltLock.c)
 *     HmgSwapLockedHandleContents @ 0x1C00CCC50 (HmgSwapLockedHandleContents.c)
 *     ?ShareCount@HANDLELOCK@@QEAAKXZ @ 0x1C00CD090 (-ShareCount@HANDLELOCK@@QEAAKXZ.c)
 *     NtGdiGetEntry @ 0x1C00CFD80 (NtGdiGetEntry.c)
 *     HmgNextGarbageCollectible @ 0x1C016C2DC (HmgNextGarbageCollectible.c)
 * Callees:
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C0022610 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 */

__int64 __fastcall GdiHandleManager::DecodeIndex(GdiHandleEntryDirectory **this, unsigned int a2)
{
  if ( a2 >= 0x10000
    && (*(_DWORD *)this <= 0x10000u
     || *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(this[2], (unsigned __int16)a2, 1) + 13) == HIWORD(a2)) )
  {
    return (unsigned __int16)a2;
  }
  else
  {
    return a2;
  }
}
