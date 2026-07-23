/*
 * XREFs of sub_1403D8F10 @ 0x1403D8F10
 * Callers:
 *     sub_1403BBA90 @ 0x1403BBA90 (sub_1403BBA90.c)
 *     sub_1403D8EA0 @ 0x1403D8EA0 (sub_1403D8EA0.c)
 *     sub_14051DB60 @ 0x14051DB60 (sub_14051DB60.c)
 *     sub_14051EFC0 @ 0x14051EFC0 (sub_14051EFC0.c)
 *     sub_14052BCA0 @ 0x14052BCA0 (sub_14052BCA0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1403D8F10(int a1, _DWORD *a2, _DWORD *a3)
{
  unsigned int v3; // r11d
  int v4; // r10d
  ULONG_PTR v5; // r9
  unsigned int v6; // r9d
  _BYTE *v7; // rcx
  int v9; // eax

  v3 = 0;
  v4 = a1;
  if ( (_DWORD)dword_140C54A90 )
  {
    v5 = qword_140C4E210 + 13;
    while ( 1 )
    {
      if ( !*(_BYTE *)(v5 + 43) )
      {
        if ( *(_BYTE *)v5 )
        {
          --v4;
          if ( *(_DWORD *)(v5 + 7) == a1 )
            break;
        }
      }
      ++v3;
      v5 += 64LL;
      if ( v3 >= (unsigned int)dword_140C54A90 )
        goto LABEL_7;
    }
    if ( a2 )
      *a2 = *(_DWORD *)(v5 - 13);
    if ( a3 )
    {
      v9 = *(_DWORD *)(v5 - 9);
      goto LABEL_25;
    }
    return 0LL;
  }
  else
  {
LABEL_7:
    v6 = 0;
    if ( (_DWORD)dword_140C54A90 )
    {
      v7 = (_BYTE *)(qword_140C4E210 + 12);
      do
      {
        if ( !v7[1] && !*v7 && !v7[44] )
        {
          if ( !v4 )
          {
            if ( a2 )
              *a2 = *((_DWORD *)v7 - 3);
            if ( !a3 )
              return 0LL;
            v9 = *((_DWORD *)v7 - 2);
LABEL_25:
            *a3 = v9;
            return 0LL;
          }
          --v4;
        }
        ++v6;
        v7 += 64;
      }
      while ( v6 < (unsigned int)dword_140C54A90 );
    }
    return 3221226021LL;
  }
}
