/*
 * XREFs of ??$vGarbageCollectObject@VXEPALOBJ2@@@@YAXPEAUHOBJ__@@@Z @ 0x1C00D3170
 * Callers:
 *     ?vGarbageCollectObjects@@YAXXZ @ 0x1C0035EF8 (-vGarbageCollectObjects@@YAXXZ.c)
 * Callees:
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C0043330 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHHH@Z @ 0x1C0043570 (-vLockHandle@HANDLELOCK@@AEAAXIHHH@Z.c)
 *     ??1HANDLELOCK@@QEAA@XZ @ 0x1C00443E0 (--1HANDLELOCK@@QEAA@XZ.c)
 *     HmgShareLock @ 0x1C00622A0 (HmgShareLock.c)
 *     ??0XEPALOBJ2@@QEAA@XZ @ 0x1C00D2464 (--0XEPALOBJ2@@QEAA@XZ.c)
 *     ??1XEPALOBJ2@@QEAA@XZ @ 0x1C00D24A8 (--1XEPALOBJ2@@QEAA@XZ.c)
 *     ?bGarbageCollect@XEPALOBJ2@@QEAAHXZ @ 0x1C00D26AC (-bGarbageCollect@XEPALOBJ2@@QEAAHXZ.c)
 */

void __fastcall vGarbageCollectObject<XEPALOBJ2>(unsigned int a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // [rsp+30h] [rbp-40h] BYREF
  int v5; // [rsp+38h] [rbp-38h]
  struct OBJECT *v6[5]; // [rsp+48h] [rbp-28h] BYREF

  XEPALOBJ2::XEPALOBJ2((XEPALOBJ2 *)v6);
  v2 = HmgShareLock(a1, 8);
  v6[0] = (struct OBJECT *)v2;
  if ( v2 && *(_DWORD *)(v2 + 8) <= 1u && _bittest16((const signed __int16 *)(v2 + 14), 0xEu) )
  {
    v4 = 0LL;
    v5 = 0;
    HANDLELOCK::vLockHandle((HANDLELOCK *)&v4, (unsigned __int16)a1 | (a1 >> 8) & 0xFF0000, 0, 0, 0);
    if ( v5 && (*(_DWORD *)(v4 + 8) & 0xFFFFFFFE) == 0x80000012 )
    {
      HANDLELOCK::vUnlock((HANDLELOCK *)&v4);
      if ( (unsigned int)XEPALOBJ2::bGarbageCollect((XEPALOBJ2 *)v6) )
        _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(SGDGetSessionState(v3) + 24) + 1908LL));
    }
    else
    {
      HANDLELOCK::vUnlock((HANDLELOCK *)&v4);
    }
    HANDLELOCK::~HANDLELOCK((HANDLELOCK *)&v4);
  }
  XEPALOBJ2::~XEPALOBJ2(v6);
}
