/*
 * XREFs of sub_1409C2A94 @ 0x1409C2A94
 * Callers:
 *     sub_1409C29AC @ 0x1409C29AC (sub_1409C29AC.c)
 *     sub_1409C4F84 @ 0x1409C4F84 (sub_1409C4F84.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall sub_1409C2A94(unsigned __int8 **a1)
{
  unsigned int v1; // eax
  unsigned __int64 v2; // rdx
  unsigned __int8 *v3; // r8
  __int64 v4; // r9
  __int64 v5; // r10
  char v6; // al
  unsigned __int64 v7; // rcx

  v1 = *((_DWORD *)a1 + 3);
  v2 = -1LL;
  if ( v1 )
  {
    v3 = *a1;
    v4 = v1;
    do
    {
      v5 = 8LL;
      v2 ^= *v3;
      do
      {
        v6 = v2;
        v7 = v2 >> 1;
        v2 = (v2 >> 1) ^ 0x9A6C9329AC4BC9B5uLL;
        if ( (v6 & 1) == 0 )
          v2 = v7;
        --v5;
      }
      while ( v5 );
      ++v3;
      --v4;
    }
    while ( v4 );
  }
  return ~v2;
}
