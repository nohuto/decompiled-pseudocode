/*
 * XREFs of bDeleteRegion @ 0x1C003DA20
 * Callers:
 *     ?vCleanupRegions@@YAXK@Z @ 0x1C0035730 (-vCleanupRegions@@YAXK@Z.c)
 *     NtGdiDeleteObjectApp @ 0x1C0041980 (NtGdiDeleteObjectApp.c)
 * Callees:
 *     ?bPEBCacheHandle@@YAHW4_HANDLECACHETYPE@@PEAT_OBJECTATTR@@PEAU_ENTRY@@PEAVHANDLELOCK@@PEAPEAU_BASEOBJECT@@@Z @ 0x1C003D250 (-bPEBCacheHandle@@YAHW4_HANDLECACHETYPE@@PEAT_OBJECTATTR@@PEAU_ENTRY@@PEAVHANDLELOCK@@PEAPEAU_BA.c)
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x1C003F148 (--1RGNOBJAPI@@QEAA@XZ.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C0043330 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHHH@Z @ 0x1C0043570 (-vLockHandle@HANDLELOCK@@AEAAXIHHH@Z.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C00442B0 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C0047CB0 (-vDeleteREGION@REGION@@QEAAXXZ.c)
 *     ?bDeleteHandle@RGNOBJAPI@@QEAAHXZ @ 0x1C0049F04 (-bDeleteHandle@RGNOBJAPI@@QEAAHXZ.c)
 *     HmgFreeObjectAttr @ 0x1C00C4E90 (HmgFreeObjectAttr.c)
 *     ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z @ 0x1C00D2140 (--0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z.c)
 */

__int64 __fastcall bDeleteRegion(HRGN a1)
{
  unsigned int v1; // esi
  unsigned int v2; // r15d
  int v3; // ebp
  _DWORD *v4; // rbx
  __int64 v5; // rcx
  _DWORD *v6; // rbx
  GdiHandleManager *v7; // r13
  unsigned int v8; // eax
  __int64 v9; // r14
  unsigned int v10; // r9d
  unsigned int v11; // ebx
  unsigned int v12; // r12d
  __int64 v13; // r8
  __int64 v14; // rsi
  unsigned int v15; // eax
  __int64 v16; // rcx
  unsigned __int64 v17; // rdx
  __int64 v18; // r8
  PVOID v19; // rdx
  __int64 v20; // rbx
  _QWORD *CurrentProcessWin32Process; // rax
  _QWORD *v22; // r14
  __int64 ProcessWow64Process; // rax
  int v24; // ecx
  unsigned __int64 v25; // rbx
  __int64 v27; // [rsp+50h] [rbp-78h] BYREF
  unsigned int v28; // [rsp+58h] [rbp-70h]
  PVOID Entry[12]; // [rsp+68h] [rbp-60h] BYREF
  PVOID v30; // [rsp+D8h] [rbp+10h]

  RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)Entry, a1, 0, 0);
  if ( !Entry[0] || *((_DWORD *)Entry[0] + 19) )
    goto LABEL_38;
  v1 = *(_DWORD *)Entry[0];
  v27 = 0LL;
  v2 = 1;
  v28 = 0;
  v3 = 0;
  v4 = 0LL;
  HANDLELOCK::vLockHandle((HANDLELOCK *)&v27, (unsigned __int16)v1 | (v1 >> 8) & 0xFF0000, 1, 0, 0);
  v5 = v28;
  if ( !v28 )
    goto LABEL_35;
  if ( *(_BYTE *)(v27 + 14) != 4 || *(_WORD *)(v27 + 12) != HIWORD(v1) )
  {
    HANDLELOCK::vUnlock((HANDLELOCK *)&v27);
    v5 = v28;
  }
  if ( !(_DWORD)v5 )
  {
LABEL_35:
    if ( (unsigned int)RGNOBJAPI::bDeleteHandle((RGNOBJAPI *)Entry) )
    {
      REGION::vDeleteREGION(Entry[0]);
      Entry[0] = 0LL;
      if ( v4 )
        HmgFreeObjectAttr(v4);
      goto LABEL_33;
    }
LABEL_38:
    v2 = 0;
    goto LABEL_33;
  }
  v6 = Entry[0];
  v30 = Entry[0];
  v7 = *(GdiHandleManager **)(*(_QWORD *)(SGDGetSessionState(v5) + 24) + 8008LL);
  v8 = GdiHandleManager::DecodeIndex(v7, (unsigned __int16)*v6 | (*v6 >> 8) & 0xFF0000);
  v9 = *((_QWORD *)v7 + 2);
  v10 = v8;
  v11 = *(_DWORD *)(v9 + 2056);
  v12 = v11 + ((*(unsigned __int16 *)(v9 + 2) + 0xFFFF) << 16);
  if ( v8 >= v12 )
  {
    v14 = 0LL;
  }
  else
  {
    if ( v8 >= v11 )
    {
      v13 = *(_QWORD *)(v9 + 8LL * (((v8 - v11) >> 16) + 1) + 8);
      v8 += -65536 * ((v8 - v11) >> 16) - v11;
    }
    else
    {
      v13 = *(_QWORD *)(v9 + 8);
    }
    v14 = 0LL;
    if ( v8 < *(_DWORD *)(v13 + 20)
      && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v13 + 24) + 8 * ((unsigned __int64)v8 >> 8))
                   + 16LL * (unsigned __int8)v8
                   + 8) )
    {
      v14 = *(_QWORD *)v13 + 24LL * v8;
    }
  }
  v15 = GdiHandleManager::DecodeIndex(v7, v10);
  v17 = v15;
  if ( v15 >= v12
    || (v15 >= v11
      ? (v16 = ((v15 - v11) >> 16) + 1,
         v18 = *(_QWORD *)(v9 + 8 * v16 + 8),
         v17 = -65536 * ((v15 - v11) >> 16) - v11 + v15)
      : (v18 = *(_QWORD *)(v9 + 8)),
        (unsigned int)v17 >= *(_DWORD *)(v18 + 20)) )
  {
    v19 = 0LL;
  }
  else
  {
    v16 = 2LL * (unsigned __int8)v17;
    v19 = *(PVOID *)(*(_QWORD *)(**(_QWORD **)(v18 + 24) + 8 * (v17 >> 8)) + 16LL * (unsigned __int8)v17 + 8);
  }
  if ( v19 != v30 )
    v14 = 0LL;
  v20 = *(_QWORD *)(v14 + 16);
  if ( !v20 )
    goto LABEL_23;
  CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process(v16);
  v22 = CurrentProcessWin32Process;
  if ( !CurrentProcessWin32Process || !*CurrentProcessWin32Process )
  {
    DbgkWerCaptureLiveKernelDump(L"win32kfull.sys", 356LL, 41LL, 0LL, 0LL, 0LL, 0LL, 0LL, 0);
LABEL_23:
    v4 = 0LL;
LABEL_24:
    HANDLELOCK::vUnlock((HANDLELOCK *)&v27);
    goto LABEL_30;
  }
  ProcessWow64Process = PsGetProcessWow64Process(*CurrentProcessWin32Process);
  v24 = *((_DWORD *)v22 + 73);
  if ( ProcessWow64Process )
    v25 = (unsigned int)__ROR4__(v20, 32 - (v24 & 0x1F));
  else
    v25 = __ROR8__(v20, 64 - (v24 & 0x3Fu));
  v4 = (_DWORD *)(*((unsigned int *)v22 + 73) ^ v25);
  if ( !v4 )
    goto LABEL_24;
  v3 = bPEBCacheHandle(2LL, v4, (_DWORD *)v14, (__int64)&v27, (__int64)Entry);
  if ( !v3 )
    goto LABEL_24;
LABEL_30:
  if ( v28 )
    HANDLELOCK::vUnlock((HANDLELOCK *)&v27);
  if ( !v3 )
    goto LABEL_35;
LABEL_33:
  RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)Entry);
  return v2;
}
