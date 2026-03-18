/*
 * XREFs of ?vUnlock@EPATHOBJ@@QEAAXXZ @ 0x1C0090DF0
 * Callers:
 *     GreExtCreateRegion @ 0x1C00311B0 (GreExtCreateRegion.c)
 *     ??1PATHMEMOBJ@@QEAA@XZ @ 0x1C0090DC0 (--1PATHMEMOBJ@@QEAA@XZ.c)
 *     GreCreatePolyPolygonRgnInternal @ 0x1C00CDB30 (GreCreatePolyPolygonRgnInternal.c)
 *     ??1EPATHOBJGC@@QEAA@XZ @ 0x1C00DBCD0 (--1EPATHOBJGC@@QEAA@XZ.c)
 *     ?vThreadCleanup@THREAD_GUARDED_EPATHOBJ@@CAXPEAVEPATHOBJ@@@Z @ 0x1C016A2B0 (-vThreadCleanup@THREAD_GUARDED_EPATHOBJ@@CAXPEAVEPATHOBJ@@@Z.c)
 *     ?iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z @ 0x1C016D4E0 (-iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z.c)
 * Callees:
 *     ?HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z @ 0x1C001E9A4 (-HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C0021FC0 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHHH@Z @ 0x1C0022260 (-vLockHandle@HANDLELOCK@@AEAAXIHHH@Z.c)
 *     ?TrackHmgrReferenceDecrement@@YAXEPEAVOBJECT@@@Z @ 0x1C0022D40 (-TrackHmgrReferenceDecrement@@YAXEPEAVOBJECT@@@Z.c)
 *     ?vFreeBlocks@EPATHOBJ@@QEAAXXZ @ 0x1C0090EF0 (-vFreeBlocks@EPATHOBJ@@QEAAXXZ.c)
 *     ??$FreeIsolatedType@V?$CTypeIsolation@$0BEAAA@$0BEA@@NSInstrumentation@@@@YAXPEAX@Z @ 0x1C0090F9C (--$FreeIsolatedType@V-$CTypeIsolation@$0BEAAA@$0BEA@@NSInstrumentation@@@@YAXPEAX@Z.c)
 */

void __fastcall EPATHOBJ::vUnlock(EPATHOBJ *this)
{
  __int64 v2; // rcx
  int v3; // eax
  __int64 v4; // rdi
  struct HOBJ__ *v5; // rsi
  __int64 v6; // [rsp+30h] [rbp-28h] BYREF
  int v7; // [rsp+38h] [rbp-20h]

  v2 = *((_QWORD *)this + 1);
  if ( v2 )
  {
    if ( (*(_DWORD *)(v2 + 84) & 1) != 0 )
    {
      EPATHOBJ::vFreeBlocks(this);
    }
    else
    {
      v3 = *((_DWORD *)this + 1);
      v6 = 0LL;
      v7 = 0;
      *(_DWORD *)(v2 + 92) = v3;
      *(_DWORD *)(*((_QWORD *)this + 1) + 88LL) = *(_DWORD *)this;
      v4 = *((_QWORD *)this + 1);
      v5 = *(struct HOBJ__ **)v4;
      HANDLELOCK::vLockHandle(
        (HANDLELOCK *)&v6,
        (unsigned __int16)*(_QWORD *)v4 | ((unsigned int)*(_QWORD *)v4 >> 8) & 0xFF0000,
        0LL,
        0,
        1);
      if ( v7 )
      {
        TrackHmgrReferenceDecrement(*(_BYTE *)(v6 + 14), (struct OBJECT *)v4);
        --*(_DWORD *)(v4 + 8);
        HANDLELOCK::vUnlock((HANDLELOCK *)&v6);
        if ( v7 )
          HANDLELOCK::vUnlock((HANDLELOCK *)&v6);
      }
      if ( HmgRemoveObjectImpl(v5, 0, 0, 1, 7, 0LL) )
      {
        EPATHOBJ::vFreeBlocks(this);
        FreeIsolatedType<NSInstrumentation::CTypeIsolation<81920,320>>(*((_QWORD *)this + 1));
      }
    }
    *((_QWORD *)this + 1) = 0LL;
  }
}
