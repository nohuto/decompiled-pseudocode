/*
 * XREFs of ?HampClientCompareByLookupKey@@YAJPEAX0@Z @ 0x18004DBC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall HampClientCompareByLookupKey(_QWORD *a1, _WORD *a2)
{
  char *v2; // r8
  int v3; // eax
  __int16 v5; // cx
  unsigned __int64 v6; // rcx
  unsigned int v7; // ecx
  char *v8; // r9
  unsigned __int16 v9; // cx

  v2 = (char *)*a1;
  LOBYTE(v3) = 0;
  v5 = a2[110];
  if ( !v2 )
  {
    if ( !v5 )
    {
      v6 = *((_QWORD *)a2 + 19);
      if ( a1[2] >= v6 )
      {
        LOBYTE(v3) = a1[2] > v6;
        return v3;
      }
    }
LABEL_5:
    LOBYTE(v3) = -1;
    return v3;
  }
  if ( !v5 )
    goto LABEL_7;
  v7 = *((_DWORD *)a2 + 42);
  if ( *((_DWORD *)a1 + 2) < v7 )
    goto LABEL_5;
  if ( *((_DWORD *)a1 + 2) > v7 )
  {
LABEL_7:
    LOBYTE(v3) = 1;
    return v3;
  }
  v8 = (char *)((char *)(a2 + 110) - v2);
  while ( 1 )
  {
    v9 = *(_WORD *)v2;
    if ( *(_WORD *)v2 != *(_WORD *)&v8[(_QWORD)v2] )
      break;
    v2 += 2;
    if ( !v9 )
      return v3;
  }
  return v9 < *(_WORD *)&v8[(_QWORD)v2] ? -1 : 1;
}
