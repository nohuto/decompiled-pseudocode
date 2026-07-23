/*
 * XREFs of sub_14096F240 @ 0x14096F240
 * Callers:
 *     sub_1405BDFF8 @ 0x1405BDFF8 (sub_1405BDFF8.c)
 *     sub_140A69FD8 @ 0x140A69FD8 (sub_140A69FD8.c)
 * Callees:
 *     sub_14028CE10 @ 0x14028CE10 (sub_14028CE10.c)
 *     sub_14096F074 @ 0x14096F074 (sub_14096F074.c)
 */

__int64 __fastcall sub_14096F240(__int64 a1)
{
  unsigned int v1; // eax
  __int64 v2; // rbx
  __int64 v3; // rdi
  char **v5; // r14
  __int64 v6; // rbp
  char *v7; // rcx

  v1 = *(_DWORD *)(a1 + 16728);
  v2 = 0LL;
  v3 = 0LL;
  if ( v1 )
  {
    v5 = (char **)(a1 + 16736);
    v6 = v1;
    do
    {
      v7 = *v5;
      if ( *v5 )
      {
        if ( (v7[204] & 0x50) == 0 )
        {
          v3 += *(_QWORD *)v7;
          v2 += 2LL;
        }
        sub_14096F074(v7, 1);
      }
      ++v5;
      --v6;
    }
    while ( v6 );
    if ( v2 )
      sub_14028CE10(a1, v2);
  }
  return v3;
}
