/*
 * XREFs of sub_1406C8984 @ 0x1406C8984
 * Callers:
 *     sub_1406C8888 @ 0x1406C8888 (sub_1406C8888.c)
 *     sub_1409AD180 @ 0x1409AD180 (sub_1409AD180.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1406C8984(__int64 a1, unsigned __int64 a2)
{
  __int64 result; // rax
  unsigned int v5; // edx
  __int64 v6; // rcx

  result = 0LL;
  if ( a1 )
  {
    v5 = 0;
    if ( a2 )
    {
      v6 = 0LL;
      do
      {
        ++v5;
        LOBYTE(result) = *(_BYTE *)(v6 + a1) + result;
        v6 = v5;
      }
      while ( v5 < a2 );
    }
    return result & 0x1F;
  }
  return result;
}
