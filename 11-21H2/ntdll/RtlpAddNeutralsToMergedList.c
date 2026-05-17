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

__int64 __fastcall RtlpAddNeutralsToMergedList(char a1, __int64 a2, __int64 a3, __int64 *a4)
{
  int NameFromLangListNode; // ebx
  __int64 Heap; // rax
  wchar_t *v9; // rsi
  unsigned int i; // r15d
  wchar_t *Buffer; // r12
  __int64 v13; // r12
  __int16 v14; // [rsp+30h] [rbp-40h] BYREF
  __int128 v15; // [rsp+38h] [rbp-38h] BYREF
  UNICODE_STRING v16; // [rsp+48h] [rbp-28h] BYREF
  _DWORD v17[2]; // [rsp+58h] [rbp-18h] BYREF
  wchar_t *String2; // [rsp+60h] [rbp-10h]
  unsigned __int16 v20; // [rsp+C0h] [rbp+50h] BYREF

  *(_DWORD *)(&v16.MaximumLength + 1) = 0;
  v17[1] = 0;
  v14 = 0;
  NameFromLangListNode = 0;
  v15 = 0LL;
  if ( !a3 || !a4 || !*a4 || !a2 )
    return 3221225485LL;
  Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, 510LL);
  v9 = (wchar_t *)Heap;
  if ( !Heap )
    return 3221225495LL;
  v17[0] = 11141120;
  String2 = (wchar_t *)(Heap + 170);
  if ( (int)RtlpGetSystemDefaultUILanguage(&v20, a2) >= 0 && RtlLCIDToCultureName(v20, (__int64)v17) )
  {
    for ( i = 0; i < *(unsigned __int16 *)(a3 + 4); ++i )
    {
      v16.Buffer = v9;
      *(_DWORD *)&v16.Length = 11141120;
      NameFromLangListNode = GetNameFromLangListNode(a2, (_WORD *)(*(_QWORD *)(a3 + 24) + 6LL * i), &v16);
      if ( NameFromLangListNode < 0 )
        break;
      Buffer = v16.Buffer;
      NameFromLangListNode = LdrpLangFallbackListAppendNode(a4, a2, 0, &v14, v16.Buffer);
      if ( NameFromLangListNode < 0 )
        break;
      if ( a1 || !wcsicmp(Buffer, String2) )
      {
        LOBYTE(v20) = 0;
        *((_QWORD *)&v15 + 1) = v9 + 170;
        LODWORD(v15) = 11141120;
        NameFromLangListNode = RtlGetNeutralFallback(a2, Buffer, &v15, &v20);
        if ( NameFromLangListNode < 0 )
          break;
        while ( !(_BYTE)v20 )
        {
          if ( (_WORD)v15 )
          {
            v13 = *((_QWORD *)&v15 + 1);
            NameFromLangListNode = LdrpLangFallbackListAppendNode(a4, a2, 0, &v14, *((const WCHAR **)&v15 + 1));
            if ( NameFromLangListNode < 0 )
              goto LABEL_17;
            NameFromLangListNode = RtlGetNeutralFallback(a2, v13, &v15, &v20);
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
  RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)v9);
  return (unsigned int)NameFromLangListNode;
}
