/*
 * XREFs of ?bLockHobj@HANDLELOCK@@QEAAHPEAUHOBJ__@@E@Z @ 0x1C0022F70
 * Callers:
 *     ?DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT@@YAXPEAVLFONT@@@Z @ 0x1C0020AE0 (-DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT@@YAXPEAVLFONT@@@Z.c)
 *     ?DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z @ 0x1C0021290 (-DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z.c)
 *     ??0BRUSHMEMOBJ@@QEAA@KKHH@Z @ 0x1C00636C0 (--0BRUSHMEMOBJ@@QEAA@KKHH@Z.c)
 *     ?bDeleteRGNOBJAPI@RGNOBJAPI@@QEAAHXZ @ 0x1C008E200 (-bDeleteRGNOBJAPI@RGNOBJAPI@@QEAAHXZ.c)
 *     bDeleteBrush @ 0x1C00C82E0 (bDeleteBrush.c)
 * Callees:
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C0021FC0 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C0022610 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C0022C40 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 */

__int64 __fastcall HANDLELOCK::bLockHobj(HANDLELOCK *this, struct HOBJ__ *a2, __int64 a3)
{
  unsigned int v3; // ebp
  __int64 v5; // r12
  __int64 CurrentThreadWin32ThreadAndEnterCriticalRegion; // rsi
  GdiHandleManager *v7; // r14
  unsigned int v8; // ebx
  __int64 v9; // r14
  unsigned int v10; // edx
  __int64 v11; // r14
  __int64 v12; // rsi
  __int64 v13; // r13
  int v14; // ecx
  int v15; // eax
  unsigned int v16; // ecx
  char v17; // al
  __int64 result; // rax
  int v19; // ebx
  __int64 CurrentThreadProcess; // rax
  GdiHandleManager *v21; // rbx
  unsigned int v22; // eax
  __int64 v23; // r8
  unsigned __int64 v24; // rdx
  unsigned int v25; // r9d
  __int64 v26; // r8
  __int64 v27; // [rsp+20h] [rbp-48h]
  unsigned __int64 v28; // [rsp+28h] [rbp-40h]
  __int64 v29; // [rsp+70h] [rbp+8h]
  char v30; // [rsp+80h] [rbp+18h]
  __int64 v31; // [rsp+88h] [rbp+20h] BYREF

  v30 = a3;
  v3 = (unsigned int)a2;
  if ( *((_DWORD *)this + 2) )
    return 0LL;
  v5 = 0LL;
  v31 = 0LL;
  CurrentThreadWin32ThreadAndEnterCriticalRegion = PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(&v31, a2, a3);
  if ( (!(unsigned __int8)KeIsAttachedProcess()
     || (v19 = gSessionId,
         CurrentThreadProcess = PsGetCurrentThreadProcess(),
         v19 == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)))
    && CurrentThreadWin32ThreadAndEnterCriticalRegion
    && *(_QWORD *)CurrentThreadWin32ThreadAndEnterCriticalRegion )
  {
    v27 = *(_QWORD *)(*(_QWORD *)CurrentThreadWin32ThreadAndEnterCriticalRegion + 72LL);
  }
  else
  {
    v27 = 0LL;
  }
  *((_DWORD *)this + 2) = 1;
  v7 = gpHandleManager;
  v8 = (unsigned __int16)v3 | (v3 >> 8) & 0xFF0000;
  if ( v8 >= 0x10000 )
  {
    if ( *(_DWORD *)gpHandleManager > 0x10000u )
    {
      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                  *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                  (unsigned __int16)v3,
                                  1)
           + 13) == ((unsigned __int16)v3 | (v3 >> 8) & 0xFF0000) >> 16 )
        v8 = (unsigned __int16)v3;
    }
    else
    {
      v8 = (unsigned __int16)v3;
    }
  }
  v9 = *((_QWORD *)v7 + 2);
  v10 = *(_DWORD *)(v9 + 2056);
  if ( v8 >= v10 + ((*(unsigned __int16 *)(v9 + 2) + 0xFFFF) << 16)
    || (v8 >= v10
      ? (v11 = *(_QWORD *)(v9 + 8LL * (((v8 - v10) >> 16) + 1) + 8), v8 += -65536 * ((v8 - v10) >> 16) - v10)
      : (v11 = *(_QWORD *)(v9 + 8)),
        v12 = 0LL,
        v8 >= *(_DWORD *)(v11 + 20)) )
  {
    *(_QWORD *)this = 0LL;
  }
  else
  {
    v13 = 16LL * (unsigned __int8)v8;
    v28 = 8 * ((unsigned __int64)v8 >> 8);
    v29 = v13 + *(_QWORD *)(**(_QWORD **)(v11 + 24) + v28);
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v29, 0LL);
    if ( v8 < *(_DWORD *)(v11 + 20) && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v11 + 24) + v28) + v13 + 8) )
    {
      *(_DWORD *)(*(_QWORD *)v11 + 24LL * v8 + 8) |= 1u;
      v12 = 24LL * v8 + *(_QWORD *)v11;
    }
    else
    {
      ExReleasePushLockExclusiveEx(v29, 0LL);
      KeLeaveCriticalRegion();
    }
    *(_QWORD *)this = v12;
    if ( v12 )
    {
      _m_prefetchw((const void *)(v12 + 8));
      v14 = *(_DWORD *)(v12 + 8);
      v15 = v31;
      *((_DWORD *)this + 3) = v14;
      v16 = v14 & 0xFFFFFFFE;
      if ( v16 != (v15 & 0xFFFFFFFC) && v16 && (!v27 || v16 != *(_DWORD *)(v27 + 8)) )
        goto LABEL_46;
      v17 = *(_BYTE *)(v12 + 15);
      if ( (v17 & 0x20) != 0 )
        goto LABEL_46;
      if ( (v17 & 0x40) != 0 )
      {
        v21 = gpHandleManager;
        v22 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)gpHandleManager, *(_DWORD *)v12 & 0xFFFFFF);
        v23 = *((_QWORD *)v21 + 2);
        v24 = v22;
        v25 = *(_DWORD *)(v23 + 2056);
        if ( v22 < v25 + ((*(unsigned __int16 *)(v23 + 2) + 0xFFFF) << 16) )
        {
          if ( v22 >= v25 )
          {
            v26 = *(_QWORD *)(v23 + 8LL * (((v22 - v25) >> 16) + 1) + 8);
            v24 = -65536 * ((v22 - v25) >> 16) - v25 + v22;
          }
          else
          {
            v26 = *(_QWORD *)(v23 + 8);
          }
          if ( (unsigned int)v24 < *(_DWORD *)(v26 + 20) )
            v5 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v26 + 24) + 8 * (v24 >> 8)) + 16LL * (unsigned __int8)v24 + 8);
        }
        if ( !*(_WORD *)(v5 + 12) || *(struct _KTHREAD **)(v5 + 16) != KeGetCurrentThread() )
LABEL_46:
          HANDLELOCK::vUnlock(this);
      }
      goto LABEL_19;
    }
  }
  *((_DWORD *)this + 2) = 0;
  KeLeaveCriticalRegion();
LABEL_19:
  result = *((unsigned int *)this + 2);
  if ( (_DWORD)result && (*(_BYTE *)(*(_QWORD *)this + 14LL) != v30 || *(_WORD *)(*(_QWORD *)this + 12LL) != HIWORD(v3)) )
  {
    HANDLELOCK::vUnlock(this);
    return *((unsigned int *)this + 2);
  }
  return result;
}
