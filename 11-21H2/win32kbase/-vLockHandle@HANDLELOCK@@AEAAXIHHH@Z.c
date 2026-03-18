/*
 * XREFs of ?vLockHandle@HANDLELOCK@@AEAAXIHHH@Z @ 0x1C0022260
 * Callers:
 *     ?HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z @ 0x1C001E9A4 (-HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z.c)
 *     HmgRemoveObject @ 0x1C001F4E0 (HmgRemoveObject.c)
 *     HmgShareLockCheckIgnoreStockBit @ 0x1C001FE90 (HmgShareLockCheckIgnoreStockBit.c)
 *     INC_SHARE_REF_CNT @ 0x1C0020410 (INC_SHARE_REF_CNT.c)
 *     EngUnlockSurface @ 0x1C00205F0 (EngUnlockSurface.c)
 *     HmgShareLockEx @ 0x1C0020870 (HmgShareLockEx.c)
 *     ?DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT@@YAXPEAVLFONT@@@Z @ 0x1C0020AE0 (-DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT@@YAXPEAVLFONT@@@Z.c)
 *     HmgShareLockCheck @ 0x1C0020DC0 (HmgShareLockCheck.c)
 *     HmgLock @ 0x1C0021050 (HmgLock.c)
 *     DEC_SHARE_REF_CNT @ 0x1C0021390 (DEC_SHARE_REF_CNT.c)
 *     HmgDecrementExclusiveReferenceCountEx @ 0x1C0021550 (HmgDecrementExclusiveReferenceCountEx.c)
 *     HmgDecrementShareReferenceCountEx @ 0x1C0021710 (HmgDecrementShareReferenceCountEx.c)
 *     ??0HANDLELOCK@@QEAA@PEAVOBJECT@@HHH@Z @ 0x1C0021A60 (--0HANDLELOCK@@QEAA@PEAVOBJECT@@HHH@Z.c)
 *     HmgShareLock @ 0x1C0021AA0 (HmgShareLock.c)
 *     ?bDeleteHandle@RGNOBJAPI@@QEAAHXZ @ 0x1C0024DB0 (-bDeleteHandle@RGNOBJAPI@@QEAAHXZ.c)
 *     ??1SURFMEM@@QEAA@XZ @ 0x1C0025050 (--1SURFMEM@@QEAA@XZ.c)
 *     HmgSetOwner @ 0x1C0028640 (HmgSetOwner.c)
 *     GreSetDCOwnerEx @ 0x1C002C0D0 (GreSetDCOwnerEx.c)
 *     GreSetBrushOwner @ 0x1C00630E0 (GreSetBrushOwner.c)
 *     HmgMarkUndeletable @ 0x1C0063C80 (HmgMarkUndeletable.c)
 *     HmgFree @ 0x1C0087080 (HmgFree.c)
 *     HmgLockIgnoreOwner @ 0x1C008F1A0 (HmgLockIgnoreOwner.c)
 *     ?vUnlock@EPATHOBJ@@QEAAXXZ @ 0x1C0090DF0 (-vUnlock@EPATHOBJ@@QEAAXXZ.c)
 *     HmgShareUnlockRemoveObject @ 0x1C00979E0 (HmgShareUnlockRemoveObject.c)
 *     HmgMarkDeletable @ 0x1C0099BD0 (HmgMarkDeletable.c)
 *     HmgShareLockIgnoreStockBit @ 0x1C00AE0E0 (HmgShareLockIgnoreStockBit.c)
 *     HmgUnlock @ 0x1C00B05A8 (HmgUnlock.c)
 *     ??1UMPDREF@@QEAA@XZ @ 0x1C00CC094 (--1UMPDREF@@QEAA@XZ.c)
 *     HmgSwapLockedHandleContents @ 0x1C00CCC50 (HmgSwapLockedHandleContents.c)
 *     HmgMarkUnXferable @ 0x1C00CD290 (HmgMarkUnXferable.c)
 *     HmgMarkXferable @ 0x1C00CD350 (HmgMarkXferable.c)
 *     ??$vGarbageCollectObject@VBRUSHSELOBJGC@@@@YAXPEAUHOBJ__@@@Z @ 0x1C00DB8C8 (--$vGarbageCollectObject@VBRUSHSELOBJGC@@@@YAXPEAUHOBJ__@@@Z.c)
 *     ??$vGarbageCollectObject@VCOLORSPACEGC@@@@YAXPEAUHOBJ__@@@Z @ 0x1C00DB9B4 (--$vGarbageCollectObject@VCOLORSPACEGC@@@@YAXPEAUHOBJ__@@@Z.c)
 *     ??$vGarbageCollectObject@VEPATHOBJGC@@@@YAXPEAUHOBJ__@@@Z @ 0x1C00DBAC4 (--$vGarbageCollectObject@VEPATHOBJGC@@@@YAXPEAUHOBJ__@@@Z.c)
 *     ??$vGarbageCollectObject@VXEPALOBJ2@@@@YAXPEAUHOBJ__@@@Z @ 0x1C00DBBCC (--$vGarbageCollectObject@VXEPALOBJ2@@@@YAXPEAUHOBJ__@@@Z.c)
 *     ?HmgQueryRemoveAttempted@@YAHPEAUHOBJ__@@E@Z @ 0x1C016BE10 (-HmgQueryRemoveAttempted@@YAHPEAUHOBJ__@@E@Z.c)
 *     ??$vGarbageCollectObject@VSURFREFGC@@@@YAXPEAUHOBJ__@@@Z @ 0x1C0179210 (--$vGarbageCollectObject@VSURFREFGC@@@@YAXPEAUHOBJ__@@@Z.c)
 * Callees:
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C0021FC0 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C0022610 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C0022C40 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 */

void __fastcall HANDLELOCK::vLockHandle(HANDLELOCK *this, __int64 a2, __int64 a3, int a4, int a5)
{
  __int64 v6; // r15
  int v8; // r13d
  unsigned int v9; // esi
  __int64 CurrentThreadWin32ThreadAndEnterCriticalRegion; // rdi
  __int64 v11; // r12
  GdiHandleManager *v12; // rdi
  __int64 v13; // rdi
  unsigned int v14; // edx
  __int64 v15; // rdi
  __int64 v16; // rbx
  _QWORD *v17; // rax
  __int64 v18; // rcx
  int v19; // ecx
  unsigned int v20; // ecx
  int v21; // ebx
  __int64 CurrentThreadProcess; // rax
  int v23; // edx
  GdiHandleManager *v24; // rbx
  unsigned int v25; // eax
  __int64 v26; // r8
  unsigned __int64 v27; // rdx
  unsigned int v28; // r9d
  __int64 v29; // r8
  __int64 v30; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 v31; // [rsp+28h] [rbp-40h]
  __int64 v32; // [rsp+30h] [rbp-38h]
  __int64 v33; // [rsp+70h] [rbp+8h]

  v6 = 0LL;
  v30 = 0LL;
  v8 = a3;
  v9 = a2;
  CurrentThreadWin32ThreadAndEnterCriticalRegion = PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(&v30, a2, a3);
  if ( (!(unsigned __int8)KeIsAttachedProcess()
     || (v21 = gSessionId,
         CurrentThreadProcess = PsGetCurrentThreadProcess(),
         v21 == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)))
    && CurrentThreadWin32ThreadAndEnterCriticalRegion
    && *(_QWORD *)CurrentThreadWin32ThreadAndEnterCriticalRegion )
  {
    v11 = *(_QWORD *)(*(_QWORD *)CurrentThreadWin32ThreadAndEnterCriticalRegion + 72LL);
  }
  else
  {
    v11 = 0LL;
  }
  *((_DWORD *)this + 2) = 1;
  v12 = gpHandleManager;
  if ( v9 >= 0x10000 )
  {
    if ( *(_DWORD *)gpHandleManager > 0x10000u )
    {
      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                  *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                  (unsigned __int16)v9,
                                  1)
           + 13) == HIWORD(v9) )
        v9 = (unsigned __int16)v9;
    }
    else
    {
      v9 = (unsigned __int16)v9;
    }
  }
  v13 = *((_QWORD *)v12 + 2);
  v14 = *(_DWORD *)(v13 + 2056);
  if ( v9 >= v14 + ((*(unsigned __int16 *)(v13 + 2) + 0xFFFF) << 16)
    || (v9 >= v14
      ? (v15 = *(_QWORD *)(v13 + 8LL * (((v9 - v14) >> 16) + 1) + 8), v9 += -65536 * ((v9 - v14) >> 16) - v14)
      : (v15 = *(_QWORD *)(v13 + 8)),
        v16 = 0LL,
        v9 >= *(_DWORD *)(v15 + 20)) )
  {
    *(_QWORD *)this = 0LL;
LABEL_31:
    *((_DWORD *)this + 2) = 0;
    KeLeaveCriticalRegion();
    return;
  }
  v32 = 16LL * (unsigned __int8)v9;
  v17 = *(_QWORD **)(v15 + 24);
  v31 = 8 * ((unsigned __int64)v9 >> 8);
  v33 = v32 + *(_QWORD *)(*v17 + v31);
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v33, 0LL);
  if ( v9 < *(_DWORD *)(v15 + 20) && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v15 + 24) + v31) + v32 + 8) )
  {
    v18 = 24LL * v9;
    *(_DWORD *)(*(_QWORD *)v15 + v18 + 8) |= 1u;
    v16 = v18 + *(_QWORD *)v15;
  }
  else
  {
    ExReleasePushLockExclusiveEx(v33, 0LL);
    KeLeaveCriticalRegion();
  }
  *(_QWORD *)this = v16;
  if ( !v16 )
    goto LABEL_31;
  _m_prefetchw((const void *)(v16 + 8));
  v19 = *(_DWORD *)(v16 + 8);
  *((_DWORD *)this + 3) = v19;
  if ( !a4 )
  {
    if ( v8 )
    {
      v20 = v19 & 0xFFFFFFFE;
      if ( v20 != (v30 & 0xFFFFFFFC) && v20 && (!v11 || v20 != *(_DWORD *)(v11 + 8)) )
        goto LABEL_39;
    }
    if ( (*(_BYTE *)(v16 + 15) & 0x20) != 0 )
      goto LABEL_39;
  }
  if ( !a5 && (*(_BYTE *)(v16 + 15) & 0x40) != 0 )
  {
    v23 = *(_DWORD *)v16;
    v24 = gpHandleManager;
    v25 = GdiHandleManager::DecodeIndex(gpHandleManager, v23 & 0xFFFFFF);
    v26 = *((_QWORD *)v24 + 2);
    v27 = v25;
    v28 = *(_DWORD *)(v26 + 2056);
    if ( v25 < v28 + ((*(unsigned __int16 *)(v26 + 2) + 0xFFFF) << 16) )
    {
      if ( v25 >= v28 )
      {
        v29 = *(_QWORD *)(v26 + 8LL * (((v25 - v28) >> 16) + 1) + 8);
        v27 = -65536 * ((v25 - v28) >> 16) - v28 + v25;
      }
      else
      {
        v29 = *(_QWORD *)(v26 + 8);
      }
      if ( (unsigned int)v27 < *(_DWORD *)(v29 + 20) )
        v6 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v29 + 24) + 8 * (v27 >> 8)) + 16LL * (unsigned __int8)v27 + 8);
    }
    if ( !*(_WORD *)(v6 + 12) || *(struct _KTHREAD **)(v6 + 16) != KeGetCurrentThread() )
LABEL_39:
      HANDLELOCK::vUnlock(this);
  }
}
