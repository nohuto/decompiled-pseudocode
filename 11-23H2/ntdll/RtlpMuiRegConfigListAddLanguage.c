/*
 * XREFs of RtlpMuiRegConfigListAddLanguage @ 0x18011251C
 * Callers:
 *     RtlpPopulateLanguageConfigList @ 0x180114478 (RtlpPopulateLanguageConfigList.c)
 * Callees:
 *     RtlpMuiRegResizeLanguageConfigList @ 0x1801140A4 (RtlpMuiRegResizeLanguageConfigList.c)
 */

__int64 __fastcall RtlpMuiRegConfigListAddLanguage(__int64 *a1, __int16 *a2)
{
  unsigned int v2; // ebx
  __int64 v5; // r8
  __int16 v6; // bp
  __int16 v7; // r9
  int v8; // r10d
  int v9; // edx
  _WORD *v10; // r11
  __int64 v11; // rcx
  int v12; // edx
  __int64 v13; // rcx
  __int64 v14; // rdx
  int v15; // eax

  v2 = 0;
  if ( !a1 )
    return (unsigned int)-1073741811;
  v5 = *a1;
  if ( !*a1 )
    return (unsigned int)-1073741811;
  if ( !a2 )
    return (unsigned int)-1073741811;
  v6 = *a2;
  v7 = (unsigned __int16)a2[1] >> 14;
  if ( !(_BYTE)v7 )
    return (unsigned int)-1073741811;
  v8 = *(unsigned __int16 *)(v5 + 4);
  v9 = 0;
  if ( !*(_WORD *)(v5 + 4) )
    goto LABEL_9;
  while ( 1 )
  {
    v10 = (_WORD *)(*(_QWORD *)(v5 + 8) + 12LL * v9);
    if ( v10[1] >> 14 == v7 && *v10 == v6 )
      break;
    if ( ++v9 >= v8 )
      goto LABEL_9;
  }
  if ( v9 < 0 )
  {
LABEL_9:
    if ( (unsigned __int16)v8 >= *(_WORD *)(v5 + 6) )
    {
      v11 = *a1;
      if ( v8 + 1 >= (unsigned int)*(unsigned __int16 *)(v5 + 6) )
      {
        v11 = RtlpMuiRegResizeLanguageConfigList(v5);
        if ( !v11 )
          return (unsigned int)-1073741801;
      }
      v5 = v11;
      *a1 = v11;
    }
    v13 = *(_QWORD *)(v5 + 8);
    v14 = 3LL * *(unsigned __int16 *)(v5 + 4);
    v15 = *((_DWORD *)a2 + 2);
    *(_QWORD *)(v13 + 4 * v14) = *(_QWORD *)a2;
    *(_DWORD *)(v13 + 4 * v14 + 8) = v15;
    ++*(_WORD *)(v5 + 4);
    return v2;
  }
  v12 = 0;
  while ( (((unsigned __int16)(a2[1] ^ v10[1]) >> (2 * v12)) & 3) == 0 && v10[v12 + 3] == a2[v12 + 3] )
  {
    if ( ++v12 >= 3 )
      return v2;
  }
  return 0x40000000;
}
