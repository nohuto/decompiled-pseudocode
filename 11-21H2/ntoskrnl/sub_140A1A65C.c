/*
 * XREFs of sub_140A1A65C @ 0x140A1A65C
 * Callers:
 *     sub_1406960FC @ 0x1406960FC (sub_1406960FC.c)
 * Callees:
 *     sub_1403008B0 @ 0x1403008B0 (sub_1403008B0.c)
 *     sub_1406961F8 @ 0x1406961F8 (sub_1406961F8.c)
 */

char __fastcall sub_140A1A65C(__int64 a1, _DWORD *a2)
{
  char v2; // bl
  __int64 v4; // rsi
  __int64 i; // rdi
  const UNICODE_STRING *v6; // rax

  v2 = 0;
  if ( *(_DWORD *)a1 == *a2 )
  {
    if ( *(_DWORD *)a1 )
    {
      v4 = a1 + 8;
      for ( i = *(_QWORD *)(a1 + 8); i != v4; i = *(_QWORD *)i )
      {
        v6 = sub_1403008B0((__int64)a2, (const UNICODE_STRING *)(i + 32));
        if ( !v6 || !sub_1406961F8(i, (__int64)v6) )
          return v2;
      }
    }
    return 1;
  }
  return v2;
}
