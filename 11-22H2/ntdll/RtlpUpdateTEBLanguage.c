/*
 * XREFs of RtlpUpdateTEBLanguage @ 0x180070548
 * Callers:
 *     InitializeTEBUserLangList @ 0x180012C28 (InitializeTEBUserLangList.c)
 *     RtlSetThreadPreferredUILanguages @ 0x18006FEF0 (RtlSetThreadPreferredUILanguages.c)
 *     RtlpInitializeUserList @ 0x180070350 (RtlpInitializeUserList.c)
 * Callees:
 *     RtlpMuiRegFreeLanguageList @ 0x1800127FC (RtlpMuiRegFreeLanguageList.c)
 *     RtlAllocateHeap @ 0x18003CCE0 (RtlAllocateHeap.c)
 *     RtlpMuiRegFreeLanguageConfigList @ 0x18008A3F0 (RtlpMuiRegFreeLanguageConfigList.c)
 */

__int64 __fastcall RtlpUpdateTEBLanguage(_DWORD *a1, void *a2, int a3)
{
  unsigned int v3; // ebx
  PVOID *Heap; // rax
  PVOID *UserPrefLanguages; // rdi
  int v9; // esi
  PVOID v11; // rcx

  v3 = 0;
  if ( NtCurrentTeb()->UserPrefLanguages )
  {
    UserPrefLanguages = (PVOID *)NtCurrentTeb()->UserPrefLanguages;
  }
  else
  {
    Heap = (PVOID *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0x10uLL);
    UserPrefLanguages = Heap;
    if ( !Heap )
      return (unsigned int)-1073741801;
    *Heap = 0LL;
    Heap[1] = 0LL;
    NtCurrentTeb()->UserPrefLanguages = Heap;
  }
  v9 = a3 - 4;
  if ( !v9 )
  {
    if ( a1 )
    {
      if ( *UserPrefLanguages )
      {
        a1[10] = *((_DWORD *)*UserPrefLanguages + 10);
        RtlpMuiRegFreeLanguageList(*UserPrefLanguages);
      }
      *UserPrefLanguages = a1;
      return v3;
    }
    return (unsigned int)-1073741811;
  }
  if ( v9 != 1 )
    return v3;
  if ( !a2 )
    return (unsigned int)-1073741811;
  v11 = UserPrefLanguages[1];
  if ( v11 )
    RtlpMuiRegFreeLanguageConfigList(v11);
  UserPrefLanguages[1] = a2;
  return v3;
}
