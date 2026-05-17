/*
 * XREFs of _RtlpMuiRegAddNeutralLanguage @ 0x18000A1B8
 * Callers:
 *     _RtlpMuiRegAddNeutralToInstalled @ 0x18000A664 (_RtlpMuiRegAddNeutralToInstalled.c)
 *     _RtlpMuiRegInitAnyLanguage @ 0x180113934 (_RtlpMuiRegInitAnyLanguage.c)
 *     _RtlpMuiRegValidateInstalled @ 0x1801144D0 (_RtlpMuiRegValidateInstalled.c)
 * Callees:
 *     RtlpMuiRegGetLanguageSpec @ 0x18000A2C0 (RtlpMuiRegGetLanguageSpec.c)
 *     RtlGetParentLocaleName @ 0x180013E30 (RtlGetParentLocaleName.c)
 *     _MuiRegAllocArray @ 0x180015EE8 (_MuiRegAllocArray.c)
 *     RtlFreeHeap @ 0x18003B190 (RtlFreeHeap.c)
 */

__int64 __fastcall RtlpMuiRegAddNeutralLanguage(__int64 a1, __int64 a2, const WCHAR *a3)
{
  int v5; // esi
  __int64 v6; // rax
  __int64 v7; // r14
  int ParentLocaleName; // eax
  int v9; // r9d
  int LanguageSpec; // ebx
  int v11; // esi
  __int16 v12; // cx
  int v14; // [rsp+38h] [rbp-8h]
  unsigned __int8 v15; // [rsp+70h] [rbp+30h] BYREF
  __int16 v16; // [rsp+88h] [rbp+48h] BYREF

  v16 = 0;
  v15 = 0;
  v5 = a1;
  if ( !a1 || !a2 )
  {
    LanguageSpec = -1073741811;
    goto LABEL_15;
  }
  v6 = MuiRegAllocArray(a1, 85LL);
  v7 = v6;
  if ( !v6 )
  {
    LanguageSpec = -1073741801;
LABEL_15:
    *(_WORD *)(a2 + 10) = 0;
    *(_WORD *)(a2 + 8) &= 0x3FFFu;
    return (unsigned int)LanguageSpec;
  }
  v14 = v6;
  ParentLocaleName = RtlGetParentLocaleName(a3);
  LanguageSpec = ParentLocaleName;
  if ( ParentLocaleName < 0 )
  {
    v11 = ParentLocaleName;
  }
  else
  {
    LanguageSpec = RtlpMuiRegGetLanguageSpec(v5, v14, (unsigned int)&v15, v9, (__int64)&v16);
    v11 = LanguageSpec;
    if ( LanguageSpec < 0 )
    {
      v15 = 0;
      v16 = 0;
    }
  }
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, v7);
  if ( v11 < 0 )
    goto LABEL_15;
  if ( !v15 )
  {
    LanguageSpec = -1073741823;
    goto LABEL_15;
  }
  v12 = *(_WORD *)(a2 + 8) & 0x3FFF | (v15 << 14);
  *(_WORD *)(a2 + 10) = v16;
  *(_WORD *)(a2 + 8) = v12;
  return (unsigned int)LanguageSpec;
}
