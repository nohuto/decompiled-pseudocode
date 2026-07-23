/*
 * XREFs of ApiSetValidateSchemaExtensionFormat_V7 @ 0x1404176AC
 * Callers:
 *     ApiSetValidateSchemaFormat @ 0x140614C1C (ApiSetValidateSchemaFormat.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ApiSetValidateSchemaExtensionFormat_V7(__int64 a1, unsigned int a2)
{
  unsigned int v2; // r8d
  unsigned __int64 v3; // r9
  int v4; // eax
  unsigned int v5; // edx
  __int64 v6; // rdx
  unsigned __int64 v7; // r11
  unsigned int v8; // r10d
  unsigned int v9; // eax
  __int16 v10; // di
  unsigned __int64 v11; // r10
  unsigned int v12; // ebx
  unsigned int v13; // eax
  unsigned int v14; // ebx
  unsigned int v15; // eax

  v2 = 0;
  if ( !a2 )
    return (unsigned int)-1073741596;
  v3 = *(unsigned int *)(a1 + 4);
  if ( !(_DWORD)v3 || (unsigned int)v3 > a2 || a2 < 0x14 || (unsigned int)v3 < 0x14 )
    return (unsigned int)-1073741596;
  v4 = *(unsigned __int16 *)(a1 + 16);
  if ( (_WORD)v4 )
  {
    v5 = *(_DWORD *)(a1 + 8);
    if ( v5 > (unsigned int)v3 )
      return (unsigned int)-1073741596;
    if ( v5 + v4 < v5 )
      return v2;
    if ( v5 + v4 > (unsigned int)v3 )
      return (unsigned int)-1073741596;
  }
  v6 = *(unsigned __int16 *)(a1 + 18);
  if ( (_WORD)v6 )
  {
    if ( 20 * (v6 + 1) <= v3 )
    {
      v7 = *(unsigned int *)(a1 + 12);
      if ( v7 <= v3 - 20 )
      {
        while ( 1 )
        {
          v8 = *(_DWORD *)(v7 + a1);
          if ( v8 > (unsigned int)v3 )
            break;
          v9 = v8 + *(unsigned __int16 *)(v7 + a1 + 8);
          if ( v9 < v8 )
            return v2;
          if ( v9 > (unsigned int)v3 )
            break;
          v10 = *(_WORD *)(v7 + a1 + 10);
          if ( v10 )
          {
            v11 = *(unsigned int *)(v7 + a1 + 4);
            if ( v11 <= v3 - 16 )
            {
              while ( 1 )
              {
                v12 = *(_DWORD *)(v11 + a1);
                if ( v12 > (unsigned int)v3 )
                  break;
                v13 = v12 + *(unsigned __int16 *)(v11 + a1 + 8);
                if ( v13 < v12 )
                  return v2;
                if ( v13 > (unsigned int)v3 )
                  break;
                v14 = *(_DWORD *)(v11 + a1 + 4);
                if ( v14 > (unsigned int)v3 )
                  break;
                v15 = v14 + *(unsigned __int16 *)(v11 + a1 + 10);
                if ( v15 < v14 )
                  return v2;
                if ( v15 > (unsigned int)v3 )
                  break;
                if ( !--v10 )
                  goto LABEL_25;
              }
            }
            return (unsigned int)-1073741596;
          }
LABEL_25:
          LOWORD(v6) = v6 - 1;
          if ( !(_WORD)v6 )
            return v2;
        }
      }
    }
    return (unsigned int)-1073741596;
  }
  return v2;
}
