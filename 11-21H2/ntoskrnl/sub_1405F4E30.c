/*
 * XREFs of sub_1405F4E30 @ 0x1405F4E30
 * Callers:
 *     sub_14072427C @ 0x14072427C (sub_14072427C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1405F4E30(unsigned int *a1, _BYTE *a2, _BYTE *a3)
{
  unsigned int v4; // r10d
  __int64 v5; // r9
  LUID *v6; // rcx
  LUID **v7; // rbx
  __int64 result; // rax

  *a2 = 0;
  *a3 = 0;
  if ( a1 )
  {
    v4 = *a1;
    if ( *a1 )
    {
      v5 = 0LL;
      do
      {
        if ( *a2 && *a3 )
          break;
        v6 = &stru_140D3CB50;
        v7 = &off_140A3B790;
        while ( 1 )
        {
          if ( a1[3 * v5 + 2] == v6->LowPart )
          {
            result = (unsigned int)v6->HighPart;
            if ( a1[3 * v5 + 3] == (_DWORD)result )
              break;
          }
          v6 = *++v7;
          if ( !*v7 )
            goto LABEL_10;
        }
        if ( !v6 )
        {
LABEL_10:
          *a3 = 1;
          goto LABEL_11;
        }
        *a2 = 1;
LABEL_11:
        v5 = (unsigned int)(v5 + 1);
      }
      while ( (unsigned int)v5 < v4 );
    }
  }
  return result;
}
