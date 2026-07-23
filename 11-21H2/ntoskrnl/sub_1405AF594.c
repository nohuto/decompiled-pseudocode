/*
 * XREFs of sub_1405AF594 @ 0x1405AF594
 * Callers:
 *     sub_140968AF4 @ 0x140968AF4 (sub_140968AF4.c)
 * Callees:
 *     sub_140264BD8 @ 0x140264BD8 (sub_140264BD8.c)
 */

__int64 __fastcall sub_1405AF594(__int64 a1)
{
  __int64 v1; // rbx
  unsigned int i; // edi
  __int64 v4; // rdx
  __int64 *v5; // rax
  __int64 v6; // rcx

  v1 = 0LL;
  for ( i = 0; i < dword_140D05004; ++i )
  {
    v1 += sub_140264BD8(a1, i, 4096);
    v4 = 8LL;
    v5 = (__int64 *)(704LL * i + a1 + 3256);
    do
    {
      v6 = *v5;
      v5 += 11;
      v1 += v6;
      --v4;
    }
    while ( v4 );
  }
  return v1;
}
