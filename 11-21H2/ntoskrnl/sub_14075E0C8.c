/*
 * XREFs of sub_14075E0C8 @ 0x14075E0C8
 * Callers:
 *     sub_14075B8A0 @ 0x14075B8A0 (sub_14075B8A0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14075E0C8(__int64 a1, unsigned int a2, unsigned __int64 a3, _DWORD *a4)
{
  int v4; // r10d
  int v5; // eax
  __int64 v6; // r11
  int v7; // esi
  int v8; // edi
  int v9; // eax
  unsigned int v10; // ecx

  *a4 = -1;
  v4 = a2 - 1;
  v5 = 0;
  LODWORD(v6) = -1;
  if ( (int)(a2 - 1) < 0 )
  {
LABEL_9:
    v10 = 1;
    if ( v5 - v4 > 1 )
      *a4 = v6;
    else
      return 0;
    return v10;
  }
  else
  {
    while ( 1 )
    {
      v7 = v5;
      v8 = v4;
      v9 = (v4 + v5) / 2;
      v6 = v9;
      if ( v9 < 0 || v9 >= a2 )
        return 0LL;
      v4 = v9 - 1;
      v5 = v9 + 1;
      if ( a3 > *(_QWORD *)(a1 + 12 * v6) )
        v4 = v8;
      if ( a3 < *(_QWORD *)(a1 + 12 * v6) )
        v5 = v7;
      if ( v4 < v5 )
        goto LABEL_9;
    }
  }
}
