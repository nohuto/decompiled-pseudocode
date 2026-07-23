/*
 * XREFs of sub_14083D5F4 @ 0x14083D5F4
 * Callers:
 *     sub_1406EA2F0 @ 0x1406EA2F0 (sub_1406EA2F0.c)
 * Callees:
 *     sub_14083D6A4 @ 0x14083D6A4 (sub_14083D6A4.c)
 */

__int64 __fastcall sub_14083D5F4(__int64 a1)
{
  int v1; // eax
  __int64 v3; // rcx
  unsigned __int64 *v4; // rsi
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // rax

  v1 = *(_DWORD *)(a1 + 32);
  if ( (v1 & 2) == 0 )
    __fastfail(5u);
  v3 = 4096LL;
  if ( *(__int64 *)(a1 + 8) > 4096 )
  {
    v4 = (unsigned __int64 *)(a1 + 40);
    do
    {
      v5 = *v4;
      if ( (*(_BYTE *)(a1 + 48) & 1) != 0 && v5 )
        v5 ^= (unsigned __int64)v4;
      while ( v5 )
      {
        if ( v3 >= *(_QWORD *)(v5 + 40) )
        {
          if ( v3 < *(_QWORD *)(v5 + 48) )
            break;
          v6 = *(_QWORD *)(v5 + 8);
        }
        else
        {
          v6 = *(_QWORD *)v5;
        }
        if ( (*(_BYTE *)(a1 + 48) & 1) != 0 && v6 )
          v5 ^= v6;
        else
          v5 = v6;
      }
      sub_14083D6A4(a1, v5, *(_QWORD *)(v5 + 40), *(_QWORD *)(v5 + 48));
      v3 = *(_QWORD *)(v5 + 48);
    }
    while ( v3 < *(_QWORD *)(a1 + 8) );
    v1 = *(_DWORD *)(a1 + 32);
  }
  *(_DWORD *)(a1 + 32) = v1 & 0xFFFFFFFD;
  return 0LL;
}
