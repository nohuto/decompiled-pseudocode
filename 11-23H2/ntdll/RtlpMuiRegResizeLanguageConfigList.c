/*
 * XREFs of RtlpMuiRegResizeLanguageConfigList @ 0x1801140A4
 * Callers:
 *     RtlpMuiRegConfigListAddLanguage @ 0x18011251C (RtlpMuiRegConfigListAddLanguage.c)
 * Callees:
 *     _SafeReallocBlob @ 0x180116218 (_SafeReallocBlob.c)
 */

__int64 __fastcall RtlpMuiRegResizeLanguageConfigList(__int64 a1, int a2)
{
  int v2; // ebx
  __int64 v3; // rdx
  __int64 v4; // rax
  int v6; // [rsp+58h] [rbp+10h]

  v2 = 4;
  if ( a2 >= 1 )
    v2 = a2;
  v3 = 0LL;
  if ( a1 )
  {
    if ( v2 >= *(unsigned __int16 *)(a1 + 4) )
    {
      v4 = SafeReallocBlob(a1, 16, v2, 12);
      v3 = v4;
      if ( v4 )
      {
        *(_DWORD *)v4 = v6;
        *(_QWORD *)(v4 + 8) = v4 + 16;
        *(_WORD *)(v4 + 6) = v2;
      }
    }
  }
  return v3;
}
