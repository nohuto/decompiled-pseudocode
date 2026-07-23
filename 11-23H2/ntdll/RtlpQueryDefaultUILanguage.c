/*
 * XREFs of RtlpQueryDefaultUILanguage @ 0x180070640
 * Callers:
 *     <none>
 * Callees:
 *     RtlpMuiRegFreeLanguageList @ 0x1800125EC (RtlpMuiRegFreeLanguageList.c)
 *     InitializeTEBUserLangList @ 0x180012A18 (InitializeTEBUserLangList.c)
 *     RtlpGetSystemDefaultUILanguage @ 0x180012D30 (RtlpGetSystemDefaultUILanguage.c)
 *     RtlpCreateProcessRegistryInfo @ 0x18001F190 (RtlpCreateProcessRegistryInfo.c)
 *     InitializeUserOrMachineLangList @ 0x180070780 (InitializeUserOrMachineLangList.c)
 *     GetLCIDFromLangListNode @ 0x180070844 (GetLCIDFromLangListNode.c)
 */

__int64 __fastcall RtlpQueryDefaultUILanguage(_WORD *DefaultUILanguageId, char a2)
{
  PVOID v3; // rbx
  DWORD *v5; // rdi
  int v6; // eax
  __int64 v7; // rdx
  int v8; // eax
  NTSTATUS LCIDFromLangListNode; // esi
  PVOID BaseAddress; // [rsp+60h] [rbp+30h] BYREF
  DWORD *v12; // [rsp+70h] [rbp+40h] BYREF

  v12 = 0LL;
  v3 = 0LL;
  BaseAddress = 0LL;
  v5 = 0LL;
  if ( DefaultUILanguageId )
  {
    *DefaultUILanguageId = 0;
    v6 = RtlpCreateProcessRegistryInfo(&v12);
    v5 = v12;
    if ( v6 >= 0 && (int)InitializeTEBUserLangList(a2, (__int64)v12) >= 0 )
    {
      if ( NtCurrentTeb()->UserPrefLanguages
        && (v7 = *(_QWORD *)NtCurrentTeb()->UserPrefLanguages, (BaseAddress = (PVOID)v7) != 0LL) )
      {
        v5 = v12;
        if ( *(_WORD *)(v7 + 4) )
        {
          LCIDFromLangListNode = GetLCIDFromLangListNode(v12, *(_QWORD *)(v7 + 24), DefaultUILanguageId);
          if ( LCIDFromLangListNode >= 0 )
            goto LABEL_12;
        }
        BaseAddress = 0LL;
      }
      else
      {
        v5 = v12;
      }
      v8 = InitializeUserOrMachineLangList(
             (_DWORD)v5,
             0,
             (unsigned int)&BaseAddress,
             3 - (unsigned int)(a2 != 0),
             a2 == 0);
      v3 = BaseAddress;
      if ( v8 >= 0 )
      {
        if ( BaseAddress )
        {
          if ( *((_WORD *)BaseAddress + 2) )
          {
            LCIDFromLangListNode = GetLCIDFromLangListNode(v5, *((_QWORD *)BaseAddress + 3), DefaultUILanguageId);
            if ( LCIDFromLangListNode >= 0 )
              goto LABEL_12;
          }
        }
      }
    }
  }
  LCIDFromLangListNode = RtlpGetSystemDefaultUILanguage((LANGID)DefaultUILanguageId, v5);
  if ( LCIDFromLangListNode < 0 )
    *DefaultUILanguageId = 0;
LABEL_12:
  if ( v3 )
    RtlpMuiRegFreeLanguageList(v3);
  return (unsigned int)LCIDFromLangListNode;
}
