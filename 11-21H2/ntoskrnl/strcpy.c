/*
 * XREFs of strcpy @ 0x1403E29E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char *__cdecl strcpy(char *Dest, const char *Source)
{
  signed __int64 v3; // rcx
  char v4; // al
  unsigned __int64 v6; // rax
  const char *v7; // rdx
  const char *v8; // rdx
  unsigned __int64 v9; // rax
  const char *v10; // rdx
  const char *v11; // rdx
  unsigned __int64 v12; // rax
  const char *v13; // rdx
  const char *v14; // rdx
  unsigned int v15; // eax
  const char *v16; // rdx

  v3 = Dest - Source;
  if ( ((unsigned __int8)Source & 7) != 0 )
  {
    while ( 1 )
    {
      v4 = *Source;
      Source[v3] = *Source;
      if ( !v4 )
        return Dest;
      if ( ((unsigned __int8)++Source & 7) == 0 )
        goto LABEL_7;
    }
  }
  else
  {
    while ( 1 )
    {
LABEL_7:
      while ( 1 )
      {
        v6 = *(_QWORD *)Source;
        if ( (((*(_QWORD *)Source + 0x7EFEFEFEFEFEFEFFLL) ^ ~*(_QWORD *)Source) & 0x8101010101010100uLL) != 0 )
          break;
        *(_QWORD *)&Source[v3] = v6;
        Source += 8;
      }
      Source[v3] = v6;
      if ( !(_BYTE)v6 )
        break;
      v7 = Source + 1;
      v7[v3] = BYTE1(v6);
      if ( !BYTE1(v6) )
        break;
      v8 = v7 + 1;
      v9 = v6 >> 16;
      v8[v3] = v9;
      if ( !(_BYTE)v9 )
        break;
      v10 = v8 + 1;
      v10[v3] = BYTE1(v9);
      if ( !BYTE1(v9) )
        break;
      v11 = v10 + 1;
      v12 = v9 >> 16;
      v11[v3] = v12;
      if ( !(_BYTE)v12 )
        break;
      v13 = v11 + 1;
      v13[v3] = BYTE1(v12);
      if ( !BYTE1(v12) )
        break;
      v14 = v13 + 1;
      v15 = WORD1(v12);
      v14[v3] = v15;
      if ( !(_BYTE)v15 )
        break;
      v16 = v14 + 1;
      v16[v3] = BYTE1(v15);
      if ( !BYTE1(v15) )
        break;
      Source = v16 + 1;
    }
    return Dest;
  }
}
