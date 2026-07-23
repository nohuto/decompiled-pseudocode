/*
 * XREFs of sub_140536FB4 @ 0x140536FB4
 * Callers:
 *     sub_140537770 @ 0x140537770 (sub_140537770.c)
 *     sub_140537860 @ 0x140537860 (sub_140537860.c)
 *     sub_14090B300 @ 0x14090B300 (sub_14090B300.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_140536FB4(__int64 a1, char *a2)
{
  char v2; // r8
  char v4; // dl
  unsigned int v5; // r9d
  unsigned int v6; // eax
  unsigned int v7; // r10d

  v2 = 0;
  if ( *(_DWORD *)a1 == 1 )
  {
    v4 = *a2;
    if ( (unsigned __int8)(v4 - 1) <= 1u && *(_BYTE *)(a1 + 11) == a2[5] )
    {
      v5 = *(unsigned __int16 *)(a1 + 14);
      v6 = ((unsigned int)(unsigned __int8)a2[1] - 6) >> 1;
      if ( v4 != 1 || v5 == v6 )
      {
        if ( v5 >= v6 )
        {
          v5 = ((unsigned int)(unsigned __int8)a2[1] - 6) >> 1;
        }
        else if ( v4 == 2 )
        {
          return v2;
        }
        v7 = 0;
        if ( v5 )
        {
          while ( *(_WORD *)(*(_QWORD *)(a1 + 16) + 2LL * v7) == ((unsigned __int16)((unsigned __int8)a2[2 * v7 + 7] << 8) | (unsigned __int8)a2[2 * v7 + 6]) )
          {
            if ( ++v7 >= v5 )
              return 1;
          }
        }
        else
        {
          return 1;
        }
      }
    }
  }
  return v2;
}
