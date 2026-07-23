/*
 * XREFs of _RtlpMuiRegAddNeutralLanguage @ 0x18006F570
 * Callers:
 *     _RtlpMuiRegAddNeutralToInstalled @ 0x18006F480 (_RtlpMuiRegAddNeutralToInstalled.c)
 *     _RtlpMuiRegInitAnyLanguage @ 0x1801134D4 (_RtlpMuiRegInitAnyLanguage.c)
 *     _RtlpMuiRegValidateInstalled @ 0x18011406C (_RtlpMuiRegValidateInstalled.c)
 * Callees:
 *     RtlFreeHeap @ 0x180027690 (RtlFreeHeap.c)
 *     _MuiRegAllocArray @ 0x18004B8B8 (_MuiRegAllocArray.c)
 *     RtlGetParentLocaleName @ 0x18004D7D0 (RtlGetParentLocaleName.c)
 *     RtlpMuiRegGetLanguageSpec @ 0x18006F674 (RtlpMuiRegGetLanguageSpec.c)
 */

__int64 __fastcall RtlpMuiRegAddNeutralLanguage(__int64 a1, __int64 a2, const WCHAR *a3)
{
  int v5; // esi
  wchar_t *v6; // rax
  wchar_t *v7; // r14
  NTSTATUS v8; // eax
  int v9; // r9d
  int LanguageSpec; // ebx
  int v11; // esi
  __int16 v12; // cx
  _UNICODE_STRING ParentLocaleName; // [rsp+30h] [rbp-10h] BYREF
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
  v6 = (wchar_t *)MuiRegAllocArray(a1, 0x55u);
  v7 = v6;
  if ( !v6 )
  {
    LanguageSpec = -1073741801;
LABEL_15:
    *(_WORD *)(a2 + 10) = 0;
    *(_WORD *)(a2 + 8) &= 0x3FFFu;
    return (unsigned int)LanguageSpec;
  }
  ParentLocaleName.Buffer = v6;
  *(_DWORD *)&ParentLocaleName.Length = 11141120;
  v8 = RtlGetParentLocaleName(a3, &ParentLocaleName, 6u, 0);
  LanguageSpec = v8;
  if ( v8 < 0 )
  {
    v11 = v8;
  }
  else
  {
    LanguageSpec = RtlpMuiRegGetLanguageSpec(v5, ParentLocaleName.Buffer, (unsigned int)&v15, v9, (__int64)&v16);
    v11 = LanguageSpec;
    if ( LanguageSpec < 0 )
    {
      v15 = 0;
      v16 = 0;
    }
  }
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v7);
  if ( v11 < 0 )
    goto LABEL_15;
  v12 = v15;
  if ( !v15 )
  {
    LanguageSpec = -1073741823;
    goto LABEL_15;
  }
  *(_WORD *)(a2 + 8) &= 0x3FFFu;
  *(_WORD *)(a2 + 8) |= v12 << 14;
  *(_WORD *)(a2 + 10) = v16;
  return (unsigned int)LanguageSpec;
}
