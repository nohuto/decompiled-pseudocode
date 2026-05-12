/*
 * XREFs of RaUnitBuildSrbForSmartReadData @ 0x1C005D558
 * Callers:
 *     RaUnitSmartDataIoctl @ 0x1C005EF34 (RaUnitSmartDataIoctl.c)
 * Callees:
 *     <none>
 */

char __fastcall RaUnitBuildSrbForSmartReadData(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6,
        int a7,
        char a8)
{
  __int64 v9; // r9
  int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // rcx
  char v13; // bl
  unsigned int i; // r9d
  __int64 v15; // rcx
  unsigned __int64 v16; // r11
  __int64 v17; // rdx
  int v18; // ecx
  int v19; // ecx
  __int64 v20; // rdx
  char v21; // si
  unsigned int v22; // edi
  unsigned int j; // r11d
  __int64 v24; // rbp
  __int64 v25; // rcx
  unsigned __int64 v26; // rbx
  __int64 v27; // r9
  int v28; // ecx
  int v29; // ecx
  char result; // al

  if ( a8 == 1 )
  {
    v9 = *(unsigned int *)(a3 + 52);
    *(_DWORD *)(a3 + 20) = 0;
    *(_BYTE *)(v9 + a3 + 8) = *(_BYTE *)(a1 + 96);
    *(_BYTE *)(v9 + a3 + 9) = *(_BYTE *)(a1 + 97);
    *(_BYTE *)(v9 + a3 + 10) = *(_BYTE *)(a1 + 98);
    *(_DWORD *)(a3 + 24) = 322;
    *(_QWORD *)(a3 + 64) = a4;
    *(_DWORD *)(a3 + 60) = 512;
    *(_QWORD *)(a3 + 80) = a2;
    v10 = *(_DWORD *)(a1 + 1320);
    v11 = *(unsigned int *)(a3 + 120);
    *(_DWORD *)(a3 + 40) = v10;
    v12 = a3 + v11;
    *(_DWORD *)v12 = 64;
    *(_DWORD *)(v12 + 4) = 32;
    *(_BYTE *)(v12 + 9) = -1;
    *(_QWORD *)(v12 + 16) = a6;
  }
  else
  {
    *(_BYTE *)(a3 + 2) = 0;
    *(_WORD *)a3 = 88;
    *(_BYTE *)(a3 + 5) = *(_BYTE *)(a1 + 96);
    *(_BYTE *)(a3 + 6) = *(_BYTE *)(a1 + 97);
    *(_BYTE *)(a3 + 7) = *(_BYTE *)(a1 + 98);
    *(_DWORD *)(a3 + 12) = 322;
    *(_QWORD *)(a3 + 24) = a4;
    *(_DWORD *)(a3 + 16) = 512;
    *(_QWORD *)(a3 + 48) = a2;
    *(_DWORD *)(a3 + 20) = *(_DWORD *)(a1 + 1320);
    *(_QWORD *)(a3 + 32) = a6;
    *(_BYTE *)(a3 + 11) = -1;
  }
  if ( *(_BYTE *)(a3 + 2) == 40 )
  {
    *(_WORD *)(a3 + 38) = 32;
    v13 = 0;
    if ( !*(_DWORD *)(a3 + 20) )
    {
      for ( i = 0; i < *(_DWORD *)(a3 + 56); ++i )
      {
        v15 = *(unsigned int *)(a3 + 4LL * i + 120);
        if ( (unsigned int)v15 >= 0x80 )
        {
          v16 = *(unsigned int *)(a3 + 16);
          if ( (unsigned int)v15 < (unsigned int)v16 )
          {
            v17 = (unsigned int)v15;
            v18 = *(_DWORD *)(v15 + a3) - 64;
            if ( v18 )
            {
              v19 = v18 - 1;
              if ( v19 )
              {
                if ( v19 == 1 && v17 + 40 <= v16 )
                  break;
              }
              else if ( v17 + 56 <= v16 )
              {
                v13 = 1;
                *(_BYTE *)(v17 + a3 + 10) = 16;
              }
            }
            else if ( v17 + 40 <= v16 )
            {
              *(_BYTE *)(v17 + a3 + 10) = 16;
              break;
            }
            if ( v13 )
              break;
          }
        }
      }
    }
  }
  else
  {
    *(_WORD *)(a3 + 9) = 4128;
  }
  if ( *(_BYTE *)(a3 + 2) != 40 )
  {
    v20 = a3 + 72;
    goto LABEL_44;
  }
  v20 = 0LL;
  v21 = 0;
  if ( !*(_DWORD *)(a3 + 20) )
  {
    v22 = *(_DWORD *)(a3 + 56);
    for ( j = 0; j < v22; ++j )
    {
      v24 = v20;
      v25 = *(unsigned int *)(a3 + 4LL * j + 120);
      if ( (unsigned int)v25 >= 0x80 )
      {
        v26 = *(unsigned int *)(a3 + 16);
        if ( (unsigned int)v25 < (unsigned int)v26 )
        {
          v27 = (unsigned int)v25;
          v28 = *(_DWORD *)(v25 + a3) - 64;
          if ( v28 )
          {
            v29 = v28 - 1;
            if ( v29 )
            {
              if ( v29 == 1 && v27 + 40 <= v26 )
              {
                v20 = v27 + a3 + 32;
                if ( !*(_DWORD *)(v27 + a3 + 12) )
                  v20 = v24;
                break;
              }
            }
            else if ( v27 + 56 <= v26 )
            {
              v21 = 1;
              if ( !*(_BYTE *)(v27 + a3 + 10) )
                break;
              v20 = v27 + a3 + 24;
            }
          }
          else if ( v27 + 40 <= v26 )
          {
            if ( *(_BYTE *)(v27 + a3 + 10) )
              v20 = v27 + a3 + 24;
            break;
          }
          if ( v21 )
            break;
        }
      }
    }
  }
LABEL_44:
  *(_WORD *)(v20 + 1) = 0;
  result = *(_BYTE *)(v20 + 2) & 0x10 | 0xAF;
  *(_BYTE *)(v20 + 2) = result;
  *(_WORD *)v20 = 2181;
  *(_DWORD *)(v20 + 3) = 53248;
  *(_DWORD *)(v20 + 7) = 1325400064;
  *(_DWORD *)(v20 + 11) = -1342127616;
  *(_BYTE *)(v20 + 15) = 0;
  return result;
}
