/*
 * XREFs of sub_1406AD17C @ 0x1406AD17C
 * Callers:
 *     sub_1406AD17C @ 0x1406AD17C (sub_1406AD17C.c)
 *     sub_14075B48C @ 0x14075B48C (sub_14075B48C.c)
 *     sub_140A146FC @ 0x140A146FC (sub_140A146FC.c)
 * Callees:
 *     toupper @ 0x1403E30E0 (toupper.c)
 *     sub_1406AD17C @ 0x1406AD17C (sub_1406AD17C.c)
 */

__int64 __fastcall sub_1406AD17C(char *a1, _BYTE *a2)
{
  int v2; // eax
  char *v4; // rsi
  unsigned int v5; // edi
  int v6; // ebx
  int v7; // ebx

  LOBYTE(v2) = *a1;
  v4 = a1;
  v5 = 1;
  while ( (_BYTE)v2 || *a2 )
  {
    if ( (_BYTE)v2 == 63 )
      goto LABEL_12;
    if ( (_BYTE)v2 != 42 )
    {
      if ( (_BYTE)v2 != *a2 )
      {
        v7 = toupper((char)*a2);
        if ( toupper(*v4) != v7 )
          return 0;
      }
LABEL_12:
      ++v4;
      goto LABEL_9;
    }
    v2 = v4[1];
    if ( v4[1] == 42 )
    {
      ++v4;
    }
    else
    {
      if ( !(_BYTE)v2 )
        return v5;
      if ( (_BYTE)v2 == *a2 || (v6 = toupper(v2), v6 == toupper((char)*a2)) )
      {
        if ( (unsigned int)sub_1406AD17C(v4 + 1, a2, 0LL, 0LL) )
          return v5;
      }
LABEL_9:
      if ( !*a2 )
        return 0;
      LOBYTE(v2) = *v4;
      ++a2;
    }
  }
  return v5;
}
