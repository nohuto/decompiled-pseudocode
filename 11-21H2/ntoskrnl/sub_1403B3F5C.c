/*
 * XREFs of sub_1403B3F5C @ 0x1403B3F5C
 * Callers:
 *     sub_1403B3E84 @ 0x1403B3E84 (sub_1403B3E84.c)
 *     sub_140848C18 @ 0x140848C18 (sub_140848C18.c)
 * Callees:
 *     sub_140293A88 @ 0x140293A88 (sub_140293A88.c)
 *     sub_1403B4C90 @ 0x1403B4C90 (sub_1403B4C90.c)
 */

__int64 __fastcall sub_1403B3F5C(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 result; // rax
  __int64 i; // rdi
  unsigned int j; // esi
  __int64 v6; // rcx
  __int64 v7; // rcx

  v1 = 0;
  if ( a1 )
  {
    result = sub_140293A88(a1 + 24, (__int64)sub_1403B4C70, 0LL, 0LL);
    if ( *(_DWORD *)(a1 + 296) )
    {
      do
      {
        result = v1;
        v7 = *(_QWORD *)(a1 + 312) + 136LL * v1;
        if ( *(_DWORD *)(v7 + 16) == 1 )
          result = sub_1403B4C90(*(_QWORD *)v7);
        ++v1;
      }
      while ( v1 < *(_DWORD *)(a1 + 296) );
    }
  }
  else
  {
    result = sub_140293A88((__int64)&word_140C0B8E0, (__int64)sub_1403B4C70, 0LL, 0LL);
    for ( i = qword_140D06970; (__int64 *)i != &qword_140D06970; i = *(_QWORD *)i )
    {
      for ( j = 0; j < *(_DWORD *)(i + 296); ++j )
      {
        result = j;
        v6 = *(_QWORD *)(i + 312) + 136LL * j;
        if ( *(_DWORD *)(v6 + 16) == 1 )
          result = sub_1403B4C90(*(_QWORD *)v6);
      }
    }
  }
  return result;
}
