/*
 * XREFs of RtlpMuiRegTryToAppendLanguageName @ 0x180012740
 * Callers:
 *     RtlpMuiRegTryToAppendLanguageToMuiszFromLangList @ 0x18001252C (RtlpMuiRegTryToAppendLanguageToMuiszFromLangList.c)
 *     RtlpMuiRegGetFallbackLanguagesAsMultiSZ @ 0x1801130C4 (RtlpMuiRegGetFallbackLanguagesAsMultiSZ.c)
 * Callees:
 *     RtlpLangNameInMultiSzString_Size @ 0x180010228 (RtlpLangNameInMultiSzString_Size.c)
 *     RtlLCIDToCultureName @ 0x180015AB0 (RtlLCIDToCultureName.c)
 *     RtlInitUnicodeString @ 0x1800187C0 (RtlInitUnicodeString.c)
 *     RtlFreeHeap @ 0x18003B030 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18003CB80 (RtlAllocateHeap.c)
 *     memmove @ 0x1800A7A40 (memmove.c)
 */

__int64 __fastcall RtlpMuiRegTryToAppendLanguageName(
        __int64 a1,
        __int64 a2,
        unsigned int *a3,
        wchar_t *a4,
        unsigned int a5)
{
  unsigned int v5; // ebx
  __int64 v10; // r12
  wchar_t *Heap; // r13
  __int64 v12; // rax
  __int64 v13; // rbp
  unsigned int v14; // edi
  LCID v16; // ecx
  _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-38h] BYREF

  v5 = 0;
  if ( !a2 || !a1 || !a3 )
    return 3221225485LL;
  v10 = *a3;
  Heap = (wchar_t *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0xAAuLL);
  if ( Heap )
  {
    v12 = *(__int16 *)(a2 + 6);
    if ( (__int16)v12 <= 0 )
    {
      v16 = *(unsigned __int16 *)(a2 + 4);
      DestinationString.Buffer = Heap;
      *(_DWORD *)&DestinationString.Length = 11141120;
      if ( !RtlLCIDToCultureName(v16, &DestinationString) )
      {
        v5 = -1073741595;
        goto LABEL_13;
      }
    }
    else
    {
      RtlInitUnicodeString(
        &DestinationString,
        (PCWSTR)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 24LL)
               + 2LL * *(__int16 *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL) + 2 * v12)));
    }
    if ( *a3 && *a3 <= a5 && RtlpLangNameInMultiSzString_Size(a4, DestinationString.Buffer, *a3) )
      goto LABEL_13;
    v13 = (unsigned int)v10 + (DestinationString.Length >> 1);
    v14 = v13 + 1;
    if ( a4 && (unsigned int)v10 < v14 )
    {
      if ( v14 < a5 )
      {
        memmove(&a4[v10], DestinationString.Buffer, DestinationString.Length);
        a4[v13] = 0;
LABEL_12:
        *a3 = v14;
LABEL_13:
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
        return v5;
      }
    }
    else if ( v14 < a5 || !a4 )
    {
      goto LABEL_12;
    }
    v5 = -1073741789;
    goto LABEL_12;
  }
  return 3221225495LL;
}
