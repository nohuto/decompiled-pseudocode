/*
 * XREFs of ?HampActInsert@@YAJPEAU_HAM_ACTIVITY@@@Z @ 0x180024380
 * Callers:
 *     ?HampActCreate@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_ACTIVITY_PROPERTIES@@K_KPEAPEAU_HAM_ACTIVITY@@@Z @ 0x1800026DC (-HampActCreate@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_HAM_ACTIVITY_HOS.c)
 *     ?HamSrvCreateActivity@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGPEAEKKK_KPEAU_HAM_ACTIVITY_PROPERTIES@@PEAXPEA_K@Z @ 0x180022910 (-HamSrvCreateActivity@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGPEAEKKK_KPEAU_HAM_ACTIVITY_PROPERTIES@@PE.c)
 * Callees:
 *     ?HampHostIsCached@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180022204 (-HampHostIsCached@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     CemRcTableFindOrInsertEx @ 0x180037AB0 (CemRcTableFindOrInsertEx.c)
 */

__int64 __fastcall HampActInsert(struct _HAM_ACTIVITY *a1)
{
  DWORD v2; // ebp
  unsigned __int64 v3; // r12
  __int64 v4; // rsi
  int v5; // r14d
  _QWORD *Value; // rdi
  __int64 v7; // rdx
  __int64 v8; // rcx
  _QWORD *v9; // rcx
  _QWORD *v10; // rax
  __int64 v11; // r15
  DWORD v12; // r14d
  _QWORD *v13; // rdi
  __int64 *v14; // rcx
  __int64 v15; // rax
  __int64 **v16; // rdx
  __int64 *v17; // rax
  __int64 v18; // rdx
  bool v19; // zf
  int v20; // edi
  __int64 *v21; // rax
  __int64 v22; // rdx
  __int64 v24; // r10

  v2 = HampLockTrackerId;
  v3 = *((_QWORD *)a1 + 4) & 0xFFFFFFFFFFFFFFFCuLL;
  v4 = *((_QWORD *)a1 + 10);
  v5 = *((_DWORD *)a1 + 28);
  if ( HampLockTrackerId != -1 )
  {
    Value = TlsGetValue(HampLockTrackerId);
    if ( (*(_QWORD *)TlsGetValue(v2) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
      __int2c();
    *Value |= 2uLL;
    ++Value[2];
  }
  RtlAcquireSRWLockExclusive(v4);
  *(_DWORD *)(v4 + 8) = GetCurrentThreadId();
  if ( (v5 & 0x80000) != 0 )
  {
    if ( *(_QWORD *)(v4 + 608) == v4 + 608 )
    {
      v7 = v4 + 608;
      goto LABEL_9;
    }
  }
  else
  {
    v7 = v4 + 608;
    v8 = *(_QWORD *)(v4 + 608);
    if ( v8 == v4 + 608 || v8 == 96 || (*(_DWORD *)(v8 + 16) & 0x80000) == 0 )
    {
LABEL_9:
      *((_BYTE *)a1 + 562) = 1;
      if ( _InterlockedIncrement64((volatile signed __int64 *)a1 + 3) <= 1 )
        __fastfail(0xEu);
      v9 = *(_QWORD **)(v7 + 8);
      v10 = (_QWORD *)((char *)a1 + 96);
      if ( *v9 == v7 )
      {
        *v10 = v7;
        *((_QWORD *)a1 + 13) = v9;
        *v9 = v10;
        *(_QWORD *)(v7 + 8) = v10;
        if ( *(_QWORD *)(v4 + 840) && !HampHostIsCached((struct _RM_HAM_ACTIVITY_HOST *)v4) )
          TpSetTimerEx(v24, 0LL, 0LL, 0LL);
        v11 = *((_QWORD *)a1 + 8);
        if ( !v11 )
          goto LABEL_25;
        v12 = HampLockTrackerId;
        if ( HampLockTrackerId != -1 )
        {
          v13 = TlsGetValue(HampLockTrackerId);
          if ( (*(_QWORD *)TlsGetValue(v12) & 0xFFFFFFFFFFFFFE00uLL) != 0 )
            __int2c();
          *v13 |= 0x200uLL;
          ++v13[10];
        }
        RtlAcquireSRWLockExclusive(v11 + 24);
        *(_DWORD *)(v11 + 32) = GetCurrentThreadId();
        if ( _InterlockedIncrement64((volatile signed __int64 *)a1 + 3) <= 1 )
          __fastfail(0xEu);
        v14 = (__int64 *)((char *)a1 + 48);
        v15 = *((_QWORD *)a1 + 8) + 40LL;
        v16 = *(__int64 ***)(*((_QWORD *)a1 + 8) + 48LL);
        if ( *v16 == (__int64 *)v15 )
        {
          *v14 = v15;
          *((_QWORD *)a1 + 7) = v16;
          *v16 = v14;
          *(_QWORD *)(v15 + 8) = v14;
          if ( HampLockTrackerId != -1 )
          {
            v17 = (__int64 *)TlsGetValue(HampLockTrackerId);
            v18 = *v17;
            if ( (*v17 & 0x200) == 0 )
              __int2c();
            v19 = v17[10]-- == 1;
            if ( v19 )
              *v17 = v18 & 0xFFFFFFFFFFFFFDFFuLL;
          }
          *(_DWORD *)(v11 + 32) = 0;
          RtlReleaseSRWLockExclusive(v11 + 24);
LABEL_25:
          v20 = 0;
          goto LABEL_26;
        }
      }
      __fastfail(3u);
    }
  }
  v20 = -1071513591;
LABEL_26:
  if ( HampLockTrackerId != -1 )
  {
    v21 = (__int64 *)TlsGetValue(HampLockTrackerId);
    v22 = *v21;
    if ( (*v21 & 2) == 0 )
      __int2c();
    v19 = v21[2]-- == 1;
    if ( v19 )
      *v21 = v22 & 0xFFFFFFFFFFFFFFFDuLL;
  }
  *(_DWORD *)(v4 + 8) = 0;
  RtlReleaseSRWLockExclusive(v4);
  if ( v20 >= 0 )
    CemRcTableFindOrInsertEx(v3, (_DWORD)a1 + 40, (unsigned int)HampActCompareByHandle, (_DWORD)a1);
  return (unsigned int)v20;
}
