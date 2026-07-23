/*
 * XREFs of strcat @ 0x1403E2940
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char *__cdecl strcat(char *Dest, const char *Source)
{
  unsigned __int64 v2; // rax
  __int64 v3; // r10
  char *v4; // rcx
  char *v5; // rcx
  char *v6; // rcx
  unsigned __int64 v7; // rax
  char *v8; // rcx
  char *v9; // rcx
  unsigned __int64 v10; // rax
  char *v11; // rcx
  char *v12; // rcx
  unsigned int v13; // eax
  char *v14; // rcx

  if ( ((unsigned __int8)Dest & 7) != 0 )
  {
    while ( *Dest )
    {
      if ( ((unsigned __int8)++Dest & 7) == 0 )
        goto LABEL_4;
    }
  }
  else
  {
    while ( 1 )
    {
      do
      {
LABEL_4:
        v2 = *(_QWORD *)Dest;
        v3 = (*(_QWORD *)Dest + 0x7EFEFEFEFEFEFEFFLL) ^ ~*(_QWORD *)Dest;
        Dest += 8;
      }
      while ( (v3 & 0x8101010101010100uLL) == 0 );
      v4 = Dest - 8;
      if ( !(_BYTE)v2 )
        break;
      v5 = v4 + 1;
      if ( !BYTE1(v2) )
        break;
      v6 = v5 + 1;
      v7 = v2 >> 16;
      if ( !(_BYTE)v7 )
        break;
      v8 = v6 + 1;
      if ( !BYTE1(v7) )
        break;
      v9 = v8 + 1;
      v10 = v7 >> 16;
      if ( !(_BYTE)v10 )
        break;
      v11 = v9 + 1;
      if ( !BYTE1(v10) )
        break;
      v12 = v11 + 1;
      v13 = WORD1(v10);
      if ( !(_BYTE)v13 )
        break;
      v14 = v12 + 1;
      if ( !BYTE1(v13) )
        break;
      Dest = v14 + 1;
    }
  }
  JUMPOUT(0x1403E29E3LL);
}
