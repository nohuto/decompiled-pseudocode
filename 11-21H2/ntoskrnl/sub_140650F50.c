/*
 * XREFs of sub_140650F50 @ 0x140650F50
 * Callers:
 *     <none>
 * Callees:
 *     sub_140650ED8 @ 0x140650ED8 (sub_140650ED8.c)
 */

__int64 __fastcall sub_140650F50(__int64 a1, int a2, unsigned int *a3)
{
  unsigned int v3; // r9d
  unsigned int v4; // ecx
  unsigned int v5; // eax
  int v6; // edx
  int v7; // edx
  unsigned int v8; // ecx

  v3 = 0;
  if ( a2 > 21 )
  {
    v6 = a2 - 57;
    if ( v6 )
    {
      v7 = v6 - 1;
      if ( v7 )
      {
        if ( v7 == 7 )
          return (unsigned int)sub_140650ED8((UNICODE_STRING *)a1, (__int64)a3);
      }
      else
      {
        v8 = a3[8];
        if ( v8 < *a3 || v8 > a3[1] - 1 )
          a3[8] = 0;
      }
    }
  }
  else if ( a2 == 6 )
  {
    v4 = *(_DWORD *)(a1 + 236);
    if ( a3[4] != v4 )
      return (unsigned int)-1073739509;
    v5 = a3[5];
    if ( v5 < v4 || v5 % v4 )
      return (unsigned int)-1073739509;
  }
  return v3;
}
