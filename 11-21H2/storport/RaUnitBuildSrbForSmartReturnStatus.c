/*
 * XREFs of RaUnitBuildSrbForSmartReturnStatus @ 0x1C0050FCC
 * Callers:
 *     RaUnitSmartDataIoctl @ 0x1C0052728 (RaUnitSmartDataIoctl.c)
 * Callees:
 *     <none>
 */

char __fastcall RaUnitBuildSrbForSmartReturnStatus(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, char a6)
{
  __int64 v6; // r10
  __int64 v7; // rax
  char v8; // si
  unsigned int i; // r11d
  __int64 v10; // rcx
  unsigned __int64 v11; // r10
  __int64 v12; // r9
  int v13; // ecx
  int v14; // ecx
  __int64 v15; // r9
  char v16; // si
  unsigned int v17; // edi
  unsigned int v18; // r11d
  __int64 v19; // rcx
  unsigned __int64 v20; // rbx
  __int64 v21; // r10
  int v22; // ecx
  int v23; // ecx
  __int64 v24; // rcx
  char result; // al

  if ( a6 != 1 )
  {
    *(_BYTE *)(a3 + 2) = 0;
    *(_WORD *)a3 = 88;
    *(_BYTE *)(a3 + 5) = *(_BYTE *)(a1 + 96);
    *(_BYTE *)(a3 + 6) = *(_BYTE *)(a1 + 97);
    *(_BYTE *)(a3 + 7) = *(_BYTE *)(a1 + 98);
    *(_QWORD *)(a3 + 12) = 258LL;
    *(_QWORD *)(a3 + 24) = 0LL;
    *(_QWORD *)(a3 + 48) = a2;
    *(_DWORD *)(a3 + 20) = *(_DWORD *)(a1 + 1264);
    *(_BYTE *)(a3 + 11) = -1;
    *(_QWORD *)(a3 + 32) = a4;
    goto LABEL_41;
  }
  v6 = *(unsigned int *)(a3 + 52);
  *(_DWORD *)(a3 + 20) = 0;
  *(_BYTE *)(v6 + a3 + 8) = *(_BYTE *)(a1 + 96);
  *(_BYTE *)(v6 + a3 + 9) = *(_BYTE *)(a1 + 97);
  *(_BYTE *)(v6 + a3 + 10) = *(_BYTE *)(a1 + 98);
  *(_DWORD *)(a3 + 24) = 258;
  *(_QWORD *)(a3 + 64) = 0LL;
  *(_DWORD *)(a3 + 60) = 0;
  *(_QWORD *)(a3 + 80) = a2;
  *(_DWORD *)(a3 + 40) = *(_DWORD *)(a1 + 1264);
  v7 = a3 + *(unsigned int *)(a3 + 120);
  *(_DWORD *)v7 = 64;
  *(_DWORD *)(v7 + 4) = 32;
  *(_BYTE *)(v7 + 9) = -1;
  *(_QWORD *)(v7 + 16) = a4;
  if ( *(_BYTE *)(a3 + 2) != 40 )
  {
LABEL_41:
    *(_WORD *)(a3 + 9) = 4128;
    goto LABEL_42;
  }
  v8 = 0;
  *(_WORD *)(a3 + 38) = 32;
  if ( !*(_DWORD *)(a3 + 20) )
  {
    for ( i = 0; i < *(_DWORD *)(a3 + 56); ++i )
    {
      v10 = *(unsigned int *)(a3 + 4LL * i + 120);
      if ( (unsigned int)v10 >= 0x80 )
      {
        v11 = *(unsigned int *)(a3 + 16);
        if ( (unsigned int)v10 < (unsigned int)v11 )
        {
          v12 = (unsigned int)v10;
          v13 = *(_DWORD *)(v10 + a3) - 64;
          if ( v13 )
          {
            v14 = v13 - 1;
            if ( v14 )
            {
              if ( v14 == 1 && v12 + 40 <= v11 )
                break;
            }
            else if ( v12 + 56 <= v11 )
            {
              v8 = 1;
              *(_BYTE *)(v12 + a3 + 10) = 16;
            }
          }
          else if ( v12 + 40 <= v11 )
          {
            *(_BYTE *)(v12 + a3 + 10) = 16;
            break;
          }
          if ( v8 )
            break;
        }
      }
    }
  }
  if ( *(_BYTE *)(a3 + 2) != 40 )
  {
LABEL_42:
    v15 = a3 + 72;
    goto LABEL_43;
  }
  v15 = 0LL;
  v16 = 0;
  if ( *(_DWORD *)(a3 + 20) )
    goto LABEL_43;
  v17 = *(_DWORD *)(a3 + 56);
  v18 = 0;
  if ( !v17 )
    goto LABEL_43;
  while ( 1 )
  {
    v19 = *(unsigned int *)(a3 + 4LL * v18 + 120);
    if ( (unsigned int)v19 >= 0x80 )
    {
      v20 = *(unsigned int *)(a3 + 16);
      if ( (unsigned int)v19 < (unsigned int)v20 )
        break;
    }
LABEL_36:
    if ( ++v18 >= v17 )
      goto LABEL_43;
  }
  v21 = (unsigned int)v19;
  v22 = *(_DWORD *)(v19 + a3) - 64;
  if ( v22 )
  {
    v23 = v22 - 1;
    if ( v23 )
    {
      if ( v23 == 1 && v21 + 40 <= v20 )
      {
        v24 = v21 + a3 + 32;
        if ( !*(_DWORD *)(v21 + a3 + 12) )
          v24 = v15;
        v15 = v24;
        goto LABEL_43;
      }
    }
    else if ( v21 + 56 <= v20 )
    {
      v16 = 1;
      if ( !*(_BYTE *)(v21 + a3 + 10) )
        goto LABEL_43;
      v15 = v21 + a3 + 24;
    }
    goto LABEL_35;
  }
  if ( v21 + 40 > v20 )
  {
LABEL_35:
    if ( v16 )
      goto LABEL_43;
    goto LABEL_36;
  }
  if ( *(_BYTE *)(v21 + a3 + 10) )
    v15 = v21 + a3 + 24;
LABEL_43:
  *(_WORD *)(v15 + 1) = 0;
  result = *(_BYTE *)(v15 + 2) & 0x10 | 0xA4;
  *(_BYTE *)(v15 + 2) = result;
  *(_WORD *)v15 = 1669;
  *(_DWORD *)(v15 + 3) = 55808;
  *(_DWORD *)(v15 + 7) = 1325400064;
  *(_DWORD *)(v15 + 11) = -1342127616;
  *(_BYTE *)(v15 + 15) = 0;
  return result;
}
