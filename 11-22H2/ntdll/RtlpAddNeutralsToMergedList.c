/*
 * XREFs of RtlpAddNeutralsToMergedList @ 0x180013C18
 * Callers:
 *     RtlGetThreadPreferredUILanguages @ 0x180011D50 (RtlGetThreadPreferredUILanguages.c)
 * Callees:
 *     RtlpGetSystemDefaultUILanguage @ 0x180012F40 (RtlpGetSystemDefaultUILanguage.c)
 *     GetNameFromLangListNode @ 0x180013744 (GetNameFromLangListNode.c)
 *     RtlGetNeutralFallback @ 0x180013AF8 (RtlGetNeutralFallback.c)
 *     RtlLCIDToCultureName @ 0x180015CC0 (RtlLCIDToCultureName.c)
 *     LdrpLangFallbackListAppendNode @ 0x180016458 (LdrpLangFallbackListAppendNode.c)
 *     RtlFreeHeap @ 0x18003B190 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18003CCE0 (RtlAllocateHeap.c)
 *     _wcsicmp @ 0x1800906B0 (_wcsicmp.c)
 */

__int64 __fastcall RtlpAddNeutralsToMergedList(char a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  int v4; // r14d
  int NameFromLangListNode; // ebx
  __int64 Heap; // rax
  wchar_t *v9; // rsi
  unsigned int i; // r15d
  wchar_t *Buffer; // r12
  wchar_t *v13; // r12
  __int16 v14; // [rsp+30h] [rbp-40h] BYREF
  UNICODE_STRING v15; // [rsp+38h] [rbp-38h] BYREF
  UNICODE_STRING v16; // [rsp+48h] [rbp-28h] BYREF
  _DWORD v17[2]; // [rsp+58h] [rbp-18h] BYREF
  wchar_t *String2; // [rsp+60h] [rbp-10h]
  unsigned __int16 v20; // [rsp+C0h] [rbp+50h] BYREF

  *(_DWORD *)(&v16.MaximumLength + 1) = 0;
  v4 = (int)a4;
  v17[1] = 0;
  v14 = 0;
  NameFromLangListNode = 0;
  v15 = 0LL;
  if ( !a3 || !a4 || !*a4 || !a2 )
    return 3221225485LL;
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8LL, 510LL);
  v9 = (wchar_t *)Heap;
  if ( !Heap )
    return 3221225495LL;
  v17[0] = 11141120;
  String2 = (wchar_t *)(Heap + 170);
  if ( (int)RtlpGetSystemDefaultUILanguage(&v20, a2) >= 0 && (unsigned __int8)RtlLCIDToCultureName(v20, v17) )
  {
    for ( i = 0; i < *(unsigned __int16 *)(a3 + 4); ++i )
    {
      v16.Buffer = v9;
      *(_DWORD *)&v16.Length = 11141120;
      NameFromLangListNode = GetNameFromLangListNode(a2, (_WORD *)(*(_QWORD *)(a3 + 24) + 6LL * i), &v16);
      if ( NameFromLangListNode < 0 )
        break;
      Buffer = v16.Buffer;
      NameFromLangListNode = LdrpLangFallbackListAppendNode(v4, a2, 0, (unsigned int)&v14, (__int64)v16.Buffer);
      if ( NameFromLangListNode < 0 )
        break;
      if ( a1 || !wcsicmp(Buffer, String2) )
      {
        LOBYTE(v20) = 0;
        v15.Buffer = v9 + 170;
        *(_DWORD *)&v15.Length = 11141120;
        NameFromLangListNode = RtlGetNeutralFallback(a2, Buffer, &v15, &v20);
        if ( NameFromLangListNode < 0 )
          break;
        while ( !(_BYTE)v20 )
        {
          if ( v15.Length )
          {
            v13 = v15.Buffer;
            NameFromLangListNode = LdrpLangFallbackListAppendNode(v4, a2, 0, (unsigned int)&v14, (__int64)v15.Buffer);
            if ( NameFromLangListNode < 0 )
              goto LABEL_18;
            NameFromLangListNode = RtlGetNeutralFallback(a2, v13, &v15, &v20);
            if ( NameFromLangListNode >= 0 )
              continue;
          }
          if ( NameFromLangListNode < 0 )
            goto LABEL_18;
          break;
        }
      }
    }
  }
  else
  {
    NameFromLangListNode = -1073741823;
  }
LABEL_18:
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, v9);
  return (unsigned int)NameFromLangListNode;
}
