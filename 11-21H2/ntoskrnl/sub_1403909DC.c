/*
 * XREFs of sub_1403909DC @ 0x1403909DC
 * Callers:
 *     sub_1403836FC @ 0x1403836FC (sub_1403836FC.c)
 *     sub_1403901F0 @ 0x1403901F0 (sub_1403901F0.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall sub_1403909DC(__int64 *a1, char a2, __int64 a3)
{
  unsigned __int64 v3; // r11
  __int64 v4; // r10
  _QWORD *v5; // r9
  int v6; // ebx
  __int64 *v7; // rdx
  __int64 v9; // r11
  __int64 v10; // rdx

  v3 = a1[1];
  v4 = *a1;
  if ( a3 )
    v5 = (_QWORD *)(*(_QWORD *)a3 + 16LL * (*(_DWORD *)(a3 + 24) - (unsigned int)*(unsigned __int8 *)(v4 + 2)));
  else
    v5 = 0LL;
  v6 = a2 & 1;
  if ( (a2 & 1) != 0 )
  {
    v7 = (__int64 *)(v3 + 8);
    v3 += 16LL;
  }
  else
  {
    v7 = (__int64 *)(v3 - 8);
    if ( v3 <= v4 + 16 )
      v7 = (__int64 *)(v4 + 8);
  }
  while ( 1 )
  {
    if ( v5 )
    {
      *v5 = v4;
      v5[1] = v3;
      v5 += 2;
    }
    if ( *(_BYTE *)(v4 + 2) == 2 )
      break;
    v4 = *v7;
    if ( v6 )
    {
      v9 = *v7;
      v10 = *v7;
    }
    else
    {
      v9 = v4 + 16LL * (unsigned __int16)*(_DWORD *)v4;
      v10 = v9;
    }
    v3 = v9 + 16;
    v7 = (__int64 *)(v10 + 8);
  }
  return v7;
}
