/*
 * XREFs of LdrpMergeLangFallbackLists @ 0x18004AB28
 * Callers:
 *     RtlGetThreadPreferredUILanguages @ 0x1800494B0 (RtlGetThreadPreferredUILanguages.c)
 *     RtlGetSystemPreferredUILanguages @ 0x18007E780 (RtlGetSystemPreferredUILanguages.c)
 *     RtlGetUserPreferredUILanguages @ 0x180083ED0 (RtlGetUserPreferredUILanguages.c)
 * Callees:
 *     RtlFreeHeap @ 0x180027690 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180028B70 (RtlAllocateHeap.c)
 *     LdrpCreateLangFallbackList @ 0x180049BE8 (LdrpCreateLangFallbackList.c)
 *     RtlpMuiRegFreeLanguageList @ 0x18004A42C (RtlpMuiRegFreeLanguageList.c)
 *     GetNameFromLangListNode @ 0x18004B20C (GetNameFromLangListNode.c)
 *     RtlLCIDToCultureName @ 0x18004B690 (RtlLCIDToCultureName.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByLangId @ 0x18004B778 (RtlpMuiRegGetInstalledLanguageIndexByLangId.c)
 *     LdrpLangFallbackListAppendNode @ 0x18004BB28 (LdrpLangFallbackListAppendNode.c)
 *     RtlpFilterandReplaceConsoleLanguages @ 0x18004D524 (RtlpFilterandReplaceConsoleLanguages.c)
 *     RtlpLoadInstallLanguageFallback @ 0x180093130 (RtlpLoadInstallLanguageFallback.c)
 *     NtIsUILanguageComitted @ 0x1800A6180 (NtIsUILanguageComitted.c)
 *     NtQueryInstallUILanguage @ 0x1800A6B40 (NtQueryInstallUILanguage.c)
 *     LdrpMergeParentBaseLanguagesToList @ 0x1800FA0D0 (LdrpMergeParentBaseLanguagesToList.c)
 */

__int64 __fastcall LdrpMergeLangFallbackLists(
        int a1,
        __int64 a2,
        __int64 *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        char a9)
{
  __int64 v11; // r15
  __int64 v12; // r14
  int v13; // esi
  __int64 v14; // rax
  unsigned int v15; // ecx
  __int64 v16; // r12
  __int64 *v17; // rbx
  int appended; // ebx
  _WORD *v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  int v22; // r15d
  __int64 v23; // rax
  unsigned int v24; // ebx
  int v25; // r15d
  __int64 v26; // rax
  unsigned __int16 v27; // si
  __int64 v28; // r8
  __int64 v29; // rsi
  _BYTE *v30; // rdx
  __int64 *v31; // r15
  __int64 v32; // r8
  _BYTE *v33; // rdx
  __int64 v35; // rcx
  unsigned int v36; // esi
  int v37; // r13d
  __int64 v38; // rcx
  __int64 v39; // r9
  char v40; // [rsp+28h] [rbp-69h]
  char v41; // [rsp+28h] [rbp-69h]
  char v42; // [rsp+28h] [rbp-69h]
  _WORD v43[2]; // [rsp+38h] [rbp-59h] BYREF
  char v44; // [rsp+3Ch] [rbp-55h]
  __int64 Heap; // [rsp+40h] [rbp-51h]
  __int16 v46[2]; // [rsp+48h] [rbp-49h] BYREF
  _WORD v47[2]; // [rsp+4Ch] [rbp-45h] BYREF
  __int64 *v48; // [rsp+50h] [rbp-41h]
  int v49; // [rsp+58h] [rbp-39h]
  int v50; // [rsp+60h] [rbp-31h] BYREF
  __int64 v51; // [rsp+68h] [rbp-29h]
  unsigned int v52; // [rsp+70h] [rbp-21h]
  unsigned int v53; // [rsp+74h] [rbp-1Dh]
  __int64 v54; // [rsp+78h] [rbp-19h] BYREF
  int v55; // [rsp+80h] [rbp-11h]
  __int128 v56; // [rsp+88h] [rbp-9h] BYREF
  char v57; // [rsp+D8h] [rbp+47h]

  v57 = a1;
  v53 = 0;
  v49 = 0;
  v43[0] = -1;
  v47[0] = -1;
  v11 = 0LL;
  v46[0] = -1;
  v12 = 0LL;
  v54 = 0LL;
  v44 = 0;
  v56 = 0LL;
  if ( !a3 || !*a3 || !a2 || *(_WORD *)(*a3 + 4) )
    return 3221225485LL;
  v13 = a1 & 0x10000;
  if ( NtCurrentTeb()->UserPrefLanguages && (v14 = *(_QWORD *)NtCurrentTeb()->UserPrefLanguages) != 0 )
  {
    v15 = *(_DWORD *)(v14 + 40);
    v52 = v15;
  }
  else
  {
    v15 = 0;
    v52 = 0;
  }
  v16 = 0LL;
  LODWORD(v17) = (_DWORD)a3;
  v48 = a3;
  if ( v13 || (v15 & 6) == 0 )
  {
LABEL_12:
    Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, 340LL);
    v20 = Heap;
    if ( !Heap )
      return 3221225495LL;
    v21 = 170LL;
    if ( !v13 && a4 && *(_WORD *)(a4 + 4) )
    {
      do
      {
        v19 = (_WORD *)(*(_QWORD *)(a4 + 24) + 6 * v11);
        if ( *v19 )
        {
          v51 = v20;
          v35 = a2;
          v50 = 11141120;
          if ( *(_QWORD *)(a4 + 16) )
            v35 = *(_QWORD *)(a4 + 16);
          if ( (int)GetNameFromLangListNode(v35, v19, &v50, 170LL) >= 0 )
          {
            appended = LdrpLangFallbackListAppendNode((_DWORD)v17, a2, 0, (unsigned int)v43, v51);
            if ( appended < 0 )
              goto LABEL_51;
          }
          v20 = Heap;
          v21 = 170LL;
        }
        v11 = (unsigned int)(v11 + 1);
        LODWORD(v17) = (_DWORD)v48;
      }
      while ( (unsigned int)v11 < *(unsigned __int16 *)(a4 + 4) );
    }
    if ( a5 )
    {
      if ( !v13 )
      {
        v36 = 0;
        if ( *(_WORD *)(a5 + 4) )
        {
          v37 = (int)v48;
          do
          {
            v19 = (_WORD *)(*(_QWORD *)(a5 + 24) + 6LL * v36);
            if ( *v19 )
            {
              v51 = v20;
              v38 = a2;
              v50 = 11141120;
              if ( *(_QWORD *)(a5 + 16) )
                v38 = *(_QWORD *)(a5 + 16);
              if ( (int)GetNameFromLangListNode(v38, v19, &v50, v21) >= 0 )
              {
                appended = LdrpLangFallbackListAppendNode(v37, a2, 0, (unsigned int)v43, v51);
                if ( appended < 0 )
                  goto LABEL_51;
              }
            }
            ++v36;
            v20 = Heap;
          }
          while ( v36 < *(unsigned __int16 *)(a5 + 4) );
        }
      }
    }
    v22 = v57 & 0x20;
    v55 = v22;
    if ( (v57 & 0x20) != 0 && ((v23 = a6) != 0 && *(_WORD *)(a6 + 4) || (v23 = a7) != 0 && *(_WORD *)(a7 + 4)) )
    {
      v16 = v23;
      if ( *(_BYTE *)(v23 + 8) )
      {
        v12 = *(_QWORD *)(a2 + 40);
      }
      else
      {
        v12 = a8;
        if ( !a8 )
          v12 = *(_QWORD *)(a2 + 48);
      }
      v24 = 0;
      if ( *(_WORD *)(v23 + 4) )
      {
        v25 = (int)v48;
        do
        {
          v19 = (_WORD *)(*(_QWORD *)(v16 + 24) + 6LL * v24);
          if ( *v19 )
          {
            v51 = Heap;
            v50 = 11141120;
            if ( (int)GetNameFromLangListNode(a2, v19, &v50, v21) >= 0 )
            {
              LOBYTE(v20) = 1;
              if ( (int)LdrpLangFallbackListAppendNode(v25, a2, v20, (unsigned int)v43, v51) >= 0 && (v57 & 0x10) != 0 )
              {
                v26 = *(_QWORD *)(v16 + 24);
                if ( *(_WORD *)(v26 + 6LL * v24) == 2 )
                {
                  v19 = (_WORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 24) + 16LL) + 28LL * *(__int16 *)(v26 + 6LL * v24 + 4));
                  if ( (*(_BYTE *)v19 & 7) != 0
                    && ((*(_BYTE *)v19 & 6) == 0
                     || (int)LdrpMergeParentBaseLanguagesToList(v25, (_DWORD)v19, a2, v12, v40) >= 0) )
                  {
                    ++v49;
                  }
                }
              }
            }
          }
          ++v24;
        }
        while ( v24 < *(unsigned __int16 *)(v16 + 4) );
        v22 = v55;
      }
    }
    appended = 0;
    v43[0] = 0;
    v27 = 0;
    *((_QWORD *)&v56 + 1) = Heap + 170;
    LODWORD(v56) = 11141120;
    if ( *(_WORD *)(a2 + 4) )
    {
      v27 = *(_WORD *)(a2 + 4);
    }
    else
    {
      appended = NtQueryInstallUILanguage(v43, v19, v20, v21);
      if ( appended >= 0 )
      {
        if ( (int)NtIsUILanguageComitted() >= 0 )
        {
          RtlpLoadInstallLanguageFallback(a2, a2 + 6, a2 + 8);
          *(_WORD *)(a2 + 4) = v43[0];
        }
        v27 = v43[0];
      }
    }
    if ( appended >= 0 )
    {
      if ( (unsigned __int8)RtlLCIDToCultureName(v27, &v56) )
      {
        LOBYTE(v28) = 1;
        appended = RtlpMuiRegGetInstalledLanguageIndexByLangId(a2, v27, v28, v46);
        if ( appended >= 0 )
        {
          v29 = *((_QWORD *)&v56 + 1);
          if ( (v57 & 0x40) != 0
            || a9 && v49
            || (appended = LdrpLangFallbackListAppendNode((_DWORD)v48, a2, 0, (unsigned int)v47, *((__int64 *)&v56 + 1)),
                appended < 0)
            || !v22
            || (v30 = (_BYTE *)(*(_QWORD *)(*(_QWORD *)(a2 + 24) + 16LL) + 28LL * v46[0]), (*v30 & 6) == 0) )
          {
            v31 = v48;
          }
          else
          {
            if ( !v16 || (LODWORD(v39) = v12, !v12) )
              v39 = *(_QWORD *)(a2 + 40);
            v31 = v48;
            appended = LdrpMergeParentBaseLanguagesToList((_DWORD)v48, (_DWORD)v30, a2, v39, v41);
            if ( appended < 0 )
              goto LABEL_51;
          }
          if ( v44 )
          {
            v32 = v52 >> 2;
            LOBYTE(v32) = (v52 & 4) != 0;
            appended = RtlpFilterandReplaceConsoleLanguages(*v31, a2, v32, v53, a3);
            if ( appended >= 0 && (v57 & 0x30) == 0x30 )
            {
              appended = LdrpLangFallbackListAppendNode((_DWORD)a3, a2, 0, (unsigned int)v47, v29);
              if ( appended >= 0 )
              {
                v33 = (_BYTE *)(*(_QWORD *)(*(_QWORD *)(a2 + 24) + 16LL) + 28LL * v46[0]);
                if ( (*v33 & 6) != 0 )
                {
                  if ( !v16 || !v12 )
                    v12 = *(_QWORD *)(a2 + 40);
                  appended = LdrpMergeParentBaseLanguagesToList((_DWORD)a3, (_DWORD)v33, a2, v12, v42);
                }
              }
            }
          }
        }
      }
      else
      {
        appended = -1073741823;
      }
    }
LABEL_51:
    v11 = Heap;
    goto LABEL_52;
  }
  v44 = 1;
  v53 = HIWORD(v15);
  v48 = &v54;
  appended = LdrpCreateLangFallbackList(&v54, a2, 0x19u, 0);
  if ( appended >= 0 )
  {
    v17 = &v54;
    goto LABEL_12;
  }
LABEL_52:
  if ( v54 )
    RtlpMuiRegFreeLanguageList(v54);
  if ( v11 )
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v11);
  return (unsigned int)appended;
}
