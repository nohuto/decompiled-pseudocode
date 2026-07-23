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
        PVOID *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        char a9)
{
  unsigned __int64 v11; // r15
  __int64 v12; // r14
  int v13; // esi
  __int64 v14; // rax
  unsigned int v15; // ecx
  __int64 v16; // r12
  PVOID *v17; // rbx
  int appended; // ebx
  __int64 v19; // r8
  __int64 v20; // r9
  int v21; // r15d
  __int64 v22; // rax
  unsigned int v23; // ebx
  int v24; // r15d
  _WORD *v25; // rdx
  int v26; // r8d
  __int64 v27; // rax
  _BYTE *v28; // rdx
  LANGID v29; // si
  __int64 v30; // r8
  wchar_t *Buffer; // rsi
  _BYTE *v32; // rdx
  PVOID *v33; // r15
  __int64 v34; // r8
  _BYTE *v35; // rdx
  _WORD *v37; // rdx
  __int64 v38; // rcx
  unsigned int v39; // esi
  int v40; // r13d
  _WORD *v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r9
  char v44; // [rsp+28h] [rbp-69h]
  char v45; // [rsp+28h] [rbp-69h]
  char v46; // [rsp+28h] [rbp-69h]
  LANGID InstallUILanguageId[2]; // [rsp+38h] [rbp-59h] BYREF
  char v48; // [rsp+3Ch] [rbp-55h]
  wchar_t *Heap; // [rsp+40h] [rbp-51h]
  __int16 v50[2]; // [rsp+48h] [rbp-49h] BYREF
  _WORD v51[2]; // [rsp+4Ch] [rbp-45h] BYREF
  PVOID *p_BaseAddress; // [rsp+50h] [rbp-41h]
  int v53; // [rsp+58h] [rbp-39h]
  int v54; // [rsp+60h] [rbp-31h] BYREF
  __int64 v55; // [rsp+68h] [rbp-29h]
  unsigned int v56; // [rsp+70h] [rbp-21h]
  unsigned int v57; // [rsp+74h] [rbp-1Dh]
  PVOID BaseAddress; // [rsp+78h] [rbp-19h] BYREF
  int v59; // [rsp+80h] [rbp-11h]
  _UNICODE_STRING String; // [rsp+88h] [rbp-9h] BYREF
  char v61; // [rsp+D8h] [rbp+47h]

  v61 = a1;
  v57 = 0;
  v53 = 0;
  InstallUILanguageId[0] = -1;
  v51[0] = -1;
  v11 = 0LL;
  v50[0] = -1;
  v12 = 0LL;
  BaseAddress = 0LL;
  v48 = 0;
  String = 0LL;
  if ( !a3 || !*a3 || !a2 || *((_WORD *)*a3 + 2) )
    return 3221225485LL;
  v13 = a1 & 0x10000;
  if ( NtCurrentTeb()->UserPrefLanguages && (v14 = *(_QWORD *)NtCurrentTeb()->UserPrefLanguages) != 0 )
  {
    v15 = *(_DWORD *)(v14 + 40);
    v56 = v15;
  }
  else
  {
    v15 = 0;
    v56 = 0;
  }
  v16 = 0LL;
  LODWORD(v17) = (_DWORD)a3;
  p_BaseAddress = a3;
  if ( v13 || (v15 & 6) == 0 )
  {
LABEL_12:
    Heap = (wchar_t *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0x154uLL);
    v19 = (__int64)Heap;
    if ( !Heap )
      return 3221225495LL;
    v20 = 170LL;
    if ( !v13 && a4 && *(_WORD *)(a4 + 4) )
    {
      do
      {
        v37 = (_WORD *)(*(_QWORD *)(a4 + 24) + 6 * v11);
        if ( *v37 )
        {
          v55 = v19;
          v38 = a2;
          v54 = 11141120;
          if ( *(_QWORD *)(a4 + 16) )
            v38 = *(_QWORD *)(a4 + 16);
          if ( (int)GetNameFromLangListNode(v38, v37, &v54, 170LL) >= 0 )
          {
            appended = LdrpLangFallbackListAppendNode((_DWORD)v17, a2, 0, (unsigned int)InstallUILanguageId, v55);
            if ( appended < 0 )
              goto LABEL_51;
          }
          v19 = (__int64)Heap;
          v20 = 170LL;
        }
        v11 = (unsigned int)(v11 + 1);
        LODWORD(v17) = (_DWORD)p_BaseAddress;
      }
      while ( (unsigned int)v11 < *(unsigned __int16 *)(a4 + 4) );
    }
    if ( a5 )
    {
      if ( !v13 )
      {
        v39 = 0;
        if ( *(_WORD *)(a5 + 4) )
        {
          v40 = (int)p_BaseAddress;
          do
          {
            v41 = (_WORD *)(*(_QWORD *)(a5 + 24) + 6LL * v39);
            if ( *v41 )
            {
              v55 = v19;
              v42 = a2;
              v54 = 11141120;
              if ( *(_QWORD *)(a5 + 16) )
                v42 = *(_QWORD *)(a5 + 16);
              if ( (int)GetNameFromLangListNode(v42, v41, &v54, v20) >= 0 )
              {
                appended = LdrpLangFallbackListAppendNode(v40, a2, 0, (unsigned int)InstallUILanguageId, v55);
                if ( appended < 0 )
                  goto LABEL_51;
              }
            }
            ++v39;
            v19 = (__int64)Heap;
          }
          while ( v39 < *(unsigned __int16 *)(a5 + 4) );
        }
      }
    }
    v21 = v61 & 0x20;
    v59 = v21;
    if ( (v61 & 0x20) != 0 && ((v22 = a6) != 0 && *(_WORD *)(a6 + 4) || (v22 = a7) != 0 && *(_WORD *)(a7 + 4)) )
    {
      v16 = v22;
      if ( *(_BYTE *)(v22 + 8) )
      {
        v12 = *(_QWORD *)(a2 + 40);
      }
      else
      {
        v12 = a8;
        if ( !a8 )
          v12 = *(_QWORD *)(a2 + 48);
      }
      v23 = 0;
      if ( *(_WORD *)(v22 + 4) )
      {
        v24 = (int)p_BaseAddress;
        do
        {
          v25 = (_WORD *)(*(_QWORD *)(v16 + 24) + 6LL * v23);
          if ( *v25 )
          {
            v55 = (__int64)Heap;
            v54 = 11141120;
            if ( (int)GetNameFromLangListNode(a2, v25, &v54, v20) >= 0 )
            {
              LOBYTE(v26) = 1;
              if ( (int)LdrpLangFallbackListAppendNode(v24, a2, v26, (unsigned int)InstallUILanguageId, v55) >= 0
                && (v61 & 0x10) != 0 )
              {
                v27 = *(_QWORD *)(v16 + 24);
                if ( *(_WORD *)(v27 + 6LL * v23) == 2 )
                {
                  v28 = (_BYTE *)(*(_QWORD *)(*(_QWORD *)(a2 + 24) + 16LL) + 28LL * *(__int16 *)(v27 + 6LL * v23 + 4));
                  if ( (*v28 & 7) != 0
                    && ((*v28 & 6) == 0 || (int)LdrpMergeParentBaseLanguagesToList(v24, (_DWORD)v28, a2, v12, v44) >= 0) )
                  {
                    ++v53;
                  }
                }
              }
            }
          }
          ++v23;
        }
        while ( v23 < *(unsigned __int16 *)(v16 + 4) );
        v21 = v59;
      }
    }
    appended = 0;
    InstallUILanguageId[0] = 0;
    v29 = 0;
    String.Buffer = Heap + 85;
    *(_DWORD *)&String.Length = 11141120;
    if ( *(_WORD *)(a2 + 4) )
    {
      v29 = *(_WORD *)(a2 + 4);
    }
    else
    {
      appended = NtQueryInstallUILanguage(InstallUILanguageId);
      if ( appended >= 0 )
      {
        if ( NtIsUILanguageComitted() >= 0 )
        {
          RtlpLoadInstallLanguageFallback(a2, a2 + 6, a2 + 8);
          *(_WORD *)(a2 + 4) = InstallUILanguageId[0];
        }
        v29 = InstallUILanguageId[0];
      }
    }
    if ( appended >= 0 )
    {
      if ( RtlLCIDToCultureName(v29, &String) )
      {
        LOBYTE(v30) = 1;
        appended = RtlpMuiRegGetInstalledLanguageIndexByLangId(a2, v29, v30, v50);
        if ( appended >= 0 )
        {
          Buffer = String.Buffer;
          if ( (v61 & 0x40) != 0
            || a9 && v53
            || (appended = LdrpLangFallbackListAppendNode(
                             (_DWORD)p_BaseAddress,
                             a2,
                             0,
                             (unsigned int)v51,
                             (__int64)String.Buffer),
                appended < 0)
            || !v21
            || (v32 = (_BYTE *)(*(_QWORD *)(*(_QWORD *)(a2 + 24) + 16LL) + 28LL * v50[0]), (*v32 & 6) == 0) )
          {
            v33 = p_BaseAddress;
          }
          else
          {
            if ( !v16 || (LODWORD(v43) = v12, !v12) )
              v43 = *(_QWORD *)(a2 + 40);
            v33 = p_BaseAddress;
            appended = LdrpMergeParentBaseLanguagesToList((_DWORD)p_BaseAddress, (_DWORD)v32, a2, v43, v45);
            if ( appended < 0 )
              goto LABEL_51;
          }
          if ( v48 )
          {
            v34 = v56 >> 2;
            LOBYTE(v34) = (v56 & 4) != 0;
            appended = RtlpFilterandReplaceConsoleLanguages(*v33, a2, v34, v57, a3);
            if ( appended >= 0 && (v61 & 0x30) == 0x30 )
            {
              appended = LdrpLangFallbackListAppendNode((_DWORD)a3, a2, 0, (unsigned int)v51, (__int64)Buffer);
              if ( appended >= 0 )
              {
                v35 = (_BYTE *)(*(_QWORD *)(*(_QWORD *)(a2 + 24) + 16LL) + 28LL * v50[0]);
                if ( (*v35 & 6) != 0 )
                {
                  if ( !v16 || !v12 )
                    v12 = *(_QWORD *)(a2 + 40);
                  appended = LdrpMergeParentBaseLanguagesToList((_DWORD)a3, (_DWORD)v35, a2, v12, v46);
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
    v11 = (unsigned __int64)Heap;
    goto LABEL_52;
  }
  v48 = 1;
  v57 = HIWORD(v15);
  p_BaseAddress = &BaseAddress;
  appended = LdrpCreateLangFallbackList((__int64 *)&BaseAddress, a2, 0x19u, 0);
  if ( appended >= 0 )
  {
    v17 = &BaseAddress;
    goto LABEL_12;
  }
LABEL_52:
  if ( BaseAddress )
    RtlpMuiRegFreeLanguageList(BaseAddress);
  if ( v11 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, (PVOID)v11);
  return (unsigned int)appended;
}
