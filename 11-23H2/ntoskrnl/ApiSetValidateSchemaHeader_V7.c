/*
 * XREFs of ApiSetValidateSchemaHeader_V7 @ 0x14041783C
 * Callers:
 *     ApiSetValidateSchemaFormat_V7 @ 0x1404177F0 (ApiSetValidateSchemaFormat_V7.c)
 *     ApiSetComposeSchema_V7 @ 0x1404179D8 (ApiSetComposeSchema_V7.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ApiSetValidateSchemaHeader_V7(__int64 a1, unsigned int a2)
{
  unsigned int v2; // r8d
  unsigned int v4; // r10d
  unsigned int v5; // r11d
  unsigned int v6; // ecx
  unsigned int v7; // edx
  unsigned int v8; // ecx
  int v9; // eax
  int v10; // esi
  unsigned int v11; // ecx
  unsigned int v12; // eax
  unsigned int v13; // ecx
  unsigned int v14; // r11d
  unsigned int v15; // edx
  unsigned int v16; // ebx
  unsigned __int64 v17; // rdi
  unsigned int v18; // edi
  unsigned __int64 v19; // rax
  unsigned int v20; // eax
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rcx

  v2 = 0;
  if ( !a2 )
    return (unsigned int)-1073741596;
  v4 = *(_DWORD *)(a1 + 8);
  if ( !v4 )
    return (unsigned int)-1073741596;
  if ( v4 > a2 )
    return (unsigned int)-1073741596;
  if ( a2 < 0x64 )
    return (unsigned int)-1073741596;
  if ( v4 < 0x64 )
    return (unsigned int)-1073741596;
  if ( *(_WORD *)(a1 + 12) != 100 )
    return (unsigned int)-1073741596;
  v5 = *(_DWORD *)(a1 + 16);
  v6 = v5 + *(_DWORD *)(a1 + 20);
  if ( v6 >= v5 )
  {
    v7 = *(_DWORD *)(a1 + 24);
    if ( v6 > v7 )
      return (unsigned int)-1073741596;
    v8 = v7 + *(_DWORD *)(a1 + 28);
    if ( v8 >= v7 )
    {
      if ( v8 > v4 )
        return (unsigned int)-1073741596;
      v9 = *(unsigned __int16 *)(a1 + 98);
      if ( !(_WORD)v9 )
        return (unsigned int)-1073741596;
      v10 = *(_DWORD *)(a1 + 92);
      if ( v9 * *(unsigned __int16 *)(a1 + 96) != v10 )
        return (unsigned int)-1073741596;
      if ( v5 < (unsigned int)*(unsigned __int16 *)(a1 + 14) + 100 )
        return (unsigned int)-1073741596;
      v11 = *(_DWORD *)(a1 + 32);
      if ( v7 > v11 )
        return (unsigned int)-1073741596;
      v12 = *(_DWORD *)(a1 + 40);
      if ( v11 > v12 )
        return (unsigned int)-1073741596;
      v13 = *(_DWORD *)(a1 + 52);
      if ( v12 > v13 )
        return (unsigned int)-1073741596;
      v14 = *(_DWORD *)(a1 + 64);
      if ( v13 > v14 )
        return (unsigned int)-1073741596;
      v15 = *(_DWORD *)(a1 + 76);
      if ( v14 > v15 )
        return (unsigned int)-1073741596;
      v16 = *(_DWORD *)(a1 + 88);
      if ( v15 > v16 )
        return (unsigned int)-1073741596;
      v17 = 32LL * *(unsigned int *)(a1 + 44);
      if ( v17 <= 0xFFFFFFFF )
      {
        v18 = v12 + v17;
        if ( v18 >= v12 )
        {
          if ( v18 > v13 )
            return (unsigned int)-1073741596;
          v19 = 28LL * *(unsigned int *)(a1 + 56);
          if ( v19 <= 0xFFFFFFFF )
          {
            v20 = v13 + v19;
            if ( v20 >= v13 )
            {
              if ( v20 > v14 )
                return (unsigned int)-1073741596;
              v21 = 16LL * *(unsigned int *)(a1 + 68);
              if ( v21 <= 0xFFFFFFFF && v14 + (unsigned int)v21 >= v14 )
              {
                if ( v14 + (unsigned int)v21 > v15 )
                  return (unsigned int)-1073741596;
                v22 = 20LL * *(unsigned int *)(a1 + 80);
                if ( v22 <= 0xFFFFFFFF
                  && v15 + (unsigned int)v22 >= v15
                  && (v15 + (unsigned int)v22 > v16 || v10 + v16 >= v16 && v10 + v16 > v4) )
                {
                  return (unsigned int)-1073741596;
                }
              }
            }
          }
        }
      }
    }
  }
  return v2;
}
