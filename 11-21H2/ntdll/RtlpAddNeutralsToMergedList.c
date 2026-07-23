/*
 * XREFs of RtlpAddNeutralsToMergedList @ 0x18004C2E4
 * Callers:
 *     RtlGetThreadPreferredUILanguages @ 0x1800494B0 (RtlGetThreadPreferredUILanguages.c)
 * Callees:
 *     RtlFreeHeap @ 0x180027690 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180028B70 (RtlAllocateHeap.c)
 *     GetNameFromLangListNode @ 0x18004B20C (GetNameFromLangListNode.c)
 *     RtlLCIDToCultureName @ 0x18004B690 (RtlLCIDToCultureName.c)
 *     LdrpLangFallbackListAppendNode @ 0x18004BB28 (LdrpLangFallbackListAppendNode.c)
 *     RtlGetNeutralFallback @ 0x18004C4FC (RtlGetNeutralFallback.c)
 *     RtlpGetSystemDefaultUILanguage @ 0x18004DCB0 (RtlpGetSystemDefaultUILanguage.c)
 *     _wcsicmp @ 0x1800956E0 (_wcsicmp.c)
 */

__int64 __fastcall RtlpAddNeutralsToMergedList(char a1, DWORD *a2, __int64 a3, __int64 *a4)
{
  int NameFromLangListNode; // ebx
  wchar_t *Heap; // rax
  wchar_t *v9; // rsi
  unsigned int i; // r15d
  wchar_t *Buffer; // r12
  __int64 v13; // r12
  __int16 v14; // [rsp+30h] [rbp-40h] BYREF
  __int128 v15; // [rsp+38h] [rbp-38h] BYREF
  _UNICODE_STRING v16; // [rsp+48h] [rbp-28h] BYREF
  _UNICODE_STRING String; // [rsp+58h] [rbp-18h] BYREF
  LANGID DefaultUILanguageId; // [rsp+C0h] [rbp+50h] BYREF

  *(_DWORD *)(&v16.MaximumLength + 1) = 0;
  *(_DWORD *)(&String.MaximumLength + 1) = 0;
  v14 = 0;
  NameFromLangListNode = 0;
  v15 = 0LL;
  if ( !a3 || !a4 || !*a4 || !a2 )
    return 3221225485LL;
  Heap = (wchar_t *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0x1FEuLL);
  v9 = Heap;
  if ( !Heap )
    return 3221225495LL;
  *(_DWORD *)&String.Length = 11141120;
  String.Buffer = Heap + 85;
  if ( RtlpGetSystemDefaultUILanguage((LANGID)&DefaultUILanguageId, a2) >= 0
    && RtlLCIDToCultureName(DefaultUILanguageId, &String) )
  {
    for ( i = 0; i < *(unsigned __int16 *)(a3 + 4); ++i )
    {
      v16.Buffer = v9;
      *(_DWORD *)&v16.Length = 11141120;
      NameFromLangListNode = GetNameFromLangListNode((__int64)a2, (_WORD *)(*(_QWORD *)(a3 + 24) + 6LL * i), &v16);
      if ( NameFromLangListNode < 0 )
        break;
      Buffer = v16.Buffer;
      NameFromLangListNode = LdrpLangFallbackListAppendNode(a4, (__int64)a2, 0, &v14, v16.Buffer);
      if ( NameFromLangListNode < 0 )
        break;
      if ( a1 || !wcsicmp(Buffer, String.Buffer) )
      {
        LOBYTE(DefaultUILanguageId) = 0;
        *((_QWORD *)&v15 + 1) = v9 + 170;
        LODWORD(v15) = 11141120;
        NameFromLangListNode = RtlGetNeutralFallback(a2, Buffer, &v15, &DefaultUILanguageId);
        if ( NameFromLangListNode < 0 )
          break;
        while ( !(_BYTE)DefaultUILanguageId )
        {
          if ( (_WORD)v15 )
          {
            v13 = *((_QWORD *)&v15 + 1);
            NameFromLangListNode = LdrpLangFallbackListAppendNode(a4, (__int64)a2, 0, &v14, *((const WCHAR **)&v15 + 1));
            if ( NameFromLangListNode < 0 )
              goto LABEL_17;
            NameFromLangListNode = RtlGetNeutralFallback(a2, v13, &v15, &DefaultUILanguageId);
            if ( NameFromLangListNode >= 0 )
              continue;
          }
          if ( NameFromLangListNode < 0 )
            goto LABEL_17;
          break;
        }
      }
    }
  }
  else
  {
    NameFromLangListNode = -1073741823;
  }
LABEL_17:
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v9);
  return (unsigned int)NameFromLangListNode;
}
