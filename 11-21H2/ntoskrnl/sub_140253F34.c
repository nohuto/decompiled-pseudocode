/*
 * XREFs of sub_140253F34 @ 0x140253F34
 * Callers:
 *     sub_14020F360 @ 0x14020F360 (sub_14020F360.c)
 *     sub_1403424A0 @ 0x1403424A0 (sub_1403424A0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140253F34(__int64 a1, __int64 a2, _DWORD *a3, unsigned int *a4)
{
  __int64 v6; // r10
  unsigned int v7; // ecx
  __int64 result; // rax
  unsigned __int8 v9; // r11
  char v10; // r8
  unsigned __int8 v11; // r9
  __int64 v12; // rax
  __int64 i; // rcx
  unsigned int v14; // eax
  unsigned int v15; // eax

  v6 = a1;
  if ( a1 == a2 )
  {
    v7 = *(_DWORD *)(a1 + 116);
    result = v7;
    goto LABEL_3;
  }
  v9 = *(_BYTE *)(a1 + 113);
  v10 = 0;
  v11 = *(_BYTE *)(a2 + 113);
  v7 = 0;
  if ( v9 > v11 )
  {
    v10 = 1;
    do
    {
      v14 = v7;
      v7 = *(_DWORD *)(v6 + 116);
      v6 = *(_QWORD *)(v6 + 408);
      if ( v7 <= v14 )
        v7 = v14;
    }
    while ( *(_BYTE *)(v6 + 113) > v11 );
  }
  else if ( v9 < v11 )
  {
    v10 = -1;
    do
    {
      v15 = v7;
      v7 = *(_DWORD *)(a2 + 116);
      a2 = *(_QWORD *)(a2 + 408);
      if ( v7 <= v15 )
        v7 = v15;
    }
    while ( v9 < *(_BYTE *)(a2 + 113) );
  }
  result = v7;
  if ( v6 != a2 )
  {
    v12 = *(_QWORD *)(v6 + 408);
    for ( i = *(_QWORD *)(a2 + 408); v12 != i; i = *(_QWORD *)(i + 408) )
    {
      v6 = v12;
      a2 = i;
      v12 = *(_QWORD *)(v12 + 408);
    }
    goto LABEL_9;
  }
  if ( !v10 )
  {
LABEL_9:
    v7 = *(_DWORD *)(a2 + 116);
    result = *(unsigned int *)(v6 + 116);
    goto LABEL_3;
  }
  if ( v10 <= 0 )
    result = 0LL;
  else
    v7 = 0;
LABEL_3:
  *a3 = result;
  *a4 = v7;
  return result;
}
