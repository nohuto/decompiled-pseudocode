/*
 * XREFs of RaUnitBuildSrbForSmartReturnStatus @ 0x1C005D7D0
 * Callers:
 *     RaUnitSmartDataIoctl @ 0x1C005EF34 (RaUnitSmartDataIoctl.c)
 * Callees:
 *     <none>
 */

char __fastcall RaUnitBuildSrbForSmartReturnStatus(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, char a6)
{
  __int64 v7; // r9
  __int64 v8; // rax
  char v9; // bl
  unsigned int i; // r9d
  __int64 v11; // rcx
  unsigned __int64 v12; // r11
  __int64 v13; // rdx
  int v14; // ecx
  int v15; // ecx
  __int64 v16; // rdx
  char v17; // si
  unsigned int v18; // edi
  unsigned int j; // r11d
  __int64 v20; // rbp
  __int64 v21; // rcx
  unsigned __int64 v22; // rbx
  __int64 v23; // r9
  int v24; // ecx
  int v25; // ecx
  char result; // al

  if ( a6 == 1 )
  {
    v7 = *(unsigned int *)(a3 + 52);
    *(_DWORD *)(a3 + 20) = 0;
    *(_BYTE *)(v7 + a3 + 8) = *(_BYTE *)(a1 + 96);
    *(_BYTE *)(v7 + a3 + 9) = *(_BYTE *)(a1 + 97);
    *(_BYTE *)(v7 + a3 + 10) = *(_BYTE *)(a1 + 98);
    *(_DWORD *)(a3 + 24) = 258;
    *(_QWORD *)(a3 + 64) = 0LL;
    *(_DWORD *)(a3 + 60) = 0;
    *(_QWORD *)(a3 + 80) = a2;
    *(_DWORD *)(a3 + 40) = *(_DWORD *)(a1 + 1320);
    v8 = a3 + *(unsigned int *)(a3 + 120);
    *(_DWORD *)v8 = 64;
    *(_DWORD *)(v8 + 4) = 32;
    *(_BYTE *)(v8 + 9) = -1;
    *(_QWORD *)(v8 + 16) = a4;
  }
  else
  {
    *(_BYTE *)(a3 + 2) = 0;
    *(_WORD *)a3 = 88;
    *(_BYTE *)(a3 + 5) = *(_BYTE *)(a1 + 96);
    *(_BYTE *)(a3 + 6) = *(_BYTE *)(a1 + 97);
    *(_BYTE *)(a3 + 7) = *(_BYTE *)(a1 + 98);
    *(_QWORD *)(a3 + 12) = 258LL;
    *(_QWORD *)(a3 + 24) = 0LL;
    *(_QWORD *)(a3 + 48) = a2;
    *(_DWORD *)(a3 + 20) = *(_DWORD *)(a1 + 1320);
    *(_BYTE *)(a3 + 11) = -1;
    *(_QWORD *)(a3 + 32) = a4;
  }
  if ( *(_BYTE *)(a3 + 2) == 40 )
  {
    *(_WORD *)(a3 + 38) = 32;
    v9 = 0;
    if ( !*(_DWORD *)(a3 + 20) )
    {
      for ( i = 0; i < *(_DWORD *)(a3 + 56); ++i )
      {
        v11 = *(unsigned int *)(a3 + 4LL * i + 120);
        if ( (unsigned int)v11 >= 0x80 )
        {
          v12 = *(unsigned int *)(a3 + 16);
          if ( (unsigned int)v11 < (unsigned int)v12 )
          {
            v13 = (unsigned int)v11;
            v14 = *(_DWORD *)(v11 + a3) - 64;
            if ( v14 )
            {
              v15 = v14 - 1;
              if ( v15 )
              {
                if ( v15 == 1 && v13 + 40 <= v12 )
                  break;
              }
              else if ( v13 + 56 <= v12 )
              {
                v9 = 1;
                *(_BYTE *)(v13 + a3 + 10) = 16;
              }
            }
            else if ( v13 + 40 <= v12 )
            {
              *(_BYTE *)(v13 + a3 + 10) = 16;
              break;
            }
            if ( v9 )
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
    v16 = a3 + 72;
    goto LABEL_44;
  }
  v16 = 0LL;
  v17 = 0;
  if ( !*(_DWORD *)(a3 + 20) )
  {
    v18 = *(_DWORD *)(a3 + 56);
    for ( j = 0; j < v18; ++j )
    {
      v20 = v16;
      v21 = *(unsigned int *)(a3 + 4LL * j + 120);
      if ( (unsigned int)v21 >= 0x80 )
      {
        v22 = *(unsigned int *)(a3 + 16);
        if ( (unsigned int)v21 < (unsigned int)v22 )
        {
          v23 = (unsigned int)v21;
          v24 = *(_DWORD *)(v21 + a3) - 64;
          if ( v24 )
          {
            v25 = v24 - 1;
            if ( v25 )
            {
              if ( v25 == 1 && v23 + 40 <= v22 )
              {
                v16 = v23 + a3 + 32;
                if ( !*(_DWORD *)(v23 + a3 + 12) )
                  v16 = v20;
                break;
              }
            }
            else if ( v23 + 56 <= v22 )
            {
              v17 = 1;
              if ( !*(_BYTE *)(v23 + a3 + 10) )
                break;
              v16 = v23 + a3 + 24;
            }
          }
          else if ( v23 + 40 <= v22 )
          {
            if ( *(_BYTE *)(v23 + a3 + 10) )
              v16 = v23 + a3 + 24;
            break;
          }
          if ( v17 )
            break;
        }
      }
    }
  }
LABEL_44:
  *(_WORD *)(v16 + 1) = 0;
  result = *(_BYTE *)(v16 + 2) & 0x10 | 0xA4;
  *(_BYTE *)(v16 + 2) = result;
  *(_WORD *)v16 = 1669;
  *(_DWORD *)(v16 + 3) = 55808;
  *(_DWORD *)(v16 + 7) = 1325400064;
  *(_DWORD *)(v16 + 11) = -1342127616;
  *(_BYTE *)(v16 + 15) = 0;
  return result;
}
