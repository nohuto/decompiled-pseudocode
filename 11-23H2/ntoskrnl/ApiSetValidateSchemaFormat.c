/*
 * XREFs of ApiSetValidateSchemaFormat @ 0x140614C1C
 * Callers:
 *     ApiSetComposeSchema_V7 @ 0x1404179D8 (ApiSetComposeSchema_V7.c)
 *     ApiSetComposeSchema @ 0x140614EF4 (ApiSetComposeSchema.c)
 * Callees:
 *     ApiSetpSearchForApiSet @ 0x14035F720 (ApiSetpSearchForApiSet.c)
 *     ApiSetValidateSchemaExtensionFormat_V7 @ 0x1404176AC (ApiSetValidateSchemaExtensionFormat_V7.c)
 *     ApiSetValidateSchemaFormat_V7 @ 0x1404177F0 (ApiSetValidateSchemaFormat_V7.c)
 */

__int64 __fastcall ApiSetValidateSchemaFormat(__int64 a1, unsigned int a2)
{
  unsigned int v4; // ecx
  unsigned int v6; // r8d
  __int64 v7; // rax
  unsigned int v8; // ecx
  unsigned int v9; // edi
  __int64 i; // r14
  unsigned int *v11; // rsi
  unsigned int v12; // ecx
  __int64 v13; // rax
  unsigned int v14; // ecx
  unsigned int v15; // eax
  __int64 v16; // r10
  int v17; // ecx
  __int64 v18; // rdx
  __int64 v19; // r15
  _DWORD *v20; // rax
  unsigned int v21; // r9d
  unsigned int v22; // esi
  unsigned int v23; // ecx
  unsigned int v24; // r9d
  unsigned int v25; // eax
  unsigned __int64 v26; // rcx
  unsigned int v27; // eax

  if ( *(_BYTE *)a1 == 7 )
  {
    if ( (*(_BYTE *)(a1 + 2) & 2) != 0 )
      return ApiSetValidateSchemaExtensionFormat_V7(a1, a2);
    return ApiSetValidateSchemaFormat_V7(a1);
  }
  v4 = *(_DWORD *)a1;
  if ( v4 == 6 )
  {
    if ( (*(_DWORD *)(a1 + 8) & 4) == 0 )
    {
LABEL_10:
      if ( a2 >= 0x1C )
      {
        v6 = *(_DWORD *)(a1 + 4);
        if ( v6 <= a2 )
        {
          v7 = *(unsigned int *)(a1 + 12);
          v8 = 24 * v7;
          if ( (unsigned __int64)(24 * v7) > 0xFFFFFFFF )
            return (unsigned int)-1073741675;
          v9 = v8 + 28;
          if ( v8 >= 0xFFFFFFE4 )
            return (unsigned int)-1073741675;
          if ( v9 <= v6 )
          {
            for ( i = 0LL; (unsigned int)i < (unsigned int)v7; i = (unsigned int)(i + 1) )
            {
              v11 = (unsigned int *)(a1 + *(unsigned int *)(a1 + 16) + 24 * i);
              v12 = v11[2];
              if ( v12 > 0xFFFF )
                return (unsigned int)-1073741596;
              if ( v11[3] > 0xFFFF )
                return (unsigned int)-1073741596;
              v13 = v11[1];
              if ( (_DWORD)v13 )
              {
                if ( (unsigned int)v13 < v9 )
                  return (unsigned int)-1073741596;
              }
              v14 = v13 + v12;
              if ( v14 < (unsigned int)v13 )
                return (unsigned int)-1073741675;
              if ( v14 > v6 )
                return (unsigned int)-1073741596;
              if ( (unsigned int *)ApiSetpSearchForApiSet(
                                     (_DWORD *)a1,
                                     (const WCHAR *)(a1 + v13),
                                     *((_WORD *)v11 + 6) >> 1) != v11 )
                return (unsigned int)-1073741596;
              v15 = v11[4];
              if ( v15 )
              {
                if ( v15 < v9 )
                  return (unsigned int)-1073741596;
              }
              v16 = v11[5];
              v17 = 20 * v16;
              if ( (unsigned __int64)(20 * v16) > 0xFFFFFFFF || v15 + v17 < v15 )
                return (unsigned int)-1073741675;
              v6 = *(_DWORD *)(a1 + 4);
              if ( v15 + v17 > v6 )
                return (unsigned int)-1073741596;
              v18 = 0LL;
              if ( (_DWORD)v16 )
              {
                v19 = v11[4];
                do
                {
                  v20 = (_DWORD *)(a1 + v19 + 20 * v18);
                  v21 = v20[2];
                  if ( v21 > 0xFFFF )
                    return (unsigned int)-1073741596;
                  v22 = v20[4];
                  if ( v22 > 0xFFFF )
                    return (unsigned int)-1073741596;
                  v23 = v20[1];
                  if ( v23 )
                  {
                    if ( v23 < v9 )
                      return (unsigned int)-1073741596;
                  }
                  v24 = v23 + v21;
                  if ( v24 < v23 )
                    return (unsigned int)-1073741675;
                  if ( v24 > v6 )
                    return (unsigned int)-1073741596;
                  v25 = v20[3];
                  if ( v25 )
                  {
                    if ( v25 < v9 )
                      return (unsigned int)-1073741596;
                  }
                  if ( v22 + v25 < v25 )
                    return (unsigned int)-1073741675;
                  if ( v22 + v25 > v6 )
                    return (unsigned int)-1073741596;
                  v18 = (unsigned int)(v18 + 1);
                }
                while ( (unsigned int)v18 < (unsigned int)v16 );
              }
              LODWORD(v7) = *(_DWORD *)(a1 + 12);
            }
            v26 = 8LL * (unsigned int)v7;
            if ( v26 <= 0xFFFFFFFF )
            {
              v27 = *(_DWORD *)(a1 + 20);
              if ( v27 + (unsigned int)v26 >= v27 )
                return v6 < v27 + (unsigned int)v26 ? 0xC00000E4 : 0;
            }
            return (unsigned int)-1073741675;
          }
        }
      }
      return (unsigned int)-1073741596;
    }
    if ( *(_BYTE *)(a1 + 28) == 7 )
      return ApiSetValidateSchemaFormat_V7(a1);
  }
  if ( v4 > 4 )
    goto LABEL_10;
  return (unsigned int)-1073741637;
}
