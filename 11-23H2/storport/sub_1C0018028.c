/*
 * XREFs of sub_1C0018028 @ 0x1C0018028
 * Callers:
 *     sub_1C0003440 @ 0x1C0003440 (sub_1C0003440.c)
 *     sub_1C0017A54 @ 0x1C0017A54 (sub_1C0017A54.c)
 *     sub_1C0017CC0 @ 0x1C0017CC0 (sub_1C0017CC0.c)
 *     sub_1C0026B86 @ 0x1C0026B86 (sub_1C0026B86.c)
 *     sub_1C0036C8C @ 0x1C0036C8C (sub_1C0036C8C.c)
 *     sub_1C005FAB4 @ 0x1C005FAB4 (sub_1C005FAB4.c)
 *     sub_1C0060EDC @ 0x1C0060EDC (sub_1C0060EDC.c)
 *     sub_1C0062414 @ 0x1C0062414 (sub_1C0062414.c)
 *     sub_1C0063F90 @ 0x1C0063F90 (sub_1C0063F90.c)
 *     sub_1C00682AC @ 0x1C00682AC (sub_1C00682AC.c)
 *     sub_1C00684E4 @ 0x1C00684E4 (sub_1C00684E4.c)
 *     sub_1C006882C @ 0x1C006882C (sub_1C006882C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1C0018028(__int64 a1, _BYTE *a2, _DWORD *a3, _BYTE *a4, _QWORD *a5, _BYTE *a6)
{
  __int64 v6; // r11
  char v7; // r12
  __int64 v10; // r14
  __int64 v11; // rcx
  __int64 v12; // r15
  unsigned __int64 v13; // rbp
  __int64 v14; // rdx
  int v15; // ecx
  __int64 v16; // rcx
  __int64 v17; // rax
  int v19; // ecx
  __int64 v20; // rcx

  v6 = 0LL;
  v7 = 0;
  if ( *(_BYTE *)(a1 + 2) != 40 || *(_DWORD *)(a1 + 20) )
  {
    if ( a2 )
      *a2 = 0;
    if ( a3 )
      *a3 = 0;
    if ( a4 )
      *a4 = 0;
    if ( a5 )
      *a5 = 0LL;
    if ( a6 )
      *a6 = 0;
    return v6;
  }
  v10 = 0LL;
  if ( !*(_DWORD *)(a1 + 56) )
    return v6;
  while ( 1 )
  {
    v11 = *(unsigned int *)(a1 + 4 * v10 + 120);
    v12 = v6;
    if ( (unsigned int)v11 >= 0x80 )
    {
      v13 = *(unsigned int *)(a1 + 16);
      if ( (unsigned int)v11 <= (unsigned int)v13 )
        break;
    }
LABEL_44:
    v10 = (unsigned int)(v10 + 1);
    if ( (unsigned int)v10 >= *(_DWORD *)(a1 + 56) )
      return v6;
  }
  v14 = (unsigned int)v11;
  v15 = *(_DWORD *)(v11 + a1) - 64;
  if ( !v15 )
  {
    if ( v14 + 40 <= v13 )
    {
      if ( a2 )
        *a2 = *(_BYTE *)(v14 + a1 + 10);
      v16 = v14 + a1 + 24;
      if ( !*(_BYTE *)(v14 + a1 + 10) )
        v16 = v6;
      v6 = v16;
      if ( a4 )
        *a4 = *(_BYTE *)(v14 + a1 + 8);
      if ( a5 )
      {
        v17 = *(_QWORD *)(v14 + a1 + 16);
LABEL_16:
        *a5 = v17;
        goto LABEL_17;
      }
      goto LABEL_17;
    }
    goto LABEL_20;
  }
  v19 = v15 - 1;
  if ( !v19 )
  {
    if ( v14 + 56 <= v13 )
    {
      v7 = 1;
      if ( a2 )
        *a2 = *(_BYTE *)(v14 + a1 + 10);
      v20 = v14 + a1 + 24;
      if ( !*(_BYTE *)(v14 + a1 + 10) )
        v20 = v6;
      v6 = v20;
      if ( a4 )
        *a4 = *(_BYTE *)(v14 + a1 + 8);
      if ( a5 )
        *a5 = *(_QWORD *)(v14 + a1 + 16);
      if ( !a6 )
        return v6;
      *a6 = *(_BYTE *)(v14 + a1 + 9);
    }
    goto LABEL_20;
  }
  if ( v19 != 1 || v14 + 40 > v13 )
  {
LABEL_20:
    if ( v7 )
      return v6;
    goto LABEL_44;
  }
  if ( a3 )
    *a3 = *(_DWORD *)(v14 + a1 + 12);
  v6 = v14 + a1 + 32;
  if ( !*(_DWORD *)(v14 + a1 + 12) )
    v6 = v12;
  if ( a4 )
    *a4 = *(_BYTE *)(v14 + a1 + 8);
  if ( a5 )
  {
    v17 = *(_QWORD *)(v14 + a1 + 24);
    goto LABEL_16;
  }
LABEL_17:
  if ( a6 )
    *a6 = *(_BYTE *)(v14 + a1 + 9);
  return v6;
}
