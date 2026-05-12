/*
 * XREFs of RaUnitBuildSrbForSmartReadData @ 0x1C0050D44
 * Callers:
 *     RaUnitSmartDataIoctl @ 0x1C0052728 (RaUnitSmartDataIoctl.c)
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
  __int64 v8; // r10
  _DWORD *v9; // r11
  int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // rcx
  char v13; // bp
  unsigned int i; // ebx
  __int64 v15; // rcx
  unsigned __int64 v16; // r10
  __int64 v17; // rdx
  int v18; // ecx
  int v19; // ecx
  __int64 v20; // rdx
  char v21; // bp
  unsigned int v22; // edi
  unsigned int v23; // r11d
  __int64 v24; // rcx
  unsigned __int64 v25; // rbx
  __int64 v26; // r10
  int v27; // ecx
  int v28; // ecx
  __int64 v29; // rcx
  char result; // al

  if ( a8 != 1 )
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
    *(_DWORD *)(a3 + 20) = *(_DWORD *)(a1 + 1264);
    *(_QWORD *)(a3 + 32) = a6;
    *(_BYTE *)(a3 + 11) = -1;
    goto LABEL_41;
  }
  v8 = *(unsigned int *)(a3 + 52);
  v9 = (_DWORD *)(a3 + 20);
  *(_DWORD *)(a3 + 20) = 0;
  *(_BYTE *)(v8 + a3 + 8) = *(_BYTE *)(a1 + 96);
  *(_BYTE *)(v8 + a3 + 9) = *(_BYTE *)(a1 + 97);
  *(_BYTE *)(v8 + a3 + 10) = *(_BYTE *)(a1 + 98);
  *(_DWORD *)(a3 + 24) = 322;
  *(_QWORD *)(a3 + 64) = a4;
  *(_DWORD *)(a3 + 60) = 512;
  *(_QWORD *)(a3 + 80) = a2;
  v10 = *(_DWORD *)(a1 + 1264);
  v11 = *(unsigned int *)(a3 + 120);
  *(_DWORD *)(a3 + 40) = v10;
  v12 = a3 + v11;
  *(_QWORD *)(v12 + 16) = a6;
  *(_DWORD *)v12 = 64;
  *(_DWORD *)(v12 + 4) = 32;
  *(_BYTE *)(v12 + 9) = -1;
  if ( *(_BYTE *)(a3 + 2) != 40 )
  {
LABEL_41:
    *(_WORD *)(a3 + 9) = 4128;
    goto LABEL_42;
  }
  v13 = 0;
  *(_WORD *)(a3 + 38) = 32;
  if ( !*v9 )
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
  if ( *(_BYTE *)(a3 + 2) != 40 )
  {
LABEL_42:
    v20 = a3 + 72;
    goto LABEL_43;
  }
  v20 = 0LL;
  v21 = 0;
  if ( *v9 )
    goto LABEL_43;
  v22 = *(_DWORD *)(a3 + 56);
  v23 = 0;
  if ( !v22 )
    goto LABEL_43;
  while ( 1 )
  {
    v24 = *(unsigned int *)(a3 + 4LL * v23 + 120);
    if ( (unsigned int)v24 >= 0x80 )
    {
      v25 = *(unsigned int *)(a3 + 16);
      if ( (unsigned int)v24 < (unsigned int)v25 )
        break;
    }
LABEL_36:
    if ( ++v23 >= v22 )
      goto LABEL_43;
  }
  v26 = (unsigned int)v24;
  v27 = *(_DWORD *)(v24 + a3) - 64;
  if ( v27 )
  {
    v28 = v27 - 1;
    if ( v28 )
    {
      if ( v28 == 1 && v26 + 40 <= v25 )
      {
        v29 = v26 + a3 + 32;
        if ( !*(_DWORD *)(v26 + a3 + 12) )
          v29 = v20;
        v20 = v29;
        goto LABEL_43;
      }
    }
    else if ( v26 + 56 <= v25 )
    {
      v21 = 1;
      if ( !*(_BYTE *)(v26 + a3 + 10) )
        goto LABEL_43;
      v20 = v26 + a3 + 24;
    }
    goto LABEL_35;
  }
  if ( v26 + 40 > v25 )
  {
LABEL_35:
    if ( v21 )
      goto LABEL_43;
    goto LABEL_36;
  }
  if ( *(_BYTE *)(v26 + a3 + 10) )
    v20 = v26 + a3 + 24;
LABEL_43:
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
