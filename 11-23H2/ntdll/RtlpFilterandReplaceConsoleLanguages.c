/*
 * XREFs of RtlpFilterandReplaceConsoleLanguages @ 0x18007AC94
 * Callers:
 *     LdrpMergeLangFallbackLists @ 0x180013DA0 (LdrpMergeLangFallbackLists.c)
 * Callees:
 *     LdrpCreateLangFallbackList @ 0x1800121CC (LdrpCreateLangFallbackList.c)
 *     RtlpMuiRegFreeLanguageList @ 0x1800125EC (RtlpMuiRegFreeLanguageList.c)
 *     GetNameFromLangListNode @ 0x180013534 (GetNameFromLangListNode.c)
 *     LdrpLangFallbackListAppendNode @ 0x180016248 (LdrpLangFallbackListAppendNode.c)
 *     RtlpConsoleFallbackNameFromLocaleName @ 0x18007AE4C (RtlpConsoleFallbackNameFromLocaleName.c)
 *     __security_check_cookie @ 0x18008EF90 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180132010 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlpFilterandReplaceConsoleLanguages(__int64 a1, __int64 a2, __int64 a3, __int16 a4, __int64 *a5)
{
  int NameFromLangListNode; // ebx
  unsigned int v9; // edi
  wchar_t *Buffer; // rbx
  __int64 v11; // rdi
  unsigned int i; // r15d
  __int16 v14[2]; // [rsp+34h] [rbp-CCh] BYREF
  UNICODE_STRING v15; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v16; // [rsp+48h] [rbp-B8h] BYREF
  int v17; // [rsp+50h] [rbp-B0h]
  int v18; // [rsp+54h] [rbp-ACh]
  __int64 v19; // [rsp+58h] [rbp-A8h]
  _BYTE v20[176]; // [rsp+60h] [rbp-A0h] BYREF

  v16 = 0LL;
  memset_thunk_772440563353939046(v20, 0, 0xAAuLL);
  *(_DWORD *)(&v15.MaximumLength + 1) = 0;
  v18 = 0;
  if ( !a1 || !a2 || !a5 || !*a5 )
    return 3221225485LL;
  NameFromLangListNode = LdrpCreateLangFallbackList(&v16, a2, 0x19u, 0);
  if ( NameFromLangListNode >= 0 )
  {
    v9 = 0;
    if ( !*(_WORD *)(a1 + 4) )
    {
LABEL_10:
      v11 = v16;
      for ( i = 0; i < *(unsigned __int16 *)(v11 + 4); ++i )
      {
        *(_DWORD *)&v15.Length = 11141120;
        v15.Buffer = (wchar_t *)v20;
        NameFromLangListNode = GetNameFromLangListNode(a2, (_WORD *)(*(_QWORD *)(v11 + 24) + 6LL * i), &v15);
        if ( NameFromLangListNode < 0 )
          break;
        NameFromLangListNode = LdrpLangFallbackListAppendNode(a5, a2, 0, v14, v15.Buffer);
      }
      goto LABEL_11;
    }
    while ( 1 )
    {
      *(_DWORD *)&v15.Length = 11141120;
      v15.Buffer = (wchar_t *)v20;
      NameFromLangListNode = GetNameFromLangListNode(a2, (_WORD *)(*(_QWORD *)(a1 + 24) + 6LL * v9), &v15);
      if ( NameFromLangListNode < 0 )
        break;
      Buffer = v15.Buffer;
      v19 = 0LL;
      v17 = 0;
      RtlpConsoleFallbackNameFromLocaleName(v15.Buffer, a2, a4);
      NameFromLangListNode = LdrpLangFallbackListAppendNode(a5, a2, 0, v14, Buffer);
      if ( NameFromLangListNode < 0 )
        break;
      if ( ++v9 >= *(unsigned __int16 *)(a1 + 4) )
        goto LABEL_10;
    }
  }
  v11 = v16;
LABEL_11:
  if ( v11 )
    RtlpMuiRegFreeLanguageList(v11);
  if ( NameFromLangListNode < 0 )
  {
    if ( *a5 )
      *(_WORD *)(*a5 + 4) = 0;
  }
  return (unsigned int)NameFromLangListNode;
}
