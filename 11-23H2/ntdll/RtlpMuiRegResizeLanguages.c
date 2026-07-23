/*
 * XREFs of RtlpMuiRegResizeLanguages @ 0x180114170
 * Callers:
 *     RtlpMuiRegGetOrAddLangInfo @ 0x180113440 (RtlpMuiRegGetOrAddLangInfo.c)
 * Callees:
 *     _SafeReallocBlob @ 0x180116218 (_SafeReallocBlob.c)
 */

__int64 __fastcall RtlpMuiRegResizeLanguages(__int64 a1, int a2)
{
  __int64 v2; // r8
  int v3; // ebx
  __int64 v4; // rax
  int v6; // [rsp+58h] [rbp+10h]

  v2 = 0LL;
  v3 = 4;
  if ( a2 >= 1 )
    v3 = a2;
  if ( a1 )
  {
    if ( v3 >= *(unsigned __int16 *)(a1 + 6) )
    {
      v4 = SafeReallocBlob(a1, 24, v3, 28);
      v2 = v4;
      if ( v4 )
      {
        *(_DWORD *)v4 = v6;
        *(_QWORD *)(v4 + 16) = v4 + 24;
        *(_WORD *)(v4 + 4) = v3;
      }
    }
  }
  return v2;
}
