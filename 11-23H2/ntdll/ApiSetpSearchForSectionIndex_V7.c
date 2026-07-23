/*
 * XREFs of ApiSetpSearchForSectionIndex_V7 @ 0x18009F24C
 * Callers:
 *     ApiSetQuerySchemaInfo_V7 @ 0x18009EBF0 (ApiSetQuerySchemaInfo_V7.c)
 *     ApiSetResolveToHost_V7 @ 0x18009EE48 (ApiSetResolveToHost_V7.c)
 * Callees:
 *     RtlCompareUnicodeStrings @ 0x180014950 (RtlCompareUnicodeStrings.c)
 */

__int64 __fastcall ApiSetpSearchForSectionIndex_V7(__int64 a1, unsigned int *a2, const WCHAR *a3, unsigned __int16 a4)
{
  SIZE_T v4; // r13
  unsigned int v6; // edx
  const WCHAR *v7; // r12
  const WCHAR *v9; // r11
  int v10; // edi
  LONG v11; // r10d
  __int64 v12; // r8
  unsigned __int8 v13; // al
  unsigned int v14; // eax
  int v15; // r9d
  int v16; // r8d
  __int64 v17; // rbp
  __int64 v18; // rbx
  int v19; // ecx
  __int64 v20; // rax
  __int64 v22; // rsi
  __int64 v23; // rdx
  int v24; // r11d
  __int64 v25; // rax
  unsigned __int8 *v26; // r14
  int v27; // r9d
  unsigned __int8 v28; // r8
  unsigned __int8 v29; // bp

  v4 = a4;
  v6 = 0;
  v7 = a3;
  v9 = a3;
  v10 = a4;
  v11 = 1;
  if ( a4 )
  {
    v12 = a4;
    do
    {
      v13 = *(_BYTE *)v9;
      if ( *(_BYTE *)v9 >= 0x41u && v13 <= 0x5Au )
        v13 += 32;
      ++v9;
      v6 = v6 * *((unsigned __int16 *)a2 + 4) + v13;
      --v12;
    }
    while ( v12 );
  }
  v14 = a2[1];
  v15 = 0;
  v16 = v14 - 1;
  if ( (int)(v14 - 1) < 0 )
    return 0xFFFFFFFFLL;
  v17 = *(unsigned __int16 *)(a1 + 6);
  v18 = *a2 + v14 * *((unsigned __int8 *)a2 + 10);
  while ( 1 )
  {
    v19 = (v15 + v16) >> 1;
    v20 = v18 + 8LL * v19 - v17;
    if ( v6 >= *(_DWORD *)(v20 + a1) )
      break;
    v16 = v19 - 1;
LABEL_13:
    if ( v15 > v16 )
      return 0xFFFFFFFFLL;
  }
  if ( v6 > *(_DWORD *)(v20 + a1) )
  {
    v15 = v19 + 1;
    goto LABEL_13;
  }
  v22 = *(unsigned int *)(v20 + a1 + 4);
  v23 = *a2 + v22 * *((unsigned __int8 *)a2 + 10) - v17;
  v24 = *(unsigned __int16 *)(v23 + a1 + 4);
  if ( (_DWORD)v4 != v24 )
    return 0xFFFFFFFFLL;
  v25 = *(unsigned int *)(v23 + a1);
  if ( (*((_BYTE *)a2 + 11) & 1) != 0 )
  {
    v11 = RtlCompareUnicodeStrings(
            v7,
            v4,
            (PCWCH)(a1 + v25 + *(unsigned int *)(a1 + 16) - v17),
            *(unsigned __int16 *)(v23 + a1 + 4),
            1u);
  }
  else
  {
    v26 = (unsigned __int8 *)(v25 + *(unsigned int *)(a1 + 24) - v17 + a1);
    if ( v24 )
    {
      if ( (_DWORD)v4 )
      {
        v27 = 0;
        while ( v10 )
        {
          v28 = *(_BYTE *)v7;
          v29 = *v26 + 32;
          if ( (unsigned __int8)(*v26 - 65) > 0x19u )
            v29 = *v26;
          if ( (unsigned __int8)(*(_BYTE *)v7 - 65) <= 0x19u )
            v28 += 32;
          if ( v29 < v28 )
          {
            v27 = -1;
            break;
          }
          if ( v29 > v28 )
          {
            v27 = 1;
            break;
          }
          ++v26;
          ++v7;
          --v10;
          if ( !--v24 )
            break;
        }
        v11 = v27;
      }
    }
    else
    {
      v11 = -1;
    }
  }
  if ( v11 )
    LODWORD(v22) = -1;
  return (unsigned int)v22;
}
