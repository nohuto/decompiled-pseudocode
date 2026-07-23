/*
 * XREFs of ApiSetpSearchForSectionIndex_V7 @ 0x14041847C
 * Callers:
 *     ApiSetQuerySchemaInfo_V7 @ 0x140416DE0 (ApiSetQuerySchemaInfo_V7.c)
 *     ApiSetResolveToHost_V7 @ 0x14041705C (ApiSetResolveToHost_V7.c)
 *     ApiSetValidateSchemaElements_V7 @ 0x140417320 (ApiSetValidateSchemaElements_V7.c)
 *     ApiSetCompose_ProcessV7Extension_Phase0 @ 0x140417BDC (ApiSetCompose_ProcessV7Extension_Phase0.c)
 *     ApiSetCompose_ProcessV7Extension_Phase1 @ 0x140417E2C (ApiSetCompose_ProcessV7Extension_Phase1.c)
 *     ApiSetCompose_V7_ProcessV6Extension_Phase0 @ 0x1404191FC (ApiSetCompose_V7_ProcessV6Extension_Phase0.c)
 *     ApiSetCompose_V7_ProcessV6Extension_Phase1 @ 0x1404193F0 (ApiSetCompose_V7_ProcessV6Extension_Phase1.c)
 * Callees:
 *     ApiSetpGetSearchKeyHash_V7 @ 0x1404182A0 (ApiSetpGetSearchKeyHash_V7.c)
 *     RtlCompareUnicodeStrings @ 0x1406DA010 (RtlCompareUnicodeStrings.c)
 */

__int64 __fastcall ApiSetpSearchForSectionIndex_V7(
        __int64 a1,
        unsigned int *a2,
        unsigned __int8 *a3,
        unsigned __int16 a4,
        char a5)
{
  const WCHAR *v5; // rbp
  SIZE_T v6; // r14
  int v9; // edi
  unsigned int SearchKeyHash_V7; // eax
  unsigned int v11; // r8d
  unsigned int v12; // r10d
  int v13; // edx
  unsigned int v14; // ecx
  int v15; // r8d
  __int64 v16; // r11
  __int64 v17; // r15
  int v18; // ecx
  __int64 v19; // rax
  unsigned int v21; // r15d
  __int64 v22; // rax
  SIZE_T v23; // r9
  __int64 v24; // rax
  LONG v25; // r10d
  char v26; // r8
  __int64 v27; // rcx
  const WCHAR *v28; // r11
  int v29; // esi
  int v30; // edi
  signed __int64 v31; // rbp
  char v32; // dl
  unsigned __int8 v33; // r14
  unsigned __int8 v34; // dl
  unsigned __int8 v35; // r14
  unsigned __int8 v36; // dl
  int v37; // edi
  unsigned __int8 v38; // r14
  unsigned __int8 v39; // dl
  unsigned int v40; // [rsp+78h] [rbp+20h]

  v5 = (const WCHAR *)a3;
  v6 = a4;
  v9 = a4;
  SearchKeyHash_V7 = ApiSetpGetSearchKeyHash_V7(a3, a4, a5, *((unsigned __int16 *)a2 + 4));
  v11 = a2[1];
  v12 = SearchKeyHash_V7;
  v13 = 0;
  v40 = *a2;
  v14 = *a2 + v11 * *((unsigned __int8 *)a2 + 10);
  v15 = v11 - 1;
  if ( v15 < 0 )
    return 0xFFFFFFFFLL;
  v16 = *(unsigned __int16 *)(a1 + 6);
  v17 = v14;
  while ( 1 )
  {
    v18 = (v13 + v15) >> 1;
    v19 = v17 + 8LL * v18 - v16;
    if ( v12 >= *(_DWORD *)(v19 + a1) )
      break;
    v15 = v18 - 1;
LABEL_7:
    if ( v13 > v15 )
      return 0xFFFFFFFFLL;
  }
  if ( v12 > *(_DWORD *)(v19 + a1) )
  {
    v13 = v18 + 1;
    goto LABEL_7;
  }
  v21 = *(_DWORD *)(v19 + a1 + 4);
  v22 = a1 + *((unsigned __int8 *)a2 + 10) * (unsigned __int64)v21 - v16;
  v23 = *(unsigned __int16 *)(v40 + v22 + 4);
  if ( v9 != (_DWORD)v23 )
    return 0xFFFFFFFFLL;
  v24 = *(unsigned int *)(v40 + v22);
  v25 = 1;
  if ( (*((_BYTE *)a2 + 11) & 1) != 0 )
  {
    v26 = 1;
    v27 = v24 + *(unsigned int *)(a1 + 16) - v16;
  }
  else
  {
    v26 = 0;
    v27 = v24 + *(unsigned int *)(a1 + 24) - v16;
  }
  v28 = (const WCHAR *)(v27 + a1);
  if ( a5 != v26 )
  {
    if ( a5 )
    {
      if ( (_DWORD)v23 )
      {
        if ( !v9 )
          goto LABEL_57;
        v29 = 0;
        do
        {
          if ( !v9 )
            break;
          v35 = *(_BYTE *)v28 + 32;
          if ( (unsigned __int8)(*(_BYTE *)v28 - 65) > 0x19u )
            v35 = *(_BYTE *)v28;
          v36 = *(_BYTE *)v5 + 32;
          if ( (unsigned __int8)(*(_BYTE *)v5 - 65) > 0x19u )
            v36 = *(_BYTE *)v5;
          if ( v35 < v36 )
            goto LABEL_55;
          if ( v35 > v36 )
            goto LABEL_54;
          v28 = (const WCHAR *)((char *)v28 + 1);
          ++v5;
          --v9;
          LODWORD(v23) = v23 - 1;
        }
        while ( (_DWORD)v23 );
LABEL_56:
        v25 = v29;
        goto LABEL_57;
      }
    }
    else if ( (_WORD)v6 )
    {
      if ( !(_DWORD)v23 )
        goto LABEL_57;
      v29 = 0;
      v37 = v9 - v23;
      while ( (_DWORD)v23 )
      {
        v38 = *(_BYTE *)v5 + 32;
        if ( (unsigned __int8)(*(_BYTE *)v5 - 65) > 0x19u )
          v38 = *(_BYTE *)v5;
        v39 = *(_BYTE *)v28 + 32;
        if ( (unsigned __int8)(*(_BYTE *)v28 - 65) > 0x19u )
          v39 = *(_BYTE *)v28;
        if ( v38 < v39 )
        {
LABEL_55:
          v29 = -1;
          goto LABEL_56;
        }
        if ( v38 > v39 )
        {
LABEL_54:
          v29 = 1;
          goto LABEL_56;
        }
        LODWORD(v23) = v23 - 1;
        v5 = (const WCHAR *)((char *)v5 + 1);
        ++v28;
        if ( !(v37 + (_DWORD)v23) )
          goto LABEL_56;
      }
      goto LABEL_56;
    }
LABEL_42:
    v25 = -1;
    goto LABEL_57;
  }
  if ( a5 )
  {
    v25 = RtlCompareUnicodeStrings(v5, v6, v28, v23, 1u);
    goto LABEL_57;
  }
  if ( !(_WORD)v6 )
    goto LABEL_42;
  if ( (_DWORD)v23 )
  {
    v29 = 0;
    v30 = v9 - v23;
    v31 = (char *)v5 - (char *)v28;
    do
    {
      if ( !(_DWORD)v23 )
        break;
      v32 = *((_BYTE *)v28 + v31);
      v33 = v32 + 32;
      if ( (unsigned __int8)(v32 - 65) > 0x19u )
        v33 = *((_BYTE *)v28 + v31);
      v34 = *(_BYTE *)v28 + 32;
      if ( (unsigned __int8)(*(_BYTE *)v28 - 65) > 0x19u )
        v34 = *(_BYTE *)v28;
      if ( v33 < v34 )
        goto LABEL_55;
      if ( v33 > v34 )
        goto LABEL_54;
      LODWORD(v23) = v23 - 1;
      v28 = (const WCHAR *)((char *)v28 + 1);
    }
    while ( v30 + (_DWORD)v23 );
    goto LABEL_56;
  }
LABEL_57:
  if ( v25 )
    return (unsigned int)-1;
  return v21;
}
