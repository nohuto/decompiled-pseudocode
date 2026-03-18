/*
 * XREFs of HmgShareLockEx @ 0x1C0020870
 * Callers:
 *     ??0DCOBJA@@QEAA@PEAUHDC__@@@Z @ 0x1C002BF28 (--0DCOBJA@@QEAA@PEAUHDC__@@@Z.c)
 *     DestroyCacheDC @ 0x1C0051AF0 (DestroyCacheDC.c)
 *     ??0MDCOBJA@@QEAA@PEAUHDC__@@H@Z @ 0x1C00AE7A0 (--0MDCOBJA@@QEAA@PEAUHDC__@@H@Z.c)
 *     GreMarkDCUnreadable @ 0x1C00C4754 (GreMarkDCUnreadable.c)
 *     ??$vGarbageCollectObject@VSURFREFGC@@@@YAXPEAUHOBJ__@@@Z @ 0x1C0179210 (--$vGarbageCollectObject@VSURFREFGC@@@@YAXPEAUHOBJ__@@@Z.c)
 *     bInitICM @ 0x1C02E5C44 (bInitICM.c)
 * Callees:
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHHH@Z @ 0x1C0022260 (-vLockHandle@HANDLELOCK@@AEAAXIHHH@Z.c)
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C0022610 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?TrackObjectReferenceIncrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x1C0022DD0 (-TrackObjectReferenceIncrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
 */

__int64 __fastcall HmgShareLockEx(unsigned int a1, char a2, int a3)
{
  _DWORD *v4; // r14
  __int16 v5; // ebx^2
  __int64 v6; // rbp
  _DWORD *v8; // rdi
  unsigned int v9; // ebx
  __int64 v10; // rdx
  unsigned int v11; // r9d
  __int64 v12; // r8
  unsigned int v13; // ebx
  GdiHandleManager *v14; // rdi
  __int64 v15; // rdx
  unsigned int v16; // r9d
  __int64 v17; // r8
  unsigned int v18; // ebx
  __int64 v19; // rdx
  unsigned int v20; // r8d
  __int64 v21; // r10
  bool v22; // r8
  unsigned __int16 *v23; // [rsp+30h] [rbp-38h] BYREF
  int v24; // [rsp+38h] [rbp-30h]

  v4 = 0LL;
  v23 = 0LL;
  v5 = HIWORD(a1);
  v24 = 0;
  v6 = 0LL;
  HANDLELOCK::vLockHandle((HANDLELOCK *)&v23, (unsigned __int16)a1 | (a1 >> 8) & 0xFF0000, 0, 0, a3);
  if ( v24 )
  {
    v8 = v23;
    if ( *((_BYTE *)v23 + 14) == a2 && v23[6] == v5 )
    {
      v9 = *(_DWORD *)v23 & 0xFFFFFF;
      if ( v9 >= 0x10000 )
      {
        if ( *(_DWORD *)gpHandleManager > 0x10000u )
        {
          if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                      *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                      *v23,
                                      1)
               + 13) == HIWORD(v9) )
            v9 = (unsigned __int16)v9;
        }
        else
        {
          v9 = *v23;
        }
      }
      v10 = *((_QWORD *)gpHandleManager + 2);
      v11 = *(_DWORD *)(v10 + 2056);
      if ( v9 >= v11 + ((*(unsigned __int16 *)(v10 + 2) + 0xFFFF) << 16)
        || (v9 >= v11
          ? (v12 = *(_QWORD *)(v10 + 8LL * (((v9 - v11) >> 16) + 1) + 8), v9 += -65536 * ((v9 - v11) >> 16) - v11)
          : (v12 = *(_QWORD *)(v10 + 8)),
            v9 >= *(_DWORD *)(v12 + 20)) )
      {
        v6 = 0LL;
      }
      else
      {
        v6 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v12 + 24) + 8 * ((unsigned __int64)v9 >> 8))
                       + 16LL * (unsigned __int8)v9
                       + 8);
      }
      ++*(_DWORD *)(v6 + 8);
      if ( a2 == 5 )
      {
        TrackObjectReferenceIncrement(0LL, *(_QWORD *)(v6 + 680));
      }
      else if ( a2 == 16 )
      {
        TrackObjectReferenceIncrement(2LL, *(_QWORD *)(v6 + 136));
      }
    }
    v13 = *v8 & 0xFFFFFF;
    if ( v13 >= 0x10000 )
    {
      if ( *(_DWORD *)gpHandleManager > 0x10000u )
      {
        if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                    *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                    *(unsigned __int16 *)v8,
                                    1)
             + 13) == HIWORD(v13) )
          v13 = (unsigned __int16)v13;
      }
      else
      {
        v13 = *(unsigned __int16 *)v8;
      }
    }
    v14 = gpHandleManager;
    v15 = *((_QWORD *)gpHandleManager + 2);
    v16 = *(_DWORD *)(v15 + 2056);
    if ( v13 < v16 + ((*(unsigned __int16 *)(v15 + 2) + 0xFFFF) << 16) )
    {
      if ( v13 >= v16 )
      {
        v17 = *(_QWORD *)(v15 + 8LL * (((v13 - v16) >> 16) + 1) + 8);
        v13 += -65536 * ((v13 - v16) >> 16) - v16;
      }
      else
      {
        v17 = *(_QWORD *)(v15 + 8);
      }
      if ( v13 < *(_DWORD *)(v17 + 20) )
        v4 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v17 + 24) + 8 * ((unsigned __int64)v13 >> 8))
                        + 16LL * (unsigned __int8)v13
                        + 8);
    }
    v18 = (unsigned __int16)*v4 | (*v4 >> 8) & 0xFF0000;
    if ( v18 >= 0x10000 )
    {
      if ( *(_DWORD *)gpHandleManager > 0x10000u )
      {
        if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                    *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                    (unsigned __int16)*v4,
                                    1)
             + 13) == HIWORD(v18) )
        {
          v18 = (unsigned __int16)v18;
        }
        else if ( *(_DWORD *)v14 > 0x10000u )
        {
          GdiHandleEntryDirectory::GetEntry(*((GdiHandleEntryDirectory **)v14 + 2), (unsigned __int16)v18, v22);
        }
      }
      else
      {
        v18 = (unsigned __int16)*v4;
      }
    }
    v19 = *((_QWORD *)v14 + 2);
    v20 = *(_DWORD *)(v19 + 2056);
    if ( v18 < v20 + ((*(unsigned __int16 *)(v19 + 2) + 0xFFFF) << 16) )
    {
      if ( v18 >= v20 )
      {
        v21 = *(_QWORD *)(v19 + 8LL * (((v18 - v20) >> 16) + 1) + 8);
        v18 += -65536 * ((v18 - v20) >> 16) - v20;
      }
      else
      {
        v21 = *(_QWORD *)(v19 + 8);
      }
      *(_DWORD *)(*(_QWORD *)v21 + 24LL * v18 + 8) &= ~1u;
      ExReleasePushLockExclusiveEx(
        *(_QWORD *)(**(_QWORD **)(v21 + 24) + 8 * ((unsigned __int64)v18 >> 8)) + 16LL * (unsigned __int8)v18,
        0LL);
      KeLeaveCriticalRegion();
    }
    KeLeaveCriticalRegion();
  }
  return v6;
}
