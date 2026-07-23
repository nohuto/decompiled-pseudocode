/*
 * XREFs of LdrpMergeLangFallbackLists @ 0x180013DA0
 * Callers:
 *     RtlGetThreadPreferredUILanguages @ 0x180011B40 (RtlGetThreadPreferredUILanguages.c)
 *     RtlGetUserPreferredUILanguages @ 0x1800810E0 (RtlGetUserPreferredUILanguages.c)
 *     RtlGetSystemPreferredUILanguages @ 0x180082250 (RtlGetSystemPreferredUILanguages.c)
 * Callees:
 *     LdrpCreateLangFallbackList @ 0x1800121CC (LdrpCreateLangFallbackList.c)
 *     RtlpMuiRegFreeLanguageList @ 0x1800125EC (RtlpMuiRegFreeLanguageList.c)
 *     RtlpGetSystemDefaultUILanguage @ 0x180012D30 (RtlpGetSystemDefaultUILanguage.c)
 *     GetNameFromLangListNode @ 0x180013534 (GetNameFromLangListNode.c)
 *     RtlLCIDToCultureName @ 0x180015AB0 (RtlLCIDToCultureName.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByLangId @ 0x180015B98 (RtlpMuiRegGetInstalledLanguageIndexByLangId.c)
 *     LdrpLangFallbackListAppendNode @ 0x180016248 (LdrpLangFallbackListAppendNode.c)
 *     RtlFreeHeap @ 0x18003B030 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18003CB80 (RtlAllocateHeap.c)
 *     RtlpFilterandReplaceConsoleLanguages @ 0x18007AC94 (RtlpFilterandReplaceConsoleLanguages.c)
 *     LdrpMergeParentBaseLanguagesToList @ 0x1800B035C (LdrpMergeParentBaseLanguagesToList.c)
 */

__int64 __fastcall LdrpMergeLangFallbackLists(
        int a1,
        __int64 a2,
        PVOID *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        char a9)
{
  wchar_t *v11; // r15
  __int64 v12; // rsi
  int v13; // r14d
  __int64 v14; // rax
  unsigned int v15; // ecx
  __int64 v16; // r12
  PVOID *v17; // rbx
  int appended; // ebx
  wchar_t *v19; // r8
  int v20; // r15d
  __int64 v21; // rax
  unsigned int v22; // ebx
  int v23; // r15d
  _WORD *v24; // rdx
  int v25; // r8d
  __int64 v26; // r8
  wchar_t *Buffer; // r14
  _BYTE *v28; // rdx
  PVOID *v29; // r15
  __int64 v31; // rax
  _BYTE *v32; // rdx
  _WORD *v33; // rdx
  bool v34; // zf
  __int64 v35; // rcx
  __int64 v36; // r8
  _BYTE *v37; // rdx
  unsigned int v38; // r14d
  int v39; // r13d
  _WORD *v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r9
  char v43; // [rsp+28h] [rbp-79h]
  char v44; // [rsp+28h] [rbp-79h]
  char v45; // [rsp+28h] [rbp-79h]
  char v46; // [rsp+38h] [rbp-69h]
  wchar_t *Heap; // [rsp+40h] [rbp-61h]
  _WORD v48[2]; // [rsp+48h] [rbp-59h] BYREF
  __int16 v49; // [rsp+4Ch] [rbp-55h] BYREF
  LANGID DefaultUILanguageId; // [rsp+50h] [rbp-51h] BYREF
  _WORD v51[2]; // [rsp+54h] [rbp-4Dh] BYREF
  PVOID *p_BaseAddress; // [rsp+58h] [rbp-49h]
  int v53; // [rsp+60h] [rbp-41h]
  _UNICODE_STRING v54; // [rsp+68h] [rbp-39h] BYREF
  unsigned int v55; // [rsp+78h] [rbp-29h]
  unsigned int v56; // [rsp+7Ch] [rbp-25h]
  PVOID BaseAddress; // [rsp+80h] [rbp-21h] BYREF
  int v58; // [rsp+88h] [rbp-19h]
  _UNICODE_STRING String; // [rsp+90h] [rbp-11h] BYREF
  char v60; // [rsp+E8h] [rbp+47h]

  v60 = a1;
  v56 = 0;
  v53 = 0;
  v48[0] = -1;
  v51[0] = -1;
  v11 = 0LL;
  v49 = -1;
  v12 = 0LL;
  BaseAddress = 0LL;
  v46 = 0;
  String = 0LL;
  if ( !a3 || !*a3 || !a2 || *((_WORD *)*a3 + 2) )
    return 3221225485LL;
  v13 = a1 & 0x10000;
  if ( NtCurrentTeb()->UserPrefLanguages && (v14 = *(_QWORD *)NtCurrentTeb()->UserPrefLanguages) != 0 )
  {
    v15 = *(_DWORD *)(v14 + 40);
    v55 = v15;
  }
  else
  {
    v15 = 0;
    v55 = 0;
  }
  v16 = 0LL;
  LODWORD(v17) = (_DWORD)a3;
  p_BaseAddress = a3;
  if ( v13 || (v15 & 6) == 0 )
  {
LABEL_12:
    Heap = (wchar_t *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0x154uLL);
    v19 = Heap;
    if ( !Heap )
      return 3221225495LL;
    if ( !v13 && a4 && *(_WORD *)(a4 + 4) )
    {
      do
      {
        v33 = (_WORD *)(*(_QWORD *)(a4 + 24) + 6LL * (_QWORD)v11);
        if ( *v33 )
        {
          v54.Buffer = v19;
          v34 = *(_QWORD *)(a4 + 16) == 0LL;
          v35 = a2;
          *(_DWORD *)&v54.Length = 11141120;
          if ( !v34 )
            v35 = *(_QWORD *)(a4 + 16);
          if ( (int)GetNameFromLangListNode(v35, v33, &v54) >= 0 )
          {
            appended = LdrpLangFallbackListAppendNode((_DWORD)v17, a2, 0, (unsigned int)v48, (__int64)v54.Buffer);
            if ( appended < 0 )
              goto LABEL_41;
          }
          v19 = Heap;
        }
        v11 = (wchar_t *)(unsigned int)((_DWORD)v11 + 1);
        LODWORD(v17) = (_DWORD)p_BaseAddress;
      }
      while ( (unsigned int)v11 < *(unsigned __int16 *)(a4 + 4) );
    }
    if ( a5 )
    {
      if ( !v13 )
      {
        v38 = 0;
        if ( *(_WORD *)(a5 + 4) )
        {
          v39 = (int)p_BaseAddress;
          do
          {
            v40 = (_WORD *)(*(_QWORD *)(a5 + 24) + 6LL * v38);
            if ( *v40 )
            {
              v54.Buffer = v19;
              v34 = *(_QWORD *)(a5 + 16) == 0LL;
              v41 = a2;
              *(_DWORD *)&v54.Length = 11141120;
              if ( !v34 )
                v41 = *(_QWORD *)(a5 + 16);
              if ( (int)GetNameFromLangListNode(v41, v40, &v54) >= 0 )
              {
                appended = LdrpLangFallbackListAppendNode(v39, a2, 0, (unsigned int)v48, (__int64)v54.Buffer);
                if ( appended < 0 )
                  goto LABEL_41;
              }
            }
            ++v38;
            v19 = Heap;
          }
          while ( v38 < *(unsigned __int16 *)(a5 + 4) );
        }
      }
    }
    v20 = v60 & 0x20;
    v58 = v20;
    if ( (v60 & 0x20) != 0 && ((v21 = a6) != 0 && *(_WORD *)(a6 + 4) || (v21 = a7) != 0 && *(_WORD *)(a7 + 4)) )
    {
      v16 = v21;
      if ( *(_BYTE *)(v21 + 8) )
      {
        v12 = *(_QWORD *)(a2 + 40);
      }
      else
      {
        v12 = a8;
        if ( !a8 )
          v12 = *(_QWORD *)(a2 + 48);
      }
      v22 = 0;
      if ( *(_WORD *)(v21 + 4) )
      {
        v23 = (int)p_BaseAddress;
        do
        {
          v24 = (_WORD *)(*(_QWORD *)(v16 + 24) + 6LL * v22);
          if ( *v24 )
          {
            v54.Buffer = Heap;
            *(_DWORD *)&v54.Length = 11141120;
            if ( (int)GetNameFromLangListNode(a2, v24, &v54) >= 0 )
            {
              LOBYTE(v25) = 1;
              if ( (int)LdrpLangFallbackListAppendNode(v23, a2, v25, (unsigned int)v48, (__int64)v54.Buffer) >= 0
                && (v60 & 0x10) != 0 )
              {
                v31 = *(_QWORD *)(v16 + 24);
                if ( *(_WORD *)(v31 + 6LL * v22) == 2 )
                {
                  v32 = (_BYTE *)(*(_QWORD *)(*(_QWORD *)(a2 + 24) + 16LL) + 28LL * *(__int16 *)(v31 + 6LL * v22 + 4));
                  if ( (*v32 & 7) != 0
                    && ((*v32 & 6) == 0 || (int)LdrpMergeParentBaseLanguagesToList(v23, (_DWORD)v32, a2, v12, v43) >= 0) )
                  {
                    ++v53;
                  }
                }
              }
            }
          }
          ++v22;
        }
        while ( v22 < *(unsigned __int16 *)(v16 + 4) );
        v20 = v58;
      }
    }
    *(_DWORD *)&String.Length = 11141120;
    String.Buffer = Heap + 85;
    appended = RtlpGetSystemDefaultUILanguage((LANGID)&DefaultUILanguageId, (PLCID)a2);
    if ( appended >= 0 )
    {
      if ( RtlLCIDToCultureName(DefaultUILanguageId, &String) )
      {
        LOBYTE(v26) = 1;
        appended = RtlpMuiRegGetInstalledLanguageIndexByLangId(a2, DefaultUILanguageId, v26, &v49);
        if ( appended >= 0 )
        {
          Buffer = String.Buffer;
          if ( (v60 & 0x40) != 0
            || a9 && v53
            || (appended = LdrpLangFallbackListAppendNode(
                             (_DWORD)p_BaseAddress,
                             a2,
                             0,
                             (unsigned int)v51,
                             (__int64)String.Buffer),
                appended < 0)
            || !v20
            || (v28 = (_BYTE *)(*(_QWORD *)(*(_QWORD *)(a2 + 24) + 16LL) + 28LL * v49), (*v28 & 6) == 0) )
          {
            v29 = p_BaseAddress;
          }
          else
          {
            if ( !v16 || (LODWORD(v42) = v12, !v12) )
              v42 = *(_QWORD *)(a2 + 40);
            v29 = p_BaseAddress;
            appended = LdrpMergeParentBaseLanguagesToList((_DWORD)p_BaseAddress, (_DWORD)v28, a2, v42, v44);
            if ( appended < 0 )
              goto LABEL_41;
          }
          if ( v46 )
          {
            v36 = v55 >> 2;
            LOBYTE(v36) = (v55 & 4) != 0;
            appended = RtlpFilterandReplaceConsoleLanguages(*v29, a2, v36, v56, a3);
            if ( appended >= 0 && (v60 & 0x30) == 0x30 )
            {
              appended = LdrpLangFallbackListAppendNode((_DWORD)a3, a2, 0, (unsigned int)v51, (__int64)Buffer);
              if ( appended >= 0 )
              {
                v37 = (_BYTE *)(*(_QWORD *)(*(_QWORD *)(a2 + 24) + 16LL) + 28LL * v49);
                if ( (*v37 & 6) != 0 )
                {
                  if ( !v16 || !v12 )
                    v12 = *(_QWORD *)(a2 + 40);
                  appended = LdrpMergeParentBaseLanguagesToList((_DWORD)a3, (_DWORD)v37, a2, v12, v45);
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
LABEL_41:
    v11 = Heap;
    goto LABEL_42;
  }
  v46 = 1;
  v56 = HIWORD(v15);
  p_BaseAddress = &BaseAddress;
  appended = LdrpCreateLangFallbackList((__int64 *)&BaseAddress, a2, 0x19u, 0);
  if ( appended >= 0 )
  {
    v17 = &BaseAddress;
    goto LABEL_12;
  }
LABEL_42:
  if ( BaseAddress )
    RtlpMuiRegFreeLanguageList(BaseAddress);
  if ( v11 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v11);
  return (unsigned int)appended;
}
