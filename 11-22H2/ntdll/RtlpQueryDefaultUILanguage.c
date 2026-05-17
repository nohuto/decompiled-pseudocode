/*
 * XREFs of RtlpQueryDefaultUILanguage @ 0x180070640
 * Callers:
 *     <none>
 * Callees:
 *     RtlpMuiRegFreeLanguageList @ 0x1800127FC (RtlpMuiRegFreeLanguageList.c)
 *     InitializeTEBUserLangList @ 0x180012C28 (InitializeTEBUserLangList.c)
 *     RtlpGetSystemDefaultUILanguage @ 0x180012F40 (RtlpGetSystemDefaultUILanguage.c)
 *     RtlpCreateProcessRegistryInfo @ 0x18001F370 (RtlpCreateProcessRegistryInfo.c)
 *     InitializeUserOrMachineLangList @ 0x180070780 (InitializeUserOrMachineLangList.c)
 *     GetLCIDFromLangListNode @ 0x180070844 (GetLCIDFromLangListNode.c)
 */

__int64 __fastcall RtlpQueryDefaultUILanguage(_WORD *a1, char a2)
{
  __int64 v3; // rbx
  __int64 v5; // rdi
  int v6; // eax
  __int64 v7; // rdx
  int v8; // eax
  int LCIDFromLangListNode; // esi
  __int64 v11; // [rsp+60h] [rbp+30h] BYREF
  __int64 v12; // [rsp+70h] [rbp+40h] BYREF

  v12 = 0LL;
  v3 = 0LL;
  v11 = 0LL;
  v5 = 0LL;
  if ( a1 )
  {
    *a1 = 0;
    v6 = RtlpCreateProcessRegistryInfo(&v12);
    v5 = v12;
    if ( v6 >= 0 && (int)InitializeTEBUserLangList(a2, v12) >= 0 )
    {
      if ( NtCurrentTeb()->UserPrefLanguages && (v7 = *(_QWORD *)NtCurrentTeb()->UserPrefLanguages, (v11 = v7) != 0) )
      {
        v5 = v12;
        if ( *(_WORD *)(v7 + 4) )
        {
          LCIDFromLangListNode = GetLCIDFromLangListNode(v12, *(_QWORD *)(v7 + 24), a1);
          if ( LCIDFromLangListNode >= 0 )
            goto LABEL_12;
        }
        v11 = 0LL;
      }
      else
      {
        v5 = v12;
      }
      v8 = InitializeUserOrMachineLangList(v5, 0, (unsigned int)&v11, 3 - (unsigned int)(a2 != 0), a2 == 0);
      v3 = v11;
      if ( v8 >= 0 )
      {
        if ( v11 )
        {
          if ( *(_WORD *)(v11 + 4) )
          {
            LCIDFromLangListNode = GetLCIDFromLangListNode(v5, *(_QWORD *)(v11 + 24), a1);
            if ( LCIDFromLangListNode >= 0 )
              goto LABEL_12;
          }
        }
      }
    }
  }
  LCIDFromLangListNode = RtlpGetSystemDefaultUILanguage(a1, v5);
  if ( LCIDFromLangListNode < 0 )
    *a1 = 0;
LABEL_12:
  if ( v3 )
    RtlpMuiRegFreeLanguageList(v3);
  return (unsigned int)LCIDFromLangListNode;
}
