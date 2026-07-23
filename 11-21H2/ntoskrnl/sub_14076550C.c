/*
 * XREFs of sub_14076550C @ 0x14076550C
 * Callers:
 *     sub_1407655BC @ 0x1407655BC (sub_1407655BC.c)
 * Callees:
 *     sub_14078B7C4 @ 0x14078B7C4 (sub_14078B7C4.c)
 */

__int64 __fastcall sub_14076550C(_QWORD **a1, unsigned int a2)
{
  __int64 v3; // rdi
  _QWORD *v4; // rdx
  __int64 v5; // rcx
  __int64 result; // rax

  if ( a2 )
  {
    v3 = a2;
    do
    {
      v4 = *a1;
      if ( *a1 )
        v5 = *(_QWORD *)(v4[39] + 40LL);
      else
        v5 = 0LL;
      *(_DWORD *)(v5 + 704) |= 0x4000u;
      result = sub_14078B7C4(&xmmword_140010CF8, v4);
      ++a1;
      --v3;
    }
    while ( v3 );
  }
  return result;
}
