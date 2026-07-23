/*
 * XREFs of sub_140255844 @ 0x140255844
 * Callers:
 *     sub_1406DDAE0 @ 0x1406DDAE0 (sub_1406DDAE0.c)
 *     sub_1406DDB48 @ 0x1406DDB48 (sub_1406DDB48.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall sub_140255844(__int64 a1, unsigned int a2)
{
  __int64 *result; // rax

  result = *(__int64 **)(a1 + 24);
  while ( result )
  {
    if ( a2 > *((_DWORD *)result + 16) )
    {
      result = (__int64 *)result[1];
    }
    else
    {
      if ( a2 >= *((_DWORD *)result + 16) )
        return result;
      result = (__int64 *)*result;
    }
  }
  return 0LL;
}
