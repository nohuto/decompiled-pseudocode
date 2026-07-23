/*
 * XREFs of Xp10ComputeCrc64 @ 0x18011DB58
 * Callers:
 *     Xp10ComputeAndWriteCrc @ 0x18011DA70 (Xp10ComputeAndWriteCrc.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall Xp10ComputeCrc64(unsigned __int8 **a1)
{
  unsigned __int64 v1; // rdx
  unsigned __int8 *v2; // r8
  __int64 v3; // r9
  __int64 v4; // r10
  char v5; // al
  unsigned __int64 v6; // rcx

  v1 = -1LL;
  if ( *((_DWORD *)a1 + 3) )
  {
    v2 = *a1;
    v3 = *((unsigned int *)a1 + 3);
    do
    {
      v4 = 8LL;
      v1 ^= *v2;
      do
      {
        v5 = v1;
        v6 = v1 >> 1;
        v1 = (v1 >> 1) ^ 0x9A6C9329AC4BC9B5uLL;
        if ( (v5 & 1) == 0 )
          v1 = v6;
        --v4;
      }
      while ( v4 );
      ++v2;
      --v3;
    }
    while ( v3 );
  }
  return ~v1;
}
