/*
 * XREFs of TopologyCountComponents @ 0x1C002CC30
 * Callers:
 *     TopologyBuildFilterTopology @ 0x1C002C7F0 (TopologyBuildFilterTopology.c)
 * Callees:
 *     <none>
 */

void __fastcall TopologyCountComponents(_QWORD *a1, _DWORD *a2, _DWORD *a3, int *a4, int *a5)
{
  _QWORD *v7; // r10
  unsigned int v8; // ecx
  int v9; // edx
  int v10; // r11d
  bool j; // zf
  int v12; // ecx
  int v13; // eax
  int i; // ecx
  int v15; // edx
  int v16; // edx
  int v17; // eax
  int v18; // ecx

  *a2 = 0;
  *a3 = 0;
  *a4 = 0;
  *a5 = 0;
  v7 = (_QWORD *)*a1;
  if ( (_QWORD *)*a1 != a1 )
  {
    while ( 1 )
    {
      v8 = *((_DWORD *)v7 + 5);
      if ( v8 < 2 )
      {
        v15 = *a4;
        ++*a3;
        v16 = v15 + 1;
        *a4 = v16;
        if ( v8 == 1 )
          *a4 = *((_DWORD *)v7 + 8) + v16;
        if ( *((_DWORD *)v7 + 17) == 257 )
        {
          v17 = 1 << v8;
          v18 = *a5;
          if ( (v17 & *a5) == 0 )
          {
            ++*a2;
            *a5 = v18 | v17;
          }
        }
        goto LABEL_24;
      }
      if ( v8 == 2 )
      {
        for ( i = *((_DWORD *)v7 + 17); i; i &= i - 1 )
        {
          ++*a4;
          ++*a3;
        }
        goto LABEL_24;
      }
      if ( v8 == 3 || v8 == 4 )
        goto LABEL_15;
      if ( v8 != 5 )
        break;
      v12 = *((_DWORD *)v7 + 8);
      *a3 += v12 + 1;
      v13 = 2 * v12;
LABEL_14:
      *a4 += v13;
LABEL_24:
      v7 = (_QWORD *)*v7;
      if ( v7 == a1 )
        return;
    }
    if ( v8 != 7 )
    {
      if ( v8 == 8 )
      {
        v9 = *((_DWORD *)v7 + 16);
        v10 = *((_DWORD *)v7 + 8) + *a4 - 1;
        for ( j = v9 == 0; ; j = v9 == 0 )
        {
          *a4 = v10;
          if ( j )
            break;
          ++*a3;
          ++v10;
          v9 &= v9 - 1;
        }
      }
      goto LABEL_24;
    }
LABEL_15:
    ++*a3;
    v13 = *((_DWORD *)v7 + 8);
    goto LABEL_14;
  }
}
