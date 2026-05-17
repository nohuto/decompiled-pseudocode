/*
 * XREFs of RtlpUpdateTEBLanguage @ 0x180070548
 * Callers:
 *     InitializeTEBUserLangList @ 0x180012A18 (InitializeTEBUserLangList.c)
 *     RtlSetThreadPreferredUILanguages @ 0x18006FEF0 (RtlSetThreadPreferredUILanguages.c)
 *     RtlpInitializeUserList @ 0x180070350 (RtlpInitializeUserList.c)
 * Callees:
 *     RtlpMuiRegFreeLanguageList @ 0x1800125EC (RtlpMuiRegFreeLanguageList.c)
 *     RtlAllocateHeap @ 0x18003CB80 (RtlAllocateHeap.c)
 *     RtlpMuiRegFreeLanguageConfigList @ 0x18008ABF0 (RtlpMuiRegFreeLanguageConfigList.c)
 */

__int64 __fastcall RtlpUpdateTEBLanguage(__int64 a1, __int64 a2, int a3)
{
  unsigned int v3; // ebx
  __int64 *Heap; // rax
  __int64 *UserPrefLanguages; // rdi
  int v9; // esi

  v3 = 0;
  if ( NtCurrentTeb()->UserPrefLanguages )
  {
    UserPrefLanguages = (__int64 *)NtCurrentTeb()->UserPrefLanguages;
  }
  else
  {
    Heap = (__int64 *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, 16LL);
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
        *(_DWORD *)(a1 + 40) = *(_DWORD *)(*UserPrefLanguages + 40);
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
  if ( UserPrefLanguages[1] )
    RtlpMuiRegFreeLanguageConfigList();
  UserPrefLanguages[1] = a2;
  return v3;
}
