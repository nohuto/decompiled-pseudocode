/*
 * XREFs of LdrpMergeParentBaseLanguagesToList @ 0x1800AE28C
 * Callers:
 *     LdrpMergeLangFallbackLists @ 0x180013FB0 (LdrpMergeLangFallbackLists.c)
 *     RtlGetUserPreferredUILanguages @ 0x180080A70 (RtlGetUserPreferredUILanguages.c)
 *     RtlGetSystemPreferredUILanguages @ 0x180081BE0 (RtlGetSystemPreferredUILanguages.c)
 * Callees:
 *     RtlpTraverseParents @ 0x180003FD0 (RtlpTraverseParents.c)
 *     RtlpFreeTraverseNodes @ 0x180004170 (RtlpFreeTraverseNodes.c)
 *     RtlpCreateTraverseNodes @ 0x1800041AC (RtlpCreateTraverseNodes.c)
 *     RtlLCIDToCultureName @ 0x180015CC0 (RtlLCIDToCultureName.c)
 *     LdrpLangFallbackListAppendNode @ 0x180016458 (LdrpLangFallbackListAppendNode.c)
 *     RtlInitUnicodeString @ 0x1800189D0 (RtlInitUnicodeString.c)
 *     RtlFreeHeap @ 0x18003B190 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18003CCE0 (RtlAllocateHeap.c)
 */

__int64 LdrpMergeParentBaseLanguagesToList(__int64 *a1, _WORD *a2, __int64 a3, __int64 a4, ...)
{
  int appended; // ebx
  wchar_t *Heap; // r12
  _DWORD *v10; // rsi
  __int16 v11; // di
  LCID v12; // ecx
  __int64 v13; // rcx
  _UNICODE_STRING String; // [rsp+30h] [rbp-10h] BYREF
  PVOID BaseAddress; // [rsp+70h] [rbp+30h] BYREF
  va_list va; // [rsp+90h] [rbp+50h] BYREF

  va_start(va, a4);
  BaseAddress = 0LL;
  if ( !a1 || !*a1 || !a2 || !a3 )
  {
    appended = -1073741811;
    goto LABEL_23;
  }
  appended = RtlpCreateTraverseNodes(&BaseAddress);
  if ( appended < 0 )
    goto LABEL_23;
  if ( !RtlpTraverseParents(a2, (__int64)BaseAddress, a3, a4, 0, 42) )
  {
    appended = -1073741823;
    goto LABEL_23;
  }
  Heap = (wchar_t *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0xAAuLL);
  if ( !Heap )
  {
    appended = -1073741801;
    goto LABEL_23;
  }
  v10 = BaseAddress;
  v11 = 0;
  while ( !v11 || !v10[2 * v11 + 1] )
  {
LABEL_20:
    if ( ++v11 >= 42 )
      goto LABEL_16;
  }
  v12 = LOWORD(v10[2 * v11]);
  if ( (_WORD)v12 )
  {
    String.Buffer = Heap;
    *(_DWORD *)&String.Length = 11141120;
    if ( !RtlLCIDToCultureName(v12, &String) )
      goto LABEL_15;
    goto LABEL_19;
  }
  v13 = SHIWORD(v10[2 * v11]);
  if ( (v13 & 0x8000u) == 0LL )
  {
    RtlInitUnicodeString(
      &String,
      (PCWSTR)(*(_QWORD *)(*(_QWORD *)(a3 + 32) + 24LL)
             + 2LL * *(__int16 *)(*(_QWORD *)(*(_QWORD *)(a3 + 32) + 16LL) + 2 * v13)));
LABEL_19:
    appended = LdrpLangFallbackListAppendNode(a1, a3, 0, (__int16 *)va, String.Buffer);
    if ( appended < 0 )
      goto LABEL_16;
    goto LABEL_20;
  }
LABEL_15:
  appended = -1073741595;
LABEL_16:
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
LABEL_23:
  if ( BaseAddress )
    RtlpFreeTraverseNodes(BaseAddress);
  return (unsigned int)appended;
}
